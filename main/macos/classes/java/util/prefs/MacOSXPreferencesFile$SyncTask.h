#ifndef _java_util_prefs_MacOSXPreferencesFile$SyncTask_h_
#define _java_util_prefs_MacOSXPreferencesFile$SyncTask_h_
//$ class java.util.prefs.MacOSXPreferencesFile$SyncTask
//$ extends java.util.TimerTask

#include <java/util/TimerTask.h>

namespace java {
	namespace util {
		namespace prefs {
			class MacOSXPreferencesFile;
		}
	}
}

namespace java {
	namespace util {
		namespace prefs {

class MacOSXPreferencesFile$SyncTask : public ::java::util::TimerTask {
	$class(MacOSXPreferencesFile$SyncTask, $NO_CLASS_INIT, ::java::util::TimerTask)
public:
	MacOSXPreferencesFile$SyncTask();
	void init$(::java::util::prefs::MacOSXPreferencesFile* this$0);
	virtual void run() override;
	::java::util::prefs::MacOSXPreferencesFile* this$0 = nullptr;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_MacOSXPreferencesFile$SyncTask_h_