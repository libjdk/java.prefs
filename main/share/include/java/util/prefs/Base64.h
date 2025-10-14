#ifndef _java_util_prefs_Base64_h_
#define _java_util_prefs_Base64_h_
//$ class java.util.prefs.Base64
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		namespace prefs {

class $import Base64 : public ::java::lang::Object {
	$class(Base64, 0, ::java::lang::Object)
public:
	Base64();
	void init$();
	static $bytes* altBase64ToByteArray($String* s);
	static $bytes* base64ToByteArray($String* s);
	static $bytes* base64ToByteArray($String* s, bool alternate);
	static int32_t base64toInt(char16_t c, $bytes* alphaToInt);
	static $String* byteArrayToAltBase64($bytes* a);
	static $String* byteArrayToBase64($bytes* a);
	static $String* byteArrayToBase64($bytes* a, bool alternate);
	static void main($StringArray* args);
	static $chars* intToBase64;
	static $chars* intToAltBase64;
	static $bytes* base64ToInt;
	static $bytes* altBase64ToInt;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_Base64_h_