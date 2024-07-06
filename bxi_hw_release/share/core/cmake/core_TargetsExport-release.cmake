#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "core::core" for configuration "Release"
set_property(TARGET core::core APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(core::core PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libcore.so"
  IMPORTED_SONAME_RELEASE "libcore.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS core::core )
list(APPEND _IMPORT_CHECK_FILES_FOR_core::core "${_IMPORT_PREFIX}/lib/libcore.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
