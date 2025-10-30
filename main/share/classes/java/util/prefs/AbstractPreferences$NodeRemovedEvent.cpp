#include <java/util/prefs/AbstractPreferences$NodeRemovedEvent.h>

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

$FieldInfo _AbstractPreferences$NodeRemovedEvent_FieldInfo_[] = {
	{"this$0", "Ljava/util/prefs/AbstractPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractPreferences$NodeRemovedEvent, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractPreferences$NodeRemovedEvent, serialVersionUID)},
	{}
};

$MethodInfo _AbstractPreferences$NodeRemovedEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/util/prefs/AbstractPreferences;Ljava/util/prefs/Preferences;Ljava/util/prefs/Preferences;)V", nullptr, 0, $method(static_cast<void(AbstractPreferences$NodeRemovedEvent::*)($AbstractPreferences*,$Preferences*,$Preferences*)>(&AbstractPreferences$NodeRemovedEvent::init$))},
	{}
};

$InnerClassInfo _AbstractPreferences$NodeRemovedEvent_InnerClassesInfo_[] = {
	{"java.util.prefs.AbstractPreferences$NodeRemovedEvent", "java.util.prefs.AbstractPreferences", "NodeRemovedEvent", $PRIVATE},
	{}
};

$ClassInfo _AbstractPreferences$NodeRemovedEvent_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.AbstractPreferences$NodeRemovedEvent",
	"java.util.prefs.NodeChangeEvent",
	nullptr,
	_AbstractPreferences$NodeRemovedEvent_FieldInfo_,
	_AbstractPreferences$NodeRemovedEvent_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractPreferences$NodeRemovedEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.AbstractPreferences"
};

$Object* allocate$AbstractPreferences$NodeRemovedEvent($Class* clazz) {
	return $of($alloc(AbstractPreferences$NodeRemovedEvent));
}

void AbstractPreferences$NodeRemovedEvent::init$($AbstractPreferences* this$0, $Preferences* parent, $Preferences* child) {
	$set(this, this$0, this$0);
	$NodeChangeEvent::init$(parent, child);
}

AbstractPreferences$NodeRemovedEvent::AbstractPreferences$NodeRemovedEvent() {
}

$Class* AbstractPreferences$NodeRemovedEvent::load$($String* name, bool initialize) {
	$loadClass(AbstractPreferences$NodeRemovedEvent, name, initialize, &_AbstractPreferences$NodeRemovedEvent_ClassInfo_, allocate$AbstractPreferences$NodeRemovedEvent);
	return class$;
}

$Class* AbstractPreferences$NodeRemovedEvent::class$ = nullptr;

		} // prefs
	} // util
} // java