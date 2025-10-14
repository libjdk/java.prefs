#ifndef _java_util_prefs_WindowsPreferences_h_
#define _java_util_prefs_WindowsPreferences_h_
//$ class java.util.prefs.WindowsPreferences
//$ extends java.util.prefs.AbstractPreferences

#include <java/lang/Array.h>
#include <java/util/prefs/AbstractPreferences.h>

#pragma push_macro("DELETE")
#undef DELETE
#pragma push_macro("DISPOSITION")
#undef DISPOSITION
#pragma push_macro("ERROR_ACCESS_DENIED")
#undef ERROR_ACCESS_DENIED
#pragma push_macro("ERROR_CODE")
#undef ERROR_CODE
#pragma push_macro("ERROR_FILE_NOT_FOUND")
#undef ERROR_FILE_NOT_FOUND
#pragma push_macro("ERROR_SUCCESS")
#undef ERROR_SUCCESS
#pragma push_macro("HKEY_CURRENT_USER")
#undef HKEY_CURRENT_USER
#pragma push_macro("HKEY_LOCAL_MACHINE")
#undef HKEY_LOCAL_MACHINE
#pragma push_macro("INIT_SLEEP_TIME")
#undef INIT_SLEEP_TIME
#pragma push_macro("KEY_ALL_ACCESS")
#undef KEY_ALL_ACCESS
#pragma push_macro("KEY_CREATE_SUB_KEY")
#undef KEY_CREATE_SUB_KEY
#pragma push_macro("KEY_ENUMERATE_SUB_KEYS")
#undef KEY_ENUMERATE_SUB_KEYS
#pragma push_macro("KEY_QUERY_VALUE")
#undef KEY_QUERY_VALUE
#pragma push_macro("KEY_READ")
#undef KEY_READ
#pragma push_macro("KEY_SET_VALUE")
#undef KEY_SET_VALUE
#pragma push_macro("KEY_WRITE")
#undef KEY_WRITE
#pragma push_macro("MAX_ATTEMPTS")
#undef MAX_ATTEMPTS
#pragma push_macro("MAX_KEY_LENGTH")
#undef MAX_KEY_LENGTH
#pragma push_macro("MAX_VALUE_NAME_LENGTH")
#undef MAX_VALUE_NAME_LENGTH
#pragma push_macro("MAX_WINDOWS_PATH_LENGTH")
#undef MAX_WINDOWS_PATH_LENGTH
#pragma push_macro("NATIVE_HANDLE")
#undef NATIVE_HANDLE
#pragma push_macro("NULL_NATIVE_HANDLE")
#undef NULL_NATIVE_HANDLE
#pragma push_macro("REG_CREATED_NEW_KEY")
#undef REG_CREATED_NEW_KEY
#pragma push_macro("REG_OPENED_EXISTING_KEY")
#undef REG_OPENED_EXISTING_KEY
#pragma push_macro("SUBKEYS_NUMBER")
#undef SUBKEYS_NUMBER
#pragma push_macro("SYSTEM_ROOT_NATIVE_HANDLE")
#undef SYSTEM_ROOT_NATIVE_HANDLE
#pragma push_macro("USER_ROOT_NATIVE_HANDLE")
#undef USER_ROOT_NATIVE_HANDLE
#pragma push_macro("VALUES_NUMBER")
#undef VALUES_NUMBER
#pragma push_macro("WINDOWS_ROOT_PATH")
#undef WINDOWS_ROOT_PATH

namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace util {
		namespace prefs {
			class Preferences;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace java {
	namespace util {
		namespace prefs {

class WindowsPreferences : public ::java::util::prefs::AbstractPreferences {
	$class(WindowsPreferences, 0, ::java::util::prefs::AbstractPreferences)
public:
	WindowsPreferences();
	void init$(::java::util::prefs::WindowsPreferences* parent, $String* name);
	void init$(int64_t rootNativeHandle, $bytes* rootDirectory);
	static int32_t WindowsRegCloseKey(int64_t hKey);
	static $longs* WindowsRegCreateKeyEx(int64_t hKey, $bytes* subKey);
	static $longs* WindowsRegCreateKeyEx1(int64_t hKey, $bytes* subKey);
	static int32_t WindowsRegDeleteKey(int64_t hKey, $bytes* subKey);
	static int32_t WindowsRegDeleteValue(int64_t hKey, $bytes* valueName);
	static $bytes* WindowsRegEnumKeyEx(int64_t hKey, int32_t subKeyIndex, int32_t maxKeyLength);
	static $bytes* WindowsRegEnumKeyEx1(int64_t hKey, int32_t subKeyIndex, int32_t maxKeyLength);
	static $bytes* WindowsRegEnumValue(int64_t hKey, int32_t valueIndex, int32_t maxValueNameLength);
	static $bytes* WindowsRegEnumValue1(int64_t hKey, int32_t valueIndex, int32_t maxValueNameLength);
	static int32_t WindowsRegFlushKey(int64_t hKey);
	static int32_t WindowsRegFlushKey1(int64_t hKey);
	static $longs* WindowsRegOpenKey(int64_t hKey, $bytes* subKey, int32_t securityMask);
	static $longs* WindowsRegOpenKey1(int64_t hKey, $bytes* subKey, int32_t securityMask);
	static $longs* WindowsRegQueryInfoKey(int64_t hKey);
	static $longs* WindowsRegQueryInfoKey1(int64_t hKey);
	static $bytes* WindowsRegQueryValueEx(int64_t hKey, $bytes* valueName);
	static int32_t WindowsRegSetValueEx(int64_t hKey, $bytes* valueName, $bytes* value);
	static int32_t WindowsRegSetValueEx1(int64_t hKey, $bytes* valueName, $bytes* value);
	static $String* byteArrayToString($bytes* array);
	virtual ::java::util::prefs::AbstractPreferences* childSpi($String* name) override;
	virtual $StringArray* childrenNamesSpi() override;
	void closeKey(int64_t nativeHandle);
	virtual void flush() override;
	virtual void flushSpi() override;
	virtual $String* getSpi($String* javaName) override;
	static ::java::util::prefs::Preferences* getSystemRoot();
	static ::java::util::prefs::Preferences* getUserRoot();
	virtual $StringArray* keysSpi() override;
	static ::java::lang::Void* lambda$static$0();
	static ::sun::util::logging::PlatformLogger* logger();
	int64_t openKey(int32_t securityMask);
	int64_t openKey(int32_t mask1, int32_t mask2);
	int64_t openKey($bytes* windowsAbsolutePath, int32_t mask1, int32_t mask2);
	int64_t openKey(int64_t nativeHandle, $bytes* windowsRelativePath, int32_t mask1, int32_t mask2);
	virtual void putSpi($String* javaName, $String* value) override;
	virtual void removeNodeSpi() override;
	virtual void removeSpi($String* key) override;
	int64_t rootNativeHandle();
	static $bytes* stringToByteArray($String* str);
	virtual void sync() override;
	virtual void syncSpi() override;
	static $String* toJavaAlt64Name($String* windowsName);
	static $String* toJavaName($bytes* windowsNameArray);
	static $String* toJavaValueString($bytes* windowsNameArray);
	static $bytes* toWindowsAlt64Name($String* javaName);
	static $bytes* toWindowsName($String* javaName);
	static $bytes* toWindowsValueString($String* javaName);
	$bytes* windowsAbsolutePath();
	static ::sun::util::logging::PlatformLogger* logger$;
	static $bytes* WINDOWS_ROOT_PATH;
	static const int32_t HKEY_CURRENT_USER = 0x80000001;
	static const int32_t HKEY_LOCAL_MACHINE = 0x80000002;
	static const int32_t USER_ROOT_NATIVE_HANDLE = HKEY_CURRENT_USER;
	static const int32_t SYSTEM_ROOT_NATIVE_HANDLE = HKEY_LOCAL_MACHINE;
	static const int32_t MAX_WINDOWS_PATH_LENGTH = 256;
	static $volatile(::java::util::prefs::Preferences*) userRoot;
	static $volatile(::java::util::prefs::Preferences*) systemRoot;
	static const int32_t ERROR_SUCCESS = 0;
	static const int32_t ERROR_FILE_NOT_FOUND = 2;
	static const int32_t ERROR_ACCESS_DENIED = 5;
	static const int32_t NATIVE_HANDLE = 0;
	static const int32_t ERROR_CODE = 1;
	static const int32_t SUBKEYS_NUMBER = 0;
	static const int32_t VALUES_NUMBER = 2;
	static const int32_t MAX_KEY_LENGTH = 3;
	static const int32_t MAX_VALUE_NAME_LENGTH = 4;
	static const int32_t DISPOSITION = 2;
	static const int32_t REG_CREATED_NEW_KEY = 1;
	static const int32_t REG_OPENED_EXISTING_KEY = 2;
	static const int32_t NULL_NATIVE_HANDLE = 0;
	static const int32_t DELETE = 0x00010000;
	static const int32_t KEY_QUERY_VALUE = 1;
	static const int32_t KEY_SET_VALUE = 2;
	static const int32_t KEY_CREATE_SUB_KEY = 4;
	static const int32_t KEY_ENUMERATE_SUB_KEYS = 8;
	static const int32_t KEY_READ = 0x00020019;
	static const int32_t KEY_WRITE = 0x00020006;
	static const int32_t KEY_ALL_ACCESS = 0x000F003F;
	static int32_t INIT_SLEEP_TIME;
	static int32_t MAX_ATTEMPTS;
	bool isBackingStoreAvailable = false;
};

		} // prefs
	} // util
} // java

#pragma pop_macro("DELETE")
#pragma pop_macro("DISPOSITION")
#pragma pop_macro("ERROR_ACCESS_DENIED")
#pragma pop_macro("ERROR_CODE")
#pragma pop_macro("ERROR_FILE_NOT_FOUND")
#pragma pop_macro("ERROR_SUCCESS")
#pragma pop_macro("HKEY_CURRENT_USER")
#pragma pop_macro("HKEY_LOCAL_MACHINE")
#pragma pop_macro("INIT_SLEEP_TIME")
#pragma pop_macro("KEY_ALL_ACCESS")
#pragma pop_macro("KEY_CREATE_SUB_KEY")
#pragma pop_macro("KEY_ENUMERATE_SUB_KEYS")
#pragma pop_macro("KEY_QUERY_VALUE")
#pragma pop_macro("KEY_READ")
#pragma pop_macro("KEY_SET_VALUE")
#pragma pop_macro("KEY_WRITE")
#pragma pop_macro("MAX_ATTEMPTS")
#pragma pop_macro("MAX_KEY_LENGTH")
#pragma pop_macro("MAX_VALUE_NAME_LENGTH")
#pragma pop_macro("MAX_WINDOWS_PATH_LENGTH")
#pragma pop_macro("NATIVE_HANDLE")
#pragma pop_macro("NULL_NATIVE_HANDLE")
#pragma pop_macro("REG_CREATED_NEW_KEY")
#pragma pop_macro("REG_OPENED_EXISTING_KEY")
#pragma pop_macro("SUBKEYS_NUMBER")
#pragma pop_macro("SYSTEM_ROOT_NATIVE_HANDLE")
#pragma pop_macro("USER_ROOT_NATIVE_HANDLE")
#pragma pop_macro("VALUES_NUMBER")
#pragma pop_macro("WINDOWS_ROOT_PATH")

#endif // _java_util_prefs_WindowsPreferences_h_