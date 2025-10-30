#ifndef _java_util_prefs_InvalidPreferencesFormatException_h_
#define _java_util_prefs_InvalidPreferencesFormatException_h_
//$ class java.util.prefs.InvalidPreferencesFormatException
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

class $import InvalidPreferencesFormatException : public ::java::lang::Exception {
	$class(InvalidPreferencesFormatException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	InvalidPreferencesFormatException();
	void init$($Throwable* cause);
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xF503433C108FC28B;
	InvalidPreferencesFormatException(const InvalidPreferencesFormatException& e);
	virtual void throw$() override;
	inline InvalidPreferencesFormatException* operator ->() {
		return (InvalidPreferencesFormatException*)throwing$;
	}
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_InvalidPreferencesFormatException_h_