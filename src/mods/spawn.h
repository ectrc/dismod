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

DEFINE_HOOK(
    register_avoidable,
    "56 8B F1 E8 ? ? ? ? 85 C0 75 ? 8B 86",
    void,
    ADishonoredNPCPawn* npc
);

inline auto __thiscall register_avoidable_hook::trampoline(ADishonoredNPCPawn* npc) -> void {
    if (npc == nullptr) return;
    return register_avoidable_hook::instance()->hook_.original()(npc);
}

DEFINE_HOOK(
    start_all_components,
    "56 57 8B F9 33 F6 85 F6 7C ?? 3B 77 ?? 7D ?? 8B 47",
    void,
    UArkComponentContainer* container
);

inline auto __thiscall start_all_components_hook::trampoline(UArkComponentContainer* container) -> void {
    if (container == nullptr) return;
    return start_all_components_hook::instance()->hook_.original()(container);
}

DEFINE_HOOK(
    controller_init_npc,
    "55 8B EC 83 EC ? 56 57 8B 7D ? 8B F1 85 FF 74 ? ? ? 8B 90",
    void,
    ADishonoredNPCController* controller,
    UDisTweaks_AIBrain* brain_tweaks,
    EDisAISuspicionLevel suspicion_level
);

inline auto __thiscall controller_init_npc_hook::trampoline(ADishonoredNPCController* controller, UDisTweaks_AIBrain* brain_tweaks, EDisAISuspicionLevel suspicion_level) -> void {
    if (controller == nullptr) return;
    return controller_init_npc_hook::instance()->hook_.original()(controller, brain_tweaks, suspicion_level);
}

namespace mods {
    auto handle_npc_requests(UWorld* world, std::vector<NPCSpawnRequest> &requests) -> std::vector<ADishonoredNPCController*>;
    auto handle_single_npc_request(UWorld* world, const NPCSpawnRequest& request) -> std::optional<ADishonoredNPCController*>;

    auto spawn_test_pawn() -> void;
}

#endif