#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "motion::motion" for configuration "Release"
set_property(TARGET motion::motion APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(motion::motion PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmotion.so"
  IMPORTED_SONAME_RELEASE "libmotion.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS motion::motion )
list(APPEND _IMPORT_CHECK_FILES_FOR_motion::motion "${_IMPORT_PREFIX}/lib/libmotion.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
