#ifndef load_package_async_h
#define load_package_async_h

#include "hook.h"
#include <sdk.hpp>
#include "engine/engine.h"

DEFINE_HOOK_C(
    UObject_LoadPackageAsync,
    "55 8B EC 6A FF 68 ?? ?? ?? ?? 64 A1 00 00 00 00 50 81 EC 8C 00 00 00 56 57",
    void,
    const FString& package_name, void (__cdecl *CompletionCallback)(UObject *, void *), void* callback_user_data, const FGuid* required_guid
);

#endif
