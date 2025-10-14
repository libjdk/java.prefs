#ifndef _java_util_prefs_AbstractPreferences$1_h_
#define _java_util_prefs_AbstractPreferences$1_h_
//$ class java.util.prefs.AbstractPreferences$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		namespace prefs {
			class AbstractPreferences;
		}
	}
}

namespace java {
	namespace util {
		namespace prefs {

class AbstractPreferences$1 : public ::java::security::PrivilegedAction {
	$class(AbstractPreferences$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AbstractPreferences$1();
	void init$(::java::util::prefs::AbstractPreferences* this$0);
	virtual $Object* run() override;
	::java::util::prefs::AbstractPreferences* this$0 = nullptr;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_AbstractPreferences$1_h_