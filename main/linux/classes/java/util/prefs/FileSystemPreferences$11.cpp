#include <java/util/prefs/FileSystemPreferences$11.h>

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

$FieldInfo _FileSystemPreferences$11_FieldInfo_[] = {
	{"this$0", "Ljava/util/prefs/FileSystemPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(FileSystemPreferences$11, this$0)},
	{"val$newModTime", "Ljava/lang/Long;", nullptr, $FINAL | $SYNTHETIC, $field(FileSystemPreferences$11, val$newModTime)},
	{}
};

$MethodInfo _FileSystemPreferences$11_MethodInfo_[] = {
	{"<init>", "(Ljava/util/prefs/FileSystemPreferences;Ljava/lang/Long;)V", "()V", 0, $method(static_cast<void(FileSystemPreferences$11::*)($FileSystemPreferences*,$Long*)>(&FileSystemPreferences$11::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FileSystemPreferences$11_EnclosingMethodInfo_ = {
	"java.util.prefs.FileSystemPreferences",
	"sync",
	"()V"
};

$InnerClassInfo _FileSystemPreferences$11_InnerClassesInfo_[] = {
	{"java.util.prefs.FileSystemPreferences$11", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileSystemPreferences$11_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.FileSystemPreferences$11",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_FileSystemPreferences$11_FieldInfo_,
	_FileSystemPreferences$11_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_FileSystemPreferences$11_EnclosingMethodInfo_,
	_FileSystemPreferences$11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.FileSystemPreferences"
};

$Object* allocate$FileSystemPreferences$11($Class* clazz) {
	return $of($alloc(FileSystemPreferences$11));
}

void FileSystemPreferences$11::init$($FileSystemPreferences* this$0, $Long* val$newModTime) {
	$set(this, this$0, this$0);
	$set(this, val$newModTime, val$newModTime);
}

$Object* FileSystemPreferences$11::run() {
	if (this->this$0->isUserNode()) {
		$init($FileSystemPreferences);
		$FileSystemPreferences::userRootModTime = $nc(this->val$newModTime)->longValue() + 1000;
		$nc($FileSystemPreferences::userRootModFile)->setLastModified($FileSystemPreferences::userRootModTime);
	} else {
		$init($FileSystemPreferences);
		$FileSystemPreferences::systemRootModTime = $nc(this->val$newModTime)->longValue() + 1000;
		$nc($FileSystemPreferences::systemRootModFile)->setLastModified($FileSystemPreferences::systemRootModTime);
	}
	return $of(nullptr);
}

FileSystemPreferences$11::FileSystemPreferences$11() {
}

$Class* FileSystemPreferences$11::load$($String* name, bool initialize) {
	$loadClass(FileSystemPreferences$11, name, initialize, &_FileSystemPreferences$11_ClassInfo_, allocate$FileSystemPreferences$11);
	return class$;
}

$Class* FileSystemPreferences$11::class$ = nullptr;

		} // prefs
	} // util
} // java