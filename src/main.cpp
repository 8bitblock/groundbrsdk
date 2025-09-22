#include <iostream>
#include <Windows.h>
#include <TlHelp32.h>
#include <vector>
#include <string>

// Include the SDK header
#include "SDK.h"

// Function to get the process ID for the game
DWORD get_process_id(const std::wstring& process_name) {
    DWORD process_id = 0;
    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (snapshot != INVALID_HANDLE_VALUE) {
        PROCESSENTRY32 process_entry;
        process_entry.dwSize = sizeof(process_entry);
        if (Process32First(snapshot, &process_entry)) {
            do {
                if (_wcsicmp(process_entry.szExeFile, process_name.c_str()) == 0) {
                    process_id = process_entry.th32ProcessID;
                    break;
                }
            } while (Process32Next(snapshot, &process_entry));
        }
        CloseHandle(snapshot);
    }
    return process_id;
}

// Function to get the base address of a module in a process
uintptr_t get_module_base_address(DWORD process_id, const std::wstring& module_name) {
    uintptr_t module_base_address = 0;
    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, process_id);
    if (snapshot != INVALID_HANDLE_VALUE) {
        MODULEENTRY32 module_entry;
        module_entry.dwSize = sizeof(module_entry);
        if (Module32First(snapshot, &module_entry)) {
            do {
                if (_wcsicmp(module_entry.szModule, module_name.c_str()) == 0) {
                    module_base_address = (uintptr_t)module_entry.modBaseAddr;
                    break;
                }
            } while (Module32Next(snapshot, &module_entry));
        }
        CloseHandle(snapshot);
    }
    return module_base_address;
}

// Template function to read memory from the game process
template<typename T>
T read_memory(HANDLE process_handle, uintptr_t address) {
    T buffer;
    ReadProcessMemory(process_handle, (LPCVOID)address, &buffer, sizeof(T), nullptr);
    return buffer;
}

int main() {
    // The process name for Ground Branch
    const std::wstring process_name = L"GroundBranch.exe";

    // Get the process ID
    DWORD process_id = get_process_id(process_name);
    if (process_id == 0) {
        std::cerr << "Could not find the game process." << std::endl;
        return 1;
    }

    // Get a handle to the process
    HANDLE process_handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, process_id);
    if (process_handle == NULL) {
        std::cerr << "Could not open a handle to the process." << std::endl;
        return 1;
    }

    // Get the base address of the game module
    uintptr_t module_base = get_module_base_address(process_id, process_name);
    if (module_base == 0) {
        std::cerr << "Could not get the module base address." << std::endl;
        CloseHandle(process_handle);
        return 1;
    }

    std::cout << "Successfully attached to the game process." << std::endl;
    std::cout << "Base address: 0x" << std::hex << module_base << std::endl;

    // Main cheat loop
    while (true) {
        // Read GWorld pointer
        uintptr_t gworld_ptr = read_memory<uintptr_t>(process_handle, module_base + 0x692A4A8);
        if (gworld_ptr == 0) {
            Sleep(1000);
            continue;
        }

        // Read PersistentLevel pointer
        uintptr_t persistent_level_ptr = read_memory<uintptr_t>(process_handle, gworld_ptr + 48);
        if (persistent_level_ptr == 0) {
            Sleep(1000);
            continue;
        }

        // Read ActorCluster pointer from ULevel
        uintptr_t actor_cluster_ptr = read_memory<uintptr_t>(process_handle, persistent_level_ptr + 216);
        if (actor_cluster_ptr == 0) {
            Sleep(1000);
            continue;
        }

        // Read TArray<AActor*> from ULevelActorContainer
        uintptr_t actors_array_ptr = read_memory<uintptr_t>(process_handle, actor_cluster_ptr + 0x18);
        int actors_count = read_memory<int>(process_handle, actor_cluster_ptr + 0x18 + sizeof(uintptr_t));

        if (actors_count > 500) actors_count = 500;

        for (int i = 0; i < actors_count; ++i) {
            uintptr_t actor_ptr = read_memory<uintptr_t>(process_handle, actors_array_ptr + i * sizeof(uintptr_t));
            if (actor_ptr == 0) {
                continue;
            }

            // To properly identify an actor, we would need to read its UObject->ClassPrivate,
            // then get the name of the class and compare. This is complex.
            // A simpler, but less reliable method is to check for a value that is likely to be present.
            // Let's assume any actor with health between 1 and 100 is a player.

            int health = read_memory<int>(process_handle, actor_ptr + 1428); // AGBCharacter->Health

            if (health > 0 && health <= 100) {
                uintptr_t root_component_ptr = read_memory<uintptr_t>(process_handle, actor_ptr + 304); // AActor->RootComponent
                if (root_component_ptr != 0) {
                    FVector location = read_memory<FVector>(process_handle, root_component_ptr + 284); // USceneComponent->RelativeLocation
                    std::cout << "Player found! Health: " << health
                              << ", Location: (" << location.X << ", " << location.Y << ", " << location.Z << ")"
                              << std::endl;
                }
            }
        }

        Sleep(1000);
    }

    // Clean up
    CloseHandle(process_handle);
    return 0;
}
