// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from lane_msgs:msg/LaneMarkingArrayBoth.idl
// generated code does not contain a copyright notice
#include "lane_msgs/msg/detail/lane_marking_array_both__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "lane_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lane_msgs/msg/detail/lane_marking_array_both__struct.h"
#include "lane_msgs/msg/detail/lane_marking_array_both__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "lane_msgs/msg/detail/lane_marking__functions.h"  // markings_left, markings_right

// forward declare type support functions
size_t get_serialized_size_lane_msgs__msg__LaneMarking(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_lane_msgs__msg__LaneMarking(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lane_msgs, msg, LaneMarking)();


using _LaneMarkingArrayBoth__ros_msg_type = lane_msgs__msg__LaneMarkingArrayBoth;

static bool _LaneMarkingArrayBoth__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LaneMarkingArrayBoth__ros_msg_type * ros_message = static_cast<const _LaneMarkingArrayBoth__ros_msg_type *>(untyped_ros_message);
  // Field name: markings_left
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, lane_msgs, msg, LaneMarking
      )()->data);
    size_t size = ros_message->markings_left.size;
    auto array_ptr = ros_message->markings_left.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: markings_right
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, lane_msgs, msg, LaneMarking
      )()->data);
    size_t size = ros_message->markings_right.size;
    auto array_ptr = ros_message->markings_right.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _LaneMarkingArrayBoth__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LaneMarkingArrayBoth__ros_msg_type * ros_message = static_cast<_LaneMarkingArrayBoth__ros_msg_type *>(untyped_ros_message);
  // Field name: markings_left
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, lane_msgs, msg, LaneMarking
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->markings_left.data) {
      lane_msgs__msg__LaneMarking__Sequence__fini(&ros_message->markings_left);
    }
    if (!lane_msgs__msg__LaneMarking__Sequence__init(&ros_message->markings_left, size)) {
      fprintf(stderr, "failed to create array for field 'markings_left'");
      return false;
    }
    auto array_ptr = ros_message->markings_left.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: markings_right
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, lane_msgs, msg, LaneMarking
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->markings_right.data) {
      lane_msgs__msg__LaneMarking__Sequence__fini(&ros_message->markings_right);
    }
    if (!lane_msgs__msg__LaneMarking__Sequence__init(&ros_message->markings_right, size)) {
      fprintf(stderr, "failed to create array for field 'markings_right'");
      return false;
    }
    auto array_ptr = ros_message->markings_right.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lane_msgs
size_t get_serialized_size_lane_msgs__msg__LaneMarkingArrayBoth(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LaneMarkingArrayBoth__ros_msg_type * ros_message = static_cast<const _LaneMarkingArrayBoth__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name markings_left
  {
    size_t array_size = ros_message->markings_left.size;
    auto array_ptr = ros_message->markings_left.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_lane_msgs__msg__LaneMarking(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name markings_right
  {
    size_t array_size = ros_message->markings_right.size;
    auto array_ptr = ros_message->markings_right.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_lane_msgs__msg__LaneMarking(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LaneMarkingArrayBoth__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lane_msgs__msg__LaneMarkingArrayBoth(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lane_msgs
size_t max_serialized_size_lane_msgs__msg__LaneMarkingArrayBoth(
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

  // member: markings_left
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
        max_serialized_size_lane_msgs__msg__LaneMarking(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: markings_right
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
        max_serialized_size_lane_msgs__msg__LaneMarking(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _LaneMarkingArrayBoth__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_lane_msgs__msg__LaneMarkingArrayBoth(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LaneMarkingArrayBoth = {
  "lane_msgs::msg",
  "LaneMarkingArrayBoth",
  _LaneMarkingArrayBoth__cdr_serialize,
  _LaneMarkingArrayBoth__cdr_deserialize,
  _LaneMarkingArrayBoth__get_serialized_size,
  _LaneMarkingArrayBoth__max_serialized_size
};

static rosidl_message_type_support_t _LaneMarkingArrayBoth__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LaneMarkingArrayBoth,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lane_msgs, msg, LaneMarkingArrayBoth)() {
  return &_LaneMarkingArrayBoth__type_support;
}

#if defined(__cplusplus)
}
#endif
