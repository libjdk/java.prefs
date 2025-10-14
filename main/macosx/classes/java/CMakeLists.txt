#machine generated

add_subdirectory("util")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.java_SRCS)
file(GLOB macosx-classes.java_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.java_HEADERS}) 
list(LENGTH macosx-classes.java_SRCS macosx-classes.java_SRCS_LENGTH)
if(macosx-classes.java_SRCS_LENGTH)
	add_library(macosx-classes.java OBJECT "${macosx-classes.java_SRCS}" "${macosx-classes.java_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.java)
endif()