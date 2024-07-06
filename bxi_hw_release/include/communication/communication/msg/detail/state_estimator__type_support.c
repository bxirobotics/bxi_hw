// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from communication:msg/StateEstimator.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "communication/msg/detail/state_estimator__rosidl_typesupport_introspection_c.h"
#include "communication/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "communication/msg/detail/state_estimator__functions.h"
#include "communication/msg/detail/state_estimator__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `qpos`
// Member `qvel`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void communication__msg__StateEstimator__rosidl_typesupport_introspection_c__StateEstimator_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  communication__msg__StateEstimator__init(message_memory);
}

void communication__msg__StateEstimator__rosidl_typesupport_introspection_c__StateEstimator_fini_function(void * message_memory)
{
  communication__msg__StateEstimator__fini(message_memory);
}

size_t communication__msg__StateEstimator__rosidl_typesupport_introspection_c__size_function__StateEstimator__qpos(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * communication__msg__StateEstimator__rosidl_typesupport_introspection_c__get_const_function__StateEstimator__qpos(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * communication__msg__StateEstimator__rosidl_typesupport_introspection_c__get_function__StateEstimator__qpos(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void communication__msg__StateEstimator__rosidl_typesupport_introspection_c__fetch_function__StateEstimator__qpos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    communication__msg__StateEstimator__rosidl_typesupport_introspection_c__get_const_function__StateEstimator__qpos(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void communication__msg__StateEstimator__rosidl_typesupport_introspection_c__assign_function__StateEstimator__qpos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    communication__msg__StateEstimator__rosidl_typesupport_introspection_c__get_function__StateEstimator__qpos(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool communication__msg__StateEstimator__rosidl_typesupport_introspection_c__resize_function__StateEstimator__qpos(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t communication__msg__StateEstimator__rosidl_typesupport_introspection_c__size_function__StateEstimator__qvel(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * communication__msg__StateEstimator__rosidl_typesupport_introspection_c__get_const_function__StateEstimator__qvel(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * communication__msg__StateEstimator__rosidl_typesupport_introspection_c__get_function__StateEstimator__qvel(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void communication__msg__StateEstimator__rosidl_typesupport_introspection_c__fetch_function__StateEstimator__qvel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    communication__msg__StateEstimator__rosidl_typesupport_introspection_c__get_const_function__StateEstimator__qvel(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void communication__msg__StateEstimator__rosidl_typesupport_introspection_c__assign_function__StateEstimator__qvel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    communication__msg__StateEstimator__rosidl_typesupport_introspection_c__get_function__StateEstimator__qvel(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool communication__msg__StateEstimator__rosidl_typesupport_introspection_c__resize_function__StateEstimator__qvel(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember communication__msg__StateEstimator__rosidl_typesupport_introspection_c__StateEstimator_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__msg__StateEstimator, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "qpos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__msg__StateEstimator, qpos),  // bytes offset in struct
    NULL,  // default value
    communication__msg__StateEstimator__rosidl_typesupport_introspection_c__size_function__StateEstimator__qpos,  // size() function pointer
    communication__msg__StateEstimator__rosidl_typesupport_introspection_c__get_const_function__StateEstimator__qpos,  // get_const(index) function pointer
    communication__msg__StateEstimator__rosidl_typesupport_introspection_c__get_function__StateEstimator__qpos,  // get(index) function pointer
    communication__msg__StateEstimator__rosidl_typesupport_introspection_c__fetch_function__StateEstimator__qpos,  // fetch(index, &value) function pointer
    communication__msg__StateEstimator__rosidl_typesupport_introspection_c__assign_function__StateEstimator__qpos,  // assign(index, value) function pointer
    communication__msg__StateEstimator__rosidl_typesupport_introspection_c__resize_function__StateEstimator__qpos  // resize(index) function pointer
  },
  {
    "qvel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__msg__StateEstimator, qvel),  // bytes offset in struct
    NULL,  // default value
    communication__msg__StateEstimator__rosidl_typesupport_introspection_c__size_function__StateEstimator__qvel,  // size() function pointer
    communication__msg__StateEstimator__rosidl_typesupport_introspection_c__get_const_function__StateEstimator__qvel,  // get_const(index) function pointer
    communication__msg__StateEstimator__rosidl_typesupport_introspection_c__get_function__StateEstimator__qvel,  // get(index) function pointer
    communication__msg__StateEstimator__rosidl_typesupport_introspection_c__fetch_function__StateEstimator__qvel,  // fetch(index, &value) function pointer
    communication__msg__StateEstimator__rosidl_typesupport_introspection_c__assign_function__StateEstimator__qvel,  // assign(index, value) function pointer
    communication__msg__StateEstimator__rosidl_typesupport_introspection_c__resize_function__StateEstimator__qvel  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers communication__msg__StateEstimator__rosidl_typesupport_introspection_c__StateEstimator_message_members = {
  "communication__msg",  // message namespace
  "StateEstimator",  // message name
  3,  // number of fields
  sizeof(communication__msg__StateEstimator),
  communication__msg__StateEstimator__rosidl_typesupport_introspection_c__StateEstimator_message_member_array,  // message members
  communication__msg__StateEstimator__rosidl_typesupport_introspection_c__StateEstimator_init_function,  // function to initialize message memory (memory has to be allocated)
  communication__msg__StateEstimator__rosidl_typesupport_introspection_c__StateEstimator_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t communication__msg__StateEstimator__rosidl_typesupport_introspection_c__StateEstimator_message_type_support_handle = {
  0,
  &communication__msg__StateEstimator__rosidl_typesupport_introspection_c__StateEstimator_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication, msg, StateEstimator)() {
  communication__msg__StateEstimator__rosidl_typesupport_introspection_c__StateEstimator_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!communication__msg__StateEstimator__rosidl_typesupport_introspection_c__StateEstimator_message_type_support_handle.typesupport_identifier) {
    communication__msg__StateEstimator__rosidl_typesupport_introspection_c__StateEstimator_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &communication__msg__StateEstimator__rosidl_typesupport_introspection_c__StateEstimator_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
