#ifndef _java_util_prefs_AbstractPreferences$EventDispatchThread_h_
#define _java_util_prefs_AbstractPreferences$EventDispatchThread_h_
//$ class java.util.prefs.AbstractPreferences$EventDispatchThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace util {
		namespace prefs {

class AbstractPreferences$EventDispatchThread : public ::java::lang::Thread {
	$class(AbstractPreferences$EventDispatchThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	AbstractPreferences$EventDispatchThread();
	void init$();
	virtual void run() override;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_AbstractPreferences$EventDispatchThread_h_