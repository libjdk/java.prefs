#machine generated

add_subdirectory("prefs")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.java.util_SRCS)
file(GLOB macos-classes.java.util_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.java.util_HEADERS}) 
list(LENGTH macos-classes.java.util_SRCS macos-classes.java.util_SRCS_LENGTH)
if(macos-classes.java.util_SRCS_LENGTH)
	add_library(macos-classes.java.util OBJECT "${macos-classes.java.util_SRCS}" "${macos-classes.java.util_HEADERS}")
	jcpp_enable_bigobj(macos-classes.java.util)
endif()