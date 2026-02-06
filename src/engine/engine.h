#ifndef engine_h
#define engine_h

#include <sdk.hpp>

namespace engine {
  enum load_flags
  {
    none = 0x00000000, // No flags set.
    seek_free = 0x00000001, // Loads the package via the seek free loading path/ reader
    no_warn = 0x00000002, // Don't display warning if load fails.
    throw_ = 0x00000008, // Throw exceptions upon failure.
    verify = 0x00000010, // Only verify existance; don't actually load.
    allow_dll = 0x00000020, // Allow plain DLLs.
    disallow_files = 0x00000040, // Don't load from file.
    no_verify = 0x00000080, // Don't verify imports yet.
    quiet = 0x00002000,  // No log warnings.
    find_if_fail = 0x00004000, // Tries FindObject if a linker cannot be obtained (e.g. package is currently being compiled)
    memory_reader = 0x00008000, // Loads the file into memory and serializes from there.
    remapped_package = 0x00010000, // Indicates that is a native script package which has been renamed - GScriptPackageSuffix should be appended to the package name
    no_redirects = 0x00020000, // Never follow redirects when loading objects; redirected loads will fail
    no_seek_free_linker_detatch = 0x00040000, // Do not detatch linkers for this package when seek-free loading
  };

  inline std::string load_flags_to_string(load_flags flags) {
    std::string result;
    if (flags & seek_free) result += "seek_free | ";
    if (flags & no_warn) result += "no_warn | ";
    if (flags & throw_) result += "throw_ | ";
    if (flags & verify) result += "verify | ";
    if (flags & allow_dll) result += "allow_dll | ";
    if (flags & disallow_files) result += "disallow_files | ";
    if (flags & no_verify) result += "no_verify | ";
    if (flags & quiet) result += "quiet | ";
    if (flags & find_if_fail) result += "find_if_fail | ";
    if (flags & memory_reader) result += "memory_reader | ";
    if (flags & remapped_package) result += "remapped_package | ";
    if (flags & no_redirects) result += "no_redirects | ";
    if (flags & no_seek_free_linker_detatch) result += "no_seek_free_linker_detatch | ";
    if (result.length() > 0) result = result.substr(0, result.length() - 3);
    else result = "none";
    
    return result;
  }

  auto LoadPackage(UPackage* in, const wchar_t* file_name, load_flags load_flags) -> UPackage*;

  auto LoadPackageAsync(const FString& package_name, void (__cdecl *CompletionCallback)(UObject *, void *), void* callback_user_data = nullptr, const FGuid* required_guid = nullptr) -> void;

  auto StaticLoadObject(UClass* object_class, UObject* outer, const wchar_t* outer_name, const wchar_t* file_name, load_flags load_flags, UPackageMap* sandbox, bool allow_object_reconciliation = true) -> UObject*;

  template<typename T>
  auto LoadObject(UObject* outer, const wchar_t* outer_name, const wchar_t* file_name, load_flags load_flags, UPackageMap* sandbox) -> T* {
    static_assert(std::is_base_of<UObject, T>::value, "T must be a subclass of UObject");
    return static_cast<T*>(StaticLoadObject(T::StaticClass(), outer, outer_name, file_name, load_flags, sandbox));
  }

  auto StaticConstructObject(UClass* object_class, UObject* outer = nullptr, FName name = "", DWORD object_flags = 0, UObject* template_ = nullptr, void* error = nullptr, UObject* sub_object_root = nullptr, void* graph = nullptr) -> UObject*;

  template<typename T>
  auto ConstructObject(UObject* outer = nullptr, FName name = "", DWORD object_flags = 0, UObject* template_ = nullptr, void* error = nullptr, UObject* sub_object_root = nullptr, void* graph = nullptr) -> T* {
    static_assert(std::is_base_of<UObject, T>::value, "T must be a subclass of UObject");
    return static_cast<T*>(StaticConstructObject(T::StaticClass(), outer, name, object_flags, template_, error, sub_object_root, graph));
  }

  auto StaticDuplicateObject(UObject *SourceObject, UObject *RootObject, UObject *DestOuter, const wchar_t *DestName = nullptr, unsigned __int64 FlagMask = 0xFFFFFFFFFFFFFFFF, UClass *DestClass = 0, unsigned int bMigrateArchetypes = 0) -> UObject*;

  template<typename T>
  auto DuplicateObject(T* object, UObject* outer = nullptr, const wchar_t *DestName = nullptr, unsigned __int64 FlagMask = 0xFFFFFFFFFFFFFFFF, UClass *DestClass = 0, unsigned int bMigrateArchetypes = 0) -> T* {
    static_assert(std::is_base_of<UObject, T>::value, "T must be a subclass of UObject");
    return static_cast<T*>(StaticDuplicateObject(object, object, outer, DestName, FlagMask, DestClass, bMigrateArchetypes));
  }

  auto spawn_actor_by_tweaks(
    UDisTweaksBase* base,
    EeDisTweaksSpawnType spawn_type,
    FName in_name = 0,
    const FVector* location = nullptr,
    const FRotator* rotation = nullptr,
    AActor* template_actor = nullptr,
    uint32_t no_collision_fail = 0,
    uint32_t remote_owned = 1,
    AActor* owner = nullptr,
    APawn* instigator = nullptr,
    uint32_t no_fail = 0,
    uint32_t out_of_bend_time = 0
  ) -> AActor*;

  auto spawn_actor(
    UWorld* base,
    UClass* class_,
    FName in_name = 0,
    const FVector* location = nullptr,
    const FRotator* rotation = nullptr,
    AActor* template_actor = nullptr,
    uint32_t no_collision_fail = 0,
    uint32_t remote_owned = 1,
    AActor* owner = nullptr,
    APawn* instigator = nullptr,
    uint32_t no_fail = 0,
    uint32_t out_of_bend_time = 0,
    void* init_func = nullptr
  ) -> AActor*;
}

#endif