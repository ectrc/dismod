#ifndef load_package_h
#define load_package_h

#include "hook.h"
#include <sdk.hpp>
#include "engine/engine.h"

DEFINE_HOOK_C(
    load_package,
    "55 8B EC 6A FF 68 ?? ?? ?? ?? 64 A1 00 00 00 00 50 83 EC 50 A1 ?? ?? ?? ?? 33 C5 89 45 EC",
    UPackage*,
    UPackage* in, const wchar_t* file_name, engine::load_flags load_flags
);

#endif
