#include <java/util/prefs/FileSystemPreferences$10.h>

#include <java/io/File.h>
#include <java/util/prefs/FileSystemPreferences.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $FileSystemPreferences = ::java::util::prefs::FileSystemPreferences;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _FileSystemPreferences$10_FieldInfo_[] = {
	{"this$0", "Ljava/util/prefs/FileSystemPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(FileSystemPreferences$10, this$0)},
	{}
};

$MethodInfo _FileSystemPreferences$10_MethodInfo_[] = {
	{"<init>", "(Ljava/util/prefs/FileSystemPreferences;)V", nullptr, 0, $method(static_cast<void(FileSystemPreferences$10::*)($FileSystemPreferences*)>(&FileSystemPreferences$10::init$))},
	{"run", "()Ljava/lang/Long;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FileSystemPreferences$10_EnclosingMethodInfo_ = {
	"java.util.prefs.FileSystemPreferences",
	"sync",
	"()V"
};

$InnerClassInfo _FileSystemPreferences$10_InnerClassesInfo_[] = {
	{"java.util.prefs.FileSystemPreferences$10", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileSystemPreferences$10_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.FileSystemPreferences$10",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_FileSystemPreferences$10_FieldInfo_,
	_FileSystemPreferences$10_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Long;>;",
	&_FileSystemPreferences$10_EnclosingMethodInfo_,
	_FileSystemPreferences$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.FileSystemPreferences"
};

$Object* allocate$FileSystemPreferences$10($Class* clazz) {
	return $of($alloc(FileSystemPreferences$10));
}

void FileSystemPreferences$10::init$($FileSystemPreferences* this$0) {
	$set(this, this$0, this$0);
}

$Object* FileSystemPreferences$10::run() {
	int64_t nmt = 0;
	if (this->this$0->isUserNode()) {
		$init($FileSystemPreferences);
		nmt = $nc($FileSystemPreferences::userRootModFile)->lastModified();
		$FileSystemPreferences::isUserRootModified = $FileSystemPreferences::userRootModTime == nmt;
	} else {
		$init($FileSystemPreferences);
		nmt = $nc($FileSystemPreferences::systemRootModFile)->lastModified();
		$FileSystemPreferences::isSystemRootModified = $FileSystemPreferences::systemRootModTime == nmt;
	}
	return $of($Long::valueOf(nmt));
}

FileSystemPreferences$10::FileSystemPreferences$10() {
}

$Class* FileSystemPreferences$10::load$($String* name, bool initialize) {
	$loadClass(FileSystemPreferences$10, name, initialize, &_FileSystemPreferences$10_ClassInfo_, allocate$FileSystemPreferences$10);
	return class$;
}

$Class* FileSystemPreferences$10::class$ = nullptr;

		} // prefs
	} // util
} // java