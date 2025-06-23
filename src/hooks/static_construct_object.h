#ifndef static_construct_object_h
#define static_construct_object_h

#include "hook.h"

#include <memory>
#include <sdk.hpp>

#include "engine/engine.h"

typedef UObject* (__cdecl *static_construct_object_t)(UClass* object_class, UObject* outer, FName name, DWORD object_flags, UObject* template_, void* error, UObject* sub_object_root, void* graph, void* extra_, void* extra__);

#define LOG_SCO 1
#define LOG_SCO_ME 1

class static_construct_object_hook {
public:
  static_construct_object_hook();
  static auto instance() -> std::shared_ptr<static_construct_object_hook>;
  static auto __cdecl trampoline(UClass* object_class, UObject* outer, FName name, DWORD object_flags, UObject* template_, void* error, UObject* sub_object_root, void* graph, void* extra_ = nullptr, void* extra__ = nullptr) -> UObject*;

public:
  base_hook<static_construct_object_t> hook_;
private:
  static std::shared_ptr<static_construct_object_hook> instance_;
};

#endif