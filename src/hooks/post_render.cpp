#include "post_render.h"

std::shared_ptr<post_render_hook> post_render_hook::instance_ = nullptr;

auto post_render_hook::instance() -> std::shared_ptr<post_render_hook> {
  if (!instance_) {
    instance_ = std::make_shared<post_render_hook>();
  }

  return instance_;
}

post_render_hook::post_render_hook() {
  static auto post_render = engine::FindObject<UFunction>("Function DishonoredGame.DishonoredViewportClient.PostRender", true);
  if (post_render == nullptr) {
    LOG("PostRender function not found");
    return;
  }

  this->hook_= base_hook<post_render_t>{
    "post render",
    reinterpret_cast<std::byte*>(post_render->exec),
    (void*)this->trampoline
  };

  if (!this->hook_.install()) {
    LOG("Failed to install post_render_hook");
    return;
  }
}

auto __thiscall post_render_hook::trampoline(void* ctx, void* stack, void* result) -> void {
  FFrame* frame = reinterpret_cast<FFrame*>(stack);

#if LOG_PR
  LOG("Canvas ({:#x})", (uintptr_t)frame->Locals);
#endif

  return post_render_hook::instance()->hook_.original()(ctx, stack, result);
} 