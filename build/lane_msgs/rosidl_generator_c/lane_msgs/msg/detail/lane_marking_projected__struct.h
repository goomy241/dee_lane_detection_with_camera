// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lane_msgs:msg/LaneMarkingProjected.idl
// generated code does not contain a copyright notice

#ifndef LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED__STRUCT_H_
#define LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LaneMarkingProjected in the package lane_msgs.
typedef struct lane_msgs__msg__LaneMarkingProjected
{
  double x;
  double y;
  double z;
} lane_msgs__msg__LaneMarkingProjected;

// Struct for a sequence of lane_msgs__msg__LaneMarkingProjected.
typedef struct lane_msgs__msg__LaneMarkingProjected__Sequence
{
  lane_msgs__msg__LaneMarkingProjected * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lane_msgs__msg__LaneMarkingProjected__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED__STRUCT_H_
