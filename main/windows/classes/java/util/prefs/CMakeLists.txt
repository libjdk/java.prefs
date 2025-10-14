#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-classes.java.util.pr_0_SRCS)
file(GLOB windows-classes.java.util.pr_0_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-classes.java.util.pr_0_HEADERS}) 
list(LENGTH windows-classes.java.util.pr_0_SRCS windows-classes.java.util.pr_0_SRCS_LENGTH)
if(windows-classes.java.util.pr_0_SRCS_LENGTH)
	add_library(windows-classes.java.util.pr_0 OBJECT "${windows-classes.java.util.pr_0_SRCS}" "${windows-classes.java.util.pr_0_HEADERS}")
	jcpp_enable_bigobj(windows-classes.java.util.pr_0)
endif()