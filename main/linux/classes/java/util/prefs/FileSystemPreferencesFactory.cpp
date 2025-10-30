#include <java/util/prefs/FileSystemPreferencesFactory.h>

#include <java/util/prefs/FileSystemPreferences.h>
#include <java/util/prefs/Preferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemPreferences = ::java::util::prefs::FileSystemPreferences;
using $Preferences = ::java::util::prefs::Preferences;
using $PreferencesFactory = ::java::util::prefs::PreferencesFactory;

namespace java {
	namespace util {
		namespace prefs {

$MethodInfo _FileSystemPreferencesFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FileSystemPreferencesFactory::*)()>(&FileSystemPreferencesFactory::init$))},
	{"systemRoot", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC},
	{"userRoot", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FileSystemPreferencesFactory_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.FileSystemPreferencesFactory",
	"java.lang.Object",
	"java.util.prefs.PreferencesFactory",
	nullptr,
	_FileSystemPreferencesFactory_MethodInfo_
};

$Object* allocate$FileSystemPreferencesFactory($Class* clazz) {
	return $of($alloc(FileSystemPreferencesFactory));
}

void FileSystemPreferencesFactory::init$() {
}

$Preferences* FileSystemPreferencesFactory::userRoot() {
	return $FileSystemPreferences::getUserRoot();
}

$Preferences* FileSystemPreferencesFactory::systemRoot() {
	return $FileSystemPreferences::getSystemRoot();
}

FileSystemPreferencesFactory::FileSystemPreferencesFactory() {
}

$Class* FileSystemPreferencesFactory::load$($String* name, bool initialize) {
	$loadClass(FileSystemPreferencesFactory, name, initialize, &_FileSystemPreferencesFactory_ClassInfo_, allocate$FileSystemPreferencesFactory);
	return class$;
}

$Class* FileSystemPreferencesFactory::class$ = nullptr;

		} // prefs
	} // util
} // java