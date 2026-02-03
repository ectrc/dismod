#ifndef world_h
#define world_h

#include "hook.h"
#include "sdk.hpp"

DEFINE_HOOK(
    tick_world,
    "55 8B EC 51 56 8B F1 8B 86 ? ? ? ? F7 80",
    void,
    UWorld* world,
    uint32_t tick_type,
    float delta
);

#endif