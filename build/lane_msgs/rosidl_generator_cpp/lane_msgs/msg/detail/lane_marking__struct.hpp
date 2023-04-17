// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lane_msgs:msg/LaneMarking.idl
// generated code does not contain a copyright notice

#ifndef LANE_MSGS__MSG__DETAIL__LANE_MARKING__STRUCT_HPP_
#define LANE_MSGS__MSG__DETAIL__LANE_MARKING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lane_msgs__msg__LaneMarking __attribute__((deprecated))
#else
# define DEPRECATED__lane_msgs__msg__LaneMarking __declspec(deprecated)
#endif

namespace lane_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneMarking_
{
  using Type = LaneMarking_<ContainerAllocator>;

  explicit LaneMarking_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->u = 0.0;
      this->v = 0.0;
    }
  }

  explicit LaneMarking_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->u = 0.0;
      this->v = 0.0;
    }
  }

  // field types and members
  using _u_type =
    double;
  _u_type u;
  using _v_type =
    double;
  _v_type v;

  // setters for named parameter idiom
  Type & set__u(
    const double & _arg)
  {
    this->u = _arg;
    return *this;
  }
  Type & set__v(
    const double & _arg)
  {
    this->v = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lane_msgs::msg::LaneMarking_<ContainerAllocator> *;
  using ConstRawPtr =
    const lane_msgs::msg::LaneMarking_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lane_msgs::msg::LaneMarking_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lane_msgs::msg::LaneMarking_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lane_msgs::msg::LaneMarking_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lane_msgs::msg::LaneMarking_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lane_msgs::msg::LaneMarking_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lane_msgs::msg::LaneMarking_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lane_msgs::msg::LaneMarking_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lane_msgs::msg::LaneMarking_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lane_msgs__msg__LaneMarking
    std::shared_ptr<lane_msgs::msg::LaneMarking_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lane_msgs__msg__LaneMarking
    std::shared_ptr<lane_msgs::msg::LaneMarking_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneMarking_ & other) const
  {
    if (this->u != other.u) {
      return false;
    }
    if (this->v != other.v) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneMarking_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneMarking_

// alias to use template instance with default allocator
using LaneMarking =
  lane_msgs::msg::LaneMarking_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lane_msgs

#endif  // LANE_MSGS__MSG__DETAIL__LANE_MARKING__STRUCT_HPP_
