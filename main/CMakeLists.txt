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

if(JCPP_OS MATCHES "macos")
	include_directories("macos/classes")
	include_directories("macos/native")
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

if(JCPP_OS MATCHES "macos")
	add_subdirectory("macos/classes")
	add_subdirectory("macos/native")
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

if(JCPP_OS MATCHES "macos")
	set(local_object ${local_object}
		"$<TARGET_OBJECTS:macos-classes>"
		"$<TARGET_OBJECTS:macos-classes.java.util.prefs>"
		"$<TARGET_OBJECTS:macos-native>"
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
		LIBRARY DESTINATION "${JCPP_INSTALL_LIB_DIR}"
		ARCHIVE DESTINATION "${JCPP_INSTALL_LIB_DIR}"
		RUNTIME DESTINATION "${JCPP_INSTALL_BIN_DIR}"
	)
endif()

if(BUILD_SHARED_LIB)
	add_library(${JCPP_PROJECT_NAME}_shared SHARED "${local_object}" "${source_SRCS}")

	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES CLEAN_DIRECT_OUTPUT 1)
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES VERSION ${JCPP_PROJECT_VERSION} SOVERSION 1)
if(JCPP_OS MATCHES "linux")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES INSTALL_RPATH "\\\$ORIGIN;\\\$ORIGIN/../lib")
elseif(JCPP_OS MATCHES "macos")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES INSTALL_RPATH ".;../lib")
endif()

	if(JCPP_OS MATCHES "macos")
		set(JCPP_EXT_LIBS ${JCPP_EXT_LIBS}
			"-framework CoreFoundation -framework Foundation"
		)
	endif()

	if(JCPP_OS MATCHES "windows")
		set(JCPP_EXT_LIBS ${JCPP_EXT_LIBS}
			advapi32.lib
		)
	endif()

	target_link_libraries(${JCPP_PROJECT_NAME}_shared
		PUBLIC ${JCPP_DEPENDENCY_LIBS}
		PRIVATE ${JCPP_EXT_LIBS}
	)

	jcpp_enable_bigobj(${JCPP_PROJECT_NAME}_shared)

	jcpp_encode_symbol(${JCPP_PROJECT_NAME}_shared)

	install(TARGETS ${JCPP_PROJECT_NAME}_shared
		LIBRARY DESTINATION "${JCPP_INSTALL_LIB_DIR}"
		ARCHIVE DESTINATION "${JCPP_INSTALL_LIB_DIR}"
		RUNTIME DESTINATION "${JCPP_INSTALL_BIN_DIR}"
	)
endif()

install(
	DIRECTORY "share/include/"
	DESTINATION "${JCPP_INSTALL_INCLUDE_DIR}"
)

if(INSTALL_TO_REPO)
	install(
		FILES "share/dependencies.txt"
		DESTINATION "${JCPP_INSTALL_DIR}"
	)
endif()
