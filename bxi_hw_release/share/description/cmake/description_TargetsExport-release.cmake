#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "description::description" for configuration "Release"
set_property(TARGET description::description APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(description::description PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libdescription.so"
  IMPORTED_SONAME_RELEASE "libdescription.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS description::description )
list(APPEND _IMPORT_CHECK_FILES_FOR_description::description "${_IMPORT_PREFIX}/lib/libdescription.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
