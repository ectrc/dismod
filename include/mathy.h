#ifndef mathy_h
#define mathy_h
#include <cmath>
#include <numbers>
#include <sdk.hpp>

FMatrix convert_to_projection_matrix(float fov, float width, float height, float near_plane = 0.1f, float far_plane = 10000.0f) {
  const float aspect_ratio = width / height;
  const float rad_fov = (fov * std::numbers::pi) / 180.0f;
  const float fov_tan = tan(rad_fov * 0.5f);
  
  FMatrix projection;
  
  projection.XPlane = { 1.0f / (aspect_ratio * fov_tan), 0.0f, 0.0f, 0.0f };
  projection.YPlane = { 0.0f, 1.0f / fov_tan, 0.0f, 0.0f };
  projection.ZPlane = { 0.0f, 0.0f, far_plane / (far_plane - near_plane), 1.0f };
  projection.WPlane = { 0.0f, 0.0f, -(far_plane * near_plane) / (far_plane - near_plane), 0.0f };
  
  return projection;
}

struct normal_rotator {
  float Pitch;
  float Yaw;
  float Roll;
  
  static auto create(const FRotator& in) -> normal_rotator {
    return {
      .Pitch = (in.Pitch / 65536.0f / 2) * static_cast<float>(std::numbers::pi),
      .Yaw = (in.Yaw / 65536.0f / 2) * static_cast<float>(std::numbers::pi),
      .Roll = (in.Roll / 65536.0f / 2) * static_cast<float>(std::numbers::pi)
    };
  }
};

FMatrix create_inverse_rotation_matrix(const FRotator& rot) {
  const normal_rotator rotator = normal_rotator::create(rot);
  
  const FMatrix roll_rot = {
    { 1.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, cos(-rotator.Roll),-sin(-rotator.Roll), 0.0f },
    { 0.0f, sin(-rotator.Roll), cos(-rotator.Roll), 0.0f },
    { 0.0f, 0.0f, 0.0f, 1.0f }
  };
  
  const FMatrix pitch_rot = {
    { cos(-rotator.Pitch), 0.0f, sin(-rotator.Pitch), 0.0f },
    { 0.0f, 1.0f, 0.0f, 0.0f },
    { -sin(-rotator.Pitch), 0.0f, cos(-rotator.Pitch), 0.0f },
    { 0.0f, 0.0f, 0.0f, 1.0f }
  };
  
  const FMatrix roll_yaw = {
    { cos(-rotator.Yaw), sin(-rotator.Yaw), 0.0f, 0.0f },
    { -sin(-rotator.Yaw), cos(-rotator.Yaw), 0.0f, 0.0f },
    { 0.0f, 0.0f, 1.0f, 0.0f },
    { 0.0f, 0.0f, 0.0f, 1.0f }
  };
  
  return roll_rot * pitch_rot * roll_yaw;
}

FMatrix create_view_matrix_improved(const FVector& camera_location, const FRotator& camera_rotation) {
  const FMatrix rotation = create_inverse_rotation_matrix(camera_rotation);
  
  FMatrix translation = {
    { 1.0f, 0.0f, 0.0f, 0.0f },
    { 0.0f, 1.0f, 0.0f, 0.0f },
    { 0.0f, 0.0f, 1.0f, 0.0f },
    { camera_location.X, camera_location.Y, camera_location.Z, 1.0f }
  };
  
  auto x = rotation * translation;
  return x;
}

#endif