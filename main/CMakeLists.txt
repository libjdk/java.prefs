#machine generated

jcpp_add_dependencies(
	"java.base:17.35"
	"java.xml:17.35"
)

include_directories("share/classes")

if(JCPP_OS MATCHES "linux")
	include_directories("linux/classes")
	include_directories("linux/native")
endif()

if(JCPP_OS MATCHES "macosx")
	include_directories("macosx/classes")
	include_directories("macosx/native")
endif()

if(JCPP_OS MATCHES "windows")
	include_directories("windows/classes")
	include_directories("windows/native")
endif()

add_subdirectory("share/classes")

if(JCPP_OS MATCHES "linux")
	add_subdirectory("linux/classes")
	add_subdirectory("linux/native")
endif()

if(JCPP_OS MATCHES "macosx")
	add_subdirectory("macosx/classes")
	add_subdirectory("macosx/native")
endif()

if(JCPP_OS MATCHES "windows")
	add_subdirectory("windows/classes")
	add_subdirectory("windows/native")
endif()

set(local_object ${local_object}
	"$<TARGET_OBJECTS:classes.java.util.prefs>"
)

if(JCPP_OS MATCHES "linux")
	set(local_object ${local_object}
		"$<TARGET_OBJECTS:linux-classes>"
		"$<TARGET_OBJECTS:linux-classes.java.util.prefs>"
		"$<TARGET_OBJECTS:linux-native>"
	)
endif()

if(JCPP_OS MATCHES "macosx")
	set(local_object ${local_object}
		"$<TARGET_OBJECTS:macosx-classes>"
		"$<TARGET_OBJECTS:macosx-classes.java.util.prefs>"
		"$<TARGET_OBJECTS:macosx-native>"
	)
endif()

if(JCPP_OS MATCHES "windows")
	set(local_object ${local_object}
		"$<TARGET_OBJECTS:windows-classes>"
		"$<TARGET_OBJECTS:windows-classes.java.util.pr_0>"
		"$<TARGET_OBJECTS:windows-native>"
	)
endif()

if(BUILD_STATIC_LIB)
	add_library(${JCPP_PROJECT_NAME}_static STATIC "${local_object}" "${source_SRCS}")

	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES VERSION ${JCPP_PROJECT_VERSION} SOVERSION 1)

	jcpp_enable_bigobj(${JCPP_PROJECT_NAME}_static)

	install(TARGETS ${JCPP_PROJECT_NAME}_static
		LIBRARY DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		ARCHIVE DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		RUNTIME DESTINATION "${JCPP_BIN_INSTALL_PATH}"
	)
endif()

if(BUILD_SHARED_LIB)
	add_library(${JCPP_PROJECT_NAME}_shared SHARED "${local_object}" "${source_SRCS}")

	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES CLEAN_DIRECT_OUTPUT 1)
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES VERSION ${JCPP_PROJECT_VERSION} SOVERSION 1)
if(JCPP_OS MATCHES "linux")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES INSTALL_RPATH "\\\$ORIGIN;\\\$ORIGIN/../lib")
elseif(JCPP_OS MATCHES "macosx")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES INSTALL_RPATH ".;../lib")
endif()

	target_link_libraries(${JCPP_PROJECT_NAME}_shared
		PUBLIC ${JCPP_DEPENDENCY_LIBS}
		PRIVATE ${JCPP_EXT_LIBS}
	)

	jcpp_enable_bigobj(${JCPP_PROJECT_NAME}_shared)

	jcpp_enable_debug_info(${JCPP_PROJECT_NAME}_shared)

	install(TARGETS ${JCPP_PROJECT_NAME}_shared
		LIBRARY DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		ARCHIVE DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		RUNTIME DESTINATION "${JCPP_BIN_INSTALL_PATH}"
	)
endif()

install(
	DIRECTORY "share/include"
	DESTINATION "${JCPP_INSTALL_PATH}"
)

install(
	FILES "share/dependencies.txt"
	DESTINATION "${JCPP_INSTALL_PATH}"
)
