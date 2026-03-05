#ifndef static_find_object_h
#define static_find_object_h

#include "hook.h"
#include <sdk.hpp>
#include "engine/engine.h"

DEFINE_HOOK_C(
    UObject_StaticFindObject,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 83 EC ? 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 83 3D ? ? ? ? 00 75 ? 83 3D ? ? ? ? 00",
    UObject*,
    UClass* ObjectClass, UObject* InObjectPackage, const wchar_t* OrigInName, unsigned int ExactClass
);

#endif
