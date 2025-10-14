#ifndef _java_util_prefs_AbstractPreferences$NodeRemovedEvent_h_
#define _java_util_prefs_AbstractPreferences$NodeRemovedEvent_h_
//$ class java.util.prefs.AbstractPreferences$NodeRemovedEvent
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

class AbstractPreferences$NodeRemovedEvent : public ::java::util::prefs::NodeChangeEvent {
	$class(AbstractPreferences$NodeRemovedEvent, $NO_CLASS_INIT, ::java::util::prefs::NodeChangeEvent)
public:
	AbstractPreferences$NodeRemovedEvent();
	void init$(::java::util::prefs::AbstractPreferences* this$0, ::java::util::prefs::Preferences* parent, ::java::util::prefs::Preferences* child);
	::java::util::prefs::AbstractPreferences* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x793AB898A1470785;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_AbstractPreferences$NodeRemovedEvent_h_