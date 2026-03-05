#include "npc.h"

auto __thiscall UDishonoredAIBrain_InitBrain_hook::trampoline(UDishonoredAIBrain* brain, ADishonoredNPCPawn* pawn, UDisTweaks_AIBrain* tweaks, EDisAISuspicionLevel suspicion_level) -> void {
    return instance()->hook_.original()(brain, pawn, tweaks, suspicion_level);
}

auto __thiscall UDishonoredAIBrain_TickBrain_hook::trampoline(UDishonoredAIBrain* brain, float delta) -> void {
    if (brain == nullptr) return;
    if (brain->m_pBrainTweaks == nullptr) return;
    if (brain->m_pBrainTweaks->m_VersionNum == 696969) return;
    return instance()->hook_.original()(brain, delta);
}

auto __thiscall ADishonoredNPCController_InitNPC_hook::trampoline(ADishonoredNPCController* controller, UDisTweaks_AIBrain* brain_tweaks, EDisAISuspicionLevel suspicion_level) -> void {
    if (controller == nullptr) return;
    return instance()->hook_.original()(controller, brain_tweaks, suspicion_level);
}

