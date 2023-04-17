// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lane_msgs:msg/LaneMarkingArrayBoth.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lane_msgs/msg/detail/lane_marking_array_both__struct.hpp"
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

void LaneMarkingArrayBoth_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lane_msgs::msg::LaneMarkingArrayBoth(_init);
}

void LaneMarkingArrayBoth_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lane_msgs::msg::LaneMarkingArrayBoth *>(message_memory);
  typed_message->~LaneMarkingArrayBoth();
}

size_t size_function__LaneMarkingArrayBoth__markings_left(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<lane_msgs::msg::LaneMarking> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneMarkingArrayBoth__markings_left(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<lane_msgs::msg::LaneMarking> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneMarkingArrayBoth__markings_left(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<lane_msgs::msg::LaneMarking> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneMarkingArrayBoth__markings_left(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const lane_msgs::msg::LaneMarking *>(
    get_const_function__LaneMarkingArrayBoth__markings_left(untyped_member, index));
  auto & value = *reinterpret_cast<lane_msgs::msg::LaneMarking *>(untyped_value);
  value = item;
}

void assign_function__LaneMarkingArrayBoth__markings_left(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<lane_msgs::msg::LaneMarking *>(
    get_function__LaneMarkingArrayBoth__markings_left(untyped_member, index));
  const auto & value = *reinterpret_cast<const lane_msgs::msg::LaneMarking *>(untyped_value);
  item = value;
}

void resize_function__LaneMarkingArrayBoth__markings_left(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<lane_msgs::msg::LaneMarking> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LaneMarkingArrayBoth__markings_right(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<lane_msgs::msg::LaneMarking> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneMarkingArrayBoth__markings_right(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<lane_msgs::msg::LaneMarking> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneMarkingArrayBoth__markings_right(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<lane_msgs::msg::LaneMarking> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneMarkingArrayBoth__markings_right(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const lane_msgs::msg::LaneMarking *>(
    get_const_function__LaneMarkingArrayBoth__markings_right(untyped_member, index));
  auto & value = *reinterpret_cast<lane_msgs::msg::LaneMarking *>(untyped_value);
  value = item;
}

void assign_function__LaneMarkingArrayBoth__markings_right(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<lane_msgs::msg::LaneMarking *>(
    get_function__LaneMarkingArrayBoth__markings_right(untyped_member, index));
  const auto & value = *reinterpret_cast<const lane_msgs::msg::LaneMarking *>(untyped_value);
  item = value;
}

void resize_function__LaneMarkingArrayBoth__markings_right(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<lane_msgs::msg::LaneMarking> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LaneMarkingArrayBoth_message_member_array[2] = {
  {
    "markings_left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<lane_msgs::msg::LaneMarking>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lane_msgs::msg::LaneMarkingArrayBoth, markings_left),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneMarkingArrayBoth__markings_left,  // size() function pointer
    get_const_function__LaneMarkingArrayBoth__markings_left,  // get_const(index) function pointer
    get_function__LaneMarkingArrayBoth__markings_left,  // get(index) function pointer
    fetch_function__LaneMarkingArrayBoth__markings_left,  // fetch(index, &value) function pointer
    assign_function__LaneMarkingArrayBoth__markings_left,  // assign(index, value) function pointer
    resize_function__LaneMarkingArrayBoth__markings_left  // resize(index) function pointer
  },
  {
    "markings_right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<lane_msgs::msg::LaneMarking>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lane_msgs::msg::LaneMarkingArrayBoth, markings_right),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneMarkingArrayBoth__markings_right,  // size() function pointer
    get_const_function__LaneMarkingArrayBoth__markings_right,  // get_const(index) function pointer
    get_function__LaneMarkingArrayBoth__markings_right,  // get(index) function pointer
    fetch_function__LaneMarkingArrayBoth__markings_right,  // fetch(index, &value) function pointer
    assign_function__LaneMarkingArrayBoth__markings_right,  // assign(index, value) function pointer
    resize_function__LaneMarkingArrayBoth__markings_right  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LaneMarkingArrayBoth_message_members = {
  "lane_msgs::msg",  // message namespace
  "LaneMarkingArrayBoth",  // message name
  2,  // number of fields
  sizeof(lane_msgs::msg::LaneMarkingArrayBoth),
  LaneMarkingArrayBoth_message_member_array,  // message members
  LaneMarkingArrayBoth_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneMarkingArrayBoth_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LaneMarkingArrayBoth_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LaneMarkingArrayBoth_message_members,
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
get_message_type_support_handle<lane_msgs::msg::LaneMarkingArrayBoth>()
{
  return &::lane_msgs::msg::rosidl_typesupport_introspection_cpp::LaneMarkingArrayBoth_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lane_msgs, msg, LaneMarkingArrayBoth)() {
  return &::lane_msgs::msg::rosidl_typesupport_introspection_cpp::LaneMarkingArrayBoth_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
