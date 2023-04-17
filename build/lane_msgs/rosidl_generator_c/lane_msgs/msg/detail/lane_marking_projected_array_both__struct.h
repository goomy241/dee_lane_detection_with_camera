// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lane_msgs:msg/LaneMarkingProjectedArrayBoth.idl
// generated code does not contain a copyright notice

#ifndef LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED_ARRAY_BOTH__STRUCT_H_
#define LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED_ARRAY_BOTH__STRUCT_H_

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
#include "lane_msgs/msg/detail/lane_marking_projected__struct.h"

/// Struct defined in msg/LaneMarkingProjectedArrayBoth in the package lane_msgs.
typedef struct lane_msgs__msg__LaneMarkingProjectedArrayBoth
{
  lane_msgs__msg__LaneMarkingProjected__Sequence markings_left;
  lane_msgs__msg__LaneMarkingProjected__Sequence markings_right;
} lane_msgs__msg__LaneMarkingProjectedArrayBoth;

// Struct for a sequence of lane_msgs__msg__LaneMarkingProjectedArrayBoth.
typedef struct lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence
{
  lane_msgs__msg__LaneMarkingProjectedArrayBoth * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED_ARRAY_BOTH__STRUCT_H_
