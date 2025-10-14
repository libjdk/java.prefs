#ifndef _java_util_prefs_FileSystemPreferences$10_h_
#define _java_util_prefs_FileSystemPreferences$10_h_
//$ class java.util.prefs.FileSystemPreferences$10
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		namespace prefs {
			class FileSystemPreferences;
		}
	}
}

namespace java {
	namespace util {
		namespace prefs {

class FileSystemPreferences$10 : public ::java::security::PrivilegedAction {
	$class(FileSystemPreferences$10, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	FileSystemPreferences$10();
	void init$(::java::util::prefs::FileSystemPreferences* this$0);
	virtual $Object* run() override;
	::java::util::prefs::FileSystemPreferences* this$0 = nullptr;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_FileSystemPreferences$10_h_