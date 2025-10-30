#ifndef _java_util_prefs_BackingStoreException_h_
#define _java_util_prefs_BackingStoreException_h_
//$ class java.util.prefs.BackingStoreException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace util {
		namespace prefs {

class $export BackingStoreException : public ::java::lang::Exception {
	$class(BackingStoreException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	BackingStoreException();
	void init$($String* s);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x0BEE9C5C998835F5;
	BackingStoreException(const BackingStoreException& e);
	virtual void throw$() override;
	inline BackingStoreException* operator ->() {
		return (BackingStoreException*)throwing$;
	}
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_BackingStoreException_h_