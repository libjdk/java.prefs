#include <java/util/prefs/AbstractPreferences$1.h>

#include <java/util/prefs/AbstractPreferences.h>
#include <java/util/prefs/Preferences.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractPreferences = ::java::util::prefs::AbstractPreferences;
using $Preferences = ::java::util::prefs::Preferences;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _AbstractPreferences$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/prefs/AbstractPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractPreferences$1, this$0)},
	{}
};

$MethodInfo _AbstractPreferences$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/prefs/AbstractPreferences;)V", nullptr, 0, $method(static_cast<void(AbstractPreferences$1::*)($AbstractPreferences*)>(&AbstractPreferences$1::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AbstractPreferences$1_EnclosingMethodInfo_ = {
	"java.util.prefs.AbstractPreferences",
	"isUserNode",
	"()Z"
};

$InnerClassInfo _AbstractPreferences$1_InnerClassesInfo_[] = {
	{"java.util.prefs.AbstractPreferences$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractPreferences$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.AbstractPreferences$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_AbstractPreferences$1_FieldInfo_,
	_AbstractPreferences$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_AbstractPreferences$1_EnclosingMethodInfo_,
	_AbstractPreferences$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.AbstractPreferences"
};

$Object* allocate$AbstractPreferences$1($Class* clazz) {
	return $of($alloc(AbstractPreferences$1));
}

void AbstractPreferences$1::init$($AbstractPreferences* this$0) {
	$set(this, this$0, this$0);
}

$Object* AbstractPreferences$1::run() {
	return $of($Boolean::valueOf($equals(this->this$0->root, $Preferences::userRoot())));
}

AbstractPreferences$1::AbstractPreferences$1() {
}

$Class* AbstractPreferences$1::load$($String* name, bool initialize) {
	$loadClass(AbstractPreferences$1, name, initialize, &_AbstractPreferences$1_ClassInfo_, allocate$AbstractPreferences$1);
	return class$;
}

$Class* AbstractPreferences$1::class$ = nullptr;

		} // prefs
	} // util
} // java