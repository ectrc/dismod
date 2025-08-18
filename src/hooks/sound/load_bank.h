#ifndef load_bank_h
#define load_bank_h

#include "hook.h"

#include <memory>
#include <sdk.hpp>

#include "engine/engine.h"

typedef int32_t (__thiscall *load_bank_t)(UAkAudioDevice* audio_device, const wchar_t* file_name, void* callback, void* cookie, int32_t mem_pool_id, unsigned int* out_bank_id);

class load_bank_hook {
public:
  load_bank_hook();
  static auto instance() -> std::shared_ptr<load_bank_hook>;
#ifdef __INTELLISENSE__
  static auto trampoline(UAkAudioDevice* audio_device, const wchar_t* file_name, void* callback, void* cookie, int32_t mem_pool_id, unsigned int* out_bank_id) -> int32_t;
#else
  static auto __thiscall trampoline(UAkAudioDevice* audio_device, const wchar_t* file_name, void* callback, void* cookie, int32_t mem_pool_id, unsigned int* out_bank_id) -> int32_t;
#endif

public:
  base_hook<load_bank_t> hook_;
private:
  static std::shared_ptr<load_bank_hook> instance_;
};

#endif