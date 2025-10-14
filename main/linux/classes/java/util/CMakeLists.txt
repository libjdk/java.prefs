#machine generated

add_subdirectory("prefs")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-classes.java.util_SRCS)
file(GLOB linux-classes.java.util_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-classes.java.util_HEADERS}) 
list(LENGTH linux-classes.java.util_SRCS linux-classes.java.util_SRCS_LENGTH)
if(linux-classes.java.util_SRCS_LENGTH)
	add_library(linux-classes.java.util OBJECT "${linux-classes.java.util_SRCS}" "${linux-classes.java.util_HEADERS}")
	jcpp_enable_bigobj(linux-classes.java.util)
endif()