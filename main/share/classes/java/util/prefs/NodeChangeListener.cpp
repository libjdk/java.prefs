#include <java/util/prefs/NodeChangeListener.h>

#include <java/util/prefs/NodeChangeEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $NodeChangeEvent = ::java::util::prefs::NodeChangeEvent;

namespace java {
	namespace util {
		namespace prefs {

$MethodInfo _NodeChangeListener_MethodInfo_[] = {
	{"childAdded", "(Ljava/util/prefs/NodeChangeEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"childRemoved", "(Ljava/util/prefs/NodeChangeEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _NodeChangeListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.prefs.NodeChangeListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_NodeChangeListener_MethodInfo_
};

$Object* allocate$NodeChangeListener($Class* clazz) {
	return $of($alloc(NodeChangeListener));
}

$Class* NodeChangeListener::load$($String* name, bool initialize) {
	$loadClass(NodeChangeListener, name, initialize, &_NodeChangeListener_ClassInfo_, allocate$NodeChangeListener);
	return class$;
}

$Class* NodeChangeListener::class$ = nullptr;

		} // prefs
	} // util
} // java