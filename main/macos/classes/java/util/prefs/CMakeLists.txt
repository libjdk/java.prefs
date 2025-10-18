#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes.java.util.prefs_SRCS)
file(GLOB macos-classes.java.util.prefs_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes.java.util.prefs_HEADERS}) 
list(LENGTH macos-classes.java.util.prefs_SRCS macos-classes.java.util.prefs_SRCS_LENGTH)
if(macos-classes.java.util.prefs_SRCS_LENGTH)
	add_library(macos-classes.java.util.prefs OBJECT "${macos-classes.java.util.prefs_SRCS}" "${macos-classes.java.util.prefs_HEADERS}")
	jcpp_enable_bigobj(macos-classes.java.util.prefs)
endif()