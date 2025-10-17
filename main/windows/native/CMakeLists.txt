#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" windows-native_SRCS)
file(GLOB windows-native_HEADERS *.h *.hpp)
source_group("Include" FILES ${windows-native_HEADERS}) 
list(LENGTH windows-native_SRCS windows-native_SRCS_LENGTH)
if(windows-native_SRCS_LENGTH)
	add_library(windows-native OBJECT "${windows-native_SRCS}" "${windows-native_HEADERS}")
	jcpp_enable_bigobj(windows-native)
endif()