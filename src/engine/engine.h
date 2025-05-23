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

  /**
   * Loads a package and all contained objects that match context flags.
   *
   * @param	in Package to load new package into (usually NULL or ULevel->GetOuter())
   * @param	file_name Name of file on disk
   * @param	flags Flags controlling loading behavior
   * @return Loaded package if successful, NULL otherwise
   */
  UPackage* LoadPackage(UPackage* in, const wchar_t* file_name, load_flags load_flags);

  typedef void (*FAsyncCompletionCallback)(UObject* LinkerRoot, void* CallbackUserData);
  /**
   * Asynchronously load a package and all contained objects that match context flags. Non- blocking.
   *
   * @param	package_name Name of package to load
   * @param	completion_callback Callback called on completion of loading
   * @param	callback_user_data User data passed to callback
   * @param	required_guid GUID of the package to load, or NULL for "don't care"
   * @param	package_type A type name associated with this package for later use
   */
  void LoadPackageAsync(const FString& package_name, FAsyncCompletionCallback completion_callback, void* callback_user_data = nullptr, const FGuid* required_guid = nullptr, FName package_type = FName(0));

  /**
   * Find or load an object by string name with optional outer and filename specifications.
   * These are optional because the InName can contain all of the necessary information.
   *
   * @param object_class The class (or a superclass) of the object to be loaded.
   * @param in An optional object to narrow where to find/load the object from
   * @param in_name String name of the object. If it's not fully qualified, InOuter and/or Filename will be needed
   * @param file_name An optional file to load from (or find in the file's package object)
   * @param load_flags Flags controlling how to handle loading from disk
   * @param sandbox A list of packages to restrict the search for the object
   * @param allow_object_reconciliation Whether to allow the object to be found via FindObject in the case of seek free loading
   *
   * @return The object that was loaded or found. nullptr for a failure.
   */
  UObject* StaticLoadObject(UClass* object_class, UObject* in, const wchar_t* in_name, const wchar_t* file_name, load_flags load_flags, UPackageMap* sandbox, bool allow_object_reconciliation);
}

#endif