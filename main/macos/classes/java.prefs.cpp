#include <java.prefs.h>

#include <java.base.h>
#include <java.xml.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>
#include <module-info>

#include <java/util/prefs/AbstractPreferences.h>
#include <java/util/prefs/AbstractPreferences$1.h>
#include <java/util/prefs/AbstractPreferences$EventDispatchThread.h>
#include <java/util/prefs/AbstractPreferences$NodeAddedEvent.h>
#include <java/util/prefs/AbstractPreferences$NodeRemovedEvent.h>
#include <java/util/prefs/BackingStoreException.h>
#include <java/util/prefs/Base64.h>
#include <java/util/prefs/InvalidPreferencesFormatException.h>
#include <java/util/prefs/MacOSXPreferences.h>
#include <java/util/prefs/MacOSXPreferencesFactory.h>
#include <java/util/prefs/MacOSXPreferencesFile.h>
#include <java/util/prefs/MacOSXPreferencesFile$1.h>
#include <java/util/prefs/MacOSXPreferencesFile$2.h>
#include <java/util/prefs/MacOSXPreferencesFile$3.h>
#include <java/util/prefs/MacOSXPreferencesFile$FlushTask.h>
#include <java/util/prefs/MacOSXPreferencesFile$SyncTask.h>
#include <java/util/prefs/NodeChangeEvent.h>
#include <java/util/prefs/NodeChangeListener.h>
#include <java/util/prefs/PreferenceChangeEvent.h>
#include <java/util/prefs/PreferenceChangeListener.h>
#include <java/util/prefs/Preferences.h>
#include <java/util/prefs/Preferences$1.h>
#include <java/util/prefs/Preferences$2.h>
#include <java/util/prefs/PreferencesFactory.h>
#include <java/util/prefs/XmlSupport.h>
#include <java/util/prefs/XmlSupport$EH.h>
#include <java/util/prefs/XmlSupport$Resolver.h>


#define $classEntry(name, clazz) {name, clazz::load$, $getMark(clazz)}
::java::lang::ClassEntry _java$prefs_classes_[] = {
	$classEntry("java.util.prefs.AbstractPreferences", ::java::util::prefs::AbstractPreferences),
	$classEntry("java.util.prefs.AbstractPreferences$1", ::java::util::prefs::AbstractPreferences$1),
	$classEntry("java.util.prefs.AbstractPreferences$EventDispatchThread", ::java::util::prefs::AbstractPreferences$EventDispatchThread),
	$classEntry("java.util.prefs.AbstractPreferences$NodeAddedEvent", ::java::util::prefs::AbstractPreferences$NodeAddedEvent),
	$classEntry("java.util.prefs.AbstractPreferences$NodeRemovedEvent", ::java::util::prefs::AbstractPreferences$NodeRemovedEvent),
	$classEntry("java.util.prefs.BackingStoreException", ::java::util::prefs::BackingStoreException),
	$classEntry("java.util.prefs.Base64", ::java::util::prefs::Base64),
	$classEntry("java.util.prefs.InvalidPreferencesFormatException", ::java::util::prefs::InvalidPreferencesFormatException),
	$classEntry("java.util.prefs.MacOSXPreferences", ::java::util::prefs::MacOSXPreferences),
	$classEntry("java.util.prefs.MacOSXPreferencesFactory", ::java::util::prefs::MacOSXPreferencesFactory),
	$classEntry("java.util.prefs.MacOSXPreferencesFile", ::java::util::prefs::MacOSXPreferencesFile),
	$classEntry("java.util.prefs.MacOSXPreferencesFile$1", ::java::util::prefs::MacOSXPreferencesFile$1),
	$classEntry("java.util.prefs.MacOSXPreferencesFile$2", ::java::util::prefs::MacOSXPreferencesFile$2),
	$classEntry("java.util.prefs.MacOSXPreferencesFile$3", ::java::util::prefs::MacOSXPreferencesFile$3),
	$classEntry("java.util.prefs.MacOSXPreferencesFile$FlushTask", ::java::util::prefs::MacOSXPreferencesFile$FlushTask),
	$classEntry("java.util.prefs.MacOSXPreferencesFile$SyncTask", ::java::util::prefs::MacOSXPreferencesFile$SyncTask),
	$classEntry("java.util.prefs.NodeChangeEvent", ::java::util::prefs::NodeChangeEvent),
	$classEntry("java.util.prefs.NodeChangeListener", ::java::util::prefs::NodeChangeListener),
	$classEntry("java.util.prefs.PreferenceChangeEvent", ::java::util::prefs::PreferenceChangeEvent),
	$classEntry("java.util.prefs.PreferenceChangeListener", ::java::util::prefs::PreferenceChangeListener),
	$classEntry("java.util.prefs.Preferences", ::java::util::prefs::Preferences),
	$classEntry("java.util.prefs.Preferences$1", ::java::util::prefs::Preferences$1),
	$classEntry("java.util.prefs.Preferences$2", ::java::util::prefs::Preferences$2),
	$classEntry("java.util.prefs.PreferencesFactory", ::java::util::prefs::PreferencesFactory),
	$classEntry("java.util.prefs.XmlSupport", ::java::util::prefs::XmlSupport),
	$classEntry("java.util.prefs.XmlSupport$EH", ::java::util::prefs::XmlSupport$EH),
	$classEntry("java.util.prefs.XmlSupport$Resolver", ::java::util::prefs::XmlSupport$Resolver)
};

const char* _java$prefs_packages_[] = {
	"java.util.prefs"
};

void java$prefs$PreloadClass(void* eventData) {
	::java::lang::PreloadClassEvent* event = (::java::lang::PreloadClassEvent*)eventData;
	int32_t length = $lengthOf(_java$prefs_classes_);
	for (int i = 0; i < length; i++) {
		::java::lang::ClassEntry* classEntry = &_java$prefs_classes_[i];
		if (event->preinit) {
			if ($hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, true);
				continue;
			}
		}
		if (event->preload) {
			if ($hasFlag(classEntry->mark, $PRELOAD) || $hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, false);
			}
		}
	}
}

void java$prefs$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$prefs$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* java$prefs$GetPackages() {
	int32_t length = $lengthOf(_java$prefs_packages_);
	$var($StringArray, packages, $new($StringArray, length));
	for (int32_t i = 0; i < length; i++) {
		packages->set(i, $str(_java$prefs_packages_[i]));
	}
	return packages;
}

::java::lang::ClassEntry* java$prefs$GetClassEntry($String* name) {
	int32_t begin = 0;
	int32_t end = $lengthOf(_java$prefs_classes_) - 1;
	while (begin <= end) {
		int32_t mid = begin + (end - begin) / 2;
		::java::lang::ClassEntry* classEntry = &_java$prefs_classes_[mid];
		int32_t ret = name->compareTo(classEntry->name);
		if (ret < 0) {
			end = mid - 1;
		} else if (ret > 0) {
			begin = mid + 1;
		} else {
			return classEntry;
		}
	}
	return nullptr;
}

$bytes* java$prefs$GetResource($String* name) {
	return nullptr;
}

void java$prefs::init() {
	::java$base::init();
	::java$xml::init();
	::java::lang::Library lib = {
		"java.prefs", "17.35", "",
		&_java$prefs_ModuleInfo_,
		java$prefs$LibEventAction,
		java$prefs$GetPackages,
		java$prefs$GetClassEntry,
		java$prefs$GetResource
	};
	$System::addLibrary(&lib);
}