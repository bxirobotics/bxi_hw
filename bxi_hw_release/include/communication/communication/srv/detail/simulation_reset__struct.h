// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from communication:srv/SimulationReset.idl
// generated code does not contain a copyright notice

#ifndef COMMUNICATION__SRV__DETAIL__SIMULATION_RESET__STRUCT_H_
#define COMMUNICATION__SRV__DETAIL__SIMULATION_RESET__STRUCT_H_

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
// Member 'base_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'joint_state'
#include "sensor_msgs/msg/detail/joint_state__struct.h"

/// Struct defined in srv/SimulationReset in the package communication.
typedef struct communication__srv__SimulationReset_Request
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose base_pose;
  sensor_msgs__msg__JointState joint_state;
} communication__srv__SimulationReset_Request;

// Struct for a sequence of communication__srv__SimulationReset_Request.
typedef struct communication__srv__SimulationReset_Request__Sequence
{
  communication__srv__SimulationReset_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication__srv__SimulationReset_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SimulationReset in the package communication.
typedef struct communication__srv__SimulationReset_Response
{
  bool is_success;
} communication__srv__SimulationReset_Response;

// Struct for a sequence of communication__srv__SimulationReset_Response.
typedef struct communication__srv__SimulationReset_Response__Sequence
{
  communication__srv__SimulationReset_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} communication__srv__SimulationReset_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMUNICATION__SRV__DETAIL__SIMULATION_RESET__STRUCT_H_
