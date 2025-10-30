#include <java/util/prefs/PreferenceChangeListener.h>

#include <java/util/prefs/PreferenceChangeEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $PreferenceChangeEvent = ::java::util::prefs::PreferenceChangeEvent;

namespace java {
	namespace util {
		namespace prefs {

$CompoundAttribute _PreferenceChangeListener_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _PreferenceChangeListener_MethodInfo_[] = {
	{"preferenceChange", "(Ljava/util/prefs/PreferenceChangeEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PreferenceChangeListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.prefs.PreferenceChangeListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_PreferenceChangeListener_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_PreferenceChangeListener_Annotations_
};

$Object* allocate$PreferenceChangeListener($Class* clazz) {
	return $of($alloc(PreferenceChangeListener));
}

$Class* PreferenceChangeListener::load$($String* name, bool initialize) {
	$loadClass(PreferenceChangeListener, name, initialize, &_PreferenceChangeListener_ClassInfo_, allocate$PreferenceChangeListener);
	return class$;
}

$Class* PreferenceChangeListener::class$ = nullptr;

		} // prefs
	} // util
} // java