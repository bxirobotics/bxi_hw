// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication:msg/MotionCommands.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__STRUCT_H_
#define COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'vel_des'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/MotionCommands in the package communication.
typedef struct communication__msg__MotionCommands
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3 vel_des;
  float height_des;
  float yawdot_des;
  int32_t mode;
} communication__msg__MotionCommands;

// Struct for a sequence of communication__msg__MotionCommands.
typedef struct communication__msg__MotionCommands__Sequence
{
  communication__msg__MotionCommands * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication__msg__MotionCommands__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION__MSG__DETAIL__MOTION_COMMANDS__STRUCT_H_
