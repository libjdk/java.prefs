#ifndef _java_util_prefs_FileSystemPreferences_h_
#define _java_util_prefs_FileSystemPreferences_h_
//$ class java.util.prefs.FileSystemPreferences
//$ extends java.util.prefs.AbstractPreferences

#include <java/lang/Array.h>
#include <java/util/prefs/AbstractPreferences.h>

#pragma push_macro("EACCES")
#undef EACCES
#pragma push_macro("EAGAIN")
#undef EAGAIN
#pragma push_macro("EMPTY_STRING_ARRAY")
#undef EMPTY_STRING_ARRAY
#pragma push_macro("ERROR_CODE")
#undef ERROR_CODE
#pragma push_macro("INIT_SLEEP_TIME")
#undef INIT_SLEEP_TIME
#pragma push_macro("LOCK_HANDLE")
#undef LOCK_HANDLE
#pragma push_macro("MAX_ATTEMPTS")
#undef MAX_ATTEMPTS
#pragma push_macro("SYNC_INTERVAL")
#undef SYNC_INTERVAL
#pragma push_macro("USER_READ_WRITE")
#undef USER_READ_WRITE
#pragma push_macro("USER_RWX")
#undef USER_RWX
#pragma push_macro("USER_RWX_ALL_RX")
#undef USER_RWX_ALL_RX
#pragma push_macro("USER_RW_ALL_READ")
#undef USER_RW_ALL_READ

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class Integer;
		class Void;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Timer;
	}
}
namespace java {
	namespace util {
		namespace prefs {
			class FileSystemPreferences$NodeCreate;
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

class FileSystemPreferences : public ::java::util::prefs::AbstractPreferences {
	$class(FileSystemPreferences, 0, ::java::util::prefs::AbstractPreferences)
public:
	FileSystemPreferences();
	void init$(bool user);
	void init$(::java::util::prefs::FileSystemPreferences* parent, $String* name);
	static $bytes* byteArray($String* s);
	void checkLockFile0ErrorCode(int32_t errorCode);
	virtual ::java::util::prefs::AbstractPreferences* childSpi($String* name) override;
	virtual $StringArray* childrenNamesSpi() override;
	static int32_t chmod($String* fileName, int32_t permission);
	static $String* dirName($String* nodeName);
	virtual void flush() override;
	virtual void flushSpi() override;
	static ::sun::util::logging::PlatformLogger* getLogger();
	virtual $String* getSpi($String* key) override;
	static ::java::util::prefs::Preferences* getSystemRoot();
	static ::java::util::prefs::Preferences* getUserRoot();
	void initCacheIfNecessary();
	static bool isDirChar(char16_t ch);
	virtual bool isUserNode() override;
	virtual $StringArray* keysSpi() override;
	static ::java::lang::Void* lambda$static$0();
	static ::java::lang::Integer* lambda$static$1();
	void loadCache();
	bool lockFile(bool shared);
	static $ints* lockFile0($String* fileName, int32_t permission, bool shared);
	static $String* nodeName($String* dirName);
	virtual void putSpi($String* key, $String* value) override;
	virtual void removeNode() override;
	virtual void removeNodeSpi() override;
	virtual void removeSpi($String* key) override;
	void replayChanges();
	static void setupSystemRoot();
	static void setupUserRoot();
	virtual void sync() override;
	virtual void syncSpi() override;
	void syncSpiPrivileged();
	static void syncWorld();
	void unlockFile();
	static int32_t unlockFile0(int32_t lockHandle);
	void writeBackCache();
	static int32_t SYNC_INTERVAL;
	static ::java::io::File* systemRootDir;
	static bool isSystemRootWritable;
	static ::java::io::File* userRootDir;
	static bool isUserRootWritable;
	static $volatile(::java::util::prefs::Preferences*) userRoot;
	static $volatile(::java::util::prefs::Preferences*) systemRoot;
	static const int32_t USER_READ_WRITE = 384;
	static const int32_t USER_RW_ALL_READ = 420;
	static const int32_t USER_RWX_ALL_RX = 493;
	static const int32_t USER_RWX = 448;
	static ::java::io::File* userLockFile;
	static ::java::io::File* systemLockFile;
	static int32_t userRootLockHandle;
	static int32_t systemRootLockHandle;
	::java::io::File* dir = nullptr;
	::java::io::File* prefsFile = nullptr;
	::java::io::File* tmpFile = nullptr;
	static ::java::io::File* userRootModFile;
	static bool isUserRootModified;
	static int64_t userRootModTime;
	static ::java::io::File* systemRootModFile;
	static bool isSystemRootModified;
	static int64_t systemRootModTime;
	::java::util::Map* prefsCache = nullptr;
	int64_t lastSyncTime = 0;
	static const int32_t EAGAIN = 11;
	static const int32_t EACCES = 13;
	static const int32_t LOCK_HANDLE = 0;
	static const int32_t ERROR_CODE = 1;
	::java::util::List* changeLog = nullptr;
	::java::util::prefs::FileSystemPreferences$NodeCreate* nodeCreate = nullptr;
	static ::java::util::Timer* syncTimer;
	bool isUserNode$ = false;
	static $StringArray* EMPTY_STRING_ARRAY;
	static int32_t INIT_SLEEP_TIME;
	static int32_t MAX_ATTEMPTS;
};

		} // prefs
	} // util
} // java

#pragma pop_macro("EACCES")
#pragma pop_macro("EAGAIN")
#pragma pop_macro("EMPTY_STRING_ARRAY")
#pragma pop_macro("ERROR_CODE")
#pragma pop_macro("INIT_SLEEP_TIME")
#pragma pop_macro("LOCK_HANDLE")
#pragma pop_macro("MAX_ATTEMPTS")
#pragma pop_macro("SYNC_INTERVAL")
#pragma pop_macro("USER_READ_WRITE")
#pragma pop_macro("USER_RWX")
#pragma pop_macro("USER_RWX_ALL_RX")
#pragma pop_macro("USER_RW_ALL_READ")

#endif // _java_util_prefs_FileSystemPreferences_h_