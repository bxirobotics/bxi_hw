// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication:msg/ActuatorCmds.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__MSG__DETAIL__ACTUATOR_CMDS__STRUCT_H_
#define COMMUNICATION__MSG__DETAIL__ACTUATOR_CMDS__STRUCT_H_

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
// Member 'actuators_name'
#include "rosidl_runtime_c/string.h"
// Member 'kp'
// Member 'pos'
// Member 'kd'
// Member 'vel'
// Member 'torque'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ActuatorCmds in the package communication.
typedef struct communication__msg__ActuatorCmds
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence actuators_name;
  rosidl_runtime_c__float__Sequence kp;
  rosidl_runtime_c__float__Sequence pos;
  rosidl_runtime_c__float__Sequence kd;
  rosidl_runtime_c__float__Sequence vel;
  rosidl_runtime_c__float__Sequence torque;
} communication__msg__ActuatorCmds;

// Struct for a sequence of communication__msg__ActuatorCmds.
typedef struct communication__msg__ActuatorCmds__Sequence
{
  communication__msg__ActuatorCmds * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication__msg__ActuatorCmds__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION__MSG__DETAIL__ACTUATOR_CMDS__STRUCT_H_
