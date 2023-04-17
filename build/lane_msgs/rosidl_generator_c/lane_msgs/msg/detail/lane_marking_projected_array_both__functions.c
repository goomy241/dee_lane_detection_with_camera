// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lane_msgs:msg/LaneMarkingProjectedArrayBoth.idl
// generated code does not contain a copyright notice
#include "lane_msgs/msg/detail/lane_marking_projected_array_both__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `markings_left`
// Member `markings_right`
#include "lane_msgs/msg/detail/lane_marking_projected__functions.h"

bool
lane_msgs__msg__LaneMarkingProjectedArrayBoth__init(lane_msgs__msg__LaneMarkingProjectedArrayBoth * msg)
{
  if (!msg) {
    return false;
  }
  // markings_left
  if (!lane_msgs__msg__LaneMarkingProjected__Sequence__init(&msg->markings_left, 0)) {
    lane_msgs__msg__LaneMarkingProjectedArrayBoth__fini(msg);
    return false;
  }
  // markings_right
  if (!lane_msgs__msg__LaneMarkingProjected__Sequence__init(&msg->markings_right, 0)) {
    lane_msgs__msg__LaneMarkingProjectedArrayBoth__fini(msg);
    return false;
  }
  return true;
}

void
lane_msgs__msg__LaneMarkingProjectedArrayBoth__fini(lane_msgs__msg__LaneMarkingProjectedArrayBoth * msg)
{
  if (!msg) {
    return;
  }
  // markings_left
  lane_msgs__msg__LaneMarkingProjected__Sequence__fini(&msg->markings_left);
  // markings_right
  lane_msgs__msg__LaneMarkingProjected__Sequence__fini(&msg->markings_right);
}

bool
lane_msgs__msg__LaneMarkingProjectedArrayBoth__are_equal(const lane_msgs__msg__LaneMarkingProjectedArrayBoth * lhs, const lane_msgs__msg__LaneMarkingProjectedArrayBoth * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // markings_left
  if (!lane_msgs__msg__LaneMarkingProjected__Sequence__are_equal(
      &(lhs->markings_left), &(rhs->markings_left)))
  {
    return false;
  }
  // markings_right
  if (!lane_msgs__msg__LaneMarkingProjected__Sequence__are_equal(
      &(lhs->markings_right), &(rhs->markings_right)))
  {
    return false;
  }
  return true;
}

bool
lane_msgs__msg__LaneMarkingProjectedArrayBoth__copy(
  const lane_msgs__msg__LaneMarkingProjectedArrayBoth * input,
  lane_msgs__msg__LaneMarkingProjectedArrayBoth * output)
{
  if (!input || !output) {
    return false;
  }
  // markings_left
  if (!lane_msgs__msg__LaneMarkingProjected__Sequence__copy(
      &(input->markings_left), &(output->markings_left)))
  {
    return false;
  }
  // markings_right
  if (!lane_msgs__msg__LaneMarkingProjected__Sequence__copy(
      &(input->markings_right), &(output->markings_right)))
  {
    return false;
  }
  return true;
}

lane_msgs__msg__LaneMarkingProjectedArrayBoth *
lane_msgs__msg__LaneMarkingProjectedArrayBoth__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lane_msgs__msg__LaneMarkingProjectedArrayBoth * msg = (lane_msgs__msg__LaneMarkingProjectedArrayBoth *)allocator.allocate(sizeof(lane_msgs__msg__LaneMarkingProjectedArrayBoth), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lane_msgs__msg__LaneMarkingProjectedArrayBoth));
  bool success = lane_msgs__msg__LaneMarkingProjectedArrayBoth__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lane_msgs__msg__LaneMarkingProjectedArrayBoth__destroy(lane_msgs__msg__LaneMarkingProjectedArrayBoth * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lane_msgs__msg__LaneMarkingProjectedArrayBoth__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence__init(lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lane_msgs__msg__LaneMarkingProjectedArrayBoth * data = NULL;

  if (size) {
    data = (lane_msgs__msg__LaneMarkingProjectedArrayBoth *)allocator.zero_allocate(size, sizeof(lane_msgs__msg__LaneMarkingProjectedArrayBoth), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lane_msgs__msg__LaneMarkingProjectedArrayBoth__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lane_msgs__msg__LaneMarkingProjectedArrayBoth__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence__fini(lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lane_msgs__msg__LaneMarkingProjectedArrayBoth__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence *
lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence * array = (lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence *)allocator.allocate(sizeof(lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence__destroy(lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence__are_equal(const lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence * lhs, const lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lane_msgs__msg__LaneMarkingProjectedArrayBoth__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence__copy(
  const lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence * input,
  lane_msgs__msg__LaneMarkingProjectedArrayBoth__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lane_msgs__msg__LaneMarkingProjectedArrayBoth);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lane_msgs__msg__LaneMarkingProjectedArrayBoth * data =
      (lane_msgs__msg__LaneMarkingProjectedArrayBoth *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lane_msgs__msg__LaneMarkingProjectedArrayBoth__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lane_msgs__msg__LaneMarkingProjectedArrayBoth__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lane_msgs__msg__LaneMarkingProjectedArrayBoth__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
