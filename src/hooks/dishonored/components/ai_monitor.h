#ifndef ai_monitor_init_h
#define ai_monitor_init_h

#include "hook.h"
#include "dishonored.h"

DEFINE_HOOK(
    ai_monitor_init,
    "55 8B EC 83 EC ? 8B 41 ? 8B 80 ? ? ? ? 89 41",
    void,
    FDisAIMonitorReaction* comp
);

inline auto __thiscall ai_monitor_init_hook::trampoline(FDisAIMonitorReaction* comp) -> void {
    return ai_monitor_init_hook::instance()->hook_.original()(comp);
}

#endif