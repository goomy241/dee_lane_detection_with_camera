// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lane_msgs:msg/LaneMarkingArrayBoth.idl
// generated code does not contain a copyright notice

#ifndef LANE_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY_BOTH__STRUCT_H_
#define LANE_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY_BOTH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'markings_left'
// Member 'markings_right'
#include "lane_msgs/msg/detail/lane_marking__struct.h"

/// Struct defined in msg/LaneMarkingArrayBoth in the package lane_msgs.
typedef struct lane_msgs__msg__LaneMarkingArrayBoth
{
  lane_msgs__msg__LaneMarking__Sequence markings_left;
  lane_msgs__msg__LaneMarking__Sequence markings_right;
} lane_msgs__msg__LaneMarkingArrayBoth;

// Struct for a sequence of lane_msgs__msg__LaneMarkingArrayBoth.
typedef struct lane_msgs__msg__LaneMarkingArrayBoth__Sequence
{
  lane_msgs__msg__LaneMarkingArrayBoth * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lane_msgs__msg__LaneMarkingArrayBoth__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LANE_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY_BOTH__STRUCT_H_
