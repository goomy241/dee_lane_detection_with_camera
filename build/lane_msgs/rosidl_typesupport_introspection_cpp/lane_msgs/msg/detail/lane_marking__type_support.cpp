// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lane_msgs:msg/LaneMarking.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lane_msgs/msg/detail/lane_marking__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace lane_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LaneMarking_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lane_msgs::msg::LaneMarking(_init);
}

void LaneMarking_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lane_msgs::msg::LaneMarking *>(message_memory);
  typed_message->~LaneMarking();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LaneMarking_message_member_array[2] = {
  {
    "u",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lane_msgs::msg::LaneMarking, u),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "v",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lane_msgs::msg::LaneMarking, v),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LaneMarking_message_members = {
  "lane_msgs::msg",  // message namespace
  "LaneMarking",  // message name
  2,  // number of fields
  sizeof(lane_msgs::msg::LaneMarking),
  LaneMarking_message_member_array,  // message members
  LaneMarking_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneMarking_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LaneMarking_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LaneMarking_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace lane_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lane_msgs::msg::LaneMarking>()
{
  return &::lane_msgs::msg::rosidl_typesupport_introspection_cpp::LaneMarking_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lane_msgs, msg, LaneMarking)() {
  return &::lane_msgs::msg::rosidl_typesupport_introspection_cpp::LaneMarking_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
