#ifndef DISMOD_DUPLICATE_OBJECT_H
#define DISMOD_DUPLICATE_OBJECT_H

#include "hook.h"
#include <sdk.hpp>

#define LOG_SDO 1

DEFINE_HOOK_C(
    static_duplicate_object,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 83 EC ? 56 57 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 8B 45 ? 8B 7D",
    UObject*,
    UObject *SourceObject, UObject *RootObject, UObject *DestOuter, const wchar_t *DestName, unsigned __int64 FlagMask, UClass *DestClass, unsigned int bMigrateArchetypes
)

#endif
