#include <java/util/prefs/FileSystemPreferences$4.h>

#include <java/lang/Runnable.h>
#include <java/lang/Runtime.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/prefs/FileSystemPreferences$4$1.h>
#include <java/util/prefs/FileSystemPreferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $FileSystemPreferences = ::java::util::prefs::FileSystemPreferences;
using $FileSystemPreferences$4$1 = ::java::util::prefs::FileSystemPreferences$4$1;

namespace java {
	namespace util {
		namespace prefs {

$MethodInfo _FileSystemPreferences$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FileSystemPreferences$4::*)()>(&FileSystemPreferences$4::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FileSystemPreferences$4_EnclosingMethodInfo_ = {
	"java.util.prefs.FileSystemPreferences",
	nullptr,
	nullptr
};

$InnerClassInfo _FileSystemPreferences$4_InnerClassesInfo_[] = {
	{"java.util.prefs.FileSystemPreferences$4", nullptr, nullptr, 0},
	{"java.util.prefs.FileSystemPreferences$4$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileSystemPreferences$4_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.FileSystemPreferences$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_FileSystemPreferences$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_FileSystemPreferences$4_EnclosingMethodInfo_,
	_FileSystemPreferences$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.FileSystemPreferences"
};

$Object* allocate$FileSystemPreferences$4($Class* clazz) {
	return $of($alloc(FileSystemPreferences$4));
}

void FileSystemPreferences$4::init$() {
}

$Object* FileSystemPreferences$4::run() {
	$useLocalCurrentObjectStackCache();
	$nc($($Runtime::getRuntime()))->addShutdownHook($$new($FileSystemPreferences$4$1, this, nullptr, nullptr, "Sync Timer Thread"_s, 0, false));
	return $of(nullptr);
}

FileSystemPreferences$4::FileSystemPreferences$4() {
}

$Class* FileSystemPreferences$4::load$($String* name, bool initialize) {
	$loadClass(FileSystemPreferences$4, name, initialize, &_FileSystemPreferences$4_ClassInfo_, allocate$FileSystemPreferences$4);
	return class$;
}

$Class* FileSystemPreferences$4::class$ = nullptr;

		} // prefs
	} // util
} // java