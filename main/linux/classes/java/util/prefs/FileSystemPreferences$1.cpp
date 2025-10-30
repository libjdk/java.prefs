#include <java/util/prefs/FileSystemPreferences$1.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/util/prefs/FileSystemPreferences.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef USER_NAME

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $FileSystemPreferences = ::java::util::prefs::FileSystemPreferences;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace java {
	namespace util {
		namespace prefs {

$MethodInfo _FileSystemPreferences$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FileSystemPreferences$1::*)()>(&FileSystemPreferences$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FileSystemPreferences$1_EnclosingMethodInfo_ = {
	"java.util.prefs.FileSystemPreferences",
	"setupUserRoot",
	"()V"
};

$InnerClassInfo _FileSystemPreferences$1_InnerClassesInfo_[] = {
	{"java.util.prefs.FileSystemPreferences$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileSystemPreferences$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.FileSystemPreferences$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_FileSystemPreferences$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_FileSystemPreferences$1_EnclosingMethodInfo_,
	_FileSystemPreferences$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.FileSystemPreferences"
};

$Object* allocate$FileSystemPreferences$1($Class* clazz) {
	return $of($alloc(FileSystemPreferences$1));
}

void FileSystemPreferences$1::init$() {
}

$Object* FileSystemPreferences$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($FileSystemPreferences);
	$assignStatic($FileSystemPreferences::userRootDir, $new($File, $($System::getProperty("java.util.prefs.userRoot"_s, $($System::getProperty("user.home"_s)))), ".java/.userPrefs"_s));
	if (!$nc($FileSystemPreferences::userRootDir)->exists()) {
		if ($nc($FileSystemPreferences::userRootDir)->mkdirs()) {
			try {
				$FileSystemPreferences::chmod($($nc($FileSystemPreferences::userRootDir)->getCanonicalPath()), 448);
			} catch ($IOException& e) {
				$nc($($FileSystemPreferences::getLogger()))->warning("Could not change permissions on userRoot directory. "_s);
			}
			$nc($($FileSystemPreferences::getLogger()))->info("Created user preferences directory."_s);
		} else {
			$nc($($FileSystemPreferences::getLogger()))->warning("Couldn\'t create user preferences directory. User preferences are unusable."_s);
		}
	}
	$FileSystemPreferences::isUserRootWritable = $nc($FileSystemPreferences::userRootDir)->canWrite();
	$var($String, USER_NAME, $System::getProperty("user.name"_s));
	$assignStatic($FileSystemPreferences::userLockFile, $new($File, $FileSystemPreferences::userRootDir, $$str({".user.lock."_s, USER_NAME})));
	$assignStatic($FileSystemPreferences::userRootModFile, $new($File, $FileSystemPreferences::userRootDir, $$str({".userRootModFile."_s, USER_NAME})));
	if (!$nc($FileSystemPreferences::userRootModFile)->exists()) {
		try {
			$nc($FileSystemPreferences::userRootModFile)->createNewFile();
			int32_t result = $FileSystemPreferences::chmod($($nc($FileSystemPreferences::userRootModFile)->getCanonicalPath()), 384);
			if (result != 0) {
				$nc($($FileSystemPreferences::getLogger()))->warning($$str({"Problem creating userRoot mod file. Chmod failed on "_s, $($nc($FileSystemPreferences::userRootModFile)->getCanonicalPath()), " Unix error code "_s, $$str(result)}));
			}
		} catch ($IOException& e) {
			$nc($($FileSystemPreferences::getLogger()))->warning($(e->toString()));
		}
	}
	$FileSystemPreferences::userRootModTime = $nc($FileSystemPreferences::userRootModFile)->lastModified();
	return $of(nullptr);
}

FileSystemPreferences$1::FileSystemPreferences$1() {
}

$Class* FileSystemPreferences$1::load$($String* name, bool initialize) {
	$loadClass(FileSystemPreferences$1, name, initialize, &_FileSystemPreferences$1_ClassInfo_, allocate$FileSystemPreferences$1);
	return class$;
}

$Class* FileSystemPreferences$1::class$ = nullptr;

		} // prefs
	} // util
} // java