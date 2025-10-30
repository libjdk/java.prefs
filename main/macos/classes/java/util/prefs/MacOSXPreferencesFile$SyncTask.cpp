#include <java/util/prefs/MacOSXPreferencesFile$SyncTask.h>

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

$FieldInfo _MacOSXPreferencesFile$SyncTask_FieldInfo_[] = {
	{"this$0", "Ljava/util/prefs/MacOSXPreferencesFile;", nullptr, $FINAL | $SYNTHETIC, $field(MacOSXPreferencesFile$SyncTask, this$0)},
	{}
};

$MethodInfo _MacOSXPreferencesFile$SyncTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/prefs/MacOSXPreferencesFile;)V", nullptr, $PRIVATE, $method(static_cast<void(MacOSXPreferencesFile$SyncTask::*)($MacOSXPreferencesFile*)>(&MacOSXPreferencesFile$SyncTask::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MacOSXPreferencesFile$SyncTask_InnerClassesInfo_[] = {
	{"java.util.prefs.MacOSXPreferencesFile$SyncTask", "java.util.prefs.MacOSXPreferencesFile", "SyncTask", $PRIVATE},
	{}
};

$ClassInfo _MacOSXPreferencesFile$SyncTask_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.MacOSXPreferencesFile$SyncTask",
	"java.util.TimerTask",
	nullptr,
	_MacOSXPreferencesFile$SyncTask_FieldInfo_,
	_MacOSXPreferencesFile$SyncTask_MethodInfo_,
	nullptr,
	nullptr,
	_MacOSXPreferencesFile$SyncTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.MacOSXPreferencesFile"
};

$Object* allocate$MacOSXPreferencesFile$SyncTask($Class* clazz) {
	return $of($alloc(MacOSXPreferencesFile$SyncTask));
}

void MacOSXPreferencesFile$SyncTask::init$($MacOSXPreferencesFile* this$0) {
	$set(this, this$0, this$0);
	$TimerTask::init$();
}

void MacOSXPreferencesFile$SyncTask::run() {
	$MacOSXPreferencesFile::syncWorld();
}

MacOSXPreferencesFile$SyncTask::MacOSXPreferencesFile$SyncTask() {
}

$Class* MacOSXPreferencesFile$SyncTask::load$($String* name, bool initialize) {
	$loadClass(MacOSXPreferencesFile$SyncTask, name, initialize, &_MacOSXPreferencesFile$SyncTask_ClassInfo_, allocate$MacOSXPreferencesFile$SyncTask);
	return class$;
}

$Class* MacOSXPreferencesFile$SyncTask::class$ = nullptr;

		} // prefs
	} // util
} // java