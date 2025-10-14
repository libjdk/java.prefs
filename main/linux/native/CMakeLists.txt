#machine generated

if(JCPP_OS MATCHES "macosx")
	include_directories("../../macosx/native")
endif()

if(JCPP_OS MATCHES "windows")
	include_directories("../../windows/native")
endif()

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" linux-native_SRCS)
file(GLOB linux-native_HEADERS *.h *.hpp)
source_group("Include" FILES ${linux-native_HEADERS}) 
list(LENGTH linux-native_SRCS linux-native_SRCS_LENGTH)
if(linux-native_SRCS_LENGTH)
	add_library(linux-native OBJECT "${linux-native_SRCS}" "${linux-native_HEADERS}")
	jcpp_enable_bigobj(linux-native)
endif()