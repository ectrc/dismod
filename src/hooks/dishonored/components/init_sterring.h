#ifndef init_steering_h
#define init_steering_h

#include "hook.h"
#include "dishonored.h"

DEFINE_HOOK(
    init_steering,
    "55 8B EC 51 53 57 8B F9 8B 87 ? ? ? ? 85 C0",
    void,
    UDishonoredAIBrain* brain
);

inline auto __thiscall init_steering_hook::trampoline(UDishonoredAIBrain* brain) -> void {
    return init_steering_hook::instance()->hook_.original()(brain);
}

#endif
