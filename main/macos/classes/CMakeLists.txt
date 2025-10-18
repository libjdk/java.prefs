#machine generated

add_subdirectory("java")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-classes_SRCS)
file(GLOB macos-classes_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-classes_HEADERS}) 
list(LENGTH macos-classes_SRCS macos-classes_SRCS_LENGTH)
if(macos-classes_SRCS_LENGTH)
	add_library(macos-classes OBJECT "${macos-classes_SRCS}" "${macos-classes_HEADERS}")
	jcpp_enable_bigobj(macos-classes)
endif()