// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from lane_msgs:msg/LaneMarkingArrayBoth.idl
// generated code does not contain a copyright notice
#include "lane_msgs/msg/detail/lane_marking_array_both__rosidl_typesupport_fastrtps_cpp.hpp"
#include "lane_msgs/msg/detail/lane_marking_array_both__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace lane_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const lane_msgs::msg::LaneMarking &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  lane_msgs::msg::LaneMarking &);
size_t get_serialized_size(
  const lane_msgs::msg::LaneMarking &,
  size_t current_alignment);
size_t
max_serialized_size_LaneMarking(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace lane_msgs

namespace lane_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const lane_msgs::msg::LaneMarking &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  lane_msgs::msg::LaneMarking &);
size_t get_serialized_size(
  const lane_msgs::msg::LaneMarking &,
  size_t current_alignment);
size_t
max_serialized_size_LaneMarking(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace lane_msgs


namespace lane_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lane_msgs
cdr_serialize(
  const lane_msgs::msg::LaneMarkingArrayBoth & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: markings_left
  {
    size_t size = ros_message.markings_left.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      lane_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.markings_left[i],
        cdr);
    }
  }
  // Member: markings_right
  {
    size_t size = ros_message.markings_right.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      lane_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.markings_right[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lane_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lane_msgs::msg::LaneMarkingArrayBoth & ros_message)
{
  // Member: markings_left
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.markings_left.resize(size);
    for (size_t i = 0; i < size; i++) {
      lane_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.markings_left[i]);
    }
  }

  // Member: markings_right
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.markings_right.resize(size);
    for (size_t i = 0; i < size; i++) {
      lane_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.markings_right[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lane_msgs
get_serialized_size(
  const lane_msgs::msg::LaneMarkingArrayBoth & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: markings_left
  {
    size_t array_size = ros_message.markings_left.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        lane_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.markings_left[index], current_alignment);
    }
  }
  // Member: markings_right
  {
    size_t array_size = ros_message.markings_right.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        lane_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.markings_right[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lane_msgs
max_serialized_size_LaneMarkingArrayBoth(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: markings_left
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        lane_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneMarking(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: markings_right
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        lane_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LaneMarking(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _LaneMarkingArrayBoth__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const lane_msgs::msg::LaneMarkingArrayBoth *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LaneMarkingArrayBoth__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<lane_msgs::msg::LaneMarkingArrayBoth *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LaneMarkingArrayBoth__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const lane_msgs::msg::LaneMarkingArrayBoth *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LaneMarkingArrayBoth__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LaneMarkingArrayBoth(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LaneMarkingArrayBoth__callbacks = {
  "lane_msgs::msg",
  "LaneMarkingArrayBoth",
  _LaneMarkingArrayBoth__cdr_serialize,
  _LaneMarkingArrayBoth__cdr_deserialize,
  _LaneMarkingArrayBoth__get_serialized_size,
  _LaneMarkingArrayBoth__max_serialized_size
};

static rosidl_message_type_support_t _LaneMarkingArrayBoth__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LaneMarkingArrayBoth__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace lane_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_lane_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<lane_msgs::msg::LaneMarkingArrayBoth>()
{
  return &lane_msgs::msg::typesupport_fastrtps_cpp::_LaneMarkingArrayBoth__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lane_msgs, msg, LaneMarkingArrayBoth)() {
  return &lane_msgs::msg::typesupport_fastrtps_cpp::_LaneMarkingArrayBoth__handle;
}

#ifdef __cplusplus
}
#endif
