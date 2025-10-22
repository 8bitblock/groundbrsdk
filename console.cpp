#include <iostream>
#include <vector>
#include <Windows.h>
#include <TlHelp32.h>
#include <string>
#include <map>
#include <conio.h>
#include <chrono>
#include <functional>

// --- FORWARD DECLARATIONS ---
struct CheatState;

// --- TYPE DEFINITIONS ---
using CheatHandler = std::function<void(HANDLE, CheatState&, uintptr_t, uintptr_t, uintptr_t)>;

// --- DATA STRUCTURES ---
struct CheatState {
    std::string name;
    bool enabled = false;
    int key;
    uintptr_t address = 0; // Only for single-value cheats
    uintptr_t aux_address = 0; // For cheats needing a second address (e.g., stamina, ammo)
    std::vector<BYTE> original_values;

    CheatHandler on_enable;
    CheatHandler on_disable;
    CheatHandler on_update;
};


namespace Offsets {
    const uintptr_t ULocalPlayer_StaticOffset = 0x68FE4A8;
    const std::vector<uintptr_t> ULocalPlayer_TArray_Chain = { 0x180, 0x38 };
    const std::vector<uintptr_t> AGBCharacter_FromULocalPlayer_Chain = { 0x258, 0x198, 0x30, 0x5D0 };
    const std::vector<uintptr_t> MovementComponent_FromAGBCharacter_Chain = { 0x5C0, 0x148, 0x288 };

    const std::map<uintptr_t, float> SuperMovement_Offsets = {
        {0x150, 0.5f}, // gravityscale
        {0x154, 3.0f}, // max step height
        {0x158, 3.0f}, // maxstepheight
        {0x15C, 3.0f}, // jumpoffjumpzfactor
        {0x160, 1.0f}, // walkable floor angle
        {0x164, 1.0f}, // walkablefloorz
        {0x16c, 0.0f}, // ground friction
        {0x18C, 3.0f}, // maxwalkspeed
        {0x190, 3.0f}, // maxwalkspeedcrouched
        {0x1A0, 3.0f}, // maxaccelleration
        {0x1C4, 3.0f}, // aircontroll
        {0x1C8, 3.0f}, // aircontrollboostmultiplyer
        {0x208, 0.5f}, // mass
        {0xB00, 3.0f}, {0xB04, 3.0f}, {0xB08, 3.0f}, {0xB0C, 3.0f}, {0xB10, 3.0f}, {0xB14, 3.0f}, {0xB18, 3.0f}, {0xB1C, 3.0f},
        {0xB20, 3.0f}, {0xB24, 3.0f}, {0xB28, 3.0f}, {0xB2C, 3.0f}, {0xB30, 3.0f}, {0xB34, 3.0f}, {0xB38, 3.0f}, {0xB3C, 3.0f},
        {0xB40, 3.0f}, {0xB44, 3.0f}, {0xB48, 3.0f}, {0xB4C, 3.0f}, {0xB50, 3.0f}, {0xB54, 3.0f}, {0xB58, 3.0f}, {0xB5C, 3.0f},
        {0xB60, 3.0f}, {0xB64, 3.0f}, {0xB68, 3.0f}, {0xB6C, 3.0f}, {0xB70, 3.0f}, {0xB74, 3.0f}, {0xB78, 3.0f}, {0xB7C, 3.0f},
        {0xB80, 3.0f}, {0xB84, 3.0f}, {0xB88, 3.0f}, {0xB8C, 3.0f}, {0xB90, 3.0f}, {0xB94, 3.0f},
        {0xBA8, 3.0f}, {0xBAC, 3.0f}, {0xBB0, 3.0f}, {0xBB4, 3.0f}, {0xBB8, 3.0f}
    };

    const std::vector<uintptr_t> PlayerController_BaseChain = { 0x30, 0x5D0 };
    const std::vector<uintptr_t> inv = {0x30, 0x2A0, 0x130};
    const uintptr_t APawn_Offset = 0x2A0;

    const std::map<std::uintptr_t, float> Giant_Offsets = {
        {0x130, 5.0f},
        {0x138, 5.0f},
        {0x13C, 5.0f}
	};

    const std::map<std::string, std::vector<uintptr_t>> controller_chains = {
        {"health", {0x594}},
        {"stamina", {0x744}},
        {"max_stamina", {0x740}},
        {"rapid_fire", {0x618, 0x508, 0x4}}
    };

    const std::vector<uintptr_t> NoRecoil_BaseChain = { 0x30, 0x5D0, 0x618 };
    const std::vector<uintptr_t> NoRecoil_FinalOffsets = {
        0x484, 0x488, 0x48C, 0x490, 0x494, 0x498, 0x49C,
        0x4A0, 0x4A4, 0x4A8, 0x4AC, 0x4B0
    };

    const std::map<std::string, std::vector<uintptr_t>> pawn_chains = {
        {"ammo_count", {0x618, 0x598, 0x208, 0x460}},
        {"ammo_capacity", {0x618, 0x598, 0x208, 0x458}}
    };
}

// --- UTILITY FUNCTIONS ---

DWORD GetProcId(const wchar_t* procName) {
    DWORD procId = 0;
    HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hSnap != INVALID_HANDLE_VALUE) {
        PROCESSENTRY32 procEntry;
        procEntry.dwSize = sizeof(procEntry);
        if (Process32First(hSnap, &procEntry)) {
            do { if (!_wcsicmp(procEntry.szExeFile, procName)) { procId = procEntry.th32ProcessID; break; } } while (Process32Next(hSnap, &procEntry));
        }
    }
    CloseHandle(hSnap);
    return procId;
}

uintptr_t GetModuleBaseAddress(DWORD procId, const wchar_t* modName) {
    uintptr_t modBaseAddr = 0;
    HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, procId);
    if (hSnap != INVALID_HANDLE_VALUE) {
        MODULEENTRY32 modEntry;
        modEntry.dwSize = sizeof(modEntry);
        if (Module32First(hSnap, &modEntry)) {
            do { if (!_wcsicmp(modEntry.szModule, modName)) { modBaseAddr = (uintptr_t)modEntry.modBaseAddr; break; } } while (Module32Next(hSnap, &modEntry));
        }
    }
    CloseHandle(hSnap);
    return modBaseAddr;
}

uintptr_t ResolvePointer(HANDLE hProc, uintptr_t baseAddress, const std::vector<uintptr_t>& offsets) {
    uintptr_t addr = baseAddress;
    for (size_t i = 0; i < offsets.size(); ++i) {
        if (!ReadProcessMemory(hProc, (LPCVOID)(addr + offsets[i]), &addr, sizeof(uintptr_t), nullptr) || addr == 0) return 0;
    }
    return addr;
}

uintptr_t ResolvePointerChain(HANDLE hProc, uintptr_t baseAddress, const std::vector<uintptr_t>& offsets) {
    uintptr_t addr = baseAddress;
    for (size_t i = 0; i < offsets.size() - 1; ++i) {
        if (!ReadProcessMemory(hProc, (LPCVOID)(addr + offsets[i]), &addr, sizeof(uintptr_t), nullptr) || addr == 0) return 0;
    }
    return addr + offsets.back();
}

void ApplyCheatValue(HANDLE hProc, uintptr_t address, const void* cheat_value, size_t value_size) {
    if (address != 0) WriteProcessMemory(hProc, (LPVOID)address, cheat_value, value_size, nullptr);
}

// --- CHEAT HANDLERS ---

void EnableSingleValueFloat(HANDLE hProc, CheatState& cheat, uintptr_t, uintptr_t, uintptr_t) {
    if (cheat.address != 0 && cheat.original_values.empty()) {
        cheat.original_values.resize(sizeof(float));
        ReadProcessMemory(hProc, (LPCVOID)cheat.address, cheat.original_values.data(), sizeof(float), nullptr);
    }
}
void EnableSingleValueInt(HANDLE hProc, CheatState& cheat, uintptr_t, uintptr_t, uintptr_t) {
    if (cheat.address != 0 && cheat.original_values.empty()) {
        cheat.original_values.resize(sizeof(int));
        ReadProcessMemory(hProc, (LPCVOID)cheat.address, cheat.original_values.data(), sizeof(int), nullptr);
    }
}

void DisableSingleValue(HANDLE hProc, CheatState& cheat, uintptr_t, uintptr_t, uintptr_t) {
    if (cheat.address != 0 && !cheat.original_values.empty()) {
        WriteProcessMemory(hProc, (LPVOID)cheat.address, cheat.original_values.data(), cheat.original_values.size(), nullptr);
    }
}

void UpdateHealth(HANDLE hProc, CheatState& cheat, uintptr_t, uintptr_t, uintptr_t) { int val = 1337; ApplyCheatValue(hProc, cheat.address, &val, sizeof(val)); }
void UpdateStamina(HANDLE hProc, CheatState& cheat, uintptr_t, uintptr_t, uintptr_t) { float val = 1000.0f; ApplyCheatValue(hProc, cheat.address, &val, sizeof(val)); ApplyCheatValue(hProc, cheat.aux_address, &val, sizeof(val)); }
void UpdateRapidFire(HANDLE hProc, CheatState& cheat, uintptr_t, uintptr_t, uintptr_t) { float val = 0.001f; ApplyCheatValue(hProc, cheat.address, &val, sizeof(val)); }
void UpdateAmmo(HANDLE hProc, CheatState& cheat, uintptr_t, uintptr_t, uintptr_t) { int val = 1000; ApplyCheatValue(hProc, cheat.address, &val, sizeof(val)); ApplyCheatValue(hProc, cheat.aux_address, &val, sizeof(val)); }

void EnableSuperMovement(HANDLE hProc, CheatState& cheat, uintptr_t, uintptr_t, uintptr_t movementComponentBase) {
    cheat.original_values.clear();
    for (const auto& pair : Offsets::SuperMovement_Offsets) {
        uintptr_t address = movementComponentBase + pair.first;
        float original_value;
        ReadProcessMemory(hProc, (LPCVOID)address, &original_value, sizeof(original_value), nullptr);
        cheat.original_values.insert(cheat.original_values.end(), (BYTE*)&original_value, (BYTE*)&original_value + sizeof(original_value));
    }
}
void DisableSuperMovement(HANDLE hProc, CheatState& cheat, uintptr_t, uintptr_t, uintptr_t movementComponentBase) {
    size_t i = 0;
    for (const auto& pair : Offsets::SuperMovement_Offsets) {
        uintptr_t address = movementComponentBase + pair.first;
        float original_value;
        memcpy(&original_value, cheat.original_values.data() + i, sizeof(original_value));
        ApplyCheatValue(hProc, address, &original_value, sizeof(original_value));
        i += sizeof(original_value);
    }
    cheat.original_values.clear();
}
void UpdateSuperMovement(HANDLE hProc, CheatState& cheat, uintptr_t, uintptr_t, uintptr_t movementComponentBase) {
    size_t i = 0;
    for (const auto& pair : Offsets::SuperMovement_Offsets) {
        uintptr_t address = movementComponentBase + pair.first;
        float original_value;
        memcpy(&original_value, (void*)(cheat.original_values.data() + i), sizeof(float));
        float new_value = original_value * pair.second;
        ApplyCheatValue(hProc, address, &new_value, sizeof(new_value));
        i += sizeof(float);
    }
}


void EnableNoRecoil(HANDLE hProc, CheatState& cheat, uintptr_t initial_ptr, uintptr_t, uintptr_t) {
    cheat.original_values.clear();
    uintptr_t recoilBase = ResolvePointer(hProc, initial_ptr, Offsets::NoRecoil_BaseChain);
    if (!recoilBase) return;
    for (const auto& offset : Offsets::NoRecoil_FinalOffsets) {
        uintptr_t address = recoilBase + offset;
        float original_value;
        ReadProcessMemory(hProc, (LPCVOID)address, &original_value, sizeof(original_value), nullptr);
        cheat.original_values.insert(cheat.original_values.end(), (BYTE*)&original_value, (BYTE*)&original_value + sizeof(original_value));
    }
}
void DisableNoRecoil(HANDLE hProc, CheatState& cheat, uintptr_t initial_ptr, uintptr_t, uintptr_t) {
    size_t i = 0;
    uintptr_t recoilBase = ResolvePointer(hProc, initial_ptr, Offsets::NoRecoil_BaseChain);
    if (!recoilBase) return;
    for (const auto& offset : Offsets::NoRecoil_FinalOffsets) {
        uintptr_t address = recoilBase + offset;
        float original_value;
        memcpy(&original_value, cheat.original_values.data() + i, sizeof(original_value));
        ApplyCheatValue(hProc, address, &original_value, sizeof(original_value));
        i += sizeof(original_value);
    }
    cheat.original_values.clear();
}
void UpdateNoRecoil(HANDLE hProc, CheatState&, uintptr_t initial_ptr, uintptr_t, uintptr_t) {
    uintptr_t recoilBase = ResolvePointer(hProc, initial_ptr, Offsets::NoRecoil_BaseChain);
    if (!recoilBase) return;
    for (const auto& offset : Offsets::NoRecoil_FinalOffsets) {
        uintptr_t address = recoilBase + offset;
        float val = 0.0f;
        ApplyCheatValue(hProc, address, &val, sizeof(val));
    }
}

// --- POINTER ACQUISITION ---

bool AcquireBasePointers(HANDLE hProc, uintptr_t moduleBase, uintptr_t& initial_ptr, uintptr_t& playerControllerBase, uintptr_t& pawnBase, uintptr_t& movementComponentBase) {
    const uintptr_t staticPointerOffset = 0x6CC8390;

    initial_ptr = 0; playerControllerBase = 0; pawnBase = 0; movementComponentBase = 0;

    ReadProcessMemory(hProc, (LPCVOID)(moduleBase + staticPointerOffset), &initial_ptr, sizeof(initial_ptr), nullptr);
    if (!initial_ptr) return false;

    uintptr_t controllerPtrAddr = ResolvePointerChain(hProc, initial_ptr, Offsets::PlayerController_BaseChain);
    if (controllerPtrAddr) ReadProcessMemory(hProc, (LPCVOID)controllerPtrAddr, &playerControllerBase, sizeof(playerControllerBase), nullptr);

    uintptr_t pawnPtrAddr = initial_ptr + Offsets::APawn_Offset;
    ReadProcessMemory(hProc, (LPCVOID)pawnPtrAddr, &pawnBase, sizeof(pawnBase), nullptr);

    uintptr_t uLocalPlayerPtr = 0;
    ReadProcessMemory(hProc, (LPCVOID)(moduleBase + Offsets::ULocalPlayer_StaticOffset), &uLocalPlayerPtr, sizeof(uLocalPlayerPtr), nullptr);
    if (uLocalPlayerPtr) {
        uintptr_t tArrayDataPtr = ResolvePointer(hProc, uLocalPlayerPtr, Offsets::ULocalPlayer_TArray_Chain);
        if (tArrayDataPtr) {
            uintptr_t firstElementPtr = 0;
            ReadProcessMemory(hProc, (LPCVOID)tArrayDataPtr, &firstElementPtr, sizeof(firstElementPtr), nullptr);
            if (firstElementPtr) {
                uintptr_t agbCharacterPtr = ResolvePointer(hProc, firstElementPtr, Offsets::AGBCharacter_FromULocalPlayer_Chain);
                if (agbCharacterPtr) {
                    movementComponentBase = ResolvePointer(hProc, agbCharacterPtr, Offsets::MovementComponent_FromAGBCharacter_Chain);
                }
            }
        }
    }
    return playerControllerBase && pawnBase && movementComponentBase && initial_ptr;
}

void ReinitializeCheatAddresses(HANDLE hProc, std::map<std::string, CheatState>& cheats, uintptr_t playerControllerBase, uintptr_t pawnBase) {
    cheats["health"].address = ResolvePointerChain(hProc, playerControllerBase, Offsets::controller_chains.at("health"));
    cheats["stamina"].address = ResolvePointerChain(hProc, playerControllerBase, Offsets::controller_chains.at("stamina"));
    cheats["stamina"].aux_address = ResolvePointerChain(hProc, playerControllerBase, Offsets::controller_chains.at("max_stamina"));
    cheats["rapid_fire"].address = ResolvePointerChain(hProc, playerControllerBase, Offsets::controller_chains.at("rapid_fire"));
    cheats["ammo"].address = ResolvePointerChain(hProc, playerControllerBase, Offsets::pawn_chains.at("ammo_count"));
    cheats["ammo"].aux_address = ResolvePointerChain(hProc, playerControllerBase, Offsets::pawn_chains.at("ammo_capacity"));
}


// --- MAIN LOGIC ---

void PrintMenu(const std::map<std::string, CheatState>& cheats) {
    system("cls");
    std::cout << "--- Ground Branch Cheat ---" << std::endl;
    for (const auto& pair : cheats) {
        const auto& cheat = pair.second;
        std::cout << "[" << cheat.key << "] " << cheat.name << ": " << (cheat.enabled ? "ON" : "OFF");
        if (cheat.address != 0) {
            std::cout << " (0x" << std::hex << cheat.address << ")";
        }
        std::cout << std::endl;
    }
    std::cout << "\n[R] to Re-scan Pointers" << std::endl;
    std::cout << "[Q] to Quit (restores all values)" << std::endl;
}

int main() {
    const wchar_t* processName = L"GroundBranch-Win64-Shipping.exe";

    std::map<std::string, CheatState> cheats = {
        {"health", {"Infinite Health", false, 1, 0, 0, {}, EnableSingleValueInt, DisableSingleValue, UpdateHealth}},
        {"stamina", {"Infinite Stamina", false, 2, 0, 0, {}, EnableSingleValueFloat, DisableSingleValue, UpdateStamina}},
        {"ammo", {"Infinite Ammo", false, 3, 0, 0, {}, EnableSingleValueInt, DisableSingleValue, UpdateAmmo}},
        {"rapid_fire", {"Rapid Fire", false, 4, 0, 0, {}, EnableSingleValueFloat, DisableSingleValue, UpdateRapidFire}},
        {"super_movement", {"Super Movement", false, 5, 0, 0, {}, EnableSuperMovement, DisableSuperMovement, UpdateSuperMovement}},
        {"no_recoil", {"No Recoil", false, 6, 0, 0, {}, EnableNoRecoil, DisableNoRecoil, UpdateNoRecoil}},
    };

    DWORD procId = GetProcId(processName);
    if (procId == 0) { std::wcerr << L"Process not found." << std::endl; system("pause"); return 1; }
    HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procId);
    if (hProcess == NULL) { std::cerr << "Failed to open process." << std::endl; system("pause"); return 1; }
    uintptr_t moduleBase = GetModuleBaseAddress(procId, processName);

    uintptr_t initial_ptr = 0, playerControllerBase = 0, pawnBase = 0, movementComponentBase = 0;
    bool game_is_active = false;

    PrintMenu(cheats);

    while (true) {
        if (_kbhit()) {
            char key = _getch();
            if (key == 'q' || key == 'Q') break;
            if (key == 'r' || key == 'R') {
                game_is_active = false; // Force re-acquisition
                std::cout << "\nManual re-scan triggered. Waiting for game..." << std::endl;
            }
            for (auto& pair : cheats) {
                if (key == ('0' + pair.second.key)) {
                    pair.second.enabled = !pair.second.enabled;
                    if (game_is_active) {
                        if (pair.second.enabled) {
                            if (pair.second.on_enable) pair.second.on_enable(hProcess, pair.second, initial_ptr, playerControllerBase, movementComponentBase);
                        }
                        else {
                            if (pair.second.on_disable) pair.second.on_disable(hProcess, pair.second, initial_ptr, playerControllerBase, movementComponentBase);
                        }
                    }
                }
            }
            PrintMenu(cheats);
        }

        if (game_is_active) {
            int current_health = 0;
            if (!ReadProcessMemory(hProcess, (LPCVOID)cheats["health"].address, &current_health, sizeof(current_health), nullptr) || current_health < 1) {
                game_is_active = false;
                std::cout << "\nPlayer died or returned to menu. Pausing cheats..." << std::endl;
            }
            else {
                for (auto& pair : cheats) {
                    if (pair.second.enabled && pair.second.on_update) {
                        pair.second.on_update(hProcess, pair.second, initial_ptr, playerControllerBase, movementComponentBase);
                    }
                }
            }
        }
        else {
            if (AcquireBasePointers(hProcess, moduleBase, initial_ptr, playerControllerBase, pawnBase, movementComponentBase)) {
                game_is_active = true;
                std::cout << "\nLevel loaded. Initializing cheats..." << std::endl;
                ReinitializeCheatAddresses(hProcess, cheats, playerControllerBase, pawnBase);
                for (auto& pair : cheats) {
                    if (pair.second.enabled && pair.second.on_enable) {
                        pair.second.on_enable(hProcess, pair.second, initial_ptr, playerControllerBase, movementComponentBase);
                    }
                }
                PrintMenu(cheats);
            }
        }

        Sleep(game_is_active ? 0 : 1000);
    }

    std::cout << "\nRestoring original values..." << std::endl;
    if (game_is_active) {
        for (auto& pair : cheats) {
            if (pair.second.enabled && pair.second.on_disable) {
                pair.second.on_disable(hProcess, pair.second, initial_ptr, playerControllerBase, movementComponentBase);
            }
        }
    }
    CloseHandle(hProcess);
    return 0;
}
