#include <java/util/prefs/Preferences$2.h>

#include <java/util/prefs/Preferences.h>
#include <java/util/prefs/PreferencesFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Preferences = ::java::util::prefs::Preferences;
using $PreferencesFactory = ::java::util::prefs::PreferencesFactory;

namespace java {
	namespace util {
		namespace prefs {

$MethodInfo _Preferences$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Preferences$2::*)()>(&Preferences$2::init$))},
	{"run", "()Ljava/util/prefs/PreferencesFactory;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Preferences$2_EnclosingMethodInfo_ = {
	"java.util.prefs.Preferences",
	"factory",
	"()Ljava/util/prefs/PreferencesFactory;"
};

$InnerClassInfo _Preferences$2_InnerClassesInfo_[] = {
	{"java.util.prefs.Preferences$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Preferences$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.Preferences$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_Preferences$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/prefs/PreferencesFactory;>;",
	&_Preferences$2_EnclosingMethodInfo_,
	_Preferences$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.Preferences"
};

$Object* allocate$Preferences$2($Class* clazz) {
	return $of($alloc(Preferences$2));
}

void Preferences$2::init$() {
}

$Object* Preferences$2::run() {
	return $of($Preferences::factory1());
}

Preferences$2::Preferences$2() {
}

$Class* Preferences$2::load$($String* name, bool initialize) {
	$loadClass(Preferences$2, name, initialize, &_Preferences$2_ClassInfo_, allocate$Preferences$2);
	return class$;
}

$Class* Preferences$2::class$ = nullptr;

		} // prefs
	} // util
} // java