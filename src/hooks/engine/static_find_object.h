#ifndef static_find_object_h
#define static_find_object_h

#include "hook.h"

#include <memory>
#include <sdk.hpp>

#include "engine/engine.h"

typedef UObject* (__cdecl *static_find_object_t)(UClass *ObjectClass, UObject *InObjectPackage, const wchar_t *OrigInName, unsigned int ExactClass);

class static_find_object_hook {
public:
  static_find_object_hook();
  static auto instance() -> std::shared_ptr<static_find_object_hook>;
  static auto __cdecl trampoline(UClass *ObjectClass, UObject *InObjectPackage, const wchar_t *OrigInName, unsigned int ExactClass) -> UObject*;

public:
  base_hook<static_find_object_t> hook_;
private:
  static std::shared_ptr<static_find_object_hook> instance_;
};

#endif