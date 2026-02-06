#ifndef state_h
#define state_h

#include <sdk.hpp>
#include <atomic>
#include <unordered_map>

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

class NPCSpawnRequest {
public:
  enum NPCSpawnRequest_PresetType {
    assasin,
    boyle,
    buddy,
    daud,
    emily,
    empress,
    granny,
    madam,
    outsider,
    overseer_1,
    overseer_2,
    regent,
    samuel,
    slackjaw,
    thug_1,
    thug_2,
    wolf,
    aristo_fem_1,
    aristo_fem_2,
    middle_fem_1,
    middle_fem_2,
    aristo_masc_1,
    aristo_masc_2,
    civil_1,
    civil_2,
    elite_1,
    servant_1,
    servant_2,
  };

  std::wstring package_name;
  std::wstring npc_tweaks_name;
  std::wstring ai_tweaks_name;
  std::wstring faction_tweak;

  static std::unordered_map<NPCSpawnRequest_PresetType, NPCSpawnRequest> npc_presets;
};

typedef NPCSpawnRequest::NPCSpawnRequest_PresetType NPC_T;

struct state {
  std::vector<uint64_t> spawned_npcs;

  ThreadSafeQueue<NPCSpawnRequest> event_queue;

  bool* use_seek_free_loading;

  UDishonoredEngine* engine;
  ADishonoredPlayerPawn* pawn;
  ADishonoredPlayerController* controller;
  ADishonoredPlayerCamera* camera;
};

extern std::atomic<state*> current_state;
extern auto get_state() -> state*;
extern auto set_state(state* new_state) -> void;

#endif