#machine generated

add_subdirectory("util")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.java_SRCS)
file(GLOB macos-classes.java_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.java_HEADERS}) 
list(LENGTH macos-classes.java_SRCS macos-classes.java_SRCS_LENGTH)
if(macos-classes.java_SRCS_LENGTH)
	add_library(macos-classes.java OBJECT "${macos-classes.java_SRCS}" "${macos-classes.java_HEADERS}")
	jcpp_enable_bigobj(macos-classes.java)
endif()