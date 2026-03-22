#ifndef DISMOD_STEAM_H
#define DISMOD_STEAM_H

#include "hook.h"
#include "sdk.hpp"
#include "engine/filesystem.h"

#include <regex>
#include <string>
#include <regex>
#include <locale>
#include <codecvt>

struct RemoteStorageImpl {
public:
    virtual bool __thiscall FileWrite(const char* file_name, const void* bytes, int) {
        LOG("RemoteStorageImpl::FileWrite() file_name={}", file_name);
        return true;
    };

    virtual int __thiscall FileRead(const char* file_name, void* data_out, int to_read) {
        LOG("RemoteStorageImpl::FileRead file_name={} to_read={}", file_name, to_read);

        const auto file_data = FileSystem::ReadFile(std::string("./LocalFiles/") + file_name);
        std::memcpy(data_out, file_data.data(), file_data.size());

        return file_data.size();
    };

    virtual bool __thiscall FileForget(const char* file_name) {
        LOG("RemoteStorageImpl::FileForget() file_name={}", file_name);
        return true;
    };
    virtual bool __thiscall FileDelete(const char* file_name) {
        LOG("RemoteStorageImpl::FileDelete() file_name={}", file_name);
        return true;
    };
    virtual uint64_t __thiscall FileShare(const char* file_name) {
        LOG("RemoteStorageImpl::FileShare() file_name={}", file_name);
        return true;
    };

    virtual bool __thiscall SetSyncPlatforms(const char* file_name, uint8_t) {
        LOG("RemoteStorageImpl::SetSyncPlatforms() file_name={}", file_name);
        return true;
    };

    virtual bool __thiscall FileExists(const char* file_name) {
        LOG("RemoteStorageImpl::FileExists() file_name={}", file_name);
        return FileSystem::Exists(std::string("./LocalFiles/") + file_name);
    };
    virtual bool __thiscall FilePersisted(const char* file_name) {
        LOG("RemoteStorageImpl::FilePersisted() file_name={}", file_name);
        return true;
    };

    virtual int __thiscall GetFileSize(const char* file_name) {
        LOG("RemoteStorageImpl::GetFileSize file_name={}", file_name);
        if (!FileSystem::Exists(std::string("./LocalFiles/") + file_name)) return 0;

        const auto file_data = FileSystem::ReadFile(std::string("./LocalFiles/") + file_name);
        return file_data.size();
    };

    virtual int64_t __thiscall GetFileTimestamp(const char* file_name) {
        LOG("RemoteStorageImpl::GetFileTimestamp file_name={}", file_name);
        return FileSystem::GetFileTimestamp(std::string("./LocalFiles/") + file_name);
    };

    virtual uint8_t __thiscall GetSyncPlatforms(const char* file_name) {
        LOG("RemoteStorageImpl::GetSyncPlatforms file_name={}", file_name);
        return 1; // ERemoteStoragePlatformWindows
    };

    virtual int __thiscall GetFileCount() {
        LOG("RemoteStorageImpl::GetFileCount");
        const auto files = FileSystem::EnumerateFiles(L"./LocalFiles");
        return files.size();
    };

    virtual const char* __thiscall GetFileNameAndSize(int index, int* out_size) {
        static std::string filename;

        if (const auto files = FileSystem::EnumerateFiles(L"./LocalFiles");
            index >= 0 && index < files.size()) {

            const auto file = FileSystem::ReadFile(
                std::string("./LocalFiles/") + files[index].string()
            );

            if (out_size) *out_size = file.size();

            filename = files[index].string();
            return filename.c_str();
        }

        return "";
    }

    virtual bool __thiscall GetQuota(int* out_total_bytes, int* out_available_bytes) {
        LOG("RemoteStorageImpl::GetQuota");
        if (out_total_bytes) *out_total_bytes = INT_MAX;
        if (out_available_bytes) *out_available_bytes = INT_MAX;
        return true;
    };
};

DEFINE_HOOK_C(
    UOnlineSubsystemSteamworks_IsEnabled,
    "55 8B EC 51 83 3D ? ? ? ? 00 74",
    bool
);

inline auto __cdecl UOnlineSubsystemSteamworks_IsEnabled_hook::trampoline() -> bool {
    const auto result = instance()->hook_.original();
    LOG("UOnlineSubsystemSteamworks::IsEnabled() == {}", result ? "true" : "false");
    // *reinterpret_cast<void**>(base + 0x0105B15C) = nullptr;
    // LOG("GSteamRemoteStorage {}", reinterpret_cast<void*>(base + 0x0105B15C));


    auto* RemoteStorage = new RemoteStorageImpl();
    const auto base = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr));
    *reinterpret_cast<void**>(base + 0x0105B15C) = RemoteStorage;

    return true;
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

DEFINE_HOOK(
    UOnlineSubsystemSteamworks_EnumerateFilesOnRemoteStorage,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 81 EC ? ? ? ? 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 33 DB 89 5D ? 8B 75 ? ? ? 89 5E",
    TArray<FString>*, UOnlineSubsystemSteamworks *system
);

inline auto __thiscall UOnlineSubsystemSteamworks_EnumerateFilesOnRemoteStorage_hook::trampoline(UOnlineSubsystemSteamworks *system) -> TArray<FString>* {
    LOG("UOnlineSubsystemSteamworks::EnumerateFilesOnRemoteStorage() return_to={}", _ReturnAddress());
    const auto result = instance()->hook_.original()(system);
    if (!result) return new TArray<FString>();
    return result;
}

DEFINE_HOOK(
    FDisAsyncSaveGameDeleter_DoWork,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 81 EC ? ? ? ? 53 56 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 8B F1 68",
    void, void* system
);

inline auto __thiscall FDisAsyncSaveGameDeleter_DoWork_hook::trampoline(void* thread) -> void {
    LOG("FDisAsyncSaveGameDeleter::DoWork() return_to={}", _ReturnAddress());
}

DEFINE_HOOK(
    FDisAsyncSaveGameSaver_DoWork,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 81 EC ? ? ? ? A1 ? ? ? ? 33 C5 89 45 ? 53 56 57 50 8D 45 ? 64 A3 ? ? ? ? 8B F1 8D 85",
    void, uintptr_t thread
);

inline auto __thiscall FDisAsyncSaveGameSaver_DoWork_hook::trampoline(uintptr_t thread) -> void {
    LOG("FDisAsyncSaveGameSaver::DoWork() return_to={}", _ReturnAddress());
    return instance()->hook_.original()(thread);

    //
    // const auto base = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr));
    // const auto get_filename = reinterpret_cast<FString*(__thiscall*)(FString*, FString*)>(base + 0x000542D0);
    // const auto file_name = get_filename(reinterpret_cast<FString *>(thread + 12), new FString());
    //
    // typedef struct file_description { void* data; int len;} file_description;
    // const auto file_data = *reinterpret_cast<file_description**>(thread + 24);
    //
    // const auto resolved_file_name = std::wstring(L"./LocalFiles/") + file_name->ToWideString();
    // FileSystem::WriteFile(resolved_file_name.c_str(), file_data->data, file_data->len);
    //
    // LOG(" wrote > file_name={} file_data_len={}", file_name->ToString().c_str(), file_data->len);
}

// Welcome!
// [UOnlineSubsystemSteamworks_IsEnabled] hook placed successfully at 0x9a8840
// [UOnlineSubsystemSteamworks_WriteProfileSettings] hook placed successfully at 0x9aad00
// [UOnlineProfileSettings_SetToDefaults] hook placed successfully at 0x8fa4a0
// [UOnlineSubsystemSteamworks_ReadProfileSettings] hook placed successfully at 0x9ad8f0
// [UOnlineSubsystemSteamworks_EnumerateFilesOnRemoteStorage] hook placed successfully at 0x9ad210
// [FDisAsyncSaveGameDeleter_DoWork] hook placed successfully at 0xa01950
// [FDisAsyncSaveGameLister_DoWork] hook placed successfully at 0xa09020
// [FDisAsyncSaveGameSaver_DoWork] hook placed successfully at 0x45a5a0
// [maybe_load_level] hook placed successfully at 0x45a2d0
// [allocate_Bytes_maybe] hook placed successfully at 0x4277f0
// UOnlineSubsystemSteamworks::IsEnabled() == true
// UOnlineSubsystemSteamworks::SetToDefaults(profile=0x17814400) return_to=0x93b8f2
// UOnlineSubsystemSteamworks::ReadProfileSettings(profile=0x2372bc00) return_to=0x9a441e
// UOnlineSubsystemSteamworks::SetToDefaults(profile=0x2372bc00) return_to=0x6d284867
// UOnlineSubsystemSteamworks::WriteProfileSettings(profile=0x2372bc00) return_to=0x6d284877
// FDisAsyncSaveGameLister::DoWork() return_to=0x40481a
// RemoteStorageImpl::GetFileCount
// UOnlineSubsystemSteamworks::ReadProfileSettings(profile=0x2372bc00) return_to=0x9a441e
// UOnlineSubsystemSteamworks::SetToDefaults(profile=0x2372bc00) return_to=0x6d284867
// UOnlineSubsystemSteamworks::WriteProfileSettings(profile=0x2372bc00) return_to=0x6d284877
// UOnlineSubsystemSteamworks::ReadProfileSettings(profile=0x2372bc00) return_to=0x9a441e
// UOnlineSubsystemSteamworks::SetToDefaults(profile=0x2372bc00) return_to=0x6d284867
// UOnlineSubsystemSteamworks::WriteProfileSettings(profile=0x2372bc00) return_to=0x6d284877
// UOnlineSubsystemSteamworks::WriteProfileSettings(profile=0x2372bc00) return_to=0x9a44ab
// FDisAsyncSaveGameSaver::DoWork() return_to=0x40481a
// RemoteStorageImpl::GetFileSize file_name=DisAutoSave0.sav
// file is not open


#pragma pack(push, 1)
struct FDisSaveGame {
    int m_Slot;
    __int64 m_Time;
    int m_MissionIndex;
    FString m_MapName;
    unsigned int m_bIsOwner;
};
#pragma pack(pop)
static_assert(sizeof(FDisSaveGame) == 0x20, "FDisSaveGame must be 0x20 bytes");

struct FDisAsyncSaveGameLister
{
    void** VTable;
    void* DoneEvent;
    FThreadSafeCounter* WorkCompletionCounter;
    __int64 hi;
    TArray<FDisSaveGame> m_SaveGames;
    long double m_fStartTime;
    long double m_fEndTime;
};

DEFINE_HOOK(
    FDisAsyncSaveGameLister_DoWork,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 81 EC ? ? ? ? 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 8B F1 89 75 ? 83 05",
    void, FDisAsyncSaveGameLister* thread
);

inline auto __thiscall FDisAsyncSaveGameLister_DoWork_hook::trampoline(FDisAsyncSaveGameLister* thread) -> void {
    LOG("FDisAsyncSaveGameLister::DoWork() return_to={}", _ReturnAddress());
    return instance()->hook_.original()(thread);
}

DEFINE_HOOK(
    get_base_filename,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 83 EC ? 53 56 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 8B F1 83 7D ? 00",
    FString*, FString* me, FString* result, bool remove_path
);

inline auto __thiscall get_base_filename_hook::trampoline(FString* me, FString* result, bool remove_path) -> FString* {
    const auto return_result = instance()->hook_.original()(me, result, remove_path);
    // LOG("GetBaseAddress() from={} to={}", me->ToString().c_str(), result->ToString().c_str());
    return return_result;
}

#endif
