#ifndef static_load_object_h
#define static_load_object_h

#include "hook.h"

#include <memory>
#include <sdk.hpp>

#include "engine/engine.h"

typedef UObject* (__cdecl *static_load_object_t)(UClass* object_class, UObject* outer, const wchar_t* outer_name, const wchar_t* file_name, engine::load_flags load_flags, UPackageMap* sandbox, bool allow_object_reconciliation);

class static_load_object_hook {
public:
  static_load_object_hook();
  static auto instance() -> std::shared_ptr<static_load_object_hook>;
  static auto __cdecl trampoline(UClass* object_class, UObject* outer, const wchar_t* outer_name, const wchar_t* file_name, engine::load_flags load_flags, UPackageMap* sandbox, bool allow_object_reconciliation) -> UObject*;

public:
  base_hook<static_load_object_t> hook_;
private:
  static std::shared_ptr<static_load_object_hook> instance_;
};

#endif