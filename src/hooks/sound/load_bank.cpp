#include "load_bank.h"

std::shared_ptr<load_bank_hook> load_bank_hook::instance_ = nullptr;

auto load_bank_hook::instance() -> std::shared_ptr<load_bank_hook> {
  if (!instance_) {
    instance_ = std::make_shared<load_bank_hook>();
  }

  return instance_;
}

load_bank_hook::load_bank_hook() {
  this->hook_ = base_hook<load_bank_t>{
    "load bank",
    hat::compile_signature<"55 8B EC 6A FF E8 ?? ?? ?? ?? 8B 45 18">(),
    this->trampoline
  };

  if (!this->hook_.install()) {
    LOG("Failed to install load_bank_hook");
    return;
  }
}

auto __thiscall load_bank_hook::trampoline(UAkAudioDevice* audio_device, const wchar_t* file_name, void* callback, void* cookie, int32_t mem_pool_id, unsigned int* out_bank_id) -> int32_t {
  std::wstring file_name_wstr = file_name != nullptr ? file_name : L"nullptr";
  std::string file_name_str = std::string(file_name_wstr.begin(), file_name_wstr.end());
  LOG("load bank {}", file_name_str);

  return load_bank_hook::instance()->hook_.original()(audio_device, file_name, callback, cookie, mem_pool_id, out_bank_id);
}