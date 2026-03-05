#ifndef static_load_object_h
#define static_load_object_h

#include "hook.h"
#include <sdk.hpp>
#include "engine/engine.h"

#define LOG_SLO 0
#define LOG_SLO_ME 1

DEFINE_HOOK_C(
    static_load_object,
    "55 8B EC 6A FF 68 ?? ?? ?? ?? 64 A1 00 00 00 00 50 83 EC 6C 53 56 57 A1 ?? ?? ?? ?? 33 C5 50 8D 45 F4 64 A3 00 00 00 00 89 65",
    UObject*,
    UClass* object_class, UObject* outer, const wchar_t* outer_name, const wchar_t* file_name, engine::load_flags load_flags, UPackageMap* sandbox, bool allow_object_reconciliation
);

#endif
