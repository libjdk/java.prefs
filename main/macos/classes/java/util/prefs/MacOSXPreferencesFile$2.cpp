#include <java/util/prefs/MacOSXPreferencesFile$2.h>

#include <java/util/TimerTask.h>
#include <java/util/prefs/MacOSXPreferencesFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimerTask = ::java::util::TimerTask;
using $MacOSXPreferencesFile = ::java::util::prefs::MacOSXPreferencesFile;

namespace java {
	namespace util {
		namespace prefs {

$MethodInfo _MacOSXPreferencesFile$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MacOSXPreferencesFile$2::*)()>(&MacOSXPreferencesFile$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MacOSXPreferencesFile$2_EnclosingMethodInfo_ = {
	"java.util.prefs.MacOSXPreferencesFile",
	"initSyncTimerIfNeeded",
	"()V"
};

$InnerClassInfo _MacOSXPreferencesFile$2_InnerClassesInfo_[] = {
	{"java.util.prefs.MacOSXPreferencesFile$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MacOSXPreferencesFile$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.MacOSXPreferencesFile$2",
	"java.util.TimerTask",
	nullptr,
	nullptr,
	_MacOSXPreferencesFile$2_MethodInfo_,
	nullptr,
	&_MacOSXPreferencesFile$2_EnclosingMethodInfo_,
	_MacOSXPreferencesFile$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.MacOSXPreferencesFile"
};

$Object* allocate$MacOSXPreferencesFile$2($Class* clazz) {
	return $of($alloc(MacOSXPreferencesFile$2));
}

void MacOSXPreferencesFile$2::init$() {
	$TimerTask::init$();
}

void MacOSXPreferencesFile$2::run() {
	$MacOSXPreferencesFile::syncWorld();
}

MacOSXPreferencesFile$2::MacOSXPreferencesFile$2() {
}

$Class* MacOSXPreferencesFile$2::load$($String* name, bool initialize) {
	$loadClass(MacOSXPreferencesFile$2, name, initialize, &_MacOSXPreferencesFile$2_ClassInfo_, allocate$MacOSXPreferencesFile$2);
	return class$;
}

$Class* MacOSXPreferencesFile$2::class$ = nullptr;

		} // prefs
	} // util
} // java