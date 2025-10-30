#include <java/util/prefs/WindowsPreferencesFactory.h>

#include <java/util/prefs/Preferences.h>
#include <java/util/prefs/WindowsPreferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Preferences = ::java::util::prefs::Preferences;
using $PreferencesFactory = ::java::util::prefs::PreferencesFactory;
using $WindowsPreferences = ::java::util::prefs::WindowsPreferences;

namespace java {
	namespace util {
		namespace prefs {

$MethodInfo _WindowsPreferencesFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WindowsPreferencesFactory::*)()>(&WindowsPreferencesFactory::init$))},
	{"systemRoot", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC},
	{"userRoot", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WindowsPreferencesFactory_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.WindowsPreferencesFactory",
	"java.lang.Object",
	"java.util.prefs.PreferencesFactory",
	nullptr,
	_WindowsPreferencesFactory_MethodInfo_
};

$Object* allocate$WindowsPreferencesFactory($Class* clazz) {
	return $of($alloc(WindowsPreferencesFactory));
}

void WindowsPreferencesFactory::init$() {
}

$Preferences* WindowsPreferencesFactory::userRoot() {
	return $WindowsPreferences::getUserRoot();
}

$Preferences* WindowsPreferencesFactory::systemRoot() {
	return $WindowsPreferences::getSystemRoot();
}

WindowsPreferencesFactory::WindowsPreferencesFactory() {
}

$Class* WindowsPreferencesFactory::load$($String* name, bool initialize) {
	$loadClass(WindowsPreferencesFactory, name, initialize, &_WindowsPreferencesFactory_ClassInfo_, allocate$WindowsPreferencesFactory);
	return class$;
}

$Class* WindowsPreferencesFactory::class$ = nullptr;

		} // prefs
	} // util
} // java