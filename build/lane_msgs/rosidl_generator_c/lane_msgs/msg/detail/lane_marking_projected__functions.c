// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lane_msgs:msg/LaneMarkingProjected.idl
// generated code does not contain a copyright notice
#include "lane_msgs/msg/detail/lane_marking_projected__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
lane_msgs__msg__LaneMarkingProjected__init(lane_msgs__msg__LaneMarkingProjected * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  return true;
}

void
lane_msgs__msg__LaneMarkingProjected__fini(lane_msgs__msg__LaneMarkingProjected * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
}

bool
lane_msgs__msg__LaneMarkingProjected__are_equal(const lane_msgs__msg__LaneMarkingProjected * lhs, const lane_msgs__msg__LaneMarkingProjected * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  return true;
}

bool
lane_msgs__msg__LaneMarkingProjected__copy(
  const lane_msgs__msg__LaneMarkingProjected * input,
  lane_msgs__msg__LaneMarkingProjected * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  return true;
}

lane_msgs__msg__LaneMarkingProjected *
lane_msgs__msg__LaneMarkingProjected__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lane_msgs__msg__LaneMarkingProjected * msg = (lane_msgs__msg__LaneMarkingProjected *)allocator.allocate(sizeof(lane_msgs__msg__LaneMarkingProjected), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lane_msgs__msg__LaneMarkingProjected));
  bool success = lane_msgs__msg__LaneMarkingProjected__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lane_msgs__msg__LaneMarkingProjected__destroy(lane_msgs__msg__LaneMarkingProjected * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lane_msgs__msg__LaneMarkingProjected__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lane_msgs__msg__LaneMarkingProjected__Sequence__init(lane_msgs__msg__LaneMarkingProjected__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lane_msgs__msg__LaneMarkingProjected * data = NULL;

  if (size) {
    data = (lane_msgs__msg__LaneMarkingProjected *)allocator.zero_allocate(size, sizeof(lane_msgs__msg__LaneMarkingProjected), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lane_msgs__msg__LaneMarkingProjected__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lane_msgs__msg__LaneMarkingProjected__fini(&data[i - 1]);
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
lane_msgs__msg__LaneMarkingProjected__Sequence__fini(lane_msgs__msg__LaneMarkingProjected__Sequence * array)
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
      lane_msgs__msg__LaneMarkingProjected__fini(&array->data[i]);
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

lane_msgs__msg__LaneMarkingProjected__Sequence *
lane_msgs__msg__LaneMarkingProjected__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lane_msgs__msg__LaneMarkingProjected__Sequence * array = (lane_msgs__msg__LaneMarkingProjected__Sequence *)allocator.allocate(sizeof(lane_msgs__msg__LaneMarkingProjected__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lane_msgs__msg__LaneMarkingProjected__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lane_msgs__msg__LaneMarkingProjected__Sequence__destroy(lane_msgs__msg__LaneMarkingProjected__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lane_msgs__msg__LaneMarkingProjected__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lane_msgs__msg__LaneMarkingProjected__Sequence__are_equal(const lane_msgs__msg__LaneMarkingProjected__Sequence * lhs, const lane_msgs__msg__LaneMarkingProjected__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lane_msgs__msg__LaneMarkingProjected__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lane_msgs__msg__LaneMarkingProjected__Sequence__copy(
  const lane_msgs__msg__LaneMarkingProjected__Sequence * input,
  lane_msgs__msg__LaneMarkingProjected__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lane_msgs__msg__LaneMarkingProjected);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lane_msgs__msg__LaneMarkingProjected * data =
      (lane_msgs__msg__LaneMarkingProjected *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lane_msgs__msg__LaneMarkingProjected__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lane_msgs__msg__LaneMarkingProjected__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lane_msgs__msg__LaneMarkingProjected__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
