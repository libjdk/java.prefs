#ifndef _java_util_prefs_MacOSXPreferencesFile$2_h_
#define _java_util_prefs_MacOSXPreferencesFile$2_h_
//$ class java.util.prefs.MacOSXPreferencesFile$2
//$ extends java.util.TimerTask

#include <java/util/TimerTask.h>

namespace java {
	namespace util {
		namespace prefs {

class MacOSXPreferencesFile$2 : public ::java::util::TimerTask {
	$class(MacOSXPreferencesFile$2, $NO_CLASS_INIT, ::java::util::TimerTask)
public:
	MacOSXPreferencesFile$2();
	void init$();
	virtual void run() override;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_MacOSXPreferencesFile$2_h_