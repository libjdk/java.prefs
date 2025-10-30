#include <java/util/prefs/AbstractPreferences$NodeAddedEvent.h>

#include <java/util/prefs/AbstractPreferences.h>
#include <java/util/prefs/NodeChangeEvent.h>
#include <java/util/prefs/Preferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractPreferences = ::java::util::prefs::AbstractPreferences;
using $NodeChangeEvent = ::java::util::prefs::NodeChangeEvent;
using $Preferences = ::java::util::prefs::Preferences;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _AbstractPreferences$NodeAddedEvent_FieldInfo_[] = {
	{"this$0", "Ljava/util/prefs/AbstractPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractPreferences$NodeAddedEvent, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractPreferences$NodeAddedEvent, serialVersionUID)},
	{}
};

$MethodInfo _AbstractPreferences$NodeAddedEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/util/prefs/AbstractPreferences;Ljava/util/prefs/Preferences;Ljava/util/prefs/Preferences;)V", nullptr, 0, $method(static_cast<void(AbstractPreferences$NodeAddedEvent::*)($AbstractPreferences*,$Preferences*,$Preferences*)>(&AbstractPreferences$NodeAddedEvent::init$))},
	{}
};

$InnerClassInfo _AbstractPreferences$NodeAddedEvent_InnerClassesInfo_[] = {
	{"java.util.prefs.AbstractPreferences$NodeAddedEvent", "java.util.prefs.AbstractPreferences", "NodeAddedEvent", $PRIVATE},
	{}
};

$ClassInfo _AbstractPreferences$NodeAddedEvent_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.AbstractPreferences$NodeAddedEvent",
	"java.util.prefs.NodeChangeEvent",
	nullptr,
	_AbstractPreferences$NodeAddedEvent_FieldInfo_,
	_AbstractPreferences$NodeAddedEvent_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractPreferences$NodeAddedEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.AbstractPreferences"
};

$Object* allocate$AbstractPreferences$NodeAddedEvent($Class* clazz) {
	return $of($alloc(AbstractPreferences$NodeAddedEvent));
}

void AbstractPreferences$NodeAddedEvent::init$($AbstractPreferences* this$0, $Preferences* parent, $Preferences* child) {
	$set(this, this$0, this$0);
	$NodeChangeEvent::init$(parent, child);
}

AbstractPreferences$NodeAddedEvent::AbstractPreferences$NodeAddedEvent() {
}

$Class* AbstractPreferences$NodeAddedEvent::load$($String* name, bool initialize) {
	$loadClass(AbstractPreferences$NodeAddedEvent, name, initialize, &_AbstractPreferences$NodeAddedEvent_ClassInfo_, allocate$AbstractPreferences$NodeAddedEvent);
	return class$;
}

$Class* AbstractPreferences$NodeAddedEvent::class$ = nullptr;

		} // prefs
	} // util
} // java