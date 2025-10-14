#ifndef _java_util_prefs_PreferenceChangeListener_h_
#define _java_util_prefs_PreferenceChangeListener_h_
//$ interface java.util.prefs.PreferenceChangeListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace util {
		namespace prefs {
			class PreferenceChangeEvent;
		}
	}
}

namespace java {
	namespace util {
		namespace prefs {

class $import PreferenceChangeListener : public ::java::util::EventListener {
	$interface(PreferenceChangeListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void preferenceChange(::java::util::prefs::PreferenceChangeEvent* evt) {}
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_PreferenceChangeListener_h_