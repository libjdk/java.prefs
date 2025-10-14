#ifndef _java_util_prefs_PreferenceChangeEvent_h_
#define _java_util_prefs_PreferenceChangeEvent_h_
//$ class java.util.prefs.PreferenceChangeEvent
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

class $export PreferenceChangeEvent : public ::java::util::EventObject {
	$class(PreferenceChangeEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	PreferenceChangeEvent();
	void init$(::java::util::prefs::Preferences* node, $String* key, $String* newValue);
	virtual $String* getKey();
	virtual $String* getNewValue();
	virtual ::java::util::prefs::Preferences* getNode();
	void readObject(::java::io::ObjectInputStream* in);
	void writeObject(::java::io::ObjectOutputStream* out);
	$String* key = nullptr;
	$String* newValue = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x0B03E03D54D2278F;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_PreferenceChangeEvent_h_