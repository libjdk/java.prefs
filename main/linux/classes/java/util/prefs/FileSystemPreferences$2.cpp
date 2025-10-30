#include <java/util/prefs/FileSystemPreferences$2.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/util/prefs/FileSystemPreferences.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

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

$MethodInfo _FileSystemPreferences$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FileSystemPreferences$2::*)()>(&FileSystemPreferences$2::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FileSystemPreferences$2_EnclosingMethodInfo_ = {
	"java.util.prefs.FileSystemPreferences",
	"setupSystemRoot",
	"()V"
};

$InnerClassInfo _FileSystemPreferences$2_InnerClassesInfo_[] = {
	{"java.util.prefs.FileSystemPreferences$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileSystemPreferences$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.FileSystemPreferences$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_FileSystemPreferences$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_FileSystemPreferences$2_EnclosingMethodInfo_,
	_FileSystemPreferences$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.FileSystemPreferences"
};

$Object* allocate$FileSystemPreferences$2($Class* clazz) {
	return $of($alloc(FileSystemPreferences$2));
}

void FileSystemPreferences$2::init$() {
}

$Object* FileSystemPreferences$2::run() {
	$useLocalCurrentObjectStackCache();
	$var($String, systemPrefsDirName, $System::getProperty("java.util.prefs.systemRoot"_s, "/etc/.java"_s));
	$init($FileSystemPreferences);
	$assignStatic($FileSystemPreferences::systemRootDir, $new($File, systemPrefsDirName, ".systemPrefs"_s));
	if (!$nc($FileSystemPreferences::systemRootDir)->exists()) {
		$assignStatic($FileSystemPreferences::systemRootDir, $new($File, $($System::getProperty("java.home"_s)), ".systemPrefs"_s));
		if (!$nc($FileSystemPreferences::systemRootDir)->exists()) {
			if ($nc($FileSystemPreferences::systemRootDir)->mkdirs()) {
				$nc($($FileSystemPreferences::getLogger()))->info("Created system preferences directory in java.home."_s);
				try {
					$FileSystemPreferences::chmod($($nc($FileSystemPreferences::systemRootDir)->getCanonicalPath()), 493);
				} catch ($IOException& e) {
				}
			} else {
				$nc($($FileSystemPreferences::getLogger()))->warning("Could not create system preferences directory. System preferences are unusable."_s);
			}
		}
	}
	$FileSystemPreferences::isSystemRootWritable = $nc($FileSystemPreferences::systemRootDir)->canWrite();
	$assignStatic($FileSystemPreferences::systemLockFile, $new($File, $FileSystemPreferences::systemRootDir, ".system.lock"_s));
	$assignStatic($FileSystemPreferences::systemRootModFile, $new($File, $FileSystemPreferences::systemRootDir, ".systemRootModFile"_s));
	if (!$nc($FileSystemPreferences::systemRootModFile)->exists() && $FileSystemPreferences::isSystemRootWritable) {
		try {
			$nc($FileSystemPreferences::systemRootModFile)->createNewFile();
			int32_t result = $FileSystemPreferences::chmod($($nc($FileSystemPreferences::systemRootModFile)->getCanonicalPath()), 420);
			if (result != 0) {
				$nc($($FileSystemPreferences::getLogger()))->warning($$str({"Chmod failed on "_s, $($nc($FileSystemPreferences::systemRootModFile)->getCanonicalPath()), " Unix error code "_s, $$str(result)}));
			}
		} catch ($IOException& e) {
			$nc($($FileSystemPreferences::getLogger()))->warning($(e->toString()));
		}
	}
	$FileSystemPreferences::systemRootModTime = $nc($FileSystemPreferences::systemRootModFile)->lastModified();
	return $of(nullptr);
}

FileSystemPreferences$2::FileSystemPreferences$2() {
}

$Class* FileSystemPreferences$2::load$($String* name, bool initialize) {
	$loadClass(FileSystemPreferences$2, name, initialize, &_FileSystemPreferences$2_ClassInfo_, allocate$FileSystemPreferences$2);
	return class$;
}

$Class* FileSystemPreferences$2::class$ = nullptr;

		} // prefs
	} // util
} // java