#ifndef state_h
#define state_h

#include <sdk.hpp>
#include <atomic>

#include "engine.h"
#include "logger.h"
#include "queue.h"

template<typename... Args>
inline bool ensure(Args*... args) {
  return ((args != nullptr) && ...);
}

struct NPCSpawnRequest {
  FString npc_tweaks_name;
  FString ai_tweaks_name;
};

struct state {
  ThreadSafeQueue<NPCSpawnRequest> event_queue;

  ADishonoredPlayerPawn* pawn;
  ADishonoredPlayerController* controller;
  ADishonoredPlayerCamera* camera;
};

extern std::atomic<state*> current_state;
extern auto get_state() -> state*;
extern auto set_state(state* new_state) -> void;

#endif