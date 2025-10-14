#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-classes.java.util.prefs_SRCS)
file(GLOB macosx-classes.java.util.prefs_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-classes.java.util.prefs_HEADERS}) 
list(LENGTH macosx-classes.java.util.prefs_SRCS macosx-classes.java.util.prefs_SRCS_LENGTH)
if(macosx-classes.java.util.prefs_SRCS_LENGTH)
	add_library(macosx-classes.java.util.prefs OBJECT "${macosx-classes.java.util.prefs_SRCS}" "${macosx-classes.java.util.prefs_HEADERS}")
	jcpp_enable_bigobj(macosx-classes.java.util.prefs)
endif()