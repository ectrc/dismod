#ifndef render_h
#define render_h

#include <atomic>
#include <mutex>
#include <d3d9.h>

namespace render {
  extern auto setup(LPDIRECT3DDEVICE9 device) -> void;
  extern auto draw_to_texture(LPDIRECT3DDEVICE9 device) -> void;
  extern auto draw_overlay() -> void;
  extern auto cleanup() -> void;

  IDirect3DTexture9* texture = nullptr;
  std::once_flag init_once_flag = {};
  std::atomic<bool> draw_enabled = {false};
}

#endif