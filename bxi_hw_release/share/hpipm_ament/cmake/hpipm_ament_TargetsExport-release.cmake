#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "hpipm_ament::hpipm_ament" for configuration "Release"
set_property(TARGET hpipm_ament::hpipm_ament APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hpipm_ament::hpipm_ament PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libhpipm_ament.so"
  IMPORTED_SONAME_RELEASE "libhpipm_ament.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS hpipm_ament::hpipm_ament )
list(APPEND _IMPORT_CHECK_FILES_FOR_hpipm_ament::hpipm_ament "${_IMPORT_PREFIX}/lib/libhpipm_ament.so" )

# Import target "hpipm_ament::hpipm" for configuration "Release"
set_property(TARGET hpipm_ament::hpipm APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hpipm_ament::hpipm PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "blasfeo"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libhpipm.so"
  IMPORTED_SONAME_RELEASE "libhpipm.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS hpipm_ament::hpipm )
list(APPEND _IMPORT_CHECK_FILES_FOR_hpipm_ament::hpipm "${_IMPORT_PREFIX}/lib/libhpipm.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
