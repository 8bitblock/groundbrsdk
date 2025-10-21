#include <iostream>
#include <vector>
#include <Windows.h>
#include <TlHelp32.h>
#include <string>
#include <map>
#include <conio.h>
#include <chrono>

// --- DATA STRUCTURES AND OFFSETS ---

struct CheatState {
    std::string name;
    bool enabled = false;
    int key;
    uintptr_t address = 0;
    std::vector<BYTE> original_value;
};

namespace Offsets {
    const uintptr_t ULocalPlayer_StaticOffset = 0x68FE4A8;
    const std::vector<uintptr_t> ULocalPlayer_TArray_Chain = { 0x180, 0x38 };
    const std::vector<uintptr_t> AGBCharacter_FromULocalPlayer_Chain = { 0x258, 0x198, 0x30, 0x5D0 };
    const std::vector<uintptr_t> MovementComponent_FromAGBCharacter_Chain = { 0x5C0, 0x148, 0x288 };

    const std::vector<uintptr_t> SuperMovement_Offsets = {
        0xB00, 0xB04, 0xB08, 0xB0C, 0xB10, 0xB14, 0xB18, 0xB1C, 0xB20, 0xB24, 0xB28, 0xB2C, 0xB30, 0xB34, 0xB38, 0xB3C,
        0xB40, 0xB44, 0xB48, 0xB4C, 0xB50, 0xB54, 0xB58, 0xB5C, 0xB60, 0xB64, 0xB68, 0xB6C, 0xB70, 0xB74, 0xB78, 0xB7C,
        0xB80, 0xB84, 0xB88, 0xB8C, 0xB90, 0xB94, 0xBA8, 0xBAC, 0xBB0, 0xBB4, 0xBB8
    };

    const std::vector<uintptr_t> PlayerController_BaseChain = { 0x30, 0x5D0 };
    const uintptr_t APawn_Offset = 0x2A0;

    const std::map<std::string, std::vector<uintptr_t>> controller_chains = {
        {"health", {0x594}},
        {"stamina", {0x744}},
        {"max_stamina", {0x740}},
        {"rapid_fire", {0x618, 0x508, 0x4}}
    };

    // NOTE: This chain is known to be incorrect from our debug logs.
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

// --- CHEAT MANAGEMENT FUNCTIONS ---

void StoreOriginalValue(HANDLE hProc, CheatState& cheat, size_t value_size) {
    if (cheat.address != 0 && cheat.original_value.empty()) {
        cheat.original_value.resize(value_size);
        ReadProcessMemory(hProc, (LPCVOID)cheat.address, cheat.original_value.data(), value_size, nullptr);
    }
}

void RestoreOriginalValue(HANDLE hProc, const CheatState& cheat) {
    if (cheat.address != 0 && !cheat.original_value.empty()) {
        WriteProcessMemory(hProc, (LPVOID)cheat.address, cheat.original_value.data(), cheat.original_value.size(), nullptr);
    }
}

void ApplyCheatValue(HANDLE hProc, uintptr_t address, const void* cheat_value, size_t value_size) {
    if (address != 0) WriteProcessMemory(hProc, (LPVOID)address, cheat_value, value_size, nullptr);
}

void PrintMenu(const std::map<std::string, CheatState>& cheats) {
    system("cls");
    std::cout << "--- Ground Branch Definitive Cheat ---" << std::endl;
    for (const auto& pair : cheats) {
        const auto& cheat = pair.second;
        std::cout << "[" << cheat.key << "] " << cheat.name << ": " << (cheat.enabled ? "ON" : "OFF") << " (0x" << std::hex << cheat.address << ")" << std::endl;
    }
    std::cout << "\n[Q] to Quit (restores all values)" << std::endl;
}

// --- MAIN LOGIC ---

int main() {
    const wchar_t* processName = L"GroundBranch-Win64-Shipping.exe";
    const uintptr_t staticPointerOffset = 0x6CC8390;

    std::map<std::string, CheatState> cheats = {
        {"health", {"Infinite Health", false, 1}},
        {"stamina", {"Infinite Stamina", false, 2}},
        {"ammo", {"Infinite Ammo (BROKEN)", false, 3}},
        {"rapid_fire", {"Rapid Fire", false, 4}},
        {"super_movement", {"Super Movement", false, 5}}
    };

    DWORD procId = GetProcId(processName);
    if (procId == 0) { std::wcerr << L"Process not found." << std::endl; system("pause"); return 1; }
    HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procId);
    if (hProcess == NULL) { std::cerr << "Failed to open process." << std::endl; system("pause"); return 1; }
    uintptr_t moduleBase = GetModuleBaseAddress(procId, processName);

    uintptr_t initial_ptr = 0;
    uintptr_t playerControllerBase = 0;
    uintptr_t pawnBase = 0;
    uintptr_t movementComponentBase = 0;

    std::cout << "Waiting for game..." << std::endl;
    while (playerControllerBase == 0 || pawnBase == 0 || movementComponentBase == 0) {
        ReadProcessMemory(hProcess, (LPCVOID)(moduleBase + staticPointerOffset), &initial_ptr, sizeof(initial_ptr), nullptr);
        if (initial_ptr) {
            uintptr_t controllerPtrAddr = ResolvePointerChain(hProcess, initial_ptr, Offsets::PlayerController_BaseChain);
            if (controllerPtrAddr) ReadProcessMemory(hProcess, (LPCVOID)controllerPtrAddr, &playerControllerBase, sizeof(playerControllerBase), nullptr);

            uintptr_t pawnPtrAddr = initial_ptr + Offsets::APawn_Offset;
            ReadProcessMemory(hProcess, (LPCVOID)pawnPtrAddr, &pawnBase, sizeof(pawnBase), nullptr);

            uintptr_t uLocalPlayerPtr = 0;
            ReadProcessMemory(hProcess, (LPCVOID)(moduleBase + Offsets::ULocalPlayer_StaticOffset), &uLocalPlayerPtr, sizeof(uLocalPlayerPtr), nullptr);
            if (uLocalPlayerPtr) {
                uintptr_t tArrayDataPtr = ResolvePointer(hProcess, uLocalPlayerPtr, Offsets::ULocalPlayer_TArray_Chain);
                if (tArrayDataPtr) {
                    uintptr_t firstElementPtr = 0;
                    ReadProcessMemory(hProcess, (LPCVOID)tArrayDataPtr, &firstElementPtr, sizeof(firstElementPtr), nullptr);
                    if (firstElementPtr) {
                        uintptr_t agbCharacterPtr = ResolvePointer(hProcess, firstElementPtr, Offsets::AGBCharacter_FromULocalPlayer_Chain);
                        if (agbCharacterPtr) {
                            movementComponentBase = ResolvePointer(hProcess, agbCharacterPtr, Offsets::MovementComponent_FromAGBCharacter_Chain);
                        }
                    }
                }
            }
        }
        Sleep(1000);
    }

    cheats["health"].address = ResolvePointerChain(hProcess, playerControllerBase, Offsets::controller_chains.at("health"));
    cheats["stamina"].address = ResolvePointerChain(hProcess, playerControllerBase, Offsets::controller_chains.at("stamina"));
    uintptr_t max_stamina_addr = ResolvePointerChain(hProcess, playerControllerBase, Offsets::controller_chains.at("max_stamina"));
    cheats["rapid_fire"].address = ResolvePointerChain(hProcess, playerControllerBase, Offsets::controller_chains.at("rapid_fire"));
    cheats["ammo"].address = ResolvePointerChain(hProcess, playerControllerBase, Offsets::pawn_chains.at("ammo_count"));
    uintptr_t ammo_cap_addr = ResolvePointerChain(hProcess, playerControllerBase, Offsets::pawn_chains.at("ammo_capacity"));

    std::cout << "Ready! Launching cheat UI..." << std::endl;
    Sleep(500);
    PrintMenu(cheats);

    auto last_ammo_check = std::chrono::steady_clock::now();
    while (true) {
        if (_kbhit()) {
            char key = _getch();
            if (key == 'q' || key == 'Q') break;
            for (auto& pair : cheats) {
                if (key == ('0' + pair.second.key)) {
                    pair.second.enabled = !pair.second.enabled;
                    if (pair.first == "super_movement") {
                        if (pair.second.enabled) {
                            pair.second.original_value.clear();
                            for (const auto& offset : Offsets::SuperMovement_Offsets) {
                                uintptr_t address = movementComponentBase + offset;
                                float original_value;
                                ReadProcessMemory(hProcess, (LPCVOID)address, &original_value, sizeof(original_value), nullptr);
                                CheatState& cheat_state = pair.second;
                                cheat_state.original_value.insert(cheat_state.original_value.end(), (BYTE*)&original_value, (BYTE*)&original_value + sizeof(original_value));
                                float new_value = original_value * 5.0f;
                                ApplyCheatValue(hProcess, address, &new_value, sizeof(new_value));
                            }
                        }
                        else {
                            size_t i = 0;
                            for (const auto& offset : Offsets::SuperMovement_Offsets) {
                                uintptr_t address = movementComponentBase + offset;
                                float original_value;
                                memcpy(&original_value, pair.second.original_value.data() + i, sizeof(original_value));
                                ApplyCheatValue(hProcess, address, &original_value, sizeof(original_value));
                                i += sizeof(original_value);
                            }
                            pair.second.original_value.clear();
                        }
                    }
                    else {
                        if (pair.second.enabled) StoreOriginalValue(hProcess, pair.second, sizeof(float));
                        else RestoreOriginalValue(hProcess, pair.second);
                    }
                }
            }
            PrintMenu(cheats);
        }

        if (cheats.at("health").enabled) { int val = 10000; ApplyCheatValue(hProcess, cheats.at("health").address, &val, sizeof(val)); }
        if (cheats.at("stamina").enabled && max_stamina_addr) {
            float val = 1000.0f;
            ApplyCheatValue(hProcess, cheats.at("stamina").address, &val, sizeof(val));
            ApplyCheatValue(hProcess, max_stamina_addr, &val, sizeof(val));
        }
        if (cheats.at("ammo").enabled && ammo_cap_addr) {

            int val = 1000;
            ApplyCheatValue(hProcess, cheats.at("ammo").address, &val, sizeof(val));
            ApplyCheatValue(hProcess, ammo_cap_addr, &val, sizeof(val));


        }
        if (cheats.at("rapid_fire").enabled) { float val = 0.0001f; ApplyCheatValue(hProcess, cheats.at("rapid_fire").address, &val, sizeof(val)); }
        Sleep(100);
    }

    std::cout << "\nRestoring original values..." << std::endl;
    if (cheats.at("super_movement").enabled) {
        size_t i = 0;
        for (const auto& offset : Offsets::SuperMovement_Offsets) {
            uintptr_t address = movementComponentBase + offset;
            float original_value;
            memcpy(&original_value, cheats.at("super_movement").original_value.data() + i, sizeof(original_value));
            ApplyCheatValue(hProcess, address, &original_value, sizeof(original_value));
            i += sizeof(original_value);
        }
    }
    for (const auto& pair : cheats) {
        if (pair.first != "super_movement") {
            RestoreOriginalValue(hProcess, pair.second);
        }
    }
    CloseHandle(hProcess);
    return 0;
}
