// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/GetLinkProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__GET_LINK_PROPERTIES__STRUCT_H_
#define GAZEBO_MSGS__SRV__GET_LINK_PROPERTIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'link_name'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/GetLinkProperties in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__GetLinkProperties_Request
{
  rosidl_generator_c__String link_name;
} gazebo_msgs__srv__GetLinkProperties_Request;

// Struct for a sequence of gazebo_msgs__srv__GetLinkProperties_Request.
typedef struct gazebo_msgs__srv__GetLinkProperties_Request__Sequence
{
  gazebo_msgs__srv__GetLinkProperties_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__GetLinkProperties_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'com'
#include "geometry_msgs/msg/pose__struct.h"
// Member 'status_message'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/GetLinkProperties in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__GetLinkProperties_Response
{
  geometry_msgs__msg__Pose com;
  bool gravity_mode;
  double mass;
  double ixx;
  double ixy;
  double ixz;
  double iyy;
  double iyz;
  double izz;
  bool success;
  rosidl_generator_c__String status_message;
} gazebo_msgs__srv__GetLinkProperties_Response;

// Struct for a sequence of gazebo_msgs__srv__GetLinkProperties_Response.
typedef struct gazebo_msgs__srv__GetLinkProperties_Response__Sequence
{
  gazebo_msgs__srv__GetLinkProperties_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__GetLinkProperties_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__GET_LINK_PROPERTIES__STRUCT_H_
