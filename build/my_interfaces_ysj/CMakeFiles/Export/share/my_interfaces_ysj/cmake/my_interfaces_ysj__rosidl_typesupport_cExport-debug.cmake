#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "my_interfaces_ysj::my_interfaces_ysj__rosidl_typesupport_c" for configuration "Debug"
set_property(TARGET my_interfaces_ysj::my_interfaces_ysj__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(my_interfaces_ysj::my_interfaces_ysj__rosidl_typesupport_c PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/my_interfaces_ysj__rosidl_typesupport_c.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/my_interfaces_ysj__rosidl_typesupport_c.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS my_interfaces_ysj::my_interfaces_ysj__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_my_interfaces_ysj::my_interfaces_ysj__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/my_interfaces_ysj__rosidl_typesupport_c.lib" "${_IMPORT_PREFIX}/bin/my_interfaces_ysj__rosidl_typesupport_c.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
