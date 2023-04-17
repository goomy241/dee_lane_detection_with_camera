// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lane_msgs:msg/LaneMarking.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lane_msgs/msg/detail/lane_marking__rosidl_typesupport_introspection_c.h"
#include "lane_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lane_msgs/msg/detail/lane_marking__functions.h"
#include "lane_msgs/msg/detail/lane_marking__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void lane_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lane_msgs__msg__LaneMarking__init(message_memory);
}

void lane_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_fini_function(void * message_memory)
{
  lane_msgs__msg__LaneMarking__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember lane_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_message_member_array[2] = {
  {
    "u",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lane_msgs__msg__LaneMarking, u),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "v",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lane_msgs__msg__LaneMarking, v),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lane_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_message_members = {
  "lane_msgs__msg",  // message namespace
  "LaneMarking",  // message name
  2,  // number of fields
  sizeof(lane_msgs__msg__LaneMarking),
  lane_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_message_member_array,  // message members
  lane_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_init_function,  // function to initialize message memory (memory has to be allocated)
  lane_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lane_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_message_type_support_handle = {
  0,
  &lane_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lane_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lane_msgs, msg, LaneMarking)() {
  if (!lane_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_message_type_support_handle.typesupport_identifier) {
    lane_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lane_msgs__msg__LaneMarking__rosidl_typesupport_introspection_c__LaneMarking_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
