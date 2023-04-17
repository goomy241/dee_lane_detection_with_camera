// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lane_msgs:msg/LaneMarkingProjectedArray.idl
// generated code does not contain a copyright notice

#ifndef LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED_ARRAY__FUNCTIONS_H_
#define LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lane_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "lane_msgs/msg/detail/lane_marking_projected_array__struct.h"

/// Initialize msg/LaneMarkingProjectedArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lane_msgs__msg__LaneMarkingProjectedArray
 * )) before or use
 * lane_msgs__msg__LaneMarkingProjectedArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lane_msgs
bool
lane_msgs__msg__LaneMarkingProjectedArray__init(lane_msgs__msg__LaneMarkingProjectedArray * msg);

/// Finalize msg/LaneMarkingProjectedArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lane_msgs
void
lane_msgs__msg__LaneMarkingProjectedArray__fini(lane_msgs__msg__LaneMarkingProjectedArray * msg);

/// Create msg/LaneMarkingProjectedArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lane_msgs__msg__LaneMarkingProjectedArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lane_msgs
lane_msgs__msg__LaneMarkingProjectedArray *
lane_msgs__msg__LaneMarkingProjectedArray__create();

/// Destroy msg/LaneMarkingProjectedArray message.
/**
 * It calls
 * lane_msgs__msg__LaneMarkingProjectedArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lane_msgs
void
lane_msgs__msg__LaneMarkingProjectedArray__destroy(lane_msgs__msg__LaneMarkingProjectedArray * msg);

/// Check for msg/LaneMarkingProjectedArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lane_msgs
bool
lane_msgs__msg__LaneMarkingProjectedArray__are_equal(const lane_msgs__msg__LaneMarkingProjectedArray * lhs, const lane_msgs__msg__LaneMarkingProjectedArray * rhs);

/// Copy a msg/LaneMarkingProjectedArray message.
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
lane_msgs__msg__LaneMarkingProjectedArray__copy(
  const lane_msgs__msg__LaneMarkingProjectedArray * input,
  lane_msgs__msg__LaneMarkingProjectedArray * output);

/// Initialize array of msg/LaneMarkingProjectedArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * lane_msgs__msg__LaneMarkingProjectedArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lane_msgs
bool
lane_msgs__msg__LaneMarkingProjectedArray__Sequence__init(lane_msgs__msg__LaneMarkingProjectedArray__Sequence * array, size_t size);

/// Finalize array of msg/LaneMarkingProjectedArray messages.
/**
 * It calls
 * lane_msgs__msg__LaneMarkingProjectedArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lane_msgs
void
lane_msgs__msg__LaneMarkingProjectedArray__Sequence__fini(lane_msgs__msg__LaneMarkingProjectedArray__Sequence * array);

/// Create array of msg/LaneMarkingProjectedArray messages.
/**
 * It allocates the memory for the array and calls
 * lane_msgs__msg__LaneMarkingProjectedArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lane_msgs
lane_msgs__msg__LaneMarkingProjectedArray__Sequence *
lane_msgs__msg__LaneMarkingProjectedArray__Sequence__create(size_t size);

/// Destroy array of msg/LaneMarkingProjectedArray messages.
/**
 * It calls
 * lane_msgs__msg__LaneMarkingProjectedArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lane_msgs
void
lane_msgs__msg__LaneMarkingProjectedArray__Sequence__destroy(lane_msgs__msg__LaneMarkingProjectedArray__Sequence * array);

/// Check for msg/LaneMarkingProjectedArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lane_msgs
bool
lane_msgs__msg__LaneMarkingProjectedArray__Sequence__are_equal(const lane_msgs__msg__LaneMarkingProjectedArray__Sequence * lhs, const lane_msgs__msg__LaneMarkingProjectedArray__Sequence * rhs);

/// Copy an array of msg/LaneMarkingProjectedArray messages.
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
lane_msgs__msg__LaneMarkingProjectedArray__Sequence__copy(
  const lane_msgs__msg__LaneMarkingProjectedArray__Sequence * input,
  lane_msgs__msg__LaneMarkingProjectedArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED_ARRAY__FUNCTIONS_H_