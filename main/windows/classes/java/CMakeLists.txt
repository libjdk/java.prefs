#machine generated

add_subdirectory("util")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.java_SRCS)
file(GLOB windows-classes.java_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.java_HEADERS}) 
list(LENGTH windows-classes.java_SRCS windows-classes.java_SRCS_LENGTH)
if(windows-classes.java_SRCS_LENGTH)
	add_library(windows-classes.java OBJECT "${windows-classes.java_SRCS}" "${windows-classes.java_HEADERS}")
	jcpp_enable_bigobj(windows-classes.java)
endif()