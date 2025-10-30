#include <java/util/prefs/FileSystemPreferences$3.h>

#include <java/util/TimerTask.h>
#include <java/util/prefs/FileSystemPreferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimerTask = ::java::util::TimerTask;
using $FileSystemPreferences = ::java::util::prefs::FileSystemPreferences;

namespace java {
	namespace util {
		namespace prefs {

$MethodInfo _FileSystemPreferences$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FileSystemPreferences$3::*)()>(&FileSystemPreferences$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FileSystemPreferences$3_EnclosingMethodInfo_ = {
	"java.util.prefs.FileSystemPreferences",
	nullptr,
	nullptr
};

$InnerClassInfo _FileSystemPreferences$3_InnerClassesInfo_[] = {
	{"java.util.prefs.FileSystemPreferences$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileSystemPreferences$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.FileSystemPreferences$3",
	"java.util.TimerTask",
	nullptr,
	nullptr,
	_FileSystemPreferences$3_MethodInfo_,
	nullptr,
	&_FileSystemPreferences$3_EnclosingMethodInfo_,
	_FileSystemPreferences$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.FileSystemPreferences"
};

$Object* allocate$FileSystemPreferences$3($Class* clazz) {
	return $of($alloc(FileSystemPreferences$3));
}

void FileSystemPreferences$3::init$() {
	$TimerTask::init$();
}

void FileSystemPreferences$3::run() {
	$FileSystemPreferences::syncWorld();
}

FileSystemPreferences$3::FileSystemPreferences$3() {
}

$Class* FileSystemPreferences$3::load$($String* name, bool initialize) {
	$loadClass(FileSystemPreferences$3, name, initialize, &_FileSystemPreferences$3_ClassInfo_, allocate$FileSystemPreferences$3);
	return class$;
}

$Class* FileSystemPreferences$3::class$ = nullptr;

		} // prefs
	} // util
} // java