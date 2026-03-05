#include "locomotion.h"

#include "engine/state.h"
#include "mods/spawn.h"

auto __thiscall FArkComponentLocomotion_SendTouchAndBumpEvents_hook::trampoline(FArkComponentLocomotion* component, void* check_result, uint32_t preview) -> void {
    if (component == nullptr || component->owning_controller == nullptr) return;
    if (component->owning_controller->m_pAIBrain == nullptr) return;
    if (component->owning_controller->m_pAIBrain->m_pBrainTweaks == nullptr) return;
    if (component->owning_controller->m_pAIBrain->m_pBrainTweaks->m_VersionNum == 696969) return;

    return instance()->hook_.original()(component, check_result, preview);
}

auto __thiscall FArkComponentLookAt_StartLookAtLocation_hook::trampoline(FArkComponentLookAt* component, const void *asker, const FName *asker_name, int priority, FVector location, const FLookAtInfluence& influence, float duration) -> uint64_t {
    return instance()->hook_.original()(component, asker, asker_name, priority, location, influence, duration);
}

auto __thiscall FArkComponentLookAt_StartLookAtActor_hook::trampoline(FArkComponentLookAt* component, const void *asker, const FName *asker_name, int priority, AActor* actor, const FLookAtInfluence& influence, float duration) -> uint64_t {
    return instance()->hook_.original()(component, asker, asker_name, priority, actor, influence, duration);
}

auto __thiscall FDisNPCRotationIntent_SetTargetRotation_hook::trampoline(FDisNPCRotationIntent* component, ADishonoredNPCPawn* owning, FVector& look_at, float rate, float acceleration, EDisFaceToPriority priority, void* asker, FName asker_name) -> void {
    return instance()->hook_.original()(component, owning, look_at, rate, acceleration, priority, asker, asker_name);
}