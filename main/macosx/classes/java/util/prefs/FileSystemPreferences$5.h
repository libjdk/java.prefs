#ifndef _java_util_prefs_FileSystemPreferences$5_h_
#define _java_util_prefs_FileSystemPreferences$5_h_
//$ class java.util.prefs.FileSystemPreferences$5
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

class FileSystemPreferences$5 : public ::java::security::PrivilegedAction {
	$class(FileSystemPreferences$5, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	FileSystemPreferences$5();
	void init$(::java::util::prefs::FileSystemPreferences* this$0);
	virtual $Object* run() override;
	::java::util::prefs::FileSystemPreferences* this$0 = nullptr;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_FileSystemPreferences$5_h_