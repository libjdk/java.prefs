#machine generated

if(JCPP_OS MATCHES "linux")
	include_directories("../../linux/native")
endif()

if(JCPP_OS MATCHES "windows")
	include_directories("../../windows/native")
endif()

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macosx-native_SRCS)
file(GLOB macosx-native_HEADERS *.h *.hpp)
source_group("Include" FILES ${macosx-native_HEADERS}) 
list(LENGTH macosx-native_SRCS macosx-native_SRCS_LENGTH)
if(macosx-native_SRCS_LENGTH)
	add_library(macosx-native OBJECT "${macosx-native_SRCS}" "${macosx-native_HEADERS}")
	jcpp_enable_bigobj(macosx-native)
endif()