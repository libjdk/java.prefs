#include <java.prefs.test.h>

#include <java.prefs.h>
#include <java.base.h>
#include <java.xml.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>

void java$prefs$test$PreloadClass(void* eventData) {
}

void java$prefs$test$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$prefs$test$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* java$prefs$test$GetPackages() {
	return nullptr;
}

::java::lang::ClassEntry* java$prefs$test$GetClassEntry($String* name) {
	return nullptr;
}

$bytes* java$prefs$test$GetResource($String* name) {
	return nullptr;
}

void java$prefs$test::init() {
	::java$prefs::init();
	::java$base::init();
	::java$xml::init();
	::java::lang::Library lib = {
		"java.prefs.test", "17.35", "",
		nullptr,
		java$prefs$test$LibEventAction,
		java$prefs$test$GetPackages,
		java$prefs$test$GetClassEntry,
		java$prefs$test$GetResource
	};
	$System::addLibrary(&lib);
	$System::init();
}