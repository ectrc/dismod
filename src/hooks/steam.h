#ifndef DISMOD_STEAM_H
#define DISMOD_STEAM_H

#include "hook.h"

DEFINE_HOOK_C(
    UOnlineSubsystemSteamworks_IsEnabled,
    "55 8B EC 51 83 3D ? ? ? ? 00 74",
    bool
);

inline auto __cdecl UOnlineSubsystemSteamworks_IsEnabled_hook::trampoline() -> bool {
    const auto result = instance()->hook_.original();
    LOG("UOnlineSubsystemSteamworks::IsEnabled() == {}", result ? "true" : "false");

    const auto base = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr));

    *reinterpret_cast<void**>(base + 0x0105B15C) = nullptr;
    LOG("GSteamRemoteStorage {}", reinterpret_cast<void*>(base + 0x0105B15C));

    return false;
}

DEFINE_HOOK(
    UOnlineSubsystemSteamworks_WriteFileToRemoteStorage,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 81 EC ? ? ? ? 53 56 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 33 DB 89 5D ? 39 1D ? ? ? ? 74 ? 8B 75 ? 8B 46 ? 85 C0 74 ? 7F ? 85 C0 74 ? 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? E8 ? ? ? ? 83 C4 ? ? ? EB ? B8 ? ? ? ? 50 8D 8D ? ? ? ? E8 ? ? ? ? 8B 75",
    bool, UOnlineSubsystemSteamworks* system, const FString *Filename, const void *Data, int Len
);

inline auto __thiscall UOnlineSubsystemSteamworks_WriteFileToRemoteStorage_hook::trampoline(UOnlineSubsystemSteamworks* system, const FString *Filename, const void *Data, int Len) -> bool {
    LOG("UOnlineSubsystemSteamworks::WriteFileToRemoteStorage(), FileName = {}", Filename->ToString().c_str());
    return false;
}

DEFINE_HOOK(
    UOnlineSubsystemSteamworks_Unknown,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 81 EC ? ? ? ? 53 56 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 8B F1 68",
    void, UOnlineSubsystemSteamworks* system
);

inline auto __thiscall UOnlineSubsystemSteamworks_Unknown_hook::trampoline(UOnlineSubsystemSteamworks* system) -> void {
    LOG("UOnlineSubsystemSteamworks::Unknown()");
    return;
}

DEFINE_HOOK(
    UOnlineSubsystemSteamworks_EnumerateFilesOnRemoteStorage,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 81 EC ? ? ? ? 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 8B F1 89 75 ? 83 05",
    TArray<FString>*, UOnlineSubsystemSteamworks* system
);

inline auto __thiscall UOnlineSubsystemSteamworks_EnumerateFilesOnRemoteStorage_hook::trampoline(UOnlineSubsystemSteamworks* system) -> TArray<FString>* {
    LOG("UOnlineSubsystemSteamworks::EnumerateFilesOnRemoteStorage() return_to={}", _ReturnAddress());
    return new TArray<FString>();
}

DEFINE_HOOK(
    UOnlineSubsystemSteamworks_Unknown2,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 81 EC ? ? ? ? A1 ? ? ? ? 33 C5 89 45 ? 53 56 57 50 8D 45 ? 64 A3 ? ? ? ? 8B F1 8D 85",
    void, UOnlineSubsystemSteamworks* system
);

inline auto __thiscall UOnlineSubsystemSteamworks_Unknown2_hook::trampoline(UOnlineSubsystemSteamworks* system) -> void {
    LOG("UOnlineSubsystemSteamworks::Unknown2()");

}

DEFINE_HOOK(
    UOnlineSubsystemSteamworks_WriteProfileSettings,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 83 EC ? 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 8B F1 A1 ? ? ? ? 85 C0",
    bool, UOnlineSubsystemSteamworks *system, int LocalUserNum, UOnlineProfileSettings *ProfileSettings
);

inline auto __thiscall UOnlineSubsystemSteamworks_WriteProfileSettings_hook::trampoline(UOnlineSubsystemSteamworks *system, int LocalUserNum, UOnlineProfileSettings *ProfileSettings) -> bool {
    LOG("UOnlineSubsystemSteamworks::WriteProfileSettings(profile={}) return_to={}", (void*)ProfileSettings, _ReturnAddress());
    return instance()->hook_.original()(system, LocalUserNum, ProfileSettings);
}

DEFINE_HOOK(
    UOnlineProfileSettings_SetToDefaults,
    "55 8B EC 83 EC ? 56 57 8B F9 8D 77 ? 6A 00 8B CE 89 7D",
    void, UOnlineProfileSettings *system
);

inline auto __thiscall UOnlineProfileSettings_SetToDefaults_hook::trampoline(UOnlineProfileSettings *ProfileSettings) -> void {
    LOG("UOnlineSubsystemSteamworks::SetToDefaults(profile={}) return_to={}", (void*)ProfileSettings, _ReturnAddress());
    return instance()->hook_.original()(ProfileSettings);
}

DEFINE_HOOK(
    UOnlineSubsystemSteamworks_ReadProfileSettings,
    "55 8B EC 83 EC ? 83 3D ? ? ? ? 00 53 56 57 8B F1 BF",
    bool, UOnlineSubsystemSteamworks *system, int LocalUserNum, UOnlineProfileSettings *ProfileSettings
);

inline auto __thiscall UOnlineSubsystemSteamworks_ReadProfileSettings_hook::trampoline(UOnlineSubsystemSteamworks *system, int LocalUserNum, UOnlineProfileSettings *ProfileSettings) -> bool {
    LOG("UOnlineSubsystemSteamworks::ReadProfileSettings(profile={}) return_to={}", (void*)ProfileSettings, _ReturnAddress());
    if (!ProfileSettings) return false;

    system->CachedProfile = ProfileSettings;
    UOnlineProfileSettings_SetToDefaults_hook::trampoline(ProfileSettings);
    UOnlineSubsystemSteamworks_WriteProfileSettings_hook::trampoline(system, LocalUserNum, ProfileSettings);

    return true;
}



#endif
