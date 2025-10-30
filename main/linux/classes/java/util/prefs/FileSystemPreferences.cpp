#include <java/util/prefs/FileSystemPreferences.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/SecurityException.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/Timer.h>
#include <java/util/TimerTask.h>
#include <java/util/TreeMap.h>
#include <java/util/prefs/AbstractPreferences.h>
#include <java/util/prefs/BackingStoreException.h>
#include <java/util/prefs/Base64.h>
#include <java/util/prefs/FileSystemPreferences$1.h>
#include <java/util/prefs/FileSystemPreferences$10.h>
#include <java/util/prefs/FileSystemPreferences$11.h>
#include <java/util/prefs/FileSystemPreferences$12.h>
#include <java/util/prefs/FileSystemPreferences$2.h>
#include <java/util/prefs/FileSystemPreferences$3.h>
#include <java/util/prefs/FileSystemPreferences$4.h>
#include <java/util/prefs/FileSystemPreferences$5.h>
#include <java/util/prefs/FileSystemPreferences$6.h>
#include <java/util/prefs/FileSystemPreferences$7.h>
#include <java/util/prefs/FileSystemPreferences$8.h>
#include <java/util/prefs/FileSystemPreferences$9.h>
#include <java/util/prefs/FileSystemPreferences$Change.h>
#include <java/util/prefs/FileSystemPreferences$NodeCreate.h>
#include <java/util/prefs/FileSystemPreferences$Put.h>
#include <java/util/prefs/FileSystemPreferences$Remove.h>
#include <java/util/prefs/Preferences.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef EACCES
#undef EAGAIN
#undef EMPTY_STRING_ARRAY
#undef ERROR_CODE
#undef INIT_SLEEP_TIME
#undef LOCK_HANDLE
#undef MAX_ATTEMPTS
#undef SYNC_INTERVAL
#undef USER_READ_WRITE
#undef USER_RWX
#undef USER_RWX_ALL_RX
#undef USER_RW_ALL_READ

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $StringBuffer = ::java::lang::StringBuffer;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Timer = ::java::util::Timer;
using $TimerTask = ::java::util::TimerTask;
using $TreeMap = ::java::util::TreeMap;
using $AbstractPreferences = ::java::util::prefs::AbstractPreferences;
using $BackingStoreException = ::java::util::prefs::BackingStoreException;
using $Base64 = ::java::util::prefs::Base64;
using $FileSystemPreferences$1 = ::java::util::prefs::FileSystemPreferences$1;
using $FileSystemPreferences$10 = ::java::util::prefs::FileSystemPreferences$10;
using $FileSystemPreferences$11 = ::java::util::prefs::FileSystemPreferences$11;
using $FileSystemPreferences$12 = ::java::util::prefs::FileSystemPreferences$12;
using $FileSystemPreferences$2 = ::java::util::prefs::FileSystemPreferences$2;
using $FileSystemPreferences$3 = ::java::util::prefs::FileSystemPreferences$3;
using $FileSystemPreferences$4 = ::java::util::prefs::FileSystemPreferences$4;
using $FileSystemPreferences$5 = ::java::util::prefs::FileSystemPreferences$5;
using $FileSystemPreferences$6 = ::java::util::prefs::FileSystemPreferences$6;
using $FileSystemPreferences$7 = ::java::util::prefs::FileSystemPreferences$7;
using $FileSystemPreferences$8 = ::java::util::prefs::FileSystemPreferences$8;
using $FileSystemPreferences$9 = ::java::util::prefs::FileSystemPreferences$9;
using $FileSystemPreferences$Change = ::java::util::prefs::FileSystemPreferences$Change;
using $FileSystemPreferences$NodeCreate = ::java::util::prefs::FileSystemPreferences$NodeCreate;
using $FileSystemPreferences$Put = ::java::util::prefs::FileSystemPreferences$Put;
using $FileSystemPreferences$Remove = ::java::util::prefs::FileSystemPreferences$Remove;
using $Preferences = ::java::util::prefs::Preferences;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace java {
	namespace util {
		namespace prefs {

class FileSystemPreferences$$Lambda$lambda$static$1 : public $PrivilegedAction {
	$class(FileSystemPreferences$$Lambda$lambda$static$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(FileSystemPreferences::lambda$static$1());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FileSystemPreferences$$Lambda$lambda$static$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FileSystemPreferences$$Lambda$lambda$static$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FileSystemPreferences$$Lambda$lambda$static$1::*)()>(&FileSystemPreferences$$Lambda$lambda$static$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FileSystemPreferences$$Lambda$lambda$static$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.prefs.FileSystemPreferences$$Lambda$lambda$static$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* FileSystemPreferences$$Lambda$lambda$static$1::load$($String* name, bool initialize) {
	$loadClass(FileSystemPreferences$$Lambda$lambda$static$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FileSystemPreferences$$Lambda$lambda$static$1::class$ = nullptr;

class FileSystemPreferences$$Lambda$lambda$static$0$1 : public $PrivilegedAction {
	$class(FileSystemPreferences$$Lambda$lambda$static$0$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(FileSystemPreferences::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FileSystemPreferences$$Lambda$lambda$static$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FileSystemPreferences$$Lambda$lambda$static$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FileSystemPreferences$$Lambda$lambda$static$0$1::*)()>(&FileSystemPreferences$$Lambda$lambda$static$0$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo FileSystemPreferences$$Lambda$lambda$static$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.prefs.FileSystemPreferences$$Lambda$lambda$static$0$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* FileSystemPreferences$$Lambda$lambda$static$0$1::load$($String* name, bool initialize) {
	$loadClass(FileSystemPreferences$$Lambda$lambda$static$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FileSystemPreferences$$Lambda$lambda$static$0$1::class$ = nullptr;

$FieldInfo _FileSystemPreferences_FieldInfo_[] = {
	{"SYNC_INTERVAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FileSystemPreferences, SYNC_INTERVAL)},
	{"systemRootDir", "Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $staticField(FileSystemPreferences, systemRootDir)},
	{"isSystemRootWritable", "Z", nullptr, $PRIVATE | $STATIC, $staticField(FileSystemPreferences, isSystemRootWritable)},
	{"userRootDir", "Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $staticField(FileSystemPreferences, userRootDir)},
	{"isUserRootWritable", "Z", nullptr, $PRIVATE | $STATIC, $staticField(FileSystemPreferences, isUserRootWritable)},
	{"userRoot", "Ljava/util/prefs/Preferences;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(FileSystemPreferences, userRoot)},
	{"systemRoot", "Ljava/util/prefs/Preferences;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(FileSystemPreferences, systemRoot)},
	{"USER_READ_WRITE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileSystemPreferences, USER_READ_WRITE)},
	{"USER_RW_ALL_READ", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileSystemPreferences, USER_RW_ALL_READ)},
	{"USER_RWX_ALL_RX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileSystemPreferences, USER_RWX_ALL_RX)},
	{"USER_RWX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileSystemPreferences, USER_RWX)},
	{"userLockFile", "Ljava/io/File;", nullptr, $STATIC, $staticField(FileSystemPreferences, userLockFile)},
	{"systemLockFile", "Ljava/io/File;", nullptr, $STATIC, $staticField(FileSystemPreferences, systemLockFile)},
	{"userRootLockHandle", "I", nullptr, $PRIVATE | $STATIC, $staticField(FileSystemPreferences, userRootLockHandle)},
	{"systemRootLockHandle", "I", nullptr, $PRIVATE | $STATIC, $staticField(FileSystemPreferences, systemRootLockHandle)},
	{"dir", "Ljava/io/File;", nullptr, $PRIVATE | $FINAL, $field(FileSystemPreferences, dir)},
	{"prefsFile", "Ljava/io/File;", nullptr, $PRIVATE | $FINAL, $field(FileSystemPreferences, prefsFile)},
	{"tmpFile", "Ljava/io/File;", nullptr, $PRIVATE | $FINAL, $field(FileSystemPreferences, tmpFile)},
	{"userRootModFile", "Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $staticField(FileSystemPreferences, userRootModFile)},
	{"isUserRootModified", "Z", nullptr, $PRIVATE | $STATIC, $staticField(FileSystemPreferences, isUserRootModified)},
	{"userRootModTime", "J", nullptr, $PRIVATE | $STATIC, $staticField(FileSystemPreferences, userRootModTime)},
	{"systemRootModFile", "Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $staticField(FileSystemPreferences, systemRootModFile)},
	{"isSystemRootModified", "Z", nullptr, $PRIVATE | $STATIC, $staticField(FileSystemPreferences, isSystemRootModified)},
	{"systemRootModTime", "J", nullptr, $PRIVATE | $STATIC, $staticField(FileSystemPreferences, systemRootModTime)},
	{"prefsCache", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(FileSystemPreferences, prefsCache)},
	{"lastSyncTime", "J", nullptr, $PRIVATE, $field(FileSystemPreferences, lastSyncTime)},
	{"EAGAIN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileSystemPreferences, EAGAIN)},
	{"EACCES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileSystemPreferences, EACCES)},
	{"LOCK_HANDLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileSystemPreferences, LOCK_HANDLE)},
	{"ERROR_CODE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileSystemPreferences, ERROR_CODE)},
	{"changeLog", "Ljava/util/List;", "Ljava/util/List<Ljava/util/prefs/FileSystemPreferences$Change;>;", $FINAL, $field(FileSystemPreferences, changeLog)},
	{"nodeCreate", "Ljava/util/prefs/FileSystemPreferences$NodeCreate;", nullptr, 0, $field(FileSystemPreferences, nodeCreate)},
	{"syncTimer", "Ljava/util/Timer;", nullptr, $PRIVATE | $STATIC, $staticField(FileSystemPreferences, syncTimer)},
	{"isUserNode", "Z", nullptr, $PRIVATE | $FINAL, $field(FileSystemPreferences, isUserNode$)},
	{"EMPTY_STRING_ARRAY", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FileSystemPreferences, EMPTY_STRING_ARRAY)},
	{"INIT_SLEEP_TIME", "I", nullptr, $PRIVATE | $STATIC, $staticField(FileSystemPreferences, INIT_SLEEP_TIME)},
	{"MAX_ATTEMPTS", "I", nullptr, $PRIVATE | $STATIC, $staticField(FileSystemPreferences, MAX_ATTEMPTS)},
	{}
};

$MethodInfo _FileSystemPreferences_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(FileSystemPreferences::*)(bool)>(&FileSystemPreferences::init$))},
	{"<init>", "(Ljava/util/prefs/FileSystemPreferences;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(FileSystemPreferences::*)(FileSystemPreferences*,$String*)>(&FileSystemPreferences::init$))},
	{"byteArray", "(Ljava/lang/String;)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($String*)>(&FileSystemPreferences::byteArray))},
	{"checkLockFile0ErrorCode", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(FileSystemPreferences::*)(int32_t)>(&FileSystemPreferences::checkLockFile0ErrorCode)), "java.lang.SecurityException"},
	{"childSpi", "(Ljava/lang/String;)Ljava/util/prefs/AbstractPreferences;", nullptr, $PROTECTED},
	{"childrenNamesSpi", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"chmod", "(Ljava/lang/String;I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)($String*,int32_t)>(&FileSystemPreferences::chmod))},
	{"dirName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&FileSystemPreferences::dirName))},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.util.prefs.BackingStoreException"},
	{"flushSpi", "()V", nullptr, $PROTECTED, nullptr, "java.util.prefs.BackingStoreException"},
	{"getLogger", "()Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$PlatformLogger*(*)()>(&FileSystemPreferences::getLogger))},
	{"getSpi", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getSystemRoot", "()Ljava/util/prefs/Preferences;", nullptr, $STATIC, $method(static_cast<$Preferences*(*)()>(&FileSystemPreferences::getSystemRoot))},
	{"getUserRoot", "()Ljava/util/prefs/Preferences;", nullptr, $STATIC, $method(static_cast<$Preferences*(*)()>(&FileSystemPreferences::getUserRoot))},
	{"initCacheIfNecessary", "()V", nullptr, $PRIVATE, $method(static_cast<void(FileSystemPreferences::*)()>(&FileSystemPreferences::initCacheIfNecessary))},
	{"isDirChar", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&FileSystemPreferences::isDirChar))},
	{"isUserNode", "()Z", nullptr, $PUBLIC},
	{"keysSpi", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"lambda$static$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Void*(*)()>(&FileSystemPreferences::lambda$static$0))},
	{"lambda$static$1", "()Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Integer*(*)()>(&FileSystemPreferences::lambda$static$1))},
	{"loadCache", "()V", nullptr, $PRIVATE, $method(static_cast<void(FileSystemPreferences::*)()>(&FileSystemPreferences::loadCache)), "java.util.prefs.BackingStoreException"},
	{"lockFile", "(Z)Z", nullptr, $PRIVATE, $method(static_cast<bool(FileSystemPreferences::*)(bool)>(&FileSystemPreferences::lockFile)), "java.lang.SecurityException"},
	{"lockFile0", "(Ljava/lang/String;IZ)[I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$ints*(*)($String*,int32_t,bool)>(&FileSystemPreferences::lockFile0))},
	{"nodeName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&FileSystemPreferences::nodeName))},
	{"putSpi", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"removeNode", "()V", nullptr, $PUBLIC, nullptr, "java.util.prefs.BackingStoreException"},
	{"removeNodeSpi", "()V", nullptr, $PROTECTED, nullptr, "java.util.prefs.BackingStoreException"},
	{"removeSpi", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"replayChanges", "()V", nullptr, $PRIVATE, $method(static_cast<void(FileSystemPreferences::*)()>(&FileSystemPreferences::replayChanges))},
	{"setupSystemRoot", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&FileSystemPreferences::setupSystemRoot))},
	{"setupUserRoot", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&FileSystemPreferences::setupUserRoot))},
	{"sync", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.util.prefs.BackingStoreException"},
	{"syncSpi", "()V", nullptr, $PROTECTED, nullptr, "java.util.prefs.BackingStoreException"},
	{"syncSpiPrivileged", "()V", nullptr, $PRIVATE, $method(static_cast<void(FileSystemPreferences::*)()>(&FileSystemPreferences::syncSpiPrivileged)), "java.util.prefs.BackingStoreException"},
	{"syncWorld", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&FileSystemPreferences::syncWorld))},
	{"unlockFile", "()V", nullptr, $PRIVATE, $method(static_cast<void(FileSystemPreferences::*)()>(&FileSystemPreferences::unlockFile))},
	{"unlockFile0", "(I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t)>(&FileSystemPreferences::unlockFile0))},
	{"writeBackCache", "()V", nullptr, $PRIVATE, $method(static_cast<void(FileSystemPreferences::*)()>(&FileSystemPreferences::writeBackCache)), "java.util.prefs.BackingStoreException"},
	{}
};

#define _METHOD_INDEX_chmod 6
#define _METHOD_INDEX_lockFile0 22
#define _METHOD_INDEX_unlockFile0 36

$InnerClassInfo _FileSystemPreferences_InnerClassesInfo_[] = {
	{"java.util.prefs.FileSystemPreferences$NodeCreate", "java.util.prefs.FileSystemPreferences", "NodeCreate", $PRIVATE},
	{"java.util.prefs.FileSystemPreferences$Remove", "java.util.prefs.FileSystemPreferences", "Remove", $PRIVATE},
	{"java.util.prefs.FileSystemPreferences$Put", "java.util.prefs.FileSystemPreferences", "Put", $PRIVATE},
	{"java.util.prefs.FileSystemPreferences$Change", "java.util.prefs.FileSystemPreferences", "Change", $PRIVATE | $ABSTRACT},
	{"java.util.prefs.FileSystemPreferences$12", nullptr, nullptr, 0},
	{"java.util.prefs.FileSystemPreferences$11", nullptr, nullptr, 0},
	{"java.util.prefs.FileSystemPreferences$10", nullptr, nullptr, 0},
	{"java.util.prefs.FileSystemPreferences$9", nullptr, nullptr, 0},
	{"java.util.prefs.FileSystemPreferences$8", nullptr, nullptr, 0},
	{"java.util.prefs.FileSystemPreferences$7", nullptr, nullptr, 0},
	{"java.util.prefs.FileSystemPreferences$6", nullptr, nullptr, 0},
	{"java.util.prefs.FileSystemPreferences$5", nullptr, nullptr, 0},
	{"java.util.prefs.FileSystemPreferences$4", nullptr, nullptr, 0},
	{"java.util.prefs.FileSystemPreferences$3", nullptr, nullptr, 0},
	{"java.util.prefs.FileSystemPreferences$2", nullptr, nullptr, 0},
	{"java.util.prefs.FileSystemPreferences$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileSystemPreferences_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.FileSystemPreferences",
	"java.util.prefs.AbstractPreferences",
	nullptr,
	_FileSystemPreferences_FieldInfo_,
	_FileSystemPreferences_MethodInfo_,
	nullptr,
	nullptr,
	_FileSystemPreferences_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.prefs.FileSystemPreferences$NodeCreate,java.util.prefs.FileSystemPreferences$Remove,java.util.prefs.FileSystemPreferences$Put,java.util.prefs.FileSystemPreferences$Change,java.util.prefs.FileSystemPreferences$12,java.util.prefs.FileSystemPreferences$11,java.util.prefs.FileSystemPreferences$10,java.util.prefs.FileSystemPreferences$9,java.util.prefs.FileSystemPreferences$8,java.util.prefs.FileSystemPreferences$7,java.util.prefs.FileSystemPreferences$6,java.util.prefs.FileSystemPreferences$5,java.util.prefs.FileSystemPreferences$4,java.util.prefs.FileSystemPreferences$4$1,java.util.prefs.FileSystemPreferences$3,java.util.prefs.FileSystemPreferences$2,java.util.prefs.FileSystemPreferences$1"
};

$Object* allocate$FileSystemPreferences($Class* clazz) {
	return $of($alloc(FileSystemPreferences));
}

int32_t FileSystemPreferences::SYNC_INTERVAL = 0;
$File* FileSystemPreferences::systemRootDir = nullptr;
bool FileSystemPreferences::isSystemRootWritable = false;
$File* FileSystemPreferences::userRootDir = nullptr;
bool FileSystemPreferences::isUserRootWritable = false;
$volatile($Preferences*) FileSystemPreferences::userRoot = nullptr;
$volatile($Preferences*) FileSystemPreferences::systemRoot = nullptr;
$File* FileSystemPreferences::userLockFile = nullptr;
$File* FileSystemPreferences::systemLockFile = nullptr;
int32_t FileSystemPreferences::userRootLockHandle = 0;
int32_t FileSystemPreferences::systemRootLockHandle = 0;
$File* FileSystemPreferences::userRootModFile = nullptr;
bool FileSystemPreferences::isUserRootModified = false;
int64_t FileSystemPreferences::userRootModTime = 0;
$File* FileSystemPreferences::systemRootModFile = nullptr;
bool FileSystemPreferences::isSystemRootModified = false;
int64_t FileSystemPreferences::systemRootModTime = 0;
$Timer* FileSystemPreferences::syncTimer = nullptr;
$StringArray* FileSystemPreferences::EMPTY_STRING_ARRAY = nullptr;
int32_t FileSystemPreferences::INIT_SLEEP_TIME = 0;
int32_t FileSystemPreferences::MAX_ATTEMPTS = 0;

$PlatformLogger* FileSystemPreferences::getLogger() {
	$init(FileSystemPreferences);
	return $PlatformLogger::getLogger("java.util.prefs"_s);
}

$Preferences* FileSystemPreferences::getUserRoot() {
	$init(FileSystemPreferences);
	$var($Preferences, root, FileSystemPreferences::userRoot);
	if (root == nullptr) {
		$synchronized(FileSystemPreferences::class$) {
			$assign(root, FileSystemPreferences::userRoot);
			if (root == nullptr) {
				setupUserRoot();
				$assignStatic(FileSystemPreferences::userRoot, ($assign(root, $new(FileSystemPreferences, true))));
			}
		}
	}
	return root;
}

void FileSystemPreferences::setupUserRoot() {
	$init(FileSystemPreferences);
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($FileSystemPreferences$1)));
}

$Preferences* FileSystemPreferences::getSystemRoot() {
	$init(FileSystemPreferences);
	$var($Preferences, root, FileSystemPreferences::systemRoot);
	if (root == nullptr) {
		$synchronized(FileSystemPreferences::class$) {
			$assign(root, FileSystemPreferences::systemRoot);
			if (root == nullptr) {
				setupSystemRoot();
				$assignStatic(FileSystemPreferences::systemRoot, ($assign(root, $new(FileSystemPreferences, false))));
			}
		}
	}
	return root;
}

void FileSystemPreferences::setupSystemRoot() {
	$init(FileSystemPreferences);
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($FileSystemPreferences$2)));
}

void FileSystemPreferences::replayChanges() {
	$useLocalCurrentObjectStackCache();
	{
		int32_t i = 0;
		int32_t n = $nc(this->changeLog)->size();
		for (; i < n; ++i) {
			$nc(($cast($FileSystemPreferences$Change, $($nc(this->changeLog)->get(i)))))->replay();
		}
	}
}

void FileSystemPreferences::syncWorld() {
	$init(FileSystemPreferences);
	$useLocalCurrentObjectStackCache();
	$var($Preferences, userRt, nullptr);
	$var($Preferences, systemRt, nullptr);
	$synchronized(FileSystemPreferences::class$) {
		$assign(userRt, FileSystemPreferences::userRoot);
		$assign(systemRt, FileSystemPreferences::systemRoot);
	}
	try {
		if (userRt != nullptr) {
			userRt->flush();
		}
	} catch ($BackingStoreException& e) {
		$nc($(getLogger()))->warning($$str({"Couldn\'t flush user prefs: "_s, e}));
	}
	try {
		if (systemRt != nullptr) {
			systemRt->flush();
		}
	} catch ($BackingStoreException& e) {
		$nc($(getLogger()))->warning($$str({"Couldn\'t flush system prefs: "_s, e}));
	}
}

void FileSystemPreferences::init$(bool user) {
	$AbstractPreferences::init$(nullptr, ""_s);
	$set(this, prefsCache, nullptr);
	this->lastSyncTime = 0;
	$set(this, changeLog, $new($ArrayList));
	$set(this, nodeCreate, nullptr);
	this->isUserNode$ = user;
	$set(this, dir, user ? FileSystemPreferences::userRootDir : FileSystemPreferences::systemRootDir);
	$set(this, prefsFile, $new($File, this->dir, "prefs.xml"_s));
	$set(this, tmpFile, $new($File, this->dir, "prefs.tmp"_s));
}

void FileSystemPreferences::init$(FileSystemPreferences* parent, $String* name) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$AbstractPreferences::init$(parent, name);
	$set(this, prefsCache, nullptr);
	this->lastSyncTime = 0;
	$set(this, changeLog, $new($ArrayList));
	$set(this, nodeCreate, nullptr);
	this->isUserNode$ = $nc(parent)->isUserNode$;
	$set(this, dir, $new($File, parent->dir, $(dirName(name))));
	$set(this, prefsFile, $new($File, this->dir, "prefs.xml"_s));
	$set(this, tmpFile, $new($File, this->dir, "prefs.tmp"_s));
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($FileSystemPreferences$5, this)));
	if (this->newNode) {
		$set(this, prefsCache, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap))));
		$set(this, nodeCreate, $new($FileSystemPreferences$NodeCreate, this));
		$nc(this->changeLog)->add(this->nodeCreate);
	}
}

bool FileSystemPreferences::isUserNode() {
	return this->isUserNode$;
}

void FileSystemPreferences::putSpi($String* key, $String* value) {
	initCacheIfNecessary();
	$nc(this->changeLog)->add($$new($FileSystemPreferences$Put, this, key, value));
	$nc(this->prefsCache)->put(key, value);
}

$String* FileSystemPreferences::getSpi($String* key) {
	initCacheIfNecessary();
	return $cast($String, $nc(this->prefsCache)->get(key));
}

void FileSystemPreferences::removeSpi($String* key) {
	initCacheIfNecessary();
	$nc(this->changeLog)->add($$new($FileSystemPreferences$Remove, this, key));
	$nc(this->prefsCache)->remove(key);
}

void FileSystemPreferences::initCacheIfNecessary() {
	if (this->prefsCache != nullptr) {
		return;
	}
	try {
		loadCache();
	} catch ($Exception& e) {
		$set(this, prefsCache, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap))));
	}
}

void FileSystemPreferences::loadCache() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($FileSystemPreferences$6, this)));
	} catch ($PrivilegedActionException& e) {
		$throw($cast($BackingStoreException, $(e->getException())));
	}
}

void FileSystemPreferences::writeBackCache() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($FileSystemPreferences$7, this)));
	} catch ($PrivilegedActionException& e) {
		$throw($cast($BackingStoreException, $(e->getException())));
	}
}

$StringArray* FileSystemPreferences::keysSpi() {
	$useLocalCurrentObjectStackCache();
	initCacheIfNecessary();
	return $fcast($StringArray, $nc($($nc(this->prefsCache)->keySet()))->toArray($$new($StringArray, $nc(this->prefsCache)->size())));
}

$StringArray* FileSystemPreferences::childrenNamesSpi() {
	$beforeCallerSensitive();
	return $cast($StringArray, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($FileSystemPreferences$8, this))));
}

$AbstractPreferences* FileSystemPreferences::childSpi($String* name) {
	return $new(FileSystemPreferences, this, name);
}

void FileSystemPreferences::removeNode() {
	$useLocalCurrentObjectStackCache();
	$synchronized(isUserNode() ? FileSystemPreferences::userLockFile : FileSystemPreferences::systemLockFile) {
		if (!lockFile(false)) {
			$throw($$new($BackingStoreException, "Couldn\'t get file lock."_s));
		}
		{
			$var($Throwable, var$0, nullptr);
			try {
				$AbstractPreferences::removeNode();
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				unlockFile();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void FileSystemPreferences::removeNodeSpi() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($FileSystemPreferences$9, this)));
	} catch ($PrivilegedActionException& e) {
		$throw($cast($BackingStoreException, $(e->getException())));
	}
}

void FileSystemPreferences::sync() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$beforeCallerSensitive();
		bool userNode = isUserNode();
		bool shared = false;
		if (userNode) {
			shared = false;
		} else {
			shared = !FileSystemPreferences::isSystemRootWritable;
		}
		$synchronized(isUserNode() ? FileSystemPreferences::userLockFile : FileSystemPreferences::systemLockFile) {
			if (!lockFile(shared)) {
				$throw($$new($BackingStoreException, "Couldn\'t get file lock."_s));
			}
			$var($Long, newModTime, $cast($Long, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($FileSystemPreferences$10, this)))));
			{
				$var($Throwable, var$0, nullptr);
				try {
					$AbstractPreferences::sync();
					$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($FileSystemPreferences$11, this, newModTime)));
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					unlockFile();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

void FileSystemPreferences::syncSpi() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($FileSystemPreferences$12, this)));
	} catch ($PrivilegedActionException& e) {
		$throw($cast($BackingStoreException, $(e->getException())));
	}
}

void FileSystemPreferences::syncSpiPrivileged() {
	if (isRemoved()) {
		$throwNew($IllegalStateException, "Node has been removed"_s);
	}
	if (this->prefsCache == nullptr) {
		return;
	}
	int64_t lastModifiedTime = 0;
	if (isUserNode() ? FileSystemPreferences::isUserRootModified : FileSystemPreferences::isSystemRootModified) {
		lastModifiedTime = $nc(this->prefsFile)->lastModified();
		if (lastModifiedTime != this->lastSyncTime) {
			loadCache();
			replayChanges();
			this->lastSyncTime = lastModifiedTime;
		}
	} else if (this->lastSyncTime != 0 && !$nc(this->dir)->exists()) {
		$set(this, prefsCache, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap))));
		replayChanges();
	}
	if (!$nc(this->changeLog)->isEmpty()) {
		writeBackCache();
		lastModifiedTime = $nc(this->prefsFile)->lastModified();
		if (this->lastSyncTime <= lastModifiedTime) {
			this->lastSyncTime = lastModifiedTime + 1000;
			$nc(this->prefsFile)->setLastModified(this->lastSyncTime);
		}
		$nc(this->changeLog)->clear();
	}
}

void FileSystemPreferences::flush() {
	if (isRemoved()) {
		return;
	}
	sync();
}

void FileSystemPreferences::flushSpi() {
}

bool FileSystemPreferences::isDirChar(char16_t ch) {
	$init(FileSystemPreferences);
	return ch > 31 && ch < 127 && ch != u'/' && ch != u'.' && ch != u'_';
}

$String* FileSystemPreferences::dirName($String* nodeName) {
	$init(FileSystemPreferences);
	$useLocalCurrentObjectStackCache();
	{
		int32_t i = 0;
		int32_t n = $nc(nodeName)->length();
		for (; i < n; ++i) {
			if (!isDirChar(nodeName->charAt(i))) {
				return $str({"_"_s, $($Base64::byteArrayToAltBase64($(byteArray(nodeName))))});
			}
		}
	}
	return nodeName;
}

$bytes* FileSystemPreferences::byteArray($String* s) {
	$init(FileSystemPreferences);
	int32_t len = $nc(s)->length();
	$var($bytes, result, $new($bytes, 2 * len));
	{
		int32_t i = 0;
		int32_t j = 0;
		for (; i < len; ++i) {
			char16_t c = s->charAt(i);
			result->set(j++, (int8_t)(c >> 8));
			result->set(j++, (int8_t)c);
		}
	}
	return result;
}

$String* FileSystemPreferences::nodeName($String* dirName) {
	$init(FileSystemPreferences);
	$useLocalCurrentObjectStackCache();
	if ($nc(dirName)->charAt(0) != u'_') {
		return dirName;
	}
	$var($bytes, a, $Base64::altBase64ToByteArray($($nc(dirName)->substring(1))));
	$var($StringBuffer, result, $new($StringBuffer, $nc(a)->length / 2));
	for (int32_t i = 0; i < $nc(a)->length;) {
		int32_t highByte = (int32_t)(a->get(i++) & (uint32_t)255);
		int32_t lowByte = (int32_t)(a->get(i++) & (uint32_t)255);
		result->append((char16_t)((highByte << 8) | lowByte));
	}
	return result->toString();
}

bool FileSystemPreferences::lockFile(bool shared) {
	$useLocalCurrentObjectStackCache();
	bool usernode = isUserNode();
	$var($ints, result, nullptr);
	int32_t errorCode = 0;
	$var($File, lockFile, usernode ? FileSystemPreferences::userLockFile : FileSystemPreferences::systemLockFile);
	int64_t sleepTime = FileSystemPreferences::INIT_SLEEP_TIME;
	for (int32_t i = 0; i < FileSystemPreferences::MAX_ATTEMPTS; ++i) {
		try {
			int32_t perm = (usernode ? FileSystemPreferences::USER_READ_WRITE : FileSystemPreferences::USER_RW_ALL_READ);
			$assign(result, lockFile0($($nc(lockFile)->getCanonicalPath()), perm, shared));
			errorCode = $nc(result)->get(FileSystemPreferences::ERROR_CODE);
			if (result->get(FileSystemPreferences::LOCK_HANDLE) != 0) {
				if (usernode) {
					FileSystemPreferences::userRootLockHandle = result->get(FileSystemPreferences::LOCK_HANDLE);
				} else {
					FileSystemPreferences::systemRootLockHandle = result->get(FileSystemPreferences::LOCK_HANDLE);
				}
				return true;
			}
		} catch ($IOException& e) {
		}
		try {
			$Thread::sleep(sleepTime);
		} catch ($InterruptedException& e) {
			checkLockFile0ErrorCode(errorCode);
			return false;
		}
		sleepTime *= 2;
	}
	checkLockFile0ErrorCode(errorCode);
	return false;
}

void FileSystemPreferences::checkLockFile0ErrorCode(int32_t errorCode) {
	$useLocalCurrentObjectStackCache();
	if (errorCode == FileSystemPreferences::EACCES) {
		$throwNew($SecurityException, $$str({"Could not lock "_s, (isUserNode() ? "User prefs."_s : "System prefs."_s), " Lock file access denied."_s}));
	}
	if (errorCode != FileSystemPreferences::EAGAIN) {
		$nc($(getLogger()))->warning($$str({"Could not lock "_s, (isUserNode() ? "User prefs. "_s : "System prefs."_s), " Unix error code "_s, $$str(errorCode), "."_s}));
	}
}

$ints* FileSystemPreferences::lockFile0($String* fileName, int32_t permission, bool shared) {
	$init(FileSystemPreferences);
	$var($ints, $ret, nullptr);
	$prepareNativeStatic(FileSystemPreferences, lockFile0, $ints*, $String* fileName, int32_t permission, bool shared);
	$assign($ret, $invokeNativeStatic(FileSystemPreferences, lockFile0, fileName, permission, shared));
	$finishNativeStatic();
	return $ret;
}

int32_t FileSystemPreferences::unlockFile0(int32_t lockHandle) {
	$init(FileSystemPreferences);
	int32_t $ret = 0;
	$prepareNativeStatic(FileSystemPreferences, unlockFile0, int32_t, int32_t lockHandle);
	$ret = $invokeNativeStatic(FileSystemPreferences, unlockFile0, lockHandle);
	$finishNativeStatic();
	return $ret;
}

int32_t FileSystemPreferences::chmod($String* fileName, int32_t permission) {
	$init(FileSystemPreferences);
	int32_t $ret = 0;
	$prepareNativeStatic(FileSystemPreferences, chmod, int32_t, $String* fileName, int32_t permission);
	$ret = $invokeNativeStatic(FileSystemPreferences, chmod, fileName, permission);
	$finishNativeStatic();
	return $ret;
}

void FileSystemPreferences::unlockFile() {
	$useLocalCurrentObjectStackCache();
	int32_t result = 0;
	bool usernode = isUserNode();
	$var($File, lockFile, usernode ? FileSystemPreferences::userLockFile : FileSystemPreferences::systemLockFile);
	int32_t lockHandle = (usernode ? FileSystemPreferences::userRootLockHandle : FileSystemPreferences::systemRootLockHandle);
	if (lockHandle == 0) {
		$nc($(getLogger()))->warning($$str({"Unlock: zero lockHandle for "_s, (usernode ? "user"_s : "system"_s), " preferences.)"_s}));
		return;
	}
	result = unlockFile0(lockHandle);
	if (result != 0) {
		$nc($(getLogger()))->warning($$str({"Could not drop file-lock on "_s, (isUserNode() ? "user"_s : "system"_s), " preferences. Unix error code "_s, $$str(result), "."_s}));
		if (result == FileSystemPreferences::EACCES) {
			$throwNew($SecurityException, $$str({"Could not unlock"_s, (isUserNode() ? "User prefs."_s : "System prefs."_s), " Lock file access denied."_s}));
		}
	}
	if (isUserNode()) {
		FileSystemPreferences::userRootLockHandle = 0;
	} else {
		FileSystemPreferences::systemRootLockHandle = 0;
	}
}

$Integer* FileSystemPreferences::lambda$static$1() {
	$init(FileSystemPreferences);
	return $Integer::getInteger("java.util.prefs.syncInterval"_s, 30);
}

$Void* FileSystemPreferences::lambda$static$0() {
	$init(FileSystemPreferences);
	$beforeCallerSensitive();
	$System::loadLibrary("prefs"_s);
	return nullptr;
}

void clinit$FileSystemPreferences($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		$var($PrivilegedAction, load, static_cast<$PrivilegedAction*>($new(FileSystemPreferences$$Lambda$lambda$static$0$1)));
		$AccessController::doPrivileged(load);
	}
	FileSystemPreferences::SYNC_INTERVAL = $Math::max(1, $nc(($cast($Integer, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(FileSystemPreferences$$Lambda$lambda$static$1)))))))->intValue());
	FileSystemPreferences::userRootLockHandle = 0;
	FileSystemPreferences::systemRootLockHandle = 0;
	FileSystemPreferences::isUserRootModified = false;
	FileSystemPreferences::isSystemRootModified = false;
	$assignStatic(FileSystemPreferences::syncTimer, $new($Timer, true));
	{
		$nc(FileSystemPreferences::syncTimer)->schedule(static_cast<$TimerTask*>($$new($FileSystemPreferences$3)), (int64_t)(FileSystemPreferences::SYNC_INTERVAL * 1000), (int64_t)(FileSystemPreferences::SYNC_INTERVAL * 1000));
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($FileSystemPreferences$4)));
	}
	$assignStatic(FileSystemPreferences::EMPTY_STRING_ARRAY, $new($StringArray, 0));
	FileSystemPreferences::INIT_SLEEP_TIME = 50;
	FileSystemPreferences::MAX_ATTEMPTS = 5;
}

FileSystemPreferences::FileSystemPreferences() {
}

$Class* FileSystemPreferences::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(FileSystemPreferences$$Lambda$lambda$static$1::classInfo$.name)) {
			return FileSystemPreferences$$Lambda$lambda$static$1::load$(name, initialize);
		}
		if (name->equals(FileSystemPreferences$$Lambda$lambda$static$0$1::classInfo$.name)) {
			return FileSystemPreferences$$Lambda$lambda$static$0$1::load$(name, initialize);
		}
	}
	$loadClass(FileSystemPreferences, name, initialize, &_FileSystemPreferences_ClassInfo_, clinit$FileSystemPreferences, allocate$FileSystemPreferences);
	return class$;
}

$Class* FileSystemPreferences::class$ = nullptr;

		} // prefs
	} // util
} // java