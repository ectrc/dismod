#ifndef mods_spawn_h
#define mods_spawn_h

#include "hook.h"
#include "dishonored.h"

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
    get_default_object,
    "55 8B EC 56 8B F1 83 BE ? ? ? ? 00 57 0F 85",
    UObject*,
    UClass* class_,
    bool bForce
);

inline auto __thiscall get_default_object_hook::trampoline(UClass* class_, bool force) -> UObject* {
    return get_default_object_hook::instance()->hook_.original()(class_, force);
}

DEFINE_HOOK(
    get_ai_behaviour_tweak_for_slot,
    "55 8B EC 51 8B 41 ? 8B 50 ? 53 83 C1",
    UDisTweaks_AIBehavior*,
    UDishonoredAIBrain*,
    EDifficulty
);

inline auto __thiscall get_ai_behaviour_tweak_for_slot_hook::trampoline(UDishonoredAIBrain* brain, EDifficulty difficulty) -> UDisTweaks_AIBehavior* {
    return get_ai_behaviour_tweak_for_slot_hook::instance()->hook_.original()(brain, difficulty);
}

DEFINE_HOOK(
    init_stim,
    "56 8B F1 ? ? ? ? ? ? E8 ? ? ? ? 8B 0D ? ? ? ? 56 E8 ? ? ? ? 33 C0 89 46 ? 89 46 ? C6 46 ? ? ? ? ? ? ? ? 8B C6 5E C3 55 8B EC 56 8B F1 ? ? ? ? ? ? E8 ? ? ? ? 8B 0D ? ? ? ? 56 E8 ? ? ? ? 33 C0 89 46 ? 89 46 ? 8B 45 ? 89 46 ? C6 46 ? ? ? ? ? ? ? ? 8B C6 5E 5D C2 ? ? ? ? ? ? 55 8B EC 6A",
    void,
    FAIStimStruct_BrainInit*
);

inline auto __thiscall init_stim_hook::trampoline(FAIStimStruct_BrainInit* brain_init) -> void {
    return init_stim_hook::instance()->hook_.original()(brain_init);
}

DEFINE_HOOK(
    init_behaviour,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 83 EC ? 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 8B F1 8B 45 ? 89 46",
    void,
    UDishonoredAIBehavior* behave,
    UDishonoredAIBrain* const brain,
    UDisTweaks_AIBehavior*const _pBehaviorTweaks
);

inline auto __thiscall init_behaviour_hook::trampoline(UDishonoredAIBehavior* behave, UDishonoredAIBrain* const brain, UDisTweaks_AIBehavior*const _pBehaviorTweaks) -> void {
    return init_behaviour_hook::instance()->hook_.original()(behave, brain, _pBehaviorTweaks);
}

namespace mods {
    auto spawn_test_pawn() -> void;
}

#endif