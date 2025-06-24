#ifndef state_h
#define state_h

#include <sdk.hpp>

#include <atomic>

struct state {
  ADishonoredPlayerPawn* pawn;
  ADishonoredPlayerController* controller;
};

extern std::atomic<state*> current_state;
extern auto get_state() -> state*;

#endif