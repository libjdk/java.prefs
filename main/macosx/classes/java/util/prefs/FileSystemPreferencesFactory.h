#ifndef _java_util_prefs_FileSystemPreferencesFactory_h_
#define _java_util_prefs_FileSystemPreferencesFactory_h_
//$ class java.util.prefs.FileSystemPreferencesFactory
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

class FileSystemPreferencesFactory : public ::java::util::prefs::PreferencesFactory {
	$class(FileSystemPreferencesFactory, $NO_CLASS_INIT, ::java::util::prefs::PreferencesFactory)
public:
	FileSystemPreferencesFactory();
	void init$();
	virtual ::java::util::prefs::Preferences* systemRoot() override;
	virtual ::java::util::prefs::Preferences* userRoot() override;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_FileSystemPreferencesFactory_h_