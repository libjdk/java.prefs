#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.util.prefs_SRCS)
file(GLOB classes.java.util.prefs_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.util.prefs_HEADERS}) 
list(LENGTH classes.java.util.prefs_SRCS classes.java.util.prefs_SRCS_LENGTH)
if(classes.java.util.prefs_SRCS_LENGTH)
	add_library(classes.java.util.prefs OBJECT "${classes.java.util.prefs_SRCS}" "${classes.java.util.prefs_HEADERS}")
	jcpp_enable_bigobj(classes.java.util.prefs)
endif()