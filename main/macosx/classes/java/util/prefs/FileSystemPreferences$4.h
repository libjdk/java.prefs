#ifndef _java_util_prefs_FileSystemPreferences$4_h_
#define _java_util_prefs_FileSystemPreferences$4_h_
//$ class java.util.prefs.FileSystemPreferences$4
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		namespace prefs {

class FileSystemPreferences$4 : public ::java::security::PrivilegedAction {
	$class(FileSystemPreferences$4, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	FileSystemPreferences$4();
	void init$();
	virtual $Object* run() override;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_FileSystemPreferences$4_h_