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
  auto LoadPackage(UPackage* in, const wchar_t* file_name, load_flags load_flags) -> UPackage*;

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
  auto LoadPackageAsync(const FString& package_name, FAsyncCompletionCallback completion_callback, void* callback_user_data = nullptr, const FGuid* required_guid = nullptr, FName package_type = FName(0)) -> void;

  /**
   * Find or load an object by string name with optional outer and filename specifications.
   * These are optional because the InName can contain all of the necessary information.
   *
   * @param object_class The class (or a superclass) of the object to be loaded.
   * @param outer An optional object to narrow where to find/load the object from
   * @param outer_name String name of the object. If it's not fully qualified, InOuter and/or Filename will be needed
   * @param file_name An optional file to load from (or find in the file's package object)
   * @param load_flags Flags controlling how to handle loading from disk
   * @param sandbox A list of packages to restrict the search for the object
   * @param allow_object_reconciliation Whether to allow the object to be found via FindObject in the case of seek free loading
   *
   * @return The object that was loaded or found. nullptr for a failure.
   */
  auto StaticLoadObject(UClass* object_class, UObject* outer, const wchar_t* outer_name, const wchar_t* file_name, load_flags load_flags, UPackageMap* sandbox, bool allow_object_reconciliation = true) -> UObject*;

  template<typename T>
  auto LoadObject(UObject* outer, const wchar_t* outer_name, const wchar_t* file_name, load_flags load_flags, UPackageMap* sandbox) -> T* {
    static_assert(std::is_base_of<UObject, T>::value, "T must be a subclass of UObject");
    return static_cast<T*>(StaticLoadObject(T::StaticClass(), outer, outer_name, file_name, load_flags, sandbox));
  }

  auto GetTransientPackage() -> UObject*;
  /**
   * Create a new instance of an object. The returned object will be fully initialized. If InFlags contains RF_NeedsLoad (indicating that the object still needs to load its object data from disk), components
   * are not instantiated (this will instead occur in PostLoad()). The difference between StaticConstructObject and StaticAllocateObject is that StaticConstructObject will also call the class constructor on the object
   * and instantiate any components.
   * 
   * @param object_class The class of the object to create.
   * @param outer The object to create this object within (the Outer property for the new object will be set to the value specified here).
   * @param name The name to give the new object. If no value (NAME_None) is specified, the object will be given a unique name in the form of ClassName_#.
   * @param object_flags The ObjectFlags to assign to the new object. Some flags can affect the behavior of constructing the object.
   * @param template_ If specified, the property values from this object will be copied to the new object, and the new object's ObjectArchetype value will be set to this object.
   * @param error The output device to use for logging errors.
   * @param sub_object_root Only used to when duplicating or instancing objects; in a nested subobject chain, corresponds to the first object that is not a subobject.
   */
  auto StaticConstructObject(UClass* object_class, UObject* outer = GetTransientPackage(), FName name = "", DWORD object_flags = 0, UObject* template_ = nullptr, void* error = nullptr, UObject* sub_object_root = nullptr, void* graph = nullptr) -> UObject*;

  template<typename T>
  auto ConstructObject(UObject* outer = GetTransientPackage(), FName name = "", DWORD object_flags = 0, UObject* template_ = nullptr, void* error = nullptr, UObject* sub_object_root = nullptr, void* graph = nullptr, void* extra_ = nullptr, void* extra__ = nullptr) -> T* {
    static_assert(std::is_base_of<UObject, T>::value, "T must be a subclass of UObject");
    return static_cast<T*>(StaticConstructObject(T::StaticClass(), outer, name, object_flags, template_, error, sub_object_root, graph));
  }

  template<typename T>
  auto FindObjects(const char* name, bool exact = false) -> TArray<T*> {
    static_assert(std::is_base_of<UObject, T>::value, "T must be a subclass of UObject");
    TArray<T*> result;
    for (auto object : *GObjects) {
      if (object && object->IsA(T::StaticClass())) {
        std::string current_object_name = object->GetFullName();
        if (current_object_name.find("Default__") != std::string::npos) {
          continue;
        }

        if (exact) {
          if (strcmp(current_object_name.c_str(), name) == 0) {
            result.push_back(static_cast<T*>(object));
          }
        } else {
          if (current_object_name.find(name) != std::string::npos) {
            result.push_back(static_cast<T*>(object));
          }
        }
      }
    }
    return result;
  }

  template<typename T>
  auto FindObject(const char* name, bool exact = false) -> T* {
    static_assert(std::is_base_of<UObject, T>::value, "T must be a subclass of UObject");
    
    const auto array_result = FindObjects<T>(name, exact);
    if (array_result.size() > 0) {
      return array_result[0];
    }

    return nullptr;
  }

  template<typename T>
  auto FindObjects() -> TArray<T*> {
    static_assert(std::is_base_of<UObject, T>::value, "T must be a subclass of UObject");

    TArray<T*> result;
    for (auto object : *GObjects) {
      if (object && object->IsA(T::StaticClass()) && object->GetNameCPP().find("Default_") == std::string::npos) {
        result.push_back(static_cast<T*>(object));
      }
    }
    return result;
  }

  template<typename T>
  auto FindObject() -> T* {
    static_assert(std::is_base_of<UObject, T>::value, "T must be a subclass of UObject");

    const auto array_result = FindObjects<T>();
    if (array_result.size() > 0) {
      return array_result[0];
    }

    return nullptr;
  }
}

#endif