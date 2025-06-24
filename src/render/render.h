#ifndef render_h
#define render_h

#include <windows.h>
#include <atomic>
#include <mutex>
#include <d3d9.h>
#include <sdk.hpp>

namespace render {
  extern auto setup(LPDIRECT3DDEVICE9 device) -> void;
  extern auto draw_to_texture(LPDIRECT3DDEVICE9 device) -> void;
  extern auto draw_overlay(LPDIRECT3DDEVICE9 device) -> void;
  extern auto cleanup() -> void;

  inline uint32_t width = 0;
  inline uint32_t height = 0;
  inline std::atomic<bool> draw_enabled = {true};
  inline std::atomic<bool> block_input = {true};

  inline HWND output_window = nullptr;
  inline IDirect3DTexture9* texture = nullptr;
  inline std::once_flag init_once_flag = {};

  inline WNDPROC original_window_proc;
  extern LRESULT WINAPI window_proc(const HWND window, UINT message, WPARAM wide_param, LPARAM long_param);

  extern auto world_to_screen(IDirect3DDevice9* device, const FVector& world_position) -> FVector2D;
}

#endif