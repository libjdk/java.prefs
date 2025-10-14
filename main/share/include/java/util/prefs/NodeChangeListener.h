#ifndef _java_util_prefs_NodeChangeListener_h_
#define _java_util_prefs_NodeChangeListener_h_
//$ interface java.util.prefs.NodeChangeListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace util {
		namespace prefs {
			class NodeChangeEvent;
		}
	}
}

namespace java {
	namespace util {
		namespace prefs {

class $import NodeChangeListener : public ::java::util::EventListener {
	$interface(NodeChangeListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void childAdded(::java::util::prefs::NodeChangeEvent* evt) {}
	virtual void childRemoved(::java::util::prefs::NodeChangeEvent* evt) {}
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_NodeChangeListener_h_