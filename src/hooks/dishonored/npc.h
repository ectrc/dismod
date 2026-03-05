#ifndef DISMOD_NPC_H
#define DISMOD_NPC_H

#include "hook.h"
#include "sdk.hpp"

DEFINE_HOOK(
    UDishonoredAIBrain_InitBrain,
    "55 8B EC 6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 83 EC ? 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 ? 64 A3 ? ? ? ? 8B F1 F6 46 ? ? 0F 85 ? ? ? ? 8B 45",
    void,
    UDishonoredAIBrain* brain, ADishonoredNPCPawn* pawn, UDisTweaks_AIBrain* tweaks, EDisAISuspicionLevel suspicion_level
);

DEFINE_HOOK(
    UDishonoredAIBrain_TickBrain,
    "55 8B EC 56 8B F1 F6 46 ? ? 0F 84",
    void,
    UDishonoredAIBrain* brain, float delta_time
);

DEFINE_HOOK(
    ADishonoredNPCController_InitNPC,
    "55 8B EC 83 EC ? 56 57 8B 7D ? 8B F1 85 FF 74 ? ? ? 8B 90",
    void,
    ADishonoredNPCController* controller, UDisTweaks_AIBrain* brain_tweaks, EDisAISuspicionLevel suspicion_level
);

#endif