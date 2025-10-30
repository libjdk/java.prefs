#include <java/util/prefs/Preferences$1.h>

#include <java/util/prefs/Preferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Preferences = ::java::util::prefs::Preferences;

namespace java {
	namespace util {
		namespace prefs {

$MethodInfo _Preferences$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Preferences$1::*)()>(&Preferences$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Preferences$1_EnclosingMethodInfo_ = {
	"java.util.prefs.Preferences",
	"factory",
	"()Ljava/util/prefs/PreferencesFactory;"
};

$InnerClassInfo _Preferences$1_InnerClassesInfo_[] = {
	{"java.util.prefs.Preferences$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Preferences$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.Preferences$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_Preferences$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_Preferences$1_EnclosingMethodInfo_,
	_Preferences$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.Preferences"
};

$Object* allocate$Preferences$1($Class* clazz) {
	return $of($alloc(Preferences$1));
}

void Preferences$1::init$() {
}

$Object* Preferences$1::run() {
	return $of($System::getProperty("java.util.prefs.PreferencesFactory"_s));
}

Preferences$1::Preferences$1() {
}

$Class* Preferences$1::load$($String* name, bool initialize) {
	$loadClass(Preferences$1, name, initialize, &_Preferences$1_ClassInfo_, allocate$Preferences$1);
	return class$;
}

$Class* Preferences$1::class$ = nullptr;

		} // prefs
	} // util
} // java