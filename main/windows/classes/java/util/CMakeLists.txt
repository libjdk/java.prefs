#machine generated

add_subdirectory("prefs")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.java.util_SRCS)
file(GLOB windows-classes.java.util_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.java.util_HEADERS}) 
list(LENGTH windows-classes.java.util_SRCS windows-classes.java.util_SRCS_LENGTH)
if(windows-classes.java.util_SRCS_LENGTH)
	add_library(windows-classes.java.util OBJECT "${windows-classes.java.util_SRCS}" "${windows-classes.java.util_HEADERS}")
	jcpp_enable_bigobj(windows-classes.java.util)
endif()