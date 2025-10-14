#ifndef _java_util_prefs_AbstractPreferences$NodeAddedEvent_h_
#define _java_util_prefs_AbstractPreferences$NodeAddedEvent_h_
//$ class java.util.prefs.AbstractPreferences$NodeAddedEvent
//$ extends java.util.prefs.NodeChangeEvent

#include <java/util/prefs/NodeChangeEvent.h>

namespace java {
	namespace util {
		namespace prefs {
			class AbstractPreferences;
			class Preferences;
		}
	}
}

namespace java {
	namespace util {
		namespace prefs {

class AbstractPreferences$NodeAddedEvent : public ::java::util::prefs::NodeChangeEvent {
	$class(AbstractPreferences$NodeAddedEvent, $NO_CLASS_INIT, ::java::util::prefs::NodeChangeEvent)
public:
	AbstractPreferences$NodeAddedEvent();
	void init$(::java::util::prefs::AbstractPreferences* this$0, ::java::util::prefs::Preferences* parent, ::java::util::prefs::Preferences* child);
	::java::util::prefs::AbstractPreferences* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xA26A1227BC8FD770;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_AbstractPreferences$NodeAddedEvent_h_