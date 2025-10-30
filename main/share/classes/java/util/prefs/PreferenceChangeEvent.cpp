#include <java/util/prefs/PreferenceChangeEvent.h>

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

$FieldInfo _PreferenceChangeEvent_FieldInfo_[] = {
	{"key", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PreferenceChangeEvent, key)},
	{"newValue", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PreferenceChangeEvent, newValue)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PreferenceChangeEvent, serialVersionUID)},
	{}
};

$MethodInfo _PreferenceChangeEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/util/prefs/Preferences;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PreferenceChangeEvent::*)($Preferences*,$String*,$String*)>(&PreferenceChangeEvent::init$))},
	{"getKey", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNewValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNode", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(PreferenceChangeEvent::*)($ObjectInputStream*)>(&PreferenceChangeEvent::readObject)), "java.io.NotSerializableException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(PreferenceChangeEvent::*)($ObjectOutputStream*)>(&PreferenceChangeEvent::writeObject)), "java.io.NotSerializableException"},
	{}
};

$ClassInfo _PreferenceChangeEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.prefs.PreferenceChangeEvent",
	"java.util.EventObject",
	nullptr,
	_PreferenceChangeEvent_FieldInfo_,
	_PreferenceChangeEvent_MethodInfo_
};

$Object* allocate$PreferenceChangeEvent($Class* clazz) {
	return $of($alloc(PreferenceChangeEvent));
}

void PreferenceChangeEvent::init$($Preferences* node, $String* key, $String* newValue) {
	$EventObject::init$(node);
	$set(this, key, key);
	$set(this, newValue, newValue);
}

$Preferences* PreferenceChangeEvent::getNode() {
	return $cast($Preferences, getSource());
}

$String* PreferenceChangeEvent::getKey() {
	return this->key;
}

$String* PreferenceChangeEvent::getNewValue() {
	return this->newValue;
}

void PreferenceChangeEvent::writeObject($ObjectOutputStream* out) {
	$throwNew($NotSerializableException, "Not serializable."_s);
}

void PreferenceChangeEvent::readObject($ObjectInputStream* in) {
	$throwNew($NotSerializableException, "Not serializable."_s);
}

PreferenceChangeEvent::PreferenceChangeEvent() {
}

$Class* PreferenceChangeEvent::load$($String* name, bool initialize) {
	$loadClass(PreferenceChangeEvent, name, initialize, &_PreferenceChangeEvent_ClassInfo_, allocate$PreferenceChangeEvent);
	return class$;
}

$Class* PreferenceChangeEvent::class$ = nullptr;

		} // prefs
	} // util
} // java