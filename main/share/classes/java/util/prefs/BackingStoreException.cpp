#include <java/util/prefs/BackingStoreException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _BackingStoreException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BackingStoreException, serialVersionUID)},
	{}
};

$MethodInfo _BackingStoreException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BackingStoreException::*)($String*)>(&BackingStoreException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(BackingStoreException::*)($Throwable*)>(&BackingStoreException::init$))},
	{}
};

$ClassInfo _BackingStoreException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.prefs.BackingStoreException",
	"java.lang.Exception",
	nullptr,
	_BackingStoreException_FieldInfo_,
	_BackingStoreException_MethodInfo_
};

$Object* allocate$BackingStoreException($Class* clazz) {
	return $of($alloc(BackingStoreException));
}

void BackingStoreException::init$($String* s) {
	$Exception::init$(s);
}

void BackingStoreException::init$($Throwable* cause) {
	$Exception::init$(cause);
}

BackingStoreException::BackingStoreException() {
}

BackingStoreException::BackingStoreException(const BackingStoreException& e) : $Exception(e) {
}

void BackingStoreException::throw$() {
	throw *this;
}

$Class* BackingStoreException::load$($String* name, bool initialize) {
	$loadClass(BackingStoreException, name, initialize, &_BackingStoreException_ClassInfo_, allocate$BackingStoreException);
	return class$;
}

$Class* BackingStoreException::class$ = nullptr;

		} // prefs
	} // util
} // java