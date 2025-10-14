#ifndef _java_util_prefs_Preferences$2_h_
#define _java_util_prefs_Preferences$2_h_
//$ class java.util.prefs.Preferences$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		namespace prefs {

class Preferences$2 : public ::java::security::PrivilegedAction {
	$class(Preferences$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Preferences$2();
	void init$();
	virtual $Object* run() override;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_Preferences$2_h_