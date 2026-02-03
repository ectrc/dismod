#ifndef mods_spawn_h
#define mods_spawn_h

#include <vector>

#include "engine/state.h"

#include "hook.h"
#include "sdk.hpp"


DEFINE_HOOK(
    init_brain,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 83 EC ? 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 8B F1 F6 46 ? ? 0F 85 ? ? ? ? 8B 45",
    void,
    UDishonoredAIBrain* brain,
    ADishonoredNPCPawn* pawn,
    UDisTweaks_AIBrain* tweaks,
    EDisAISuspicionLevel suspicion_level
);

inline auto __thiscall init_brain_hook::trampoline(UDishonoredAIBrain* brain, ADishonoredNPCPawn* pawn, UDisTweaks_AIBrain* tweaks, EDisAISuspicionLevel suspicion_level) -> void {
    return init_brain_hook::instance()->hook_.original()(brain, pawn, tweaks, suspicion_level);
}

DEFINE_HOOK(
    tick_brain,
    "55 8B EC 56 8B F1 F6 46 ? ? 0F 84",
    void,
    UDishonoredAIBrain* brain,
    float delta
);

inline auto __thiscall tick_brain_hook::trampoline(UDishonoredAIBrain* brain, float delta) -> void {
    if (brain == nullptr) return;
    return tick_brain_hook::instance()->hook_.original()(brain, delta);
}

namespace mods {
    auto handle_npc_requests(UWorld* world, std::vector<NPCSpawnRequest> &requests) -> std::vector<ADishonoredNPCController*>;
    auto handle_single_npc_request(UWorld* world, const NPCSpawnRequest& request) -> std::optional<ADishonoredNPCController*>;

    auto spawn_test_pawn() -> void;
}

#endif