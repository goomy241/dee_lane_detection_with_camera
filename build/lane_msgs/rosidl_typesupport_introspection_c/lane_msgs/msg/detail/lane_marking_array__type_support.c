// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lane_msgs:msg/LaneMarkingArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lane_msgs/msg/detail/lane_marking_array__rosidl_typesupport_introspection_c.h"
#include "lane_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lane_msgs/msg/detail/lane_marking_array__functions.h"
#include "lane_msgs/msg/detail/lane_marking_array__struct.h"


// Include directives for member types
// Member `markings`
#include "lane_msgs/msg/lane_marking.h"
// Member `markings`
#include "lane_msgs/msg/detail/lane_marking__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__LaneMarkingArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lane_msgs__msg__LaneMarkingArray__init(message_memory);
}

void lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__LaneMarkingArray_fini_function(void * message_memory)
{
  lane_msgs__msg__LaneMarkingArray__fini(message_memory);
}

size_t lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__size_function__LaneMarkingArray__markings(
  const void * untyped_member)
{
  const lane_msgs__msg__LaneMarking__Sequence * member =
    (const lane_msgs__msg__LaneMarking__Sequence *)(untyped_member);
  return member->size;
}

const void * lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__get_const_function__LaneMarkingArray__markings(
  const void * untyped_member, size_t index)
{
  const lane_msgs__msg__LaneMarking__Sequence * member =
    (const lane_msgs__msg__LaneMarking__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__get_function__LaneMarkingArray__markings(
  void * untyped_member, size_t index)
{
  lane_msgs__msg__LaneMarking__Sequence * member =
    (lane_msgs__msg__LaneMarking__Sequence *)(untyped_member);
  return &member->data[index];
}

void lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__fetch_function__LaneMarkingArray__markings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const lane_msgs__msg__LaneMarking * item =
    ((const lane_msgs__msg__LaneMarking *)
    lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__get_const_function__LaneMarkingArray__markings(untyped_member, index));
  lane_msgs__msg__LaneMarking * value =
    (lane_msgs__msg__LaneMarking *)(untyped_value);
  *value = *item;
}

void lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__assign_function__LaneMarkingArray__markings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  lane_msgs__msg__LaneMarking * item =
    ((lane_msgs__msg__LaneMarking *)
    lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__get_function__LaneMarkingArray__markings(untyped_member, index));
  const lane_msgs__msg__LaneMarking * value =
    (const lane_msgs__msg__LaneMarking *)(untyped_value);
  *item = *value;
}

bool lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__resize_function__LaneMarkingArray__markings(
  void * untyped_member, size_t size)
{
  lane_msgs__msg__LaneMarking__Sequence * member =
    (lane_msgs__msg__LaneMarking__Sequence *)(untyped_member);
  lane_msgs__msg__LaneMarking__Sequence__fini(member);
  return lane_msgs__msg__LaneMarking__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__LaneMarkingArray_message_member_array[1] = {
  {
    "markings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lane_msgs__msg__LaneMarkingArray, markings),  // bytes offset in struct
    NULL,  // default value
    lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__size_function__LaneMarkingArray__markings,  // size() function pointer
    lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__get_const_function__LaneMarkingArray__markings,  // get_const(index) function pointer
    lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__get_function__LaneMarkingArray__markings,  // get(index) function pointer
    lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__fetch_function__LaneMarkingArray__markings,  // fetch(index, &value) function pointer
    lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__assign_function__LaneMarkingArray__markings,  // assign(index, value) function pointer
    lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__resize_function__LaneMarkingArray__markings  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__LaneMarkingArray_message_members = {
  "lane_msgs__msg",  // message namespace
  "LaneMarkingArray",  // message name
  1,  // number of fields
  sizeof(lane_msgs__msg__LaneMarkingArray),
  lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__LaneMarkingArray_message_member_array,  // message members
  lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__LaneMarkingArray_init_function,  // function to initialize message memory (memory has to be allocated)
  lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__LaneMarkingArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__LaneMarkingArray_message_type_support_handle = {
  0,
  &lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__LaneMarkingArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lane_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lane_msgs, msg, LaneMarkingArray)() {
  lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__LaneMarkingArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lane_msgs, msg, LaneMarking)();
  if (!lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__LaneMarkingArray_message_type_support_handle.typesupport_identifier) {
    lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__LaneMarkingArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lane_msgs__msg__LaneMarkingArray__rosidl_typesupport_introspection_c__LaneMarkingArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
