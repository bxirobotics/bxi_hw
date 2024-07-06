# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_blasfeo_ament_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED blasfeo_ament_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(blasfeo_ament_FOUND FALSE)
  elseif(NOT blasfeo_ament_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(blasfeo_ament_FOUND FALSE)
  endif()
  return()
endif()
set(_blasfeo_ament_CONFIG_INCLUDED TRUE)

# output package information
if(NOT blasfeo_ament_FIND_QUIETLY)
  message(STATUS "Found blasfeo_ament: 0.0.0 (${blasfeo_ament_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'blasfeo_ament' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${blasfeo_ament_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(blasfeo_ament_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "blasfeo-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${blasfeo_ament_DIR}/${_extra}")
endforeach()
