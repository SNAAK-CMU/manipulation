// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from snaak_manipulation:action/Pickup.idl
// generated code does not contain a copyright notice

#ifndef SNAAK_MANIPULATION__ACTION__DETAIL__PICKUP__STRUCT_H_
#define SNAAK_MANIPULATION__ACTION__DETAIL__PICKUP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Pickup in the package snaak_manipulation.
typedef struct snaak_manipulation__action__Pickup_Goal
{
  float x;
  float y;
  float depth;
} snaak_manipulation__action__Pickup_Goal;

// Struct for a sequence of snaak_manipulation__action__Pickup_Goal.
typedef struct snaak_manipulation__action__Pickup_Goal__Sequence
{
  snaak_manipulation__action__Pickup_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snaak_manipulation__action__Pickup_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'end_pose'
#include "geometry_msgs/msg/detail/transform__struct.h"

/// Struct defined in action/Pickup in the package snaak_manipulation.
typedef struct snaak_manipulation__action__Pickup_Result
{
  geometry_msgs__msg__Transform end_pose;
} snaak_manipulation__action__Pickup_Result;

// Struct for a sequence of snaak_manipulation__action__Pickup_Result.
typedef struct snaak_manipulation__action__Pickup_Result__Sequence
{
  snaak_manipulation__action__Pickup_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snaak_manipulation__action__Pickup_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Pickup in the package snaak_manipulation.
typedef struct snaak_manipulation__action__Pickup_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} snaak_manipulation__action__Pickup_Feedback;

// Struct for a sequence of snaak_manipulation__action__Pickup_Feedback.
typedef struct snaak_manipulation__action__Pickup_Feedback__Sequence
{
  snaak_manipulation__action__Pickup_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snaak_manipulation__action__Pickup_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "snaak_manipulation/action/detail/pickup__struct.h"

/// Struct defined in action/Pickup in the package snaak_manipulation.
typedef struct snaak_manipulation__action__Pickup_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  snaak_manipulation__action__Pickup_Goal goal;
} snaak_manipulation__action__Pickup_SendGoal_Request;

// Struct for a sequence of snaak_manipulation__action__Pickup_SendGoal_Request.
typedef struct snaak_manipulation__action__Pickup_SendGoal_Request__Sequence
{
  snaak_manipulation__action__Pickup_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snaak_manipulation__action__Pickup_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Pickup in the package snaak_manipulation.
typedef struct snaak_manipulation__action__Pickup_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} snaak_manipulation__action__Pickup_SendGoal_Response;

// Struct for a sequence of snaak_manipulation__action__Pickup_SendGoal_Response.
typedef struct snaak_manipulation__action__Pickup_SendGoal_Response__Sequence
{
  snaak_manipulation__action__Pickup_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snaak_manipulation__action__Pickup_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Pickup in the package snaak_manipulation.
typedef struct snaak_manipulation__action__Pickup_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} snaak_manipulation__action__Pickup_GetResult_Request;

// Struct for a sequence of snaak_manipulation__action__Pickup_GetResult_Request.
typedef struct snaak_manipulation__action__Pickup_GetResult_Request__Sequence
{
  snaak_manipulation__action__Pickup_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snaak_manipulation__action__Pickup_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "snaak_manipulation/action/detail/pickup__struct.h"

/// Struct defined in action/Pickup in the package snaak_manipulation.
typedef struct snaak_manipulation__action__Pickup_GetResult_Response
{
  int8_t status;
  snaak_manipulation__action__Pickup_Result result;
} snaak_manipulation__action__Pickup_GetResult_Response;

// Struct for a sequence of snaak_manipulation__action__Pickup_GetResult_Response.
typedef struct snaak_manipulation__action__Pickup_GetResult_Response__Sequence
{
  snaak_manipulation__action__Pickup_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snaak_manipulation__action__Pickup_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "snaak_manipulation/action/detail/pickup__struct.h"

/// Struct defined in action/Pickup in the package snaak_manipulation.
typedef struct snaak_manipulation__action__Pickup_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  snaak_manipulation__action__Pickup_Feedback feedback;
} snaak_manipulation__action__Pickup_FeedbackMessage;

// Struct for a sequence of snaak_manipulation__action__Pickup_FeedbackMessage.
typedef struct snaak_manipulation__action__Pickup_FeedbackMessage__Sequence
{
  snaak_manipulation__action__Pickup_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} snaak_manipulation__action__Pickup_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SNAAK_MANIPULATION__ACTION__DETAIL__PICKUP__STRUCT_H_
