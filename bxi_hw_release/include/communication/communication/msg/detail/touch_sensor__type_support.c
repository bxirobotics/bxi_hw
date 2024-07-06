// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from communication:msg/TouchSensor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "communication/msg/detail/touch_sensor__rosidl_typesupport_introspection_c.h"
#include "communication/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "communication/msg/detail/touch_sensor__functions.h"
#include "communication/msg/detail/touch_sensor__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `value`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void communication__msg__TouchSensor__rosidl_typesupport_introspection_c__TouchSensor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  communication__msg__TouchSensor__init(message_memory);
}

void communication__msg__TouchSensor__rosidl_typesupport_introspection_c__TouchSensor_fini_function(void * message_memory)
{
  communication__msg__TouchSensor__fini(message_memory);
}

size_t communication__msg__TouchSensor__rosidl_typesupport_introspection_c__size_function__TouchSensor__value(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * communication__msg__TouchSensor__rosidl_typesupport_introspection_c__get_const_function__TouchSensor__value(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * communication__msg__TouchSensor__rosidl_typesupport_introspection_c__get_function__TouchSensor__value(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void communication__msg__TouchSensor__rosidl_typesupport_introspection_c__fetch_function__TouchSensor__value(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    communication__msg__TouchSensor__rosidl_typesupport_introspection_c__get_const_function__TouchSensor__value(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void communication__msg__TouchSensor__rosidl_typesupport_introspection_c__assign_function__TouchSensor__value(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    communication__msg__TouchSensor__rosidl_typesupport_introspection_c__get_function__TouchSensor__value(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool communication__msg__TouchSensor__rosidl_typesupport_introspection_c__resize_function__TouchSensor__value(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember communication__msg__TouchSensor__rosidl_typesupport_introspection_c__TouchSensor_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__msg__TouchSensor, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication__msg__TouchSensor, value),  // bytes offset in struct
    NULL,  // default value
    communication__msg__TouchSensor__rosidl_typesupport_introspection_c__size_function__TouchSensor__value,  // size() function pointer
    communication__msg__TouchSensor__rosidl_typesupport_introspection_c__get_const_function__TouchSensor__value,  // get_const(index) function pointer
    communication__msg__TouchSensor__rosidl_typesupport_introspection_c__get_function__TouchSensor__value,  // get(index) function pointer
    communication__msg__TouchSensor__rosidl_typesupport_introspection_c__fetch_function__TouchSensor__value,  // fetch(index, &value) function pointer
    communication__msg__TouchSensor__rosidl_typesupport_introspection_c__assign_function__TouchSensor__value,  // assign(index, value) function pointer
    communication__msg__TouchSensor__rosidl_typesupport_introspection_c__resize_function__TouchSensor__value  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers communication__msg__TouchSensor__rosidl_typesupport_introspection_c__TouchSensor_message_members = {
  "communication__msg",  // message namespace
  "TouchSensor",  // message name
  2,  // number of fields
  sizeof(communication__msg__TouchSensor),
  communication__msg__TouchSensor__rosidl_typesupport_introspection_c__TouchSensor_message_member_array,  // message members
  communication__msg__TouchSensor__rosidl_typesupport_introspection_c__TouchSensor_init_function,  // function to initialize message memory (memory has to be allocated)
  communication__msg__TouchSensor__rosidl_typesupport_introspection_c__TouchSensor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t communication__msg__TouchSensor__rosidl_typesupport_introspection_c__TouchSensor_message_type_support_handle = {
  0,
  &communication__msg__TouchSensor__rosidl_typesupport_introspection_c__TouchSensor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_communication
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, communication, msg, TouchSensor)() {
  communication__msg__TouchSensor__rosidl_typesupport_introspection_c__TouchSensor_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!communication__msg__TouchSensor__rosidl_typesupport_introspection_c__TouchSensor_message_type_support_handle.typesupport_identifier) {
    communication__msg__TouchSensor__rosidl_typesupport_introspection_c__TouchSensor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &communication__msg__TouchSensor__rosidl_typesupport_introspection_c__TouchSensor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
