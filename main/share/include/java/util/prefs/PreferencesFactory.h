#ifndef _java_util_prefs_PreferencesFactory_h_
#define _java_util_prefs_PreferencesFactory_h_
//$ interface java.util.prefs.PreferencesFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $import PreferencesFactory : public ::java::lang::Object {
	$interface(PreferencesFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::prefs::Preferences* systemRoot() {return nullptr;}
	virtual ::java::util::prefs::Preferences* userRoot() {return nullptr;}
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_PreferencesFactory_h_