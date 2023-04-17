// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lane_msgs:msg/LaneMarkingArrayBoth.idl
// generated code does not contain a copyright notice

#ifndef LANE_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY_BOTH__STRUCT_HPP_
#define LANE_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY_BOTH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'markings_left'
// Member 'markings_right'
#include "lane_msgs/msg/detail/lane_marking__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lane_msgs__msg__LaneMarkingArrayBoth __attribute__((deprecated))
#else
# define DEPRECATED__lane_msgs__msg__LaneMarkingArrayBoth __declspec(deprecated)
#endif

namespace lane_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneMarkingArrayBoth_
{
  using Type = LaneMarkingArrayBoth_<ContainerAllocator>;

  explicit LaneMarkingArrayBoth_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit LaneMarkingArrayBoth_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _markings_left_type =
    std::vector<lane_msgs::msg::LaneMarking_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<lane_msgs::msg::LaneMarking_<ContainerAllocator>>>;
  _markings_left_type markings_left;
  using _markings_right_type =
    std::vector<lane_msgs::msg::LaneMarking_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<lane_msgs::msg::LaneMarking_<ContainerAllocator>>>;
  _markings_right_type markings_right;

  // setters for named parameter idiom
  Type & set__markings_left(
    const std::vector<lane_msgs::msg::LaneMarking_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<lane_msgs::msg::LaneMarking_<ContainerAllocator>>> & _arg)
  {
    this->markings_left = _arg;
    return *this;
  }
  Type & set__markings_right(
    const std::vector<lane_msgs::msg::LaneMarking_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<lane_msgs::msg::LaneMarking_<ContainerAllocator>>> & _arg)
  {
    this->markings_right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lane_msgs::msg::LaneMarkingArrayBoth_<ContainerAllocator> *;
  using ConstRawPtr =
    const lane_msgs::msg::LaneMarkingArrayBoth_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lane_msgs::msg::LaneMarkingArrayBoth_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lane_msgs::msg::LaneMarkingArrayBoth_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lane_msgs::msg::LaneMarkingArrayBoth_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lane_msgs::msg::LaneMarkingArrayBoth_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lane_msgs::msg::LaneMarkingArrayBoth_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lane_msgs::msg::LaneMarkingArrayBoth_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lane_msgs::msg::LaneMarkingArrayBoth_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lane_msgs::msg::LaneMarkingArrayBoth_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lane_msgs__msg__LaneMarkingArrayBoth
    std::shared_ptr<lane_msgs::msg::LaneMarkingArrayBoth_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lane_msgs__msg__LaneMarkingArrayBoth
    std::shared_ptr<lane_msgs::msg::LaneMarkingArrayBoth_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneMarkingArrayBoth_ & other) const
  {
    if (this->markings_left != other.markings_left) {
      return false;
    }
    if (this->markings_right != other.markings_right) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneMarkingArrayBoth_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneMarkingArrayBoth_

// alias to use template instance with default allocator
using LaneMarkingArrayBoth =
  lane_msgs::msg::LaneMarkingArrayBoth_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lane_msgs

#endif  // LANE_MSGS__MSG__DETAIL__LANE_MARKING_ARRAY_BOTH__STRUCT_HPP_
