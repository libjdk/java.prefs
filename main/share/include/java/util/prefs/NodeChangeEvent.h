#ifndef _java_util_prefs_NodeChangeEvent_h_
#define _java_util_prefs_NodeChangeEvent_h_
//$ class java.util.prefs.NodeChangeEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		namespace prefs {
			class Preferences;
		}
	}
}

namespace java {
	namespace util {
		namespace prefs {

class $import NodeChangeEvent : public ::java::util::EventObject {
	$class(NodeChangeEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	NodeChangeEvent();
	void init$(::java::util::prefs::Preferences* parent, ::java::util::prefs::Preferences* child);
	virtual ::java::util::prefs::Preferences* getChild();
	virtual ::java::util::prefs::Preferences* getParent();
	void readObject(::java::io::ObjectInputStream* in);
	void writeObject(::java::io::ObjectOutputStream* out);
	::java::util::prefs::Preferences* child = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x6FFAAA71714D271D;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_NodeChangeEvent_h_