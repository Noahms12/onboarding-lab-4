#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "nyu::__cvr" for configuration "Debug"
set_property(TARGET nyu::__cvr APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(nyu::__cvr PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/debug/lib/lib__cvr.a"
  )

list(APPEND _cmake_import_check_targets nyu::__cvr )
list(APPEND _cmake_import_check_files_for_nyu::__cvr "${_IMPORT_PREFIX}/debug/lib/lib__cvr.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)