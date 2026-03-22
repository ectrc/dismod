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


DEFINE_HOOK_C(
    UOnlineSubsystemSteamworks_IsEnabled,
    "55 8B EC 51 83 3D ? ? ? ? 00 74",
    bool
);

inline auto __cdecl UOnlineSubsystemSteamworks_IsEnabled_hook::trampoline() -> bool {
    const auto result = instance()->hook_.original();
    LOG("UOnlineSubsystemSteamworks::IsEnabled() == {}", result ? "true" : "false");

    const auto base = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr));

    // *reinterpret_cast<void**>(base + 0x0105B15C) = nullptr;
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

    const auto base = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr));
    const auto get_filename = reinterpret_cast<FString*(__thiscall*)(FString*, FString*)>(base + 0x000542D0);
    const auto file_name = get_filename(reinterpret_cast<FString *>(thread + 12), new FString());

    typedef struct file_description { void* data; int len;} file_description;
    const auto file_data = *reinterpret_cast<file_description**>(thread + 24);

    const auto resolved_file_name = std::wstring(L"./LocalFiles/") + file_name->ToWideString();
    FileSystem::WriteFile(resolved_file_name.c_str(), file_data->data, file_data->len);

    LOG(" wrote > file_name={} file_data_len={}", file_name->ToString().c_str(), file_data->len);
}

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
    thread->m_SaveGames.clear();

    const auto files = FileSystem::EnumerateFiles(L"./LocalFiles");

    for (size_t start = 0; start < files.size(); start++) {
        const auto& file_name = files[start];

        const auto file_path = FString{file_name.c_str()};
        const auto resolved_path = std::wstring(L"./LocalFiles/") + file_name;
        const auto file_data = FileSystem::ReadFile(resolved_path.c_str());

        auto split_around_dash = [](const char* str) -> std::pair<std::string, std::string> {
            const std::regex re(R"((.*?)\s-\s(.*))");
            const std::string s(str);
            if (std::smatch match; std::regex_match(s, match, re) && match.size() > 2) {
                return { match[1].str(), match[2].str() };
            }
            return { "", "" };
        };
        const char* read_file_name = reinterpret_cast<const char*>(file_data.data() + 0xC);
        const auto dash_pair = split_around_dash(read_file_name);

        std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
        const auto wide_map_name = converter.from_bytes(dash_pair.second);

        LOG(" read > file_name={} file_data_len={})", file_path.ToString().c_str(), file_data.size());

        FDisSaveGame* save = &thread->m_SaveGames[static_cast<int32_t>(thread->m_SaveGames.add_zeroed(1))];
        save->m_Slot = (thread->m_SaveGames.size() * 4) + 4;
        save->m_bIsOwner = 1;
        save->m_Time = FileSystem::GetFileTimestamp(resolved_path.c_str());
        save->m_MapName.assign(wide_map_name.c_str());
        save->m_MissionIndex = std::atoi(dash_pair.first.c_str());
    }

    // instance()->hook_.original()(thread);

    // const auto x = *reinterpret_cast<TArray<FDisSaveGame>*>((uintptr_t)thread + 0x18);
    // const auto x = thread->m_SaveGames;
    // LOG("x len {}", x.size());
    // LOG("x max {}", x.capacity());
    // for (size_t start = 0; start < x.size(); start++) {
    //     auto found = x[start];
    //     LOG(" > slot={} mission_index={} name={}", found.m_Slot, found.m_MissionIndex, found.m_MapName.ToString().c_str());
    // }
}

// AsyncGameLoader crash log

// 0x0045A372 (SteamFileManaer::CreateFileReader) <- deref null ptr on steam
// 0x0045B117 (FileManager::CreateFileReader)
// 0x00A14D3A (DisAsyncSaveGameLoader::DoWork)

DEFINE_HOOK(
    allocate_Bytes_maybe,
    "55 8B EC 8B 45 ? 53 56 8B F1 8B 5E ? 57 8B 7E ? 03 C7 8B CB 3B C1 89 46 ? 7E ? 6A ? 51 50 E8 ? ? ? ? ? ? 83 C4 ? 89 46 ? 85 C9 75 ? 85 C0 74 ? 6A ? 50 53 51 E8 ? ? ? ? 83 C4 ? ? ? 8B C7",
    int, void* me, int a2
);

inline auto __thiscall allocate_Bytes_maybe_hook::trampoline(void* me, int length) -> int {
    return instance()->hook_.original()(me, length);
}

DEFINE_HOOK(
    maybe_load_level,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 81 EC ? ? ? ? 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 8B F9 89 7D ? 8B 45 ? 50",
    int, void** me, wchar_t* file_path
);

struct RemoteStorageImpl {
    void** vtable;

public:
    virtual __thiscall bool FileWrite(const char*, const void*, int);
    virtual int __thiscall FileRead(const char* file_name, void* data_out, int to_read) {
        LOG("RemoteStorageImpl::FileRead file_name={} to_read={}", file_name, to_read);


        return 0;
    };
    virtual bool __thiscall FileForget(const char*);
    virtual bool __thiscall FileDelete(const char*);
    virtual unsigned __int64 __thiscall FileShare(const char*);
    virtual bool __thiscall SetSyncPlatforms(const char*, uint8_t);
    virtual bool __thiscall FileExists(const char*) { return true; };
    virtual bool __thiscall FilePersisted(const char*);

    virtual int __thiscall GetFileSize(const char* file_name) {
        LOG("RemoteStorageImpl::GetFileSize file_name={}", file_name);

        return 0;
    };
};

inline auto __thiscall maybe_load_level_hook::trampoline(void** me, wchar_t* file_path) -> int {
    RemoteStorageImpl RemoteStorage = RemoteStorageImpl{};

    const auto base = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr));
    *reinterpret_cast<void**>(base + 0x0105B15C) = &RemoteStorage;

    // const auto widened = std::wstring(file_path);
    // const auto pos = widened.find_last_of(L"\\/");
    // const std::wstring file_name = (pos == std::wstring::npos)
    //     ? widened
    //     : widened.substr(pos + 1);
    //
    // auto get_mission_number = [](const std::wstring& name) -> int {
    //     static const std::wregex re(LR"(.*?(\d+)\.sav$)", std::regex::icase);
    //     if (std::wsmatch match; std::regex_match(name, match, re) && match.size() > 1) {
    //         return std::stoi(match[1].str());
    //     }
    //     return -1;
    // };
    //
    // const auto all_files = FileSystem::EnumerateFiles(L"./LocalFiles");
    // LOG("   file_name -> {}", (new FString(file_name.c_str()))->ToString().c_str());
    // LOG("   get_mission_number(file_name) -> {}", get_mission_number(file_name));
    // LOG("   all_files.size() -> {}", all_files.size());
    //
    // if (get_mission_number(file_name) - 1 > all_files.size() || get_mission_number(file_name) - 1 < 0) {
    //     LOG("get_mission_number(file_name) - 1 > all_files.size() || get_mission_number(file_name) - 1 < 0");
    //     return 0;
    // }
    //
    // const auto& chosen_file_name = all_files[get_mission_number(file_name) - 1];
    // const auto resolved_path = std::wstring(L"./LocalFiles/") + chosen_file_name;
    // const auto file_data = FileSystem::ReadFile(resolved_path.c_str());
    //
    // LOG("file_name={} file_bytes={}",
    //     (new FString(resolved_path.c_str()))->ToString().c_str(),
    //     file_data.size());
    // if (file_data.empty()) return 0;
    //     // auto Data = *reinterpret_cast<TArray<char>*>(me+36);
    //     // Data.ReAllocate((int32_t)((file_data.size() + 1) * sizeof(char)));
    //
    // // auto Data = *reinterpret_cast<TArray<char>*>(me+36);
    // // LOG("Result Array data={} len={} max={}", Data.data(), Data.size(), Data.capacity());
    //
    // const auto bytes = reinterpret_cast<TArray<uint8_t>*>(me + 36);
    // allocate_Bytes_maybe_hook::instance()->hook_.original()(bytes, file_data.size());
    // std::memcpy(((void**)bytes)[0], file_data.data(), file_data.size());
    // me[13] = 0;
    //
    // LOG("Wrote bytes into array");

    return 1;
}

#endif
