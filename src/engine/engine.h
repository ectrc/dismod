#ifndef engine_h
#define engine_h

#include <sdk.hpp>

#include "hooks/engine/static_construct_object.h"
#include "hooks/engine/static_duplicate_object.h"
#include "hooks/engine/static_load_object.h"

namespace engine {
  template<typename T>
  auto LoadObject(UObject* outer, const wchar_t* outer_name, const wchar_t* file_name, ELoadFlags load_flags, UPackageMap* sandbox) -> T* {
    static_assert(std::is_base_of<UObject, T>::value, "T must be a subclass of UObject");
    return static_cast<T*>(UObject_StaticLoadObject_hook::instance()->hook_.original()(T::StaticClass(), outer, outer_name, file_name, load_flags, sandbox, false));
  }

  template<typename T>
  auto ConstructObject(UObject* outer = nullptr, FName name = "", DWORD object_flags = 0, UObject* template_ = nullptr, void* error = nullptr, UObject* sub_object_root = nullptr, void* graph = nullptr) -> T* {
    static_assert(std::is_base_of<UObject, T>::value, "T must be a subclass of UObject");
    return static_cast<T*>(UObject_StaticConstructObject_hook::instance()->hook_.original()(T::StaticClass(), outer, name, object_flags, template_, error, sub_object_root, graph));
  }

  template<typename T>
  auto DuplicateObject(T* object, UObject* outer = nullptr, const wchar_t *DestName = nullptr, unsigned __int64 FlagMask = 0xFFFFFFFFFFFFFFFF, UClass *DestClass = 0, unsigned int bMigrateArchetypes = 0) -> T* {
    static_assert(std::is_base_of<UObject, T>::value, "T must be a subclass of UObject");
    return static_cast<T*>(UObject_StaticDuplicateObject_hook::instance()->hook_.original()(object, object, outer, DestName, FlagMask, DestClass, bMigrateArchetypes));
  }
}

#endif