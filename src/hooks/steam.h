#ifndef DISMOD_STEAM_H
#define DISMOD_STEAM_H

#include "hook.h"

// GSteamRemoteStorage is in location 0x0105B15C on the latest version.
// When steam is not enabled, you will see an access violation on GSteamRemoteStorage + 44
//
DEFINE_HOOK(
    UOnlineSubsystemSteamworks_EnumerateFilesOnRemoteStorage,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 81 EC ? ? ? ? 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 8B F1 89 75 ? 83 05",
    TArray<FString>*,
    UOnlineSubsystemSteamworks* system, TArray<FString>* result
);

inline auto __thiscall UOnlineSubsystemSteamworks_EnumerateFilesOnRemoteStorage_hook::trampoline(UOnlineSubsystemSteamworks* system, TArray<FString>* result) -> TArray<FString>* {
    if (!result) result = new TArray<FString>();
    result->clear();
    return result;
}

DEFINE_HOOK_C(
    AppIsSteamEnabled,
    "55 8B EC 51 83 3D ? ? ? ? 00 74",
    bool
);

inline auto __cdecl AppIsSteamEnabled_hook::trampoline() -> bool {
    LOG("AppIsSteamEnabled Called");
    UOnlineSubsystemSteamworks_EnumerateFilesOnRemoteStorage_hook::instance()->hook_.enable();
    return false;
}


#endif
