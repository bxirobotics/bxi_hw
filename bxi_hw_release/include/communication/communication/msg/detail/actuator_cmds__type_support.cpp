// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from communication:msg/ActuatorCmds.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "communication/msg/detail/actuator_cmds__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace communication
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ActuatorCmds_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) communication::msg::ActuatorCmds(_init);
}

void ActuatorCmds_fini_function(void * message_memory)
{
  auto typed_message = static_cast<communication::msg::ActuatorCmds *>(message_memory);
  typed_message->~ActuatorCmds();
}

size_t size_function__ActuatorCmds__actuators_name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActuatorCmds__actuators_name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ActuatorCmds__actuators_name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActuatorCmds__actuators_name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__ActuatorCmds__actuators_name(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__ActuatorCmds__actuators_name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__ActuatorCmds__actuators_name(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__ActuatorCmds__actuators_name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActuatorCmds__kp(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActuatorCmds__kp(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ActuatorCmds__kp(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActuatorCmds__kp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ActuatorCmds__kp(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ActuatorCmds__kp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ActuatorCmds__kp(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ActuatorCmds__kp(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActuatorCmds__pos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActuatorCmds__pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ActuatorCmds__pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActuatorCmds__pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ActuatorCmds__pos(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ActuatorCmds__pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ActuatorCmds__pos(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ActuatorCmds__pos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActuatorCmds__kd(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActuatorCmds__kd(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ActuatorCmds__kd(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActuatorCmds__kd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ActuatorCmds__kd(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ActuatorCmds__kd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ActuatorCmds__kd(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ActuatorCmds__kd(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActuatorCmds__vel(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActuatorCmds__vel(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ActuatorCmds__vel(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActuatorCmds__vel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ActuatorCmds__vel(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ActuatorCmds__vel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ActuatorCmds__vel(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ActuatorCmds__vel(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActuatorCmds__torque(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActuatorCmds__torque(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ActuatorCmds__torque(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActuatorCmds__torque(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ActuatorCmds__torque(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ActuatorCmds__torque(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ActuatorCmds__torque(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ActuatorCmds__torque(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActuatorCmds_message_member_array[7] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication::msg::ActuatorCmds, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "actuators_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication::msg::ActuatorCmds, actuators_name),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActuatorCmds__actuators_name,  // size() function pointer
    get_const_function__ActuatorCmds__actuators_name,  // get_const(index) function pointer
    get_function__ActuatorCmds__actuators_name,  // get(index) function pointer
    fetch_function__ActuatorCmds__actuators_name,  // fetch(index, &value) function pointer
    assign_function__ActuatorCmds__actuators_name,  // assign(index, value) function pointer
    resize_function__ActuatorCmds__actuators_name  // resize(index) function pointer
  },
  {
    "kp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication::msg::ActuatorCmds, kp),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActuatorCmds__kp,  // size() function pointer
    get_const_function__ActuatorCmds__kp,  // get_const(index) function pointer
    get_function__ActuatorCmds__kp,  // get(index) function pointer
    fetch_function__ActuatorCmds__kp,  // fetch(index, &value) function pointer
    assign_function__ActuatorCmds__kp,  // assign(index, value) function pointer
    resize_function__ActuatorCmds__kp  // resize(index) function pointer
  },
  {
    "pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication::msg::ActuatorCmds, pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActuatorCmds__pos,  // size() function pointer
    get_const_function__ActuatorCmds__pos,  // get_const(index) function pointer
    get_function__ActuatorCmds__pos,  // get(index) function pointer
    fetch_function__ActuatorCmds__pos,  // fetch(index, &value) function pointer
    assign_function__ActuatorCmds__pos,  // assign(index, value) function pointer
    resize_function__ActuatorCmds__pos  // resize(index) function pointer
  },
  {
    "kd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication::msg::ActuatorCmds, kd),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActuatorCmds__kd,  // size() function pointer
    get_const_function__ActuatorCmds__kd,  // get_const(index) function pointer
    get_function__ActuatorCmds__kd,  // get(index) function pointer
    fetch_function__ActuatorCmds__kd,  // fetch(index, &value) function pointer
    assign_function__ActuatorCmds__kd,  // assign(index, value) function pointer
    resize_function__ActuatorCmds__kd  // resize(index) function pointer
  },
  {
    "vel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication::msg::ActuatorCmds, vel),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActuatorCmds__vel,  // size() function pointer
    get_const_function__ActuatorCmds__vel,  // get_const(index) function pointer
    get_function__ActuatorCmds__vel,  // get(index) function pointer
    fetch_function__ActuatorCmds__vel,  // fetch(index, &value) function pointer
    assign_function__ActuatorCmds__vel,  // assign(index, value) function pointer
    resize_function__ActuatorCmds__vel  // resize(index) function pointer
  },
  {
    "torque",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(communication::msg::ActuatorCmds, torque),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActuatorCmds__torque,  // size() function pointer
    get_const_function__ActuatorCmds__torque,  // get_const(index) function pointer
    get_function__ActuatorCmds__torque,  // get(index) function pointer
    fetch_function__ActuatorCmds__torque,  // fetch(index, &value) function pointer
    assign_function__ActuatorCmds__torque,  // assign(index, value) function pointer
    resize_function__ActuatorCmds__torque  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActuatorCmds_message_members = {
  "communication::msg",  // message namespace
  "ActuatorCmds",  // message name
  7,  // number of fields
  sizeof(communication::msg::ActuatorCmds),
  ActuatorCmds_message_member_array,  // message members
  ActuatorCmds_init_function,  // function to initialize message memory (memory has to be allocated)
  ActuatorCmds_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActuatorCmds_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActuatorCmds_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace communication


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<communication::msg::ActuatorCmds>()
{
  return &::communication::msg::rosidl_typesupport_introspection_cpp::ActuatorCmds_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, communication, msg, ActuatorCmds)() {
  return &::communication::msg::rosidl_typesupport_introspection_cpp::ActuatorCmds_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
