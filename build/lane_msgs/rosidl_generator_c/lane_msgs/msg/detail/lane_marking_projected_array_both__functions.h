// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lane_msgs:msg/LaneMarkingProjectedArrayBoth.idl
// generated code does not contain a copyright notice

#ifndef LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED_ARRAY_BOTH__FUNCTIONS_H_
#define LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED_ARRAY_BOTH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lane_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "lane_msgs/msg/detail/lane_marking_projected_array_both__struct.h"

/// Initialize msg/LaneMarkingProjectedArrayBoth message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lane_msgs__msg__LaneMarkingProjectedArrayBoth
 * )) before or use
 * lane_msgs__msg__LaneMarkingProjectedArrayBoth__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lane_msgs
bool
lane_msgs__msg__LaneMarkingProjectedArrayBoth__init(lane_msgs__msg__LaneMarkingProjectedArrayBoth * msg);

/// Finalize msg/LaneMarkingProjectedArrayBoth message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lane_msgs
void
lane_msgs__msg__LaneMarkingProjectedArrayBoth__fini(lane_msgs__msg__LaneMarkingProjectedArrayBoth * msg);

/// Create msg/LaneMarkingProjectedArrayBoth message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lane_msgs__msg__LaneMarkingProjectedArrayBoth__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lane_msgs
lane_msgs__msg__LaneMarkingProjectedArrayBoth *
lane_msgs__msg__LaneMarkingProjectedArrayBoth__create();

/// Destroy msg/LaneMarkingProjectedArrayBoth message.
/**
 * It calls
 * lane_msgs__msg__LaneMarkingProjectedArrayBoth__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lane_msgs
void
lane_msgs__msg__LaneMarkingProjectedArrayBoth__destroy(lane_msgs__msg__LaneMarkingProjectedArrayBoth * msg);

/// Check for msg/LaneMarkingProjectedArrayBoth message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lane_msgs
bool
lane_msgs__msg__LaneMarkingProjectedArrayBoth__are_equal(const lane_msgs__msg__LaneMarkingProjectedArrayBoth * lhs, const lane_msgs__msg__LaneMarkingProjectedArrayBoth * rhs);

/// Copy a msg/LaneMarkingProjectedArrayBoth message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_lane_msgs
bool
lane_msgs__msg__LaneMarkingProjectedArrayBoth__copy(
  const lane_msgs__msg__LaneMarkingProjectedArrayBoth * input,
  lane_msgs__msg__LaneMarkingProjectedArrayBoth * output);

/// Initialize array of msg/LaneMarkingProjectedArrayBoth messages.
/**
 * It allocates the memory for the number of elements and calls
 * lane_msgs__msg__LaneMarkingProjectedArrayBoth__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lane_msgs
bool
lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence__init(lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence * array, size_t size);

/// Finalize array of msg/LaneMarkingProjectedArrayBoth messages.
/**
 * It calls
 * lane_msgs__msg__LaneMarkingProjectedArrayBoth__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lane_msgs
void
lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence__fini(lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence * array);

/// Create array of msg/LaneMarkingProjectedArrayBoth messages.
/**
 * It allocates the memory for the array and calls
 * lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lane_msgs
lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence *
lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence__create(size_t size);

/// Destroy array of msg/LaneMarkingProjectedArrayBoth messages.
/**
 * It calls
 * lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lane_msgs
void
lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence__destroy(lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence * array);

/// Check for msg/LaneMarkingProjectedArrayBoth message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lane_msgs
bool
lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence__are_equal(const lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence * lhs, const lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence * rhs);

/// Copy an array of msg/LaneMarkingProjectedArrayBoth messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_lane_msgs
bool
lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence__copy(
  const lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence * input,
  lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED_ARRAY_BOTH__FUNCTIONS_H_
