#include <java/util/prefs/NodeChangeEvent.h>

#include <java/io/NotSerializableException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/EventObject.h>
#include <java/util/prefs/Preferences.h>
#include <jcpp.h>

using $NotSerializableException = ::java::io::NotSerializableException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Preferences = ::java::util::prefs::Preferences;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _NodeChangeEvent_FieldInfo_[] = {
	{"child", "Ljava/util/prefs/Preferences;", nullptr, $PRIVATE | $TRANSIENT, $field(NodeChangeEvent, child)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NodeChangeEvent, serialVersionUID)},
	{}
};

$MethodInfo _NodeChangeEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/util/prefs/Preferences;Ljava/util/prefs/Preferences;)V", nullptr, $PUBLIC, $method(static_cast<void(NodeChangeEvent::*)($Preferences*,$Preferences*)>(&NodeChangeEvent::init$))},
	{"getChild", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC},
	{"getParent", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(NodeChangeEvent::*)($ObjectInputStream*)>(&NodeChangeEvent::readObject)), "java.io.NotSerializableException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(NodeChangeEvent::*)($ObjectOutputStream*)>(&NodeChangeEvent::writeObject)), "java.io.NotSerializableException"},
	{}
};

$ClassInfo _NodeChangeEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.prefs.NodeChangeEvent",
	"java.util.EventObject",
	nullptr,
	_NodeChangeEvent_FieldInfo_,
	_NodeChangeEvent_MethodInfo_
};

$Object* allocate$NodeChangeEvent($Class* clazz) {
	return $of($alloc(NodeChangeEvent));
}

void NodeChangeEvent::init$($Preferences* parent, $Preferences* child) {
	$EventObject::init$(parent);
	$set(this, child, child);
}

$Preferences* NodeChangeEvent::getParent() {
	return $cast($Preferences, getSource());
}

$Preferences* NodeChangeEvent::getChild() {
	return this->child;
}

void NodeChangeEvent::writeObject($ObjectOutputStream* out) {
	$throwNew($NotSerializableException, "Not serializable."_s);
}

void NodeChangeEvent::readObject($ObjectInputStream* in) {
	$throwNew($NotSerializableException, "Not serializable."_s);
}

NodeChangeEvent::NodeChangeEvent() {
}

$Class* NodeChangeEvent::load$($String* name, bool initialize) {
	$loadClass(NodeChangeEvent, name, initialize, &_NodeChangeEvent_ClassInfo_, allocate$NodeChangeEvent);
	return class$;
}

$Class* NodeChangeEvent::class$ = nullptr;

		} // prefs
	} // util
} // java