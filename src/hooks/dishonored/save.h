#ifndef DISMOD_SAVE_H
#define DISMOD_SAVE_H

#include "hook.h"
#include "sdk.hpp"

DEFINE_HOOK(
    FName_ToString,
    "55 8B EC 51 56 ? ? 57 C7 45 ? 00 00 00 00",
    FString*,
    FName* name,FString* result
);

// changes per version, search for "DishonoredGame.DishonoredEngine.EDisDisableSaveType" to the function
DEFINE_HOOK(
    UDishonoredEngine_DisSave,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 83 EC ? 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 8B F1 89 75 ? E8 ? ? ? ? 33 DB 3B C3",
    void,
    UDishonoredEngine* engine, int slot
);

#endif