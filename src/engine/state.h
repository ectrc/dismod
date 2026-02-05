#ifndef state_h
#define state_h

#include <sdk.hpp>
#include <atomic>

#include "engine.h"
#include "logger.h"
#include "queue.h"

#include <windows.h>

inline std::wstring widen(const char* input)
{
  int len = MultiByteToWideChar(CP_UTF8, 0, input, -1, nullptr, 0);
  std::wstring result(len - 1, L'\0');
  MultiByteToWideChar(CP_UTF8, 0, input, -1, result.data(), len);
  return result;
}

template<typename... Args>
inline bool ensure(Args*... args) {
  return ((args != nullptr) && ...);
}

struct NPCSpawnRequest {
  std::wstring npc_tweaks_name;
  std::wstring ai_tweaks_name;
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