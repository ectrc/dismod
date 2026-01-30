#ifndef state_h
#define state_h

#include <sdk.hpp>
#include <atomic>

#include "engine.h"
#include "logger.h"

template<typename... Args>
inline bool ensure(Args*... args) {
  return ((args != nullptr) && ...);
}

struct state {
  ADishonoredPlayerPawn* pawn;
  ADishonoredPlayerController* controller;
  ADishonoredPlayerCamera* camera;
};

extern std::atomic<state*> current_state;
extern auto get_state() -> state*;
extern auto set_state(state* new_state) -> void;

#endif