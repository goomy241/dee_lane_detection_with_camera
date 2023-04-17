// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lane_msgs:msg/LaneMarkingProjected.idl
// generated code does not contain a copyright notice

#ifndef LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED__STRUCT_HPP_
#define LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lane_msgs__msg__LaneMarkingProjected __attribute__((deprecated))
#else
# define DEPRECATED__lane_msgs__msg__LaneMarkingProjected __declspec(deprecated)
#endif

namespace lane_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneMarkingProjected_
{
  using Type = LaneMarkingProjected_<ContainerAllocator>;

  explicit LaneMarkingProjected_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  explicit LaneMarkingProjected_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lane_msgs::msg::LaneMarkingProjected_<ContainerAllocator> *;
  using ConstRawPtr =
    const lane_msgs::msg::LaneMarkingProjected_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lane_msgs::msg::LaneMarkingProjected_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lane_msgs::msg::LaneMarkingProjected_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lane_msgs::msg::LaneMarkingProjected_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lane_msgs::msg::LaneMarkingProjected_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lane_msgs::msg::LaneMarkingProjected_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lane_msgs::msg::LaneMarkingProjected_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lane_msgs::msg::LaneMarkingProjected_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lane_msgs::msg::LaneMarkingProjected_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lane_msgs__msg__LaneMarkingProjected
    std::shared_ptr<lane_msgs::msg::LaneMarkingProjected_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lane_msgs__msg__LaneMarkingProjected
    std::shared_ptr<lane_msgs::msg::LaneMarkingProjected_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneMarkingProjected_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneMarkingProjected_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneMarkingProjected_

// alias to use template instance with default allocator
using LaneMarkingProjected =
  lane_msgs::msg::LaneMarkingProjected_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lane_msgs

#endif  // LANE_MSGS__MSG__DETAIL__LANE_MARKING_PROJECTED__STRUCT_HPP_
