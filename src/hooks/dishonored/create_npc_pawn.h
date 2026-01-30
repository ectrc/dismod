#ifndef create_npc_pawn_h
#define create_npc_pawn_h

#include "hook.h"

#include <memory>
#include <sdk.hpp>

#include "engine/engine.h"

typedef ADishonoredNPCPawn* (__thiscall *create_npc_pawn_t)(
  UDisActorFactoryNPCPawn *factory,
  FVector *const Location,
  FRotator *const Rotation,
  USeqAct_ActorFactory *const ActorFactoryData
);

class create_npc_pawn_hook {
public:
  create_npc_pawn_hook();
  static auto instance() -> std::shared_ptr<create_npc_pawn_hook>;

#ifdef __INTELLISENSE__
  static auto trampoline(
    UDisActorFactoryNPCPawn *factory,
    FVector *const Location,
    FRotator *const Rotation,
    USeqAct_ActorFactory *const ActorFactoryData
  ) -> ADishonoredNPCPawn*;
#else
  static auto __thiscall trampoline(
    UDisActorFactoryNPCPawn *factory,
    FVector *const Location,
    FRotator *const Rotation,
    USeqAct_ActorFactory *const ActorFactoryData
  ) -> ADishonoredNPCPawn*;
#endif

public:
  base_hook<create_npc_pawn_t> hook_;
private:
  static std::shared_ptr<create_npc_pawn_hook> instance_;
};

#endif