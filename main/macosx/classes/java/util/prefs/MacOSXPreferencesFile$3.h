#ifndef _java_util_prefs_MacOSXPreferencesFile$3_h_
#define _java_util_prefs_MacOSXPreferencesFile$3_h_
//$ class java.util.prefs.MacOSXPreferencesFile$3
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace lang {
		class Runnable;
		class ThreadGroup;
	}
}

namespace java {
	namespace util {
		namespace prefs {

class MacOSXPreferencesFile$3 : public ::java::lang::Thread {
	$class(MacOSXPreferencesFile$3, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	MacOSXPreferencesFile$3();
	void init$(::java::lang::ThreadGroup* arg0, ::java::lang::Runnable* arg1, $String* arg2, int64_t arg3, bool arg4);
	virtual void run() override;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_MacOSXPreferencesFile$3_h_