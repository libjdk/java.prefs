#include <java/util/prefs/InvalidPreferencesFormatException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _InvalidPreferencesFormatException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidPreferencesFormatException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidPreferencesFormatException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidPreferencesFormatException::*)($Throwable*)>(&InvalidPreferencesFormatException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidPreferencesFormatException::*)($String*)>(&InvalidPreferencesFormatException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidPreferencesFormatException::*)($String*,$Throwable*)>(&InvalidPreferencesFormatException::init$))},
	{}
};

$ClassInfo _InvalidPreferencesFormatException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.prefs.InvalidPreferencesFormatException",
	"java.lang.Exception",
	nullptr,
	_InvalidPreferencesFormatException_FieldInfo_,
	_InvalidPreferencesFormatException_MethodInfo_
};

$Object* allocate$InvalidPreferencesFormatException($Class* clazz) {
	return $of($alloc(InvalidPreferencesFormatException));
}

void InvalidPreferencesFormatException::init$($Throwable* cause) {
	$Exception::init$(cause);
}

void InvalidPreferencesFormatException::init$($String* message) {
	$Exception::init$(message);
}

void InvalidPreferencesFormatException::init$($String* message, $Throwable* cause) {
	$Exception::init$(message, cause);
}

InvalidPreferencesFormatException::InvalidPreferencesFormatException() {
}

InvalidPreferencesFormatException::InvalidPreferencesFormatException(const InvalidPreferencesFormatException& e) : $Exception(e) {
}

void InvalidPreferencesFormatException::throw$() {
	throw *this;
}

$Class* InvalidPreferencesFormatException::load$($String* name, bool initialize) {
	$loadClass(InvalidPreferencesFormatException, name, initialize, &_InvalidPreferencesFormatException_ClassInfo_, allocate$InvalidPreferencesFormatException);
	return class$;
}

$Class* InvalidPreferencesFormatException::class$ = nullptr;

		} // prefs
	} // util
} // java