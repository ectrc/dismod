#ifndef DISMOD_STEAM_H
#define DISMOD_STEAM_H

#include "hook.h"

enum ERemoteStoragePlatform {};
enum ERemoteStoragePublishedFileVisibility {};
struct ParamStringArray_t {};
struct CID {};

struct IRemoteStorage {
    virtual ~IRemoteStorage() = default;

    virtual bool FileWrite(const char* filename, const void* data, int size) = 0;
    virtual int FileRead(const char* filename, void* buffer, int size) = 0;
    virtual bool FileForget(const char* filename) = 0;
    virtual bool FileDelete(const char* filename) = 0;
    virtual unsigned __int64 FileShare(const char* filename) = 0;
    virtual bool SetSyncPlatforms(const char* filename, ERemoteStoragePlatform platform) = 0;
    virtual bool FileExists(const char* filename) = 0;
    virtual bool FilePersisted(const char* filename) = 0;
    virtual int GetFileSize(const char* filename) = 0;
    virtual __int64 GetFileTimestamp(const char* filename) = 0;
    virtual ERemoteStoragePlatform GetSyncPlatforms(const char* filename) = 0;
    virtual int GetFileCount() = 0; // crashing function
    virtual const char* GetFileNameAndSize(int index, int* size) = 0;
    virtual bool GetQuota(int* total, int* available) = 0;
    virtual bool IsCloudEnabledForAccount() = 0;
    virtual bool IsCloudEnabledForApp() = 0;
    virtual void SetCloudEnabledForApp(bool enabled) = 0;
    virtual unsigned __int64 UGCDownload(unsigned __int64 handle) = 0;
    virtual bool GetUGCDownloadProgress(unsigned __int64 handle, int* bytesDownloaded, int* bytesTotal) = 0;
    virtual bool GetUGCDetails(unsigned __int64 handle, unsigned int* id, char** name, int* size, CID* cid) = 0;
    virtual int UGCRead(unsigned __int64 handle, void* buffer, int size) = 0;
    virtual int GetCachedUGCCount() = 0;
    virtual unsigned __int64 GetCachedUGCHandle(int index) = 0;
    virtual unsigned __int64 PublishWorkshopFile(unsigned __int64, const char*, const char*, unsigned int, const char*, const char*, ERemoteStoragePublishedFileVisibility, ParamStringArray_t*, int) = 0;
    virtual unsigned __int64 CreatePublishedFileUpdateRequest(unsigned __int64 handle) = 0;
    virtual bool UpdatePublishedFileFile(unsigned __int64 handle, const char* filename) = 0;
    virtual bool UpdatePublishedFilePreviewFile(unsigned __int64 handle, const char* filename) = 0;
    virtual bool UpdatePublishedFileTitle(unsigned __int64 handle, const char* title) = 0;
    virtual bool UpdatePublishedFileDescription(unsigned __int64 handle, const char* desc) = 0;
    virtual bool UpdatePublishedFileVisibility(unsigned __int64 handle, ERemoteStoragePublishedFileVisibility visibility) = 0;
    virtual bool UpdatePublishedFileTags(unsigned __int64 handle, ParamStringArray_t* tags) = 0;
    virtual unsigned __int64 CommitPublishedFileUpdate(unsigned __int64 handle) = 0;
    virtual unsigned __int64 GetPublishedFileDetails(unsigned __int64 handle) = 0;
    virtual unsigned __int64 DeletePublishedFile(unsigned __int64 handle) = 0;
    virtual unsigned __int64 EnumerateUserPublishedFiles(unsigned int index) = 0;
    virtual unsigned __int64 SubscribePublishedFile(unsigned __int64 handle) = 0;
    virtual unsigned __int64 EnumerateUserSubscribedFiles(unsigned int index) = 0;
    virtual unsigned __int64 UnsubscribePublishedFile(unsigned __int64 handle) = 0;
};

class RemoteStorageImpl : public IRemoteStorage {
public:
    virtual bool FileWrite(const char* filename, const void* data, int size) override {return true;}
    virtual int FileRead(const char*, void*, int) override { return 0; }
    virtual bool FileForget(const char*) override { return false; }
    virtual bool FileDelete(const char*) override { return false; }
    virtual unsigned __int64 FileShare(const char*) override { return 0; }
    virtual bool SetSyncPlatforms(const char*, ERemoteStoragePlatform) override { return false; }
    virtual bool FileExists(const char*) override { return false; }
    virtual bool FilePersisted(const char*) override { return false; }
    virtual int GetFileSize(const char*) override { return 0; }
    virtual __int64 GetFileTimestamp(const char*) override { return 0; }
    virtual ERemoteStoragePlatform GetSyncPlatforms(const char*) override { return ERemoteStoragePlatform(); }
    virtual int GetFileCount() override { return 0; }
    virtual const char* GetFileNameAndSize(int, int*) override { return nullptr; }
    virtual bool GetQuota(int*, int*) override { return false; }
    virtual bool IsCloudEnabledForAccount() override { return false; }
    virtual bool IsCloudEnabledForApp() override { return false; }
    virtual void SetCloudEnabledForApp(bool) override {}
    virtual unsigned __int64 UGCDownload(unsigned __int64) override { return 0; }
    virtual bool GetUGCDownloadProgress(unsigned __int64, int*, int*) override { return false; }
    virtual bool GetUGCDetails(unsigned __int64, unsigned int*, char**, int*, CID*) override { return false; }
    virtual int UGCRead(unsigned __int64, void*, int) override { return 0; }
    virtual int GetCachedUGCCount() override { return 0; }
    virtual unsigned __int64 GetCachedUGCHandle(int) override { return 0; }
    virtual unsigned __int64 PublishWorkshopFile(unsigned __int64, const char*, const char*, unsigned int, const char*, const char*, ERemoteStoragePublishedFileVisibility, ParamStringArray_t*, int) override { return 0; }
    virtual unsigned __int64 CreatePublishedFileUpdateRequest(unsigned __int64) override { return 0; }
    virtual bool UpdatePublishedFileFile(unsigned __int64, const char*) override { return false; }
    virtual bool UpdatePublishedFilePreviewFile(unsigned __int64, const char*) override { return false; }
    virtual bool UpdatePublishedFileTitle(unsigned __int64, const char*) override { return false; }
    virtual bool UpdatePublishedFileDescription(unsigned __int64, const char*) override { return false; }
    virtual bool UpdatePublishedFileVisibility(unsigned __int64, ERemoteStoragePublishedFileVisibility) override { return false; }
    virtual bool UpdatePublishedFileTags(unsigned __int64, ParamStringArray_t*) override { return false; }
    virtual unsigned __int64 CommitPublishedFileUpdate(unsigned __int64) override { return 0; }
    virtual unsigned __int64 GetPublishedFileDetails(unsigned __int64) override { return 0; }
    virtual unsigned __int64 DeletePublishedFile(unsigned __int64) override { return 0; }
    virtual unsigned __int64 EnumerateUserPublishedFiles(unsigned int) override { return 0; }
    virtual unsigned __int64 SubscribePublishedFile(unsigned __int64) override { return 0; }
    virtual unsigned __int64 EnumerateUserSubscribedFiles(unsigned int) override { return 0; }
    virtual unsigned __int64 UnsubscribePublishedFile(unsigned __int64) override { return 0; }
};

DEFINE_HOOK_C(
    AppIsSteamEnabled,
    "55 8B EC 51 83 3D ? ? ? ? 00 74",
    bool
);

inline auto __cdecl AppIsSteamEnabled_hook::trampoline() -> bool {
    // UOnlineSubsystemSteamworks_EnumerateFilesOnRemoteStorage_hook::instance()->hook_.enable();

    static IRemoteStorage* GRemoteStorage = new RemoteStorageImpl();
    *reinterpret_cast<IRemoteStorage**>(reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)) + 0x0105B15C) = GRemoteStorage;

    return true;
}


#endif
