#define _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING

#include <iostream>
#include <Windows.h>
#include <TlHelp32.h>
#include <tchar.h>
#include <vector>
#include <string>
#include <algorithm>
#include <locale>
#include <codecvt>
#include <psapi.h>

#include "SDK.h"
#include "overlay.h"
#include "structs.h"

// Globals
HANDLE g_process_handle = NULL;
uintptr_t g_module_base = 0;
uintptr_t g_gnames_addr = 0;

// Offsets
const uintptr_t OFFSET_GNAMES = 0x6B898C0; // 112580800
const uintptr_t OFFSET_GWORLD = 0x69244A8;
const uintptr_t OFFSET_PERSISTENT_LEVEL = 0x30;
const uintptr_t OFFSET_ACTOR_CLUSTER = 0xD8;
const uintptr_t OFFSET_ACTORS = 0x28;
const uintptr_t OFFSET_NAME_PRIVATE = 0x18;
const uintptr_t OFFSET_CLASS_PRIVATE = 0x10;
const uintptr_t OFFSET_PLAYER_CONTROLLER = 0x30;
const uintptr_t OFFSET_PLAYER_CAMERA_MANAGER = 0x2B8;
const uintptr_t OFFSET_CAMERA_CACHE = 0x290;
const uintptr_t OFFSET_ROOT_COMPONENT = 0x130;
const uintptr_t OFFSET_RELATIVE_LOCATION = 0x11C;
const uintptr_t OFFSET_LOCALPLAYER = 0x6CC8390;


// Memory reading functions
template<typename T>
T read_memory(uintptr_t address) {
    T buffer;
    if (g_process_handle && address != 0 && ReadProcessMemory(g_process_handle, (LPCVOID)address, &buffer, sizeof(T), NULL)) {
        return buffer;
    }
    return T{};
}

// FName to string conversion
std::string get_fname_string(uintptr_t fname_ptr) {
    if (fname_ptr == 0) return "None";

    int name_index = read_memory<int>(fname_ptr);

    uintptr_t name_entry_ptr_addr = g_gnames_addr + (name_index / 0x4000) * 8;
    uintptr_t name_entry_ptr = read_memory<uintptr_t>(name_entry_ptr_addr);
    uintptr_t name_entry_addr = name_entry_ptr + (name_index % 0x4000) * 0x10;

    char buffer[1024];
    ReadProcessMemory(g_process_handle, (LPCVOID)(name_entry_addr + 0x10), buffer, sizeof(buffer), NULL);
    return std::string(buffer);
}

FVector2D WorldToScreen(FVector world_location, FCameraCacheEntry camera_cache, int screen_width, int screen_height)
{
    FMatrix camera_matrix = camera_cache.POV.Rotation.ToMatrix();
    FVector camera_location = camera_cache.POV.Location;

    FVector v_axis_x, v_axis_y, v_axis_z;

    v_axis_x = FVector(camera_matrix.M[0][0], camera_matrix.M[0][1], camera_matrix.M[0][2]);
    v_axis_y = FVector(camera_matrix.M[1][0], camera_matrix.M[1][1], camera_matrix.M[1][2]);
    v_axis_z = FVector(camera_matrix.M[2][0], camera_matrix.M[2][1], camera_matrix.M[2][2]);

    FVector v_delta = world_location - camera_location;
    FVector v_transformed = FVector(v_delta.Dot(v_axis_y), v_delta.Dot(v_axis_z), v_delta.Dot(v_axis_x));

    if (v_transformed.Z < 1.f)
        v_transformed.Z = 1.f;

    float fov_angle = camera_cache.POV.FOV;
    float screen_center_x = screen_width / 2.f;
    float screen_center_y = screen_height / 2.f;

    FVector2D screen_location;
    screen_location.X = screen_center_x + v_transformed.X * (screen_center_x / tanf(fov_angle * (float)M_PI / 360.f)) / v_transformed.Z;
    screen_location.Y = screen_center_y - v_transformed.Y * (screen_center_y / tanf(fov_angle * (float)M_PI / 360.f)) / v_transformed.Z;

    return screen_location;
}

// Process functions
DWORD get_process_id(const TCHAR* process_name) {
    DWORD process_id = 0;
    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (snapshot != INVALID_HANDLE_VALUE) {
        PROCESSENTRY32 process_entry;
        process_entry.dwSize = sizeof(process_entry);
        if (Process32First(snapshot, &process_entry)) {
            do {
                if (_tcsicmp(process_entry.szExeFile, process_name) == 0) {
                    process_id = process_entry.th32ProcessID;
                    break;
                }
            } while (Process32Next(snapshot, &process_entry));
        }
        CloseHandle(snapshot);
    }
    return process_id;
}

uintptr_t get_module_base_address(DWORD process_id, const TCHAR* module_name) {
    uintptr_t module_base_address = 0;
    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, process_id);
    if (snapshot != INVALID_HANDLE_VALUE) {
        MODULEENTRY32 module_entry;
        module_entry.dwSize = sizeof(module_entry);
        if (Module32First(snapshot, &module_entry)) {
            do {
                if (_tcsicmp(module_entry.szModule, module_name) == 0) {
                    module_base_address = (uintptr_t)module_entry.modBaseAddr;
                    break;
                }
            } while (Module32Next(snapshot, &module_entry));
        }
        CloseHandle(snapshot);
    }
    return module_base_address;
}

int main() {
    const TCHAR* process_name = _T("GroundBranch-Win64-Shipping.exe");
    DWORD process_id = 0;

    _tprintf(_T("Searching for process: %s...\n"), process_name);
    while (process_id == 0) {
        process_id = get_process_id(process_name);
        Sleep(1000);
    }
    _tprintf(_T("Process found! PID: %d\n"), process_id);

    g_process_handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, process_id);
    if (g_process_handle == NULL) {
        _ftprintf(stderr, _T("Failed to open process. Error: %d\n"), GetLastError());
        return 1;
    }

    g_module_base = get_module_base_address(process_id, process_name);
    if (g_module_base == 0) {
        _ftprintf(stderr, _T("[FATAL] Failed to get module base address. The program cannot continue.\n"));
        system("pause");
        CloseHandle(g_process_handle);
        return 1;
    }

    g_gnames_addr = read_memory<uintptr_t>(g_module_base + OFFSET_GNAMES);

    CreateOverlay(_T("ESP Overlay"), _T("GroundBranch-Win64-Shipping"));

    // --- Main Cheat Loop ---
    std::cout << "Starting main cheat loop. Reading game data..." << std::endl;
    HWND last_foreground_window = NULL;
    while (true) {
        if (GetForegroundWindow() != last_foreground_window)
        {
            UpdateOverlayPosition();
            last_foreground_window = GetForegroundWindow();
        }
        StartRender();

        uintptr_t gworld_ptr_addr = g_module_base + OFFSET_GWORLD;
        uintptr_t gworld_addr = read_memory<uintptr_t>(gworld_ptr_addr);
        if (gworld_addr == 0) {
            std::cout << "Could not find GWorld. Retrying..." << std::endl;
            Sleep(1000);
            continue;
        }

        uintptr_t persistent_level_addr = read_memory<uintptr_t>(gworld_addr + OFFSET_PERSISTENT_LEVEL);
        if (persistent_level_addr == 0) {
            std::cout << "Could not find PersistentLevel. Retrying..." << std::endl;
            Sleep(1000);
            continue;
        }

        uintptr_t actor_cluster_addr = read_memory<uintptr_t>(persistent_level_addr + OFFSET_ACTOR_CLUSTER);
        if (actor_cluster_addr == 0) {
            std::cout << "Could not find ActorCluster. Retrying..." << std::endl;
            Sleep(1000);
            continue;
        }

        TArray<uintptr_t> actors = read_memory<TArray<uintptr_t>>(actor_cluster_addr + OFFSET_ACTORS);
        if (actors.Data == nullptr || actors.Count == 0) {
            std::cout << "Could not find actors. Retrying..." << std::endl;
            Sleep(1000);
            continue;
        }

        uintptr_t local_player_controller_addr = read_memory<uintptr_t>(read_memory<uintptr_t>(g_module_base + OFFSET_LOCALPLAYER) + OFFSET_PLAYER_CONTROLLER);
        uintptr_t player_camera_manager_addr = read_memory<uintptr_t>(local_player_controller_addr + OFFSET_PLAYER_CAMERA_MANAGER);
        FCameraCacheEntry camera_cache = read_memory<FCameraCacheEntry>(player_camera_manager_addr + OFFSET_CAMERA_CACHE);

        uintptr_t* actor_data = actors.Data;
        for (int i = 0; i < actors.Count; ++i) {
            uintptr_t actor_addr = read_memory<uintptr_t>((uintptr_t)actor_data + i * sizeof(uintptr_t));
            if (actor_addr != 0) {
                uintptr_t class_private_addr = read_memory<uintptr_t>(actor_addr + OFFSET_CLASS_PRIVATE);
                uintptr_t name_private_addr = class_private_addr + OFFSET_NAME_PRIVATE;
                std::string class_name = get_fname_string(name_private_addr);

                if (class_name == "GBCharacter") {
                    uintptr_t root_component_addr = read_memory<uintptr_t>(actor_addr + OFFSET_ROOT_COMPONENT);
                    FVector location = read_memory<FVector>(root_component_addr + OFFSET_RELATIVE_LOCATION);
                    FVector2D screen_location = WorldToScreen(location, camera_cache, g_screen_width, g_screen_height);

                    DrawText(screen_location.X, screen_location.Y, class_name, RGB(255, 255, 255));
                }
            }
        }

        EndRender();
        Sleep(1);
    }

    CloseHandle(g_process_handle);
    return 0;
}