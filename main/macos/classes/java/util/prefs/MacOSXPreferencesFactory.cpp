#include <java/util/prefs/MacOSXPreferencesFactory.h>

#include <java/util/prefs/MacOSXPreferences.h>
#include <java/util/prefs/Preferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MacOSXPreferences = ::java::util::prefs::MacOSXPreferences;
using $Preferences = ::java::util::prefs::Preferences;
using $PreferencesFactory = ::java::util::prefs::PreferencesFactory;

namespace java {
	namespace util {
		namespace prefs {

$MethodInfo _MacOSXPreferencesFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MacOSXPreferencesFactory::*)()>(&MacOSXPreferencesFactory::init$))},
	{"systemRoot", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC},
	{"userRoot", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MacOSXPreferencesFactory_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.MacOSXPreferencesFactory",
	"java.lang.Object",
	"java.util.prefs.PreferencesFactory",
	nullptr,
	_MacOSXPreferencesFactory_MethodInfo_
};

$Object* allocate$MacOSXPreferencesFactory($Class* clazz) {
	return $of($alloc(MacOSXPreferencesFactory));
}

void MacOSXPreferencesFactory::init$() {
}

$Preferences* MacOSXPreferencesFactory::userRoot() {
	return $MacOSXPreferences::getUserRoot();
}

$Preferences* MacOSXPreferencesFactory::systemRoot() {
	return $MacOSXPreferences::getSystemRoot();
}

MacOSXPreferencesFactory::MacOSXPreferencesFactory() {
}

$Class* MacOSXPreferencesFactory::load$($String* name, bool initialize) {
	$loadClass(MacOSXPreferencesFactory, name, initialize, &_MacOSXPreferencesFactory_ClassInfo_, allocate$MacOSXPreferencesFactory);
	return class$;
}

$Class* MacOSXPreferencesFactory::class$ = nullptr;

		} // prefs
	} // util
} // java