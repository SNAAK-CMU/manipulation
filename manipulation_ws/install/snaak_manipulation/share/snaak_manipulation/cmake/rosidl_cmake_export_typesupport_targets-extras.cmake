# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:snaak_manipulation__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:snaak_manipulation__rosidl_typesupport_fastrtps_c;__rosidl_generator_cpp:snaak_manipulation__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:snaak_manipulation__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_c:snaak_manipulation__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:snaak_manipulation__rosidl_typesupport_c;__rosidl_typesupport_introspection_cpp:snaak_manipulation__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:snaak_manipulation__rosidl_typesupport_cpp;__rosidl_generator_py:snaak_manipulation__rosidl_generator_py")

# populate snaak_manipulation_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "snaak_manipulation::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'snaak_manipulation' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND snaak_manipulation_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
