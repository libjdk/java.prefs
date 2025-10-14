#ifndef _java_util_prefs_Preferences$1_h_
#define _java_util_prefs_Preferences$1_h_
//$ class java.util.prefs.Preferences$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		namespace prefs {

class Preferences$1 : public ::java::security::PrivilegedAction {
	$class(Preferences$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Preferences$1();
	void init$();
	virtual $Object* run() override;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_Preferences$1_h_