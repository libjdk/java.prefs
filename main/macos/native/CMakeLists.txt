#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-native_SRCS)
file(GLOB macos-native_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-native_HEADERS}) 
list(LENGTH macos-native_SRCS macos-native_SRCS_LENGTH)
if(macos-native_SRCS_LENGTH)
	add_library(macos-native OBJECT "${macos-native_SRCS}" "${macos-native_HEADERS}")
	jcpp_enable_bigobj(macos-native)
endif()