#ifndef init_npc_h
#define init_npc_h

#include "hook.h"

#include <memory>
#include <sdk.hpp>

#include "engine/engine.h"

typedef void (__thiscall *init_npc_t)(
  ADishonoredNPCController* controller,
  UDisTweaks_AIBrain* brain_tweak,
  void* suspicion
);

class init_npc_hook {
public:
  init_npc_hook();
  static auto instance() -> std::shared_ptr<init_npc_hook>;

#ifdef __INTELLISENSE__
  static auto trampoline(
    ADishonoredNPCController* controller,
    UDisTweaks_AIBrain* brain_tweak,
    void* suspicion
  ) -> void;
#else
  static auto __thiscall trampoline(
    ADishonoredNPCController* controller,
    UDisTweaks_AIBrain* brain_tweak,
    void* suspicion
  ) -> void;
#endif

public:
  base_hook<init_npc_t> hook_;
private:
  static std::shared_ptr<init_npc_hook> instance_;
};

#endif