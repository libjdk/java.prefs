#include <java/util/prefs/MacOSXPreferencesFile$FlushTask.h>

#include <java/util/TimerTask.h>
#include <java/util/prefs/MacOSXPreferencesFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimerTask = ::java::util::TimerTask;
using $MacOSXPreferencesFile = ::java::util::prefs::MacOSXPreferencesFile;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _MacOSXPreferencesFile$FlushTask_FieldInfo_[] = {
	{"this$0", "Ljava/util/prefs/MacOSXPreferencesFile;", nullptr, $FINAL | $SYNTHETIC, $field(MacOSXPreferencesFile$FlushTask, this$0)},
	{}
};

$MethodInfo _MacOSXPreferencesFile$FlushTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/prefs/MacOSXPreferencesFile;)V", nullptr, $PRIVATE, $method(static_cast<void(MacOSXPreferencesFile$FlushTask::*)($MacOSXPreferencesFile*)>(&MacOSXPreferencesFile$FlushTask::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MacOSXPreferencesFile$FlushTask_InnerClassesInfo_[] = {
	{"java.util.prefs.MacOSXPreferencesFile$FlushTask", "java.util.prefs.MacOSXPreferencesFile", "FlushTask", $PRIVATE},
	{}
};

$ClassInfo _MacOSXPreferencesFile$FlushTask_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.MacOSXPreferencesFile$FlushTask",
	"java.util.TimerTask",
	nullptr,
	_MacOSXPreferencesFile$FlushTask_FieldInfo_,
	_MacOSXPreferencesFile$FlushTask_MethodInfo_,
	nullptr,
	nullptr,
	_MacOSXPreferencesFile$FlushTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.MacOSXPreferencesFile"
};

$Object* allocate$MacOSXPreferencesFile$FlushTask($Class* clazz) {
	return $of($alloc(MacOSXPreferencesFile$FlushTask));
}

void MacOSXPreferencesFile$FlushTask::init$($MacOSXPreferencesFile* this$0) {
	$set(this, this$0, this$0);
	$TimerTask::init$();
}

void MacOSXPreferencesFile$FlushTask::run() {
	$MacOSXPreferencesFile::flushWorld();
}

MacOSXPreferencesFile$FlushTask::MacOSXPreferencesFile$FlushTask() {
}

$Class* MacOSXPreferencesFile$FlushTask::load$($String* name, bool initialize) {
	$loadClass(MacOSXPreferencesFile$FlushTask, name, initialize, &_MacOSXPreferencesFile$FlushTask_ClassInfo_, allocate$MacOSXPreferencesFile$FlushTask);
	return class$;
}

$Class* MacOSXPreferencesFile$FlushTask::class$ = nullptr;

		} // prefs
	} // util
} // java