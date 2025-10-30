#include <java/util/prefs/MacOSXPreferencesFile$1.h>

#include <java/util/prefs/MacOSXPreferencesFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $MacOSXPreferencesFile = ::java::util::prefs::MacOSXPreferencesFile;

namespace java {
	namespace util {
		namespace prefs {

$MethodInfo _MacOSXPreferencesFile$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MacOSXPreferencesFile$1::*)()>(&MacOSXPreferencesFile$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MacOSXPreferencesFile$1_EnclosingMethodInfo_ = {
	"java.util.prefs.MacOSXPreferencesFile",
	nullptr,
	nullptr
};

$InnerClassInfo _MacOSXPreferencesFile$1_InnerClassesInfo_[] = {
	{"java.util.prefs.MacOSXPreferencesFile$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MacOSXPreferencesFile$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.MacOSXPreferencesFile$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_MacOSXPreferencesFile$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_MacOSXPreferencesFile$1_EnclosingMethodInfo_,
	_MacOSXPreferencesFile$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.MacOSXPreferencesFile"
};

$Object* allocate$MacOSXPreferencesFile$1($Class* clazz) {
	return $of($alloc(MacOSXPreferencesFile$1));
}

void MacOSXPreferencesFile$1::init$() {
}

$Object* MacOSXPreferencesFile$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("prefs"_s);
	return $of(nullptr);
}

MacOSXPreferencesFile$1::MacOSXPreferencesFile$1() {
}

$Class* MacOSXPreferencesFile$1::load$($String* name, bool initialize) {
	$loadClass(MacOSXPreferencesFile$1, name, initialize, &_MacOSXPreferencesFile$1_ClassInfo_, allocate$MacOSXPreferencesFile$1);
	return class$;
}

$Class* MacOSXPreferencesFile$1::class$ = nullptr;

		} // prefs
	} // util
} // java