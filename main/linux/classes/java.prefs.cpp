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
#include <java/util/prefs/FileSystemPreferences.h>
#include <java/util/prefs/FileSystemPreferences$1.h>
#include <java/util/prefs/FileSystemPreferences$10.h>
#include <java/util/prefs/FileSystemPreferences$11.h>
#include <java/util/prefs/FileSystemPreferences$12.h>
#include <java/util/prefs/FileSystemPreferences$2.h>
#include <java/util/prefs/FileSystemPreferences$3.h>
#include <java/util/prefs/FileSystemPreferences$4.h>
#include <java/util/prefs/FileSystemPreferences$4$1.h>
#include <java/util/prefs/FileSystemPreferences$5.h>
#include <java/util/prefs/FileSystemPreferences$6.h>
#include <java/util/prefs/FileSystemPreferences$7.h>
#include <java/util/prefs/FileSystemPreferences$8.h>
#include <java/util/prefs/FileSystemPreferences$9.h>
#include <java/util/prefs/FileSystemPreferences$Change.h>
#include <java/util/prefs/FileSystemPreferences$NodeCreate.h>
#include <java/util/prefs/FileSystemPreferences$Put.h>
#include <java/util/prefs/FileSystemPreferences$Remove.h>
#include <java/util/prefs/FileSystemPreferencesFactory.h>
#include <java/util/prefs/InvalidPreferencesFormatException.h>
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
	$classEntry("java.util.prefs.FileSystemPreferences", ::java::util::prefs::FileSystemPreferences),
	$classEntry("java.util.prefs.FileSystemPreferences$1", ::java::util::prefs::FileSystemPreferences$1),
	$classEntry("java.util.prefs.FileSystemPreferences$10", ::java::util::prefs::FileSystemPreferences$10),
	$classEntry("java.util.prefs.FileSystemPreferences$11", ::java::util::prefs::FileSystemPreferences$11),
	$classEntry("java.util.prefs.FileSystemPreferences$12", ::java::util::prefs::FileSystemPreferences$12),
	$classEntry("java.util.prefs.FileSystemPreferences$2", ::java::util::prefs::FileSystemPreferences$2),
	$classEntry("java.util.prefs.FileSystemPreferences$3", ::java::util::prefs::FileSystemPreferences$3),
	$classEntry("java.util.prefs.FileSystemPreferences$4", ::java::util::prefs::FileSystemPreferences$4),
	$classEntry("java.util.prefs.FileSystemPreferences$4$1", ::java::util::prefs::FileSystemPreferences$4$1),
	$classEntry("java.util.prefs.FileSystemPreferences$5", ::java::util::prefs::FileSystemPreferences$5),
	$classEntry("java.util.prefs.FileSystemPreferences$6", ::java::util::prefs::FileSystemPreferences$6),
	$classEntry("java.util.prefs.FileSystemPreferences$7", ::java::util::prefs::FileSystemPreferences$7),
	$classEntry("java.util.prefs.FileSystemPreferences$8", ::java::util::prefs::FileSystemPreferences$8),
	$classEntry("java.util.prefs.FileSystemPreferences$9", ::java::util::prefs::FileSystemPreferences$9),
	$classEntry("java.util.prefs.FileSystemPreferences$Change", ::java::util::prefs::FileSystemPreferences$Change),
	$classEntry("java.util.prefs.FileSystemPreferences$NodeCreate", ::java::util::prefs::FileSystemPreferences$NodeCreate),
	$classEntry("java.util.prefs.FileSystemPreferences$Put", ::java::util::prefs::FileSystemPreferences$Put),
	$classEntry("java.util.prefs.FileSystemPreferences$Remove", ::java::util::prefs::FileSystemPreferences$Remove),
	$classEntry("java.util.prefs.FileSystemPreferencesFactory", ::java::util::prefs::FileSystemPreferencesFactory),
	$classEntry("java.util.prefs.InvalidPreferencesFormatException", ::java::util::prefs::InvalidPreferencesFormatException),
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