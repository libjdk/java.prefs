#include <java/util/prefs/PreferencesFactory.h>

#include <java/util/prefs/Preferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Preferences = ::java::util::prefs::Preferences;

namespace java {
	namespace util {
		namespace prefs {

$MethodInfo _PreferencesFactory_MethodInfo_[] = {
	{"systemRoot", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC | $ABSTRACT},
	{"userRoot", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PreferencesFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.prefs.PreferencesFactory",
	nullptr,
	nullptr,
	nullptr,
	_PreferencesFactory_MethodInfo_
};

$Object* allocate$PreferencesFactory($Class* clazz) {
	return $of($alloc(PreferencesFactory));
}

$Class* PreferencesFactory::load$($String* name, bool initialize) {
	$loadClass(PreferencesFactory, name, initialize, &_PreferencesFactory_ClassInfo_, allocate$PreferencesFactory);
	return class$;
}

$Class* PreferencesFactory::class$ = nullptr;

		} // prefs
	} // util
} // java