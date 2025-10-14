#machine generated

add_subdirectory("prefs")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.java.util_SRCS)
file(GLOB macosx-classes.java.util_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.java.util_HEADERS}) 
list(LENGTH macosx-classes.java.util_SRCS macosx-classes.java.util_SRCS_LENGTH)
if(macosx-classes.java.util_SRCS_LENGTH)
	add_library(macosx-classes.java.util OBJECT "${macosx-classes.java.util_SRCS}" "${macosx-classes.java.util_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.java.util)
endif()