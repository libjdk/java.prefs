#include <java/util/prefs/Preferences.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/InternalError.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessController.h>
#include <java/security/AllPermission.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/ServiceLoader.h>
#include <java/util/prefs/NodeChangeListener.h>
#include <java/util/prefs/PreferenceChangeListener.h>
#include <java/util/prefs/Preferences$1.h>
#include <java/util/prefs/Preferences$2.h>
#include <java/util/prefs/PreferencesFactory.h>
#include <java/util/prefs/XmlSupport.h>
#include <jcpp.h>

#undef MAX_KEY_LENGTH
#undef MAX_NAME_LENGTH
#undef MAX_VALUE_LENGTH

using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessController = ::java::security::AccessController;
using $AllPermission = ::java::security::AllPermission;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;
using $NodeChangeListener = ::java::util::prefs::NodeChangeListener;
using $PreferenceChangeListener = ::java::util::prefs::PreferenceChangeListener;
using $Preferences$1 = ::java::util::prefs::Preferences$1;
using $Preferences$2 = ::java::util::prefs::Preferences$2;
using $PreferencesFactory = ::java::util::prefs::PreferencesFactory;
using $XmlSupport = ::java::util::prefs::XmlSupport;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _Preferences_FieldInfo_[] = {
	{"factory", "Ljava/util/prefs/PreferencesFactory;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Preferences, factory$)},
	{"MAX_KEY_LENGTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Preferences, MAX_KEY_LENGTH)},
	{"MAX_VALUE_LENGTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Preferences, MAX_VALUE_LENGTH)},
	{"MAX_NAME_LENGTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Preferences, MAX_NAME_LENGTH)},
	{"prefsPerm", "Ljava/security/Permission;", nullptr, $PRIVATE | $STATIC, $staticField(Preferences, prefsPerm)},
	{}
};

$MethodInfo _Preferences_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Preferences::*)()>(&Preferences::init$))},
	{"absolutePath", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"addNodeChangeListener", "(Ljava/util/prefs/NodeChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addPreferenceChangeListener", "(Ljava/util/prefs/PreferenceChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"childrenNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.util.prefs.BackingStoreException"},
	{"clear", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.util.prefs.BackingStoreException"},
	{"exportNode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException,java.util.prefs.BackingStoreException"},
	{"exportSubtree", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException,java.util.prefs.BackingStoreException"},
	{"factory", "()Ljava/util/prefs/PreferencesFactory;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$PreferencesFactory*(*)()>(&Preferences::factory))},
	{"factory1", "()Ljava/util/prefs/PreferencesFactory;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$PreferencesFactory*(*)()>(&Preferences::factory1))},
	{"flush", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.util.prefs.BackingStoreException"},
	{"get", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBoolean", "(Ljava/lang/String;Z)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getByteArray", "(Ljava/lang/String;[B)[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getDouble", "(Ljava/lang/String;D)D", nullptr, $PUBLIC | $ABSTRACT},
	{"getFloat", "(Ljava/lang/String;F)F", nullptr, $PUBLIC | $ABSTRACT},
	{"getInt", "(Ljava/lang/String;I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLong", "(Ljava/lang/String;J)J", nullptr, $PUBLIC | $ABSTRACT},
	{"importPreferences", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($InputStream*)>(&Preferences::importPreferences)), "java.io.IOException,java.util.prefs.InvalidPreferencesFormatException"},
	{"isUserNode", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"keys", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.util.prefs.BackingStoreException"},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"node", "(Ljava/lang/String;)Ljava/util/prefs/Preferences;", nullptr, $PUBLIC | $ABSTRACT},
	{"nodeExists", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.util.prefs.BackingStoreException"},
	{"nodeName", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<*>;)Ljava/lang/String;", $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Class*)>(&Preferences::nodeName))},
	{"parent", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC | $ABSTRACT},
	{"put", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"putBoolean", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"putByteArray", "(Ljava/lang/String;[B)V", nullptr, $PUBLIC | $ABSTRACT},
	{"putDouble", "(Ljava/lang/String;D)V", nullptr, $PUBLIC | $ABSTRACT},
	{"putFloat", "(Ljava/lang/String;F)V", nullptr, $PUBLIC | $ABSTRACT},
	{"putInt", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"putLong", "(Ljava/lang/String;J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeNode", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.util.prefs.BackingStoreException"},
	{"removeNodeChangeListener", "(Ljava/util/prefs/NodeChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removePreferenceChangeListener", "(Ljava/util/prefs/PreferenceChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"sync", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.util.prefs.BackingStoreException"},
	{"systemNodeForPackage", "(Ljava/lang/Class;)Ljava/util/prefs/Preferences;", "(Ljava/lang/Class<*>;)Ljava/util/prefs/Preferences;", $PUBLIC | $STATIC, $method(static_cast<Preferences*(*)($Class*)>(&Preferences::systemNodeForPackage))},
	{"systemRoot", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Preferences*(*)()>(&Preferences::systemRoot))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"userNodeForPackage", "(Ljava/lang/Class;)Ljava/util/prefs/Preferences;", "(Ljava/lang/Class<*>;)Ljava/util/prefs/Preferences;", $PUBLIC | $STATIC, $method(static_cast<Preferences*(*)($Class*)>(&Preferences::userNodeForPackage))},
	{"userRoot", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Preferences*(*)()>(&Preferences::userRoot))},
	{}
};

$InnerClassInfo _Preferences_InnerClassesInfo_[] = {
	{"java.util.prefs.Preferences$2", nullptr, nullptr, 0},
	{"java.util.prefs.Preferences$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Preferences_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.prefs.Preferences",
	"java.lang.Object",
	nullptr,
	_Preferences_FieldInfo_,
	_Preferences_MethodInfo_,
	nullptr,
	nullptr,
	_Preferences_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.prefs.Preferences$2,java.util.prefs.Preferences$1"
};

$Object* allocate$Preferences($Class* clazz) {
	return $of($alloc(Preferences));
}

$String* Preferences::toString() {
	 return this->$Object::toString();
}

$PreferencesFactory* Preferences::factory$ = nullptr;
$Permission* Preferences::prefsPerm = nullptr;

$PreferencesFactory* Preferences::factory() {
	$init(Preferences);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, factoryName, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Preferences$1)))));
	if (factoryName != nullptr) {
		try {
			$var($Object, result, $Class::forName(factoryName, false, $($ClassLoader::getSystemClassLoader()))->newInstance());
			return $cast($PreferencesFactory, result);
		} catch ($Exception& ex) {
			try {
				$var($SecurityManager, sm, $System::getSecurityManager());
				if (sm != nullptr) {
					sm->checkPermission($$new($AllPermission));
				}
				$var($Object, result, $Class::forName(factoryName, false, $($($Thread::currentThread())->getContextClassLoader()))->newInstance());
				return $cast($PreferencesFactory, result);
			} catch ($Exception& e) {
				$throwNew($InternalError, $$str({"Can\'t instantiate Preferences factory "_s, factoryName}), e);
			}
		}
	}
	return $cast($PreferencesFactory, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Preferences$2))));
}

$PreferencesFactory* Preferences::factory1() {
	$init(Preferences);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($PreferencesFactory);
	$var($Iterator, itr, $nc($($ServiceLoader::load($PreferencesFactory::class$, $($ClassLoader::getSystemClassLoader()))))->iterator());
	while ($nc(itr)->hasNext()) {
		try {
			return $cast($PreferencesFactory, itr->next());
		} catch ($ServiceConfigurationError& sce) {
			if ($instanceOf($SecurityException, $(sce->getCause()))) {
				continue;
			}
			$throw(sce);
		}
	}
	$var($String, osName, $System::getProperty("os.name"_s));
	$var($String, platformFactory, nullptr);
	if ($nc(osName)->startsWith("Windows"_s)) {
		$assign(platformFactory, "java.util.prefs.WindowsPreferencesFactory"_s);
	} else if (osName->contains("OS X"_s)) {
		$assign(platformFactory, "java.util.prefs.MacOSXPreferencesFactory"_s);
	} else {
		$assign(platformFactory, "java.util.prefs.FileSystemPreferencesFactory"_s);
	}
	try {
		$var($Object, result, $Class::forName(platformFactory, false, $(Preferences::class$->getClassLoader()))->newInstance());
		return $cast($PreferencesFactory, result);
	} catch ($Exception& e) {
		$throwNew($InternalError, $$str({"Can\'t instantiate platform default Preferences factory "_s, platformFactory}), e);
	}
	$shouldNotReachHere();
}

Preferences* Preferences::userNodeForPackage($Class* c) {
	$init(Preferences);
	$useLocalCurrentObjectStackCache();
	return $nc($(userRoot()))->node($(nodeName(c)));
}

Preferences* Preferences::systemNodeForPackage($Class* c) {
	$init(Preferences);
	$useLocalCurrentObjectStackCache();
	return $nc($(systemRoot()))->node($(nodeName(c)));
}

$String* Preferences::nodeName($Class* c) {
	$init(Preferences);
	$useLocalCurrentObjectStackCache();
	if ($nc(c)->isArray()) {
		$throwNew($IllegalArgumentException, "Arrays have no associated preferences node."_s);
	}
	$var($String, className, $nc(c)->getName());
	int32_t pkgEndIndex = $nc(className)->lastIndexOf((int32_t)u'.');
	if (pkgEndIndex < 0) {
		return "/<unnamed>"_s;
	}
	$var($String, packageName, className->substring(0, pkgEndIndex));
	return $str({"/"_s, $(packageName->replace(u'.', u'/'))});
}

Preferences* Preferences::userRoot() {
	$init(Preferences);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPermission(Preferences::prefsPerm);
	}
	return $nc(Preferences::factory$)->userRoot();
}

Preferences* Preferences::systemRoot() {
	$init(Preferences);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		security->checkPermission(Preferences::prefsPerm);
	}
	return $nc(Preferences::factory$)->systemRoot();
}

void Preferences::init$() {
}

void Preferences::importPreferences($InputStream* is) {
	$init(Preferences);
	$XmlSupport::importPreferences(is);
}

void clinit$Preferences($Class* class$) {
	$assignStatic(Preferences::factory$, Preferences::factory());
	$assignStatic(Preferences::prefsPerm, $new($RuntimePermission, "preferences"_s));
}

Preferences::Preferences() {
}

$Class* Preferences::load$($String* name, bool initialize) {
	$loadClass(Preferences, name, initialize, &_Preferences_ClassInfo_, clinit$Preferences, allocate$Preferences);
	return class$;
}

$Class* Preferences::class$ = nullptr;

		} // prefs
	} // util
} // java