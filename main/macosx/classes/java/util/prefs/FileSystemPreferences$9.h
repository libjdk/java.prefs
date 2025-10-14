#ifndef _java_util_prefs_FileSystemPreferences$9_h_
#define _java_util_prefs_FileSystemPreferences$9_h_
//$ class java.util.prefs.FileSystemPreferences$9
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

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

class FileSystemPreferences$9 : public ::java::security::PrivilegedExceptionAction {
	$class(FileSystemPreferences$9, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	FileSystemPreferences$9();
	void init$(::java::util::prefs::FileSystemPreferences* this$0);
	virtual $Object* run() override;
	::java::util::prefs::FileSystemPreferences* this$0 = nullptr;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_FileSystemPreferences$9_h_