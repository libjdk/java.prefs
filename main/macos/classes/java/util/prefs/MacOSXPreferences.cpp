#include <java/util/prefs/MacOSXPreferences.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/Objects.h>
#include <java/util/prefs/AbstractPreferences.h>
#include <java/util/prefs/BackingStoreException.h>
#include <java/util/prefs/MacOSXPreferencesFile.h>
#include <java/util/prefs/Preferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $AbstractPreferences = ::java::util::prefs::AbstractPreferences;
using $BackingStoreException = ::java::util::prefs::BackingStoreException;
using $MacOSXPreferencesFile = ::java::util::prefs::MacOSXPreferencesFile;
using $Preferences = ::java::util::prefs::Preferences;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _MacOSXPreferences_FieldInfo_[] = {
	{"defaultAppName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MacOSXPreferences, defaultAppName)},
	{"isUser", "Z", nullptr, $PRIVATE | $FINAL, $field(MacOSXPreferences, isUser)},
	{"file", "Ljava/util/prefs/MacOSXPreferencesFile;", nullptr, $PRIVATE | $FINAL, $field(MacOSXPreferences, file)},
	{"path", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MacOSXPreferences, path)},
	{"userRoot", "Ljava/util/prefs/MacOSXPreferences;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(MacOSXPreferences, userRoot)},
	{"systemRoot", "Ljava/util/prefs/MacOSXPreferences;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(MacOSXPreferences, systemRoot)},
	{}
};

$MethodInfo _MacOSXPreferences_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(MacOSXPreferences::*)(bool)>(&MacOSXPreferences::init$))},
	{"<init>", "(Ljava/util/prefs/MacOSXPreferences;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(MacOSXPreferences::*)(MacOSXPreferences*,$String*)>(&MacOSXPreferences::init$))},
	{"<init>", "(Ljava/util/prefs/MacOSXPreferences;Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(static_cast<void(MacOSXPreferences::*)(MacOSXPreferences*,$String*,bool)>(&MacOSXPreferences::init$))},
	{"<init>", "(Ljava/util/prefs/MacOSXPreferences;Ljava/lang/String;ZZZ)V", nullptr, $PRIVATE, $method(static_cast<void(MacOSXPreferences::*)(MacOSXPreferences*,$String*,bool,bool,bool)>(&MacOSXPreferences::init$))},
	{"cfFileForNode", "(Z)Ljava/util/prefs/MacOSXPreferencesFile;", nullptr, $PRIVATE, $method(static_cast<$MacOSXPreferencesFile*(MacOSXPreferences::*)(bool)>(&MacOSXPreferences::cfFileForNode))},
	{"childSpi", "(Ljava/lang/String;)Ljava/util/prefs/AbstractPreferences;", nullptr, $PROTECTED},
	{"childrenNamesSpi", "()[Ljava/lang/String;", nullptr, $PROTECTED, nullptr, "java.util.prefs.BackingStoreException"},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.util.prefs.BackingStoreException"},
	{"flushSpi", "()V", nullptr, $PROTECTED, nullptr, "java.util.prefs.BackingStoreException"},
	{"getSpi", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getSystemRoot", "()Ljava/util/prefs/Preferences;", nullptr, $STATIC, $method(static_cast<$Preferences*(*)()>(&MacOSXPreferences::getSystemRoot))},
	{"getUserRoot", "()Ljava/util/prefs/Preferences;", nullptr, $STATIC, $method(static_cast<$Preferences*(*)()>(&MacOSXPreferences::getUserRoot))},
	{"keysSpi", "()[Ljava/lang/String;", nullptr, $PROTECTED, nullptr, "java.util.prefs.BackingStoreException"},
	{"putSpi", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"removeChild", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(MacOSXPreferences::*)($String*)>(&MacOSXPreferences::removeChild))},
	{"removeNodeSpi", "()V", nullptr, $PROTECTED, nullptr, "java.util.prefs.BackingStoreException"},
	{"removeSpi", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"sync", "()V", nullptr, $PUBLIC, nullptr, "java.util.prefs.BackingStoreException"},
	{"syncSpi", "()V", nullptr, $PROTECTED, nullptr, "java.util.prefs.BackingStoreException"},
	{}
};

$ClassInfo _MacOSXPreferences_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.MacOSXPreferences",
	"java.util.prefs.AbstractPreferences",
	nullptr,
	_MacOSXPreferences_FieldInfo_,
	_MacOSXPreferences_MethodInfo_
};

$Object* allocate$MacOSXPreferences($Class* clazz) {
	return $of($alloc(MacOSXPreferences));
}

$String* MacOSXPreferences::defaultAppName = nullptr;
$volatile(MacOSXPreferences*) MacOSXPreferences::userRoot = nullptr;
$volatile(MacOSXPreferences*) MacOSXPreferences::systemRoot = nullptr;

$Preferences* MacOSXPreferences::getUserRoot() {
	$init(MacOSXPreferences);
	$var(MacOSXPreferences, root, MacOSXPreferences::userRoot);
	if (root == nullptr) {
		$synchronized(MacOSXPreferences::class$) {
			$assign(root, MacOSXPreferences::userRoot);
			if (root == nullptr) {
				$assignStatic(MacOSXPreferences::userRoot, ($assign(root, $new(MacOSXPreferences, true))));
			}
		}
	}
	return root;
}

$Preferences* MacOSXPreferences::getSystemRoot() {
	$init(MacOSXPreferences);
	$var(MacOSXPreferences, root, MacOSXPreferences::systemRoot);
	if (root == nullptr) {
		$synchronized(MacOSXPreferences::class$) {
			$assign(root, MacOSXPreferences::systemRoot);
			if (root == nullptr) {
				$assignStatic(MacOSXPreferences::systemRoot, ($assign(root, $new(MacOSXPreferences, false))));
			}
		}
	}
	return root;
}

void MacOSXPreferences::init$(bool newIsUser) {
	MacOSXPreferences::init$(nullptr, ""_s, false, true, newIsUser);
}

void MacOSXPreferences::init$(MacOSXPreferences* parent, $String* name) {
	MacOSXPreferences::init$(parent, name, false, false, false);
}

void MacOSXPreferences::init$(MacOSXPreferences* parent, $String* name, bool isNew) {
	MacOSXPreferences::init$(parent, name, isNew, false, false);
}

void MacOSXPreferences::init$(MacOSXPreferences* parent, $String* name, bool isNew, bool isRoot, bool isUser) {
	$AbstractPreferences::init$(parent, name);
	if (isRoot) {
		this->isUser = isUser;
	} else {
		this->isUser = isUserNode();
	}
	$set(this, path, isRoot ? absolutePath() : $str({$(absolutePath()), "/"_s}));
	$set(this, file, cfFileForNode(this->isUser));
	if (isNew) {
		this->newNode = isNew;
	} else {
		this->newNode = $nc(this->file)->addNode(this->path);
	}
}

$MacOSXPreferencesFile* MacOSXPreferences::cfFileForNode(bool isUser) {
	$var($String, name, this->path);
	int32_t pos = -1;
	for (int32_t i = 0; i < 4; ++i) {
		pos = $nc(name)->indexOf((int32_t)u'/', pos + 1);
		if (pos == -1) {
			break;
		}
	}
	if (pos == -1) {
		$assign(name, MacOSXPreferences::defaultAppName);
	} else {
		$assign(name, $nc(name)->substring(1, pos));
		$assign(name, name->replace(u'/', u'.'));
		$assign(name, name->toLowerCase());
	}
	return $MacOSXPreferencesFile::getFile(name, isUser);
}

void MacOSXPreferences::putSpi($String* key, $String* value) {
	$nc(this->file)->addKeyToNode(this->path, key, value);
}

$String* MacOSXPreferences::getSpi($String* key) {
	return $nc(this->file)->getKeyFromNode(this->path, key);
}

void MacOSXPreferences::removeSpi($String* key) {
	$Objects::requireNonNull($of(key), "Specified key cannot be null"_s);
	$nc(this->file)->removeKeyFromNode(this->path, key);
}

void MacOSXPreferences::removeNodeSpi() {
	$useLocalCurrentObjectStackCache();
	$load($MacOSXPreferencesFile);
	$synchronized($MacOSXPreferencesFile::class$) {
		$nc(($cast(MacOSXPreferences, $(parent()))))->removeChild($(name()));
		$nc(this->file)->removeNode(this->path);
	}
}

void MacOSXPreferences::removeChild($String* child) {
	$nc(this->file)->removeChildFromNode(this->path, child);
}

$StringArray* MacOSXPreferences::childrenNamesSpi() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, result, $nc(this->file)->getChildrenForNode(this->path));
	if (result == nullptr) {
		$throwNew($BackingStoreException, $$str({"Couldn\'t get list of children for node \'"_s, this->path, "\'"_s}));
	}
	return result;
}

$StringArray* MacOSXPreferences::keysSpi() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, result, $nc(this->file)->getKeysForNode(this->path));
	if (result == nullptr) {
		$throwNew($BackingStoreException, $$str({"Couldn\'t get list of keys for node \'"_s, this->path, "\'"_s}));
	}
	return result;
}

$AbstractPreferences* MacOSXPreferences::childSpi($String* name) {
	$load($MacOSXPreferencesFile);
	$synchronized($MacOSXPreferencesFile::class$) {
		bool isNew = $nc(this->file)->addChildToNode(this->path, name);
		return $new(MacOSXPreferences, this, name, isNew);
	}
}

void MacOSXPreferences::flush() {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->lock) {
		if (this->isUser) {
			if (!$MacOSXPreferencesFile::flushUser()) {
				$throwNew($BackingStoreException, $$str({"Synchronization failed for node \'"_s, this->path, "\'"_s}));
			}
		} else if (!$MacOSXPreferencesFile::flushWorld()) {
			$throwNew($BackingStoreException, $$str({"Synchronization failed for node \'"_s, this->path, "\'"_s}));
		}
	}
}

void MacOSXPreferences::flushSpi() {
}

void MacOSXPreferences::sync() {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->lock) {
		if (isRemoved()) {
			$throwNew($IllegalStateException, "Node has been removed"_s);
		}
		if (this->isUser) {
			if (!$MacOSXPreferencesFile::syncUser()) {
				$throwNew($BackingStoreException, $$str({"Synchronization failed for node \'"_s, this->path, "\'"_s}));
			}
		} else if (!$MacOSXPreferencesFile::syncWorld()) {
			$throwNew($BackingStoreException, $$str({"Synchronization failed for node \'"_s, this->path, "\'"_s}));
		}
	}
}

void MacOSXPreferences::syncSpi() {
}

MacOSXPreferences::MacOSXPreferences() {
}

void clinit$MacOSXPreferences($Class* class$) {
	$assignStatic(MacOSXPreferences::defaultAppName, "com.apple.java.util.prefs"_s);
}

$Class* MacOSXPreferences::load$($String* name, bool initialize) {
	$loadClass(MacOSXPreferences, name, initialize, &_MacOSXPreferences_ClassInfo_, clinit$MacOSXPreferences, allocate$MacOSXPreferences);
	return class$;
}

$Class* MacOSXPreferences::class$ = nullptr;

		} // prefs
	} // util
} // java