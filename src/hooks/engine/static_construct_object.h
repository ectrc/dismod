#ifndef static_construct_object_h
#define static_construct_object_h

#include "hook.h"
#include <sdk.hpp>
#include "engine/engine.h"

#define LOG_SCO 0 // do not enable it crashes the game
#define LOG_SCO_ME 0

DEFINE_HOOK_C(
    static_construct_object,
    "55 8B EC 6A FF 68 ?? ?? ?? ?? 64 A1 00 00 00 00 50 83 EC 0C 53 56 57 A1 ?? ?? ?? ?? 33 C5 50 8D 45 F4 64 A3 00 00 00 00 8B 45 2C",
    UObject*,
    UClass* object_class, UObject* outer, FName name, DWORD object_flags, UObject* template_, void* error, UObject* sub_object_root, void* graph, int a1, int a2
);

#endif
