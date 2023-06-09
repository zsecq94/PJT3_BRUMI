// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gazebo_msgs:srv/GetJointProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__GET_JOINT_PROPERTIES__STRUCT_HPP_
#define GAZEBO_MSGS__SRV__GET_JOINT_PROPERTIES__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__srv__GetJointProperties_Request __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__srv__GetJointProperties_Request __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetJointProperties_Request_
{
  using Type = GetJointProperties_Request_<ContainerAllocator>;

  explicit GetJointProperties_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_name = "";
    }
  }

  explicit GetJointProperties_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : joint_name(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint_name = "";
    }
  }

  // field types and members
  using _joint_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _joint_name_type joint_name;

  // setters for named parameter idiom
  Type & set__joint_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->joint_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gazebo_msgs::srv::GetJointProperties_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::srv::GetJointProperties_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::srv::GetJointProperties_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::srv::GetJointProperties_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::GetJointProperties_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::GetJointProperties_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::GetJointProperties_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::GetJointProperties_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::srv::GetJointProperties_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::srv::GetJointProperties_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__srv__GetJointProperties_Request
    std::shared_ptr<gazebo_msgs::srv::GetJointProperties_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__srv__GetJointProperties_Request
    std::shared_ptr<gazebo_msgs::srv::GetJointProperties_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetJointProperties_Request_ & other) const
  {
    if (this->joint_name != other.joint_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetJointProperties_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetJointProperties_Request_

// alias to use template instance with default allocator
using GetJointProperties_Request =
  gazebo_msgs::srv::GetJointProperties_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gazebo_msgs

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

#ifndef _WIN32
# define DEPRECATED__gazebo_msgs__srv__GetJointProperties_Response __attribute__((deprecated))
#else
# define DEPRECATED__gazebo_msgs__srv__GetJointProperties_Response __declspec(deprecated)
#endif

namespace gazebo_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetJointProperties_Response_
{
  using Type = GetJointProperties_Response_<ContainerAllocator>;

  explicit GetJointProperties_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->success = false;
      this->status_message = "";
    }
  }

  explicit GetJointProperties_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : status_message(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->success = false;
      this->status_message = "";
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _damping_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _damping_type damping;
  using _position_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _position_type position;
  using _rate_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _rate_type rate;
  using _success_type =
    bool;
  _success_type success;
  using _status_message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _status_message_type status_message;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__damping(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->damping = _arg;
    return *this;
  }
  Type & set__position(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__rate(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->rate = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__status_message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->status_message = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t REVOLUTE =
    0u;
  static constexpr uint8_t CONTINUOUS =
    1u;
  static constexpr uint8_t PRISMATIC =
    2u;
  static constexpr uint8_t FIXED =
    3u;
  static constexpr uint8_t BALL =
    4u;
  static constexpr uint8_t UNIVERSAL =
    5u;

  // pointer types
  using RawPtr =
    gazebo_msgs::srv::GetJointProperties_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gazebo_msgs::srv::GetJointProperties_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gazebo_msgs::srv::GetJointProperties_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gazebo_msgs::srv::GetJointProperties_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::GetJointProperties_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::GetJointProperties_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gazebo_msgs::srv::GetJointProperties_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gazebo_msgs::srv::GetJointProperties_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gazebo_msgs::srv::GetJointProperties_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gazebo_msgs::srv::GetJointProperties_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gazebo_msgs__srv__GetJointProperties_Response
    std::shared_ptr<gazebo_msgs::srv::GetJointProperties_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gazebo_msgs__srv__GetJointProperties_Response
    std::shared_ptr<gazebo_msgs::srv::GetJointProperties_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetJointProperties_Response_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->damping != other.damping) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->rate != other.rate) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->status_message != other.status_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetJointProperties_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetJointProperties_Response_

// alias to use template instance with default allocator
using GetJointProperties_Response =
  gazebo_msgs::srv::GetJointProperties_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t GetJointProperties_Response_<ContainerAllocator>::REVOLUTE;
template<typename ContainerAllocator>
constexpr uint8_t GetJointProperties_Response_<ContainerAllocator>::CONTINUOUS;
template<typename ContainerAllocator>
constexpr uint8_t GetJointProperties_Response_<ContainerAllocator>::PRISMATIC;
template<typename ContainerAllocator>
constexpr uint8_t GetJointProperties_Response_<ContainerAllocator>::FIXED;
template<typename ContainerAllocator>
constexpr uint8_t GetJointProperties_Response_<ContainerAllocator>::BALL;
template<typename ContainerAllocator>
constexpr uint8_t GetJointProperties_Response_<ContainerAllocator>::UNIVERSAL;

}  // namespace srv

}  // namespace gazebo_msgs

namespace gazebo_msgs
{

namespace srv
{

struct GetJointProperties
{
  using Request = gazebo_msgs::srv::GetJointProperties_Request;
  using Response = gazebo_msgs::srv::GetJointProperties_Response;
};

}  // namespace srv

}  // namespace gazebo_msgs

#endif  // GAZEBO_MSGS__SRV__GET_JOINT_PROPERTIES__STRUCT_HPP_
