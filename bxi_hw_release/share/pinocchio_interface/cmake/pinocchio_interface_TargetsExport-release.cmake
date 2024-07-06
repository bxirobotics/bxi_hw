#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "pinocchio_interface::pinocchio_interface" for configuration "Release"
set_property(TARGET pinocchio_interface::pinocchio_interface APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(pinocchio_interface::pinocchio_interface PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libpinocchio_interface.so"
  IMPORTED_SONAME_RELEASE "libpinocchio_interface.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS pinocchio_interface::pinocchio_interface )
list(APPEND _IMPORT_CHECK_FILES_FOR_pinocchio_interface::pinocchio_interface "${_IMPORT_PREFIX}/lib/libpinocchio_interface.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
