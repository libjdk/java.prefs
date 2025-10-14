#ifndef _java_util_prefs_FileSystemPreferences$8_h_
#define _java_util_prefs_FileSystemPreferences$8_h_
//$ class java.util.prefs.FileSystemPreferences$8
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

class FileSystemPreferences$8 : public ::java::security::PrivilegedAction {
	$class(FileSystemPreferences$8, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	FileSystemPreferences$8();
	void init$(::java::util::prefs::FileSystemPreferences* this$0);
	virtual $Object* run() override;
	::java::util::prefs::FileSystemPreferences* this$0 = nullptr;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_FileSystemPreferences$8_h_