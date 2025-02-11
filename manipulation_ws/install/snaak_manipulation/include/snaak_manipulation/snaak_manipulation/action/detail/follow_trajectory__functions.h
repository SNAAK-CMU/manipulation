// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from snaak_manipulation:action/FollowTrajectory.idl
// generated code does not contain a copyright notice

#ifndef SNAAK_MANIPULATION__ACTION__DETAIL__FOLLOW_TRAJECTORY__FUNCTIONS_H_
#define SNAAK_MANIPULATION__ACTION__DETAIL__FOLLOW_TRAJECTORY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "snaak_manipulation/msg/rosidl_generator_c__visibility_control.h"

#include "snaak_manipulation/action/detail/follow_trajectory__struct.h"

/// Initialize action/FollowTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * snaak_manipulation__action__FollowTrajectory_Goal
 * )) before or use
 * snaak_manipulation__action__FollowTrajectory_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_Goal__init(snaak_manipulation__action__FollowTrajectory_Goal * msg);

/// Finalize action/FollowTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_Goal__fini(snaak_manipulation__action__FollowTrajectory_Goal * msg);

/// Create action/FollowTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * snaak_manipulation__action__FollowTrajectory_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
snaak_manipulation__action__FollowTrajectory_Goal *
snaak_manipulation__action__FollowTrajectory_Goal__create();

/// Destroy action/FollowTrajectory message.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_Goal__destroy(snaak_manipulation__action__FollowTrajectory_Goal * msg);

/// Check for action/FollowTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_Goal__are_equal(const snaak_manipulation__action__FollowTrajectory_Goal * lhs, const snaak_manipulation__action__FollowTrajectory_Goal * rhs);

/// Copy a action/FollowTrajectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_Goal__copy(
  const snaak_manipulation__action__FollowTrajectory_Goal * input,
  snaak_manipulation__action__FollowTrajectory_Goal * output);

/// Initialize array of action/FollowTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * snaak_manipulation__action__FollowTrajectory_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_Goal__Sequence__init(snaak_manipulation__action__FollowTrajectory_Goal__Sequence * array, size_t size);

/// Finalize array of action/FollowTrajectory messages.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_Goal__Sequence__fini(snaak_manipulation__action__FollowTrajectory_Goal__Sequence * array);

/// Create array of action/FollowTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * snaak_manipulation__action__FollowTrajectory_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
snaak_manipulation__action__FollowTrajectory_Goal__Sequence *
snaak_manipulation__action__FollowTrajectory_Goal__Sequence__create(size_t size);

/// Destroy array of action/FollowTrajectory messages.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_Goal__Sequence__destroy(snaak_manipulation__action__FollowTrajectory_Goal__Sequence * array);

/// Check for action/FollowTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_Goal__Sequence__are_equal(const snaak_manipulation__action__FollowTrajectory_Goal__Sequence * lhs, const snaak_manipulation__action__FollowTrajectory_Goal__Sequence * rhs);

/// Copy an array of action/FollowTrajectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_Goal__Sequence__copy(
  const snaak_manipulation__action__FollowTrajectory_Goal__Sequence * input,
  snaak_manipulation__action__FollowTrajectory_Goal__Sequence * output);

/// Initialize action/FollowTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * snaak_manipulation__action__FollowTrajectory_Result
 * )) before or use
 * snaak_manipulation__action__FollowTrajectory_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_Result__init(snaak_manipulation__action__FollowTrajectory_Result * msg);

/// Finalize action/FollowTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_Result__fini(snaak_manipulation__action__FollowTrajectory_Result * msg);

/// Create action/FollowTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * snaak_manipulation__action__FollowTrajectory_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
snaak_manipulation__action__FollowTrajectory_Result *
snaak_manipulation__action__FollowTrajectory_Result__create();

/// Destroy action/FollowTrajectory message.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_Result__destroy(snaak_manipulation__action__FollowTrajectory_Result * msg);

/// Check for action/FollowTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_Result__are_equal(const snaak_manipulation__action__FollowTrajectory_Result * lhs, const snaak_manipulation__action__FollowTrajectory_Result * rhs);

/// Copy a action/FollowTrajectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_Result__copy(
  const snaak_manipulation__action__FollowTrajectory_Result * input,
  snaak_manipulation__action__FollowTrajectory_Result * output);

/// Initialize array of action/FollowTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * snaak_manipulation__action__FollowTrajectory_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_Result__Sequence__init(snaak_manipulation__action__FollowTrajectory_Result__Sequence * array, size_t size);

/// Finalize array of action/FollowTrajectory messages.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_Result__Sequence__fini(snaak_manipulation__action__FollowTrajectory_Result__Sequence * array);

/// Create array of action/FollowTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * snaak_manipulation__action__FollowTrajectory_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
snaak_manipulation__action__FollowTrajectory_Result__Sequence *
snaak_manipulation__action__FollowTrajectory_Result__Sequence__create(size_t size);

/// Destroy array of action/FollowTrajectory messages.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_Result__Sequence__destroy(snaak_manipulation__action__FollowTrajectory_Result__Sequence * array);

/// Check for action/FollowTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_Result__Sequence__are_equal(const snaak_manipulation__action__FollowTrajectory_Result__Sequence * lhs, const snaak_manipulation__action__FollowTrajectory_Result__Sequence * rhs);

/// Copy an array of action/FollowTrajectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_Result__Sequence__copy(
  const snaak_manipulation__action__FollowTrajectory_Result__Sequence * input,
  snaak_manipulation__action__FollowTrajectory_Result__Sequence * output);

/// Initialize action/FollowTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * snaak_manipulation__action__FollowTrajectory_Feedback
 * )) before or use
 * snaak_manipulation__action__FollowTrajectory_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_Feedback__init(snaak_manipulation__action__FollowTrajectory_Feedback * msg);

/// Finalize action/FollowTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_Feedback__fini(snaak_manipulation__action__FollowTrajectory_Feedback * msg);

/// Create action/FollowTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * snaak_manipulation__action__FollowTrajectory_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
snaak_manipulation__action__FollowTrajectory_Feedback *
snaak_manipulation__action__FollowTrajectory_Feedback__create();

/// Destroy action/FollowTrajectory message.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_Feedback__destroy(snaak_manipulation__action__FollowTrajectory_Feedback * msg);

/// Check for action/FollowTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_Feedback__are_equal(const snaak_manipulation__action__FollowTrajectory_Feedback * lhs, const snaak_manipulation__action__FollowTrajectory_Feedback * rhs);

/// Copy a action/FollowTrajectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_Feedback__copy(
  const snaak_manipulation__action__FollowTrajectory_Feedback * input,
  snaak_manipulation__action__FollowTrajectory_Feedback * output);

/// Initialize array of action/FollowTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * snaak_manipulation__action__FollowTrajectory_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_Feedback__Sequence__init(snaak_manipulation__action__FollowTrajectory_Feedback__Sequence * array, size_t size);

/// Finalize array of action/FollowTrajectory messages.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_Feedback__Sequence__fini(snaak_manipulation__action__FollowTrajectory_Feedback__Sequence * array);

/// Create array of action/FollowTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * snaak_manipulation__action__FollowTrajectory_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
snaak_manipulation__action__FollowTrajectory_Feedback__Sequence *
snaak_manipulation__action__FollowTrajectory_Feedback__Sequence__create(size_t size);

/// Destroy array of action/FollowTrajectory messages.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_Feedback__Sequence__destroy(snaak_manipulation__action__FollowTrajectory_Feedback__Sequence * array);

/// Check for action/FollowTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_Feedback__Sequence__are_equal(const snaak_manipulation__action__FollowTrajectory_Feedback__Sequence * lhs, const snaak_manipulation__action__FollowTrajectory_Feedback__Sequence * rhs);

/// Copy an array of action/FollowTrajectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_Feedback__Sequence__copy(
  const snaak_manipulation__action__FollowTrajectory_Feedback__Sequence * input,
  snaak_manipulation__action__FollowTrajectory_Feedback__Sequence * output);

/// Initialize action/FollowTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * snaak_manipulation__action__FollowTrajectory_SendGoal_Request
 * )) before or use
 * snaak_manipulation__action__FollowTrajectory_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_SendGoal_Request__init(snaak_manipulation__action__FollowTrajectory_SendGoal_Request * msg);

/// Finalize action/FollowTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_SendGoal_Request__fini(snaak_manipulation__action__FollowTrajectory_SendGoal_Request * msg);

/// Create action/FollowTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * snaak_manipulation__action__FollowTrajectory_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
snaak_manipulation__action__FollowTrajectory_SendGoal_Request *
snaak_manipulation__action__FollowTrajectory_SendGoal_Request__create();

/// Destroy action/FollowTrajectory message.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_SendGoal_Request__destroy(snaak_manipulation__action__FollowTrajectory_SendGoal_Request * msg);

/// Check for action/FollowTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_SendGoal_Request__are_equal(const snaak_manipulation__action__FollowTrajectory_SendGoal_Request * lhs, const snaak_manipulation__action__FollowTrajectory_SendGoal_Request * rhs);

/// Copy a action/FollowTrajectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_SendGoal_Request__copy(
  const snaak_manipulation__action__FollowTrajectory_SendGoal_Request * input,
  snaak_manipulation__action__FollowTrajectory_SendGoal_Request * output);

/// Initialize array of action/FollowTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * snaak_manipulation__action__FollowTrajectory_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_SendGoal_Request__Sequence__init(snaak_manipulation__action__FollowTrajectory_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/FollowTrajectory messages.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_SendGoal_Request__Sequence__fini(snaak_manipulation__action__FollowTrajectory_SendGoal_Request__Sequence * array);

/// Create array of action/FollowTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * snaak_manipulation__action__FollowTrajectory_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
snaak_manipulation__action__FollowTrajectory_SendGoal_Request__Sequence *
snaak_manipulation__action__FollowTrajectory_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/FollowTrajectory messages.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_SendGoal_Request__Sequence__destroy(snaak_manipulation__action__FollowTrajectory_SendGoal_Request__Sequence * array);

/// Check for action/FollowTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_SendGoal_Request__Sequence__are_equal(const snaak_manipulation__action__FollowTrajectory_SendGoal_Request__Sequence * lhs, const snaak_manipulation__action__FollowTrajectory_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/FollowTrajectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_SendGoal_Request__Sequence__copy(
  const snaak_manipulation__action__FollowTrajectory_SendGoal_Request__Sequence * input,
  snaak_manipulation__action__FollowTrajectory_SendGoal_Request__Sequence * output);

/// Initialize action/FollowTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * snaak_manipulation__action__FollowTrajectory_SendGoal_Response
 * )) before or use
 * snaak_manipulation__action__FollowTrajectory_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_SendGoal_Response__init(snaak_manipulation__action__FollowTrajectory_SendGoal_Response * msg);

/// Finalize action/FollowTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_SendGoal_Response__fini(snaak_manipulation__action__FollowTrajectory_SendGoal_Response * msg);

/// Create action/FollowTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * snaak_manipulation__action__FollowTrajectory_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
snaak_manipulation__action__FollowTrajectory_SendGoal_Response *
snaak_manipulation__action__FollowTrajectory_SendGoal_Response__create();

/// Destroy action/FollowTrajectory message.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_SendGoal_Response__destroy(snaak_manipulation__action__FollowTrajectory_SendGoal_Response * msg);

/// Check for action/FollowTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_SendGoal_Response__are_equal(const snaak_manipulation__action__FollowTrajectory_SendGoal_Response * lhs, const snaak_manipulation__action__FollowTrajectory_SendGoal_Response * rhs);

/// Copy a action/FollowTrajectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_SendGoal_Response__copy(
  const snaak_manipulation__action__FollowTrajectory_SendGoal_Response * input,
  snaak_manipulation__action__FollowTrajectory_SendGoal_Response * output);

/// Initialize array of action/FollowTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * snaak_manipulation__action__FollowTrajectory_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_SendGoal_Response__Sequence__init(snaak_manipulation__action__FollowTrajectory_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/FollowTrajectory messages.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_SendGoal_Response__Sequence__fini(snaak_manipulation__action__FollowTrajectory_SendGoal_Response__Sequence * array);

/// Create array of action/FollowTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * snaak_manipulation__action__FollowTrajectory_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
snaak_manipulation__action__FollowTrajectory_SendGoal_Response__Sequence *
snaak_manipulation__action__FollowTrajectory_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/FollowTrajectory messages.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_SendGoal_Response__Sequence__destroy(snaak_manipulation__action__FollowTrajectory_SendGoal_Response__Sequence * array);

/// Check for action/FollowTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_SendGoal_Response__Sequence__are_equal(const snaak_manipulation__action__FollowTrajectory_SendGoal_Response__Sequence * lhs, const snaak_manipulation__action__FollowTrajectory_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/FollowTrajectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_SendGoal_Response__Sequence__copy(
  const snaak_manipulation__action__FollowTrajectory_SendGoal_Response__Sequence * input,
  snaak_manipulation__action__FollowTrajectory_SendGoal_Response__Sequence * output);

/// Initialize action/FollowTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * snaak_manipulation__action__FollowTrajectory_GetResult_Request
 * )) before or use
 * snaak_manipulation__action__FollowTrajectory_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_GetResult_Request__init(snaak_manipulation__action__FollowTrajectory_GetResult_Request * msg);

/// Finalize action/FollowTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_GetResult_Request__fini(snaak_manipulation__action__FollowTrajectory_GetResult_Request * msg);

/// Create action/FollowTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * snaak_manipulation__action__FollowTrajectory_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
snaak_manipulation__action__FollowTrajectory_GetResult_Request *
snaak_manipulation__action__FollowTrajectory_GetResult_Request__create();

/// Destroy action/FollowTrajectory message.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_GetResult_Request__destroy(snaak_manipulation__action__FollowTrajectory_GetResult_Request * msg);

/// Check for action/FollowTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_GetResult_Request__are_equal(const snaak_manipulation__action__FollowTrajectory_GetResult_Request * lhs, const snaak_manipulation__action__FollowTrajectory_GetResult_Request * rhs);

/// Copy a action/FollowTrajectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_GetResult_Request__copy(
  const snaak_manipulation__action__FollowTrajectory_GetResult_Request * input,
  snaak_manipulation__action__FollowTrajectory_GetResult_Request * output);

/// Initialize array of action/FollowTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * snaak_manipulation__action__FollowTrajectory_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_GetResult_Request__Sequence__init(snaak_manipulation__action__FollowTrajectory_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/FollowTrajectory messages.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_GetResult_Request__Sequence__fini(snaak_manipulation__action__FollowTrajectory_GetResult_Request__Sequence * array);

/// Create array of action/FollowTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * snaak_manipulation__action__FollowTrajectory_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
snaak_manipulation__action__FollowTrajectory_GetResult_Request__Sequence *
snaak_manipulation__action__FollowTrajectory_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/FollowTrajectory messages.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_GetResult_Request__Sequence__destroy(snaak_manipulation__action__FollowTrajectory_GetResult_Request__Sequence * array);

/// Check for action/FollowTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_GetResult_Request__Sequence__are_equal(const snaak_manipulation__action__FollowTrajectory_GetResult_Request__Sequence * lhs, const snaak_manipulation__action__FollowTrajectory_GetResult_Request__Sequence * rhs);

/// Copy an array of action/FollowTrajectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_GetResult_Request__Sequence__copy(
  const snaak_manipulation__action__FollowTrajectory_GetResult_Request__Sequence * input,
  snaak_manipulation__action__FollowTrajectory_GetResult_Request__Sequence * output);

/// Initialize action/FollowTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * snaak_manipulation__action__FollowTrajectory_GetResult_Response
 * )) before or use
 * snaak_manipulation__action__FollowTrajectory_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_GetResult_Response__init(snaak_manipulation__action__FollowTrajectory_GetResult_Response * msg);

/// Finalize action/FollowTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_GetResult_Response__fini(snaak_manipulation__action__FollowTrajectory_GetResult_Response * msg);

/// Create action/FollowTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * snaak_manipulation__action__FollowTrajectory_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
snaak_manipulation__action__FollowTrajectory_GetResult_Response *
snaak_manipulation__action__FollowTrajectory_GetResult_Response__create();

/// Destroy action/FollowTrajectory message.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_GetResult_Response__destroy(snaak_manipulation__action__FollowTrajectory_GetResult_Response * msg);

/// Check for action/FollowTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_GetResult_Response__are_equal(const snaak_manipulation__action__FollowTrajectory_GetResult_Response * lhs, const snaak_manipulation__action__FollowTrajectory_GetResult_Response * rhs);

/// Copy a action/FollowTrajectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_GetResult_Response__copy(
  const snaak_manipulation__action__FollowTrajectory_GetResult_Response * input,
  snaak_manipulation__action__FollowTrajectory_GetResult_Response * output);

/// Initialize array of action/FollowTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * snaak_manipulation__action__FollowTrajectory_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_GetResult_Response__Sequence__init(snaak_manipulation__action__FollowTrajectory_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/FollowTrajectory messages.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_GetResult_Response__Sequence__fini(snaak_manipulation__action__FollowTrajectory_GetResult_Response__Sequence * array);

/// Create array of action/FollowTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * snaak_manipulation__action__FollowTrajectory_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
snaak_manipulation__action__FollowTrajectory_GetResult_Response__Sequence *
snaak_manipulation__action__FollowTrajectory_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/FollowTrajectory messages.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_GetResult_Response__Sequence__destroy(snaak_manipulation__action__FollowTrajectory_GetResult_Response__Sequence * array);

/// Check for action/FollowTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_GetResult_Response__Sequence__are_equal(const snaak_manipulation__action__FollowTrajectory_GetResult_Response__Sequence * lhs, const snaak_manipulation__action__FollowTrajectory_GetResult_Response__Sequence * rhs);

/// Copy an array of action/FollowTrajectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_GetResult_Response__Sequence__copy(
  const snaak_manipulation__action__FollowTrajectory_GetResult_Response__Sequence * input,
  snaak_manipulation__action__FollowTrajectory_GetResult_Response__Sequence * output);

/// Initialize action/FollowTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * snaak_manipulation__action__FollowTrajectory_FeedbackMessage
 * )) before or use
 * snaak_manipulation__action__FollowTrajectory_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_FeedbackMessage__init(snaak_manipulation__action__FollowTrajectory_FeedbackMessage * msg);

/// Finalize action/FollowTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_FeedbackMessage__fini(snaak_manipulation__action__FollowTrajectory_FeedbackMessage * msg);

/// Create action/FollowTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * snaak_manipulation__action__FollowTrajectory_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
snaak_manipulation__action__FollowTrajectory_FeedbackMessage *
snaak_manipulation__action__FollowTrajectory_FeedbackMessage__create();

/// Destroy action/FollowTrajectory message.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_FeedbackMessage__destroy(snaak_manipulation__action__FollowTrajectory_FeedbackMessage * msg);

/// Check for action/FollowTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_FeedbackMessage__are_equal(const snaak_manipulation__action__FollowTrajectory_FeedbackMessage * lhs, const snaak_manipulation__action__FollowTrajectory_FeedbackMessage * rhs);

/// Copy a action/FollowTrajectory message.
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
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_FeedbackMessage__copy(
  const snaak_manipulation__action__FollowTrajectory_FeedbackMessage * input,
  snaak_manipulation__action__FollowTrajectory_FeedbackMessage * output);

/// Initialize array of action/FollowTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * snaak_manipulation__action__FollowTrajectory_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_FeedbackMessage__Sequence__init(snaak_manipulation__action__FollowTrajectory_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/FollowTrajectory messages.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_FeedbackMessage__Sequence__fini(snaak_manipulation__action__FollowTrajectory_FeedbackMessage__Sequence * array);

/// Create array of action/FollowTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * snaak_manipulation__action__FollowTrajectory_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
snaak_manipulation__action__FollowTrajectory_FeedbackMessage__Sequence *
snaak_manipulation__action__FollowTrajectory_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/FollowTrajectory messages.
/**
 * It calls
 * snaak_manipulation__action__FollowTrajectory_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
void
snaak_manipulation__action__FollowTrajectory_FeedbackMessage__Sequence__destroy(snaak_manipulation__action__FollowTrajectory_FeedbackMessage__Sequence * array);

/// Check for action/FollowTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_FeedbackMessage__Sequence__are_equal(const snaak_manipulation__action__FollowTrajectory_FeedbackMessage__Sequence * lhs, const snaak_manipulation__action__FollowTrajectory_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/FollowTrajectory messages.
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
ROSIDL_GENERATOR_C_PUBLIC_snaak_manipulation
bool
snaak_manipulation__action__FollowTrajectory_FeedbackMessage__Sequence__copy(
  const snaak_manipulation__action__FollowTrajectory_FeedbackMessage__Sequence * input,
  snaak_manipulation__action__FollowTrajectory_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SNAAK_MANIPULATION__ACTION__DETAIL__FOLLOW_TRAJECTORY__FUNCTIONS_H_
