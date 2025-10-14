#ifndef _java_util_prefs_FileSystemPreferences$11_h_
#define _java_util_prefs_FileSystemPreferences$11_h_
//$ class java.util.prefs.FileSystemPreferences$11
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class Long;
	}
}
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

class FileSystemPreferences$11 : public ::java::security::PrivilegedAction {
	$class(FileSystemPreferences$11, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	FileSystemPreferences$11();
	void init$(::java::util::prefs::FileSystemPreferences* this$0, ::java::lang::Long* val$newModTime);
	virtual $Object* run() override;
	::java::util::prefs::FileSystemPreferences* this$0 = nullptr;
	::java::lang::Long* val$newModTime = nullptr;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_FileSystemPreferences$11_h_