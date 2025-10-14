#ifndef _java_util_prefs_FileSystemPreferences$1_h_
#define _java_util_prefs_FileSystemPreferences$1_h_
//$ class java.util.prefs.FileSystemPreferences$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		namespace prefs {

class FileSystemPreferences$1 : public ::java::security::PrivilegedAction {
	$class(FileSystemPreferences$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	FileSystemPreferences$1();
	void init$();
	virtual $Object* run() override;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_FileSystemPreferences$1_h_