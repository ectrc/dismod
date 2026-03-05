#include "world.h"
#include "mods/world.h"

#include "locomotion.h"
#include "engine/state.h"
#include "mods/spawn.h"

auto __thiscall UWorld_SpawnActor_hook::trampoline(
  UWorld* base,
  UClass* class_,
  FName in_name,
  const FVector* location,
  const FRotator* rotation,
  AActor* template_actor,
  uint32_t no_collision_fail,
  uint32_t remote_owned,
  AActor* owner,
  APawn* instigator,
  uint32_t no_fail,
  uint32_t out_of_bend_time,
  void* init_func
) -> AActor* {
    return instance()->hook_.original()(
      base,
      class_,
      in_name,
      location,
      rotation,
      template_actor,
      no_collision_fail,
      remote_owned,
      owner,
      instigator,
      no_fail,
      out_of_bend_time,
      init_func
    );
}

auto __thiscall UWorld_Tick_hook::trampoline(UWorld* world, uint32_t type, float delta) -> void {
    const auto player_controller = get_state()->controller;

    if (auto requests = get_state()->event_queue.handle(); !requests.empty()) {
        mods::handle_npc_requests(world, requests);
    }

    if (world->PersistentLevel == nullptr) {
        return instance()->hook_.original()(world, type, delta);
    }

    std::vector<ADishonoredNPCPawn*> npc_pawns;
    std::vector<int64_t> npc_ids_marked_for_deletion;

    auto& spawned = get_state()->spawned_npcs;

    for (auto actor : world->PersistentLevel->Actors)
    {
        if (!actor) continue;
        if (!actor->IsA(ADishonoredNPCPawn::StaticClass())) continue;
        auto npc_pawn = static_cast<ADishonoredNPCPawn*>(actor);

        for (auto npc_id : spawned)
        {
            if (npc_pawn->m_NPCID != npc_id) continue;
            if (npc_pawn->m_bIsOfficiallyDead) npc_ids_marked_for_deletion.emplace_back(npc_id);
            else npc_pawns.emplace_back(npc_pawn);
            break;
        }
    }

    for (int64_t npc_id : npc_ids_marked_for_deletion)
    {
        spawned.erase(
            std::ranges::remove(spawned, npc_id).begin(),
            spawned.end()
        );
    }

    auto position = mods::position_infront();
    for (auto npc_pawn : npc_pawns) {
        auto rotation_intent = npc_pawn->m_NPCRotationIntent[static_cast<size_t>(EDisFaceToPriority::DisFaceToPriority_AILoco)];
        FDisNPCRotationIntent_SetTargetRotation_hook::instance()->hook_.original()(&rotation_intent, npc_pawn, position, 99999.f, 99999.f, EDisFaceToPriority::DisFaceToPriority_AILoco, player_controller, player_controller->Name);
        npc_pawn->m_CurrentNPCRotationPriority = EDisFaceToPriority::DisFaceToPriority_AILoco;

        FArkComponentLookAt_StartLookAtLocation_hook::instance()->hook_.original()(reinterpret_cast<FArkComponentLookAt *>(npc_pawn->m_pCpntLookat.Dummy),
          // npc_pawn, &npc_pawn->Name, 1, (player_controller->Pawn->Location + FVector{0, 0, 60}), {
          npc_pawn, &npc_pawn->Name, 1, position, {
            .m_fHeadInfluence = 99999.f,
            .m_fTorsoInfluence = 0.f,
            .m_bTorsoInfIsMoveSpeedDependant = true
          }, 1.0f
        );
    }

    return instance()->hook_.original()(world, type, delta);
}

auto __thiscall UWorld_SingleLineCheck_hook::trampoline(UWorld *world, FCheckResult *Hit, AActor *SourceActor, const FVector *End, const FVector *Start, ETraceFlags TraceFlags, const FVector &Extent, ULightComponent *SourceLight) -> bool {
    return instance()->hook_.original()(world, Hit, SourceActor, End, Start, TraceFlags, Extent, SourceLight);
}

auto __thiscall FRotator_Vector_hook::trampoline(FRotator* rot, FVector* vec) -> FVector* {
    return instance()->hook_.original()(rot, vec);
}

auto __thiscall APlayerController_GetPlayerViewPoint_hook::trampoline(APlayerController *controller, FVector *out_Location, FRotator *out_Rotation) -> void {
    return instance()->hook_.original()(controller, out_Location, out_Rotation);
}