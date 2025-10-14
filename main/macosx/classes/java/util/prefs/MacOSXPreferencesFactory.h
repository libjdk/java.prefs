#ifndef _java_util_prefs_MacOSXPreferencesFactory_h_
#define _java_util_prefs_MacOSXPreferencesFactory_h_
//$ class java.util.prefs.MacOSXPreferencesFactory
//$ extends java.util.prefs.PreferencesFactory

#include <java/util/prefs/PreferencesFactory.h>

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

class MacOSXPreferencesFactory : public ::java::util::prefs::PreferencesFactory {
	$class(MacOSXPreferencesFactory, $NO_CLASS_INIT, ::java::util::prefs::PreferencesFactory)
public:
	MacOSXPreferencesFactory();
	void init$();
	virtual ::java::util::prefs::Preferences* systemRoot() override;
	virtual ::java::util::prefs::Preferences* userRoot() override;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_MacOSXPreferencesFactory_h_