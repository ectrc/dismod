#include <cstddef>

#include <windows.h>
#include <cstdint>
#include <span>
#include <memory>

#include "libhat.hpp"
#include "minhook.h"
#include "logger.h"

static std::once_flag init_flag{};

template<typename function_typename>
class base_hook {
public:
  typedef function_typename function_t;
  typedef function_typename* function_ptr_t;

public:
  base_hook() : target_(nullptr), trampoline_(nullptr) {}
  base_hook(std::byte* target, std::byte* trampoline) : target_(target), trampoline_(trampoline) {}
  
  base_hook(const hat::signature_view& pattern, void* trampoline)  {
    LOG("base_hook constructor");

    std::call_once(init_flag, []() {
      if (MH_Initialize() != MH_OK) {
        LOG("failed to initialize minhook");
        return;
      }
    });

    static const hat::process::module process_module = hat::process::get_process_module();
    static const auto dos_header = reinterpret_cast<const IMAGE_DOS_HEADER*>(process_module.address());
    const auto headers = *reinterpret_cast<const IMAGE_NT_HEADERS *>(reinterpret_cast<uintptr_t>(dos_header) + dos_header->e_lfanew);
    const auto scan_result = hat::find_pattern(reinterpret_cast<const std::byte*>(dos_header), reinterpret_cast<const std::byte*>(dos_header) + headers.OptionalHeader.SizeOfCode, pattern);

    if (scan_result.has_result()) this->target_ = const_cast<std::byte*>(scan_result.get());
    else LOG("failed to find address for pattern");

    LOG("hook addr: {:#x}", reinterpret_cast<uintptr_t>(this->target_));

    this->trampoline_ = reinterpret_cast<std::byte*>(trampoline);

    if (this->target_ == nullptr) {
      LOG("this->target_ is null");
      return;
    }

    LOG("creating hook ({:#x}), trampoline ({:#x})", reinterpret_cast<uintptr_t>(this->target_), reinterpret_cast<uintptr_t>(this->trampoline_));

    if (const auto result = MH_CreateHook(this->target_, this->trampoline_, reinterpret_cast<void**>(&this->original_)); result != MH_OK) {
      LOG("failed to create hook for address, error code {}", MH_StatusToString(result));
      return;
    }
  }

  auto enable() -> bool {
    if (this->target_ == nullptr) return false;

    if (MH_EnableHook(this->target_) != MH_OK) {
      LOG("failed to enable hook for address");
      return false;
    }
    return true;
  }

  auto disable() -> bool {
    if (this->target_ == nullptr) return false;
    if (MH_DisableHook(this->target_) != MH_OK) {
      LOG("failed to disable hook for address");
      return false;
    }
    return true;
  }

  ~base_hook() {
    LOG("base_hook destructor");
    if(!this->disable()) return;
    if (this->target_ == nullptr) return;
    if (MH_RemoveHook(this->target_) != MH_OK) {
      LOG("failed to remove hook for address");
      return;
    }
  }

  auto original() const -> function_t {
    return this->original_;
  }

private:
  std::byte* target_ = 0;
  std::byte* trampoline_ = 0;
  function_t original_ = 0;
};