#include "create_npc_pawn.h"

std::shared_ptr<create_npc_pawn_hook> create_npc_pawn_hook::instance_ = nullptr;

auto create_npc_pawn_hook::instance() -> std::shared_ptr<create_npc_pawn_hook> {
  if (!instance_) {
    instance_ = std::make_shared<create_npc_pawn_hook>();
  }

  return instance_;
}

create_npc_pawn_hook::create_npc_pawn_hook() {
  this->hook_ = base_hook<create_npc_pawn_t>{
    "create npc pawn",
    hat::compile_signature<"55 8B EC 83 EC ? 53 56 8B F1 ? ? 8B 90 ? ? ? ? 57 FF D2 8B 0D ? ? ? ? E8 ? ? ? ? 33 DB">(),
    this->trampoline
  };

  if (!this->hook_.install()) {
    LOG("Failed to install create_npc_pawn_hook");
    return;
  }
}

auto __thiscall create_npc_pawn_hook::trampoline(
  UDisActorFactoryNPCPawn *factory,
  FVector *const Location,
  FRotator *const Rotation,
  USeqAct_ActorFactory *const ActorFactoryData
) -> ADishonoredNPCPawn* {
  return create_npc_pawn_hook::instance()->hook_.original()(
    factory,
    Location,
    Rotation,
    ActorFactoryData
  );
}