#include <java/util/prefs/AbstractPreferences$EventDispatchThread.h>

#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/EventObject.h>
#include <java/util/List.h>
#include <java/util/prefs/AbstractPreferences$NodeAddedEvent.h>
#include <java/util/prefs/AbstractPreferences.h>
#include <java/util/prefs/NodeChangeEvent.h>
#include <java/util/prefs/NodeChangeListener.h>
#include <java/util/prefs/PreferenceChangeEvent.h>
#include <java/util/prefs/PreferenceChangeListener.h>
#include <jcpp.h>

using $NodeChangeListenerArray = $Array<::java::util::prefs::NodeChangeListener>;
using $PreferenceChangeListenerArray = $Array<::java::util::prefs::PreferenceChangeListener>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $EventObject = ::java::util::EventObject;
using $List = ::java::util::List;
using $AbstractPreferences = ::java::util::prefs::AbstractPreferences;
using $AbstractPreferences$NodeAddedEvent = ::java::util::prefs::AbstractPreferences$NodeAddedEvent;
using $NodeChangeEvent = ::java::util::prefs::NodeChangeEvent;
using $NodeChangeListener = ::java::util::prefs::NodeChangeListener;
using $PreferenceChangeEvent = ::java::util::prefs::PreferenceChangeEvent;
using $PreferenceChangeListener = ::java::util::prefs::PreferenceChangeListener;

namespace java {
	namespace util {
		namespace prefs {

$MethodInfo _AbstractPreferences$EventDispatchThread_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AbstractPreferences$EventDispatchThread::*)()>(&AbstractPreferences$EventDispatchThread::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractPreferences$EventDispatchThread_InnerClassesInfo_[] = {
	{"java.util.prefs.AbstractPreferences$EventDispatchThread", "java.util.prefs.AbstractPreferences", "EventDispatchThread", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AbstractPreferences$EventDispatchThread_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.AbstractPreferences$EventDispatchThread",
	"java.lang.Thread",
	nullptr,
	nullptr,
	_AbstractPreferences$EventDispatchThread_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractPreferences$EventDispatchThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.AbstractPreferences"
};

$Object* allocate$AbstractPreferences$EventDispatchThread($Class* clazz) {
	return $of($alloc(AbstractPreferences$EventDispatchThread));
}

void AbstractPreferences$EventDispatchThread::init$() {
	$Thread::init$(nullptr, nullptr, "Event Dispatch Thread"_s, 0, false);
}

void AbstractPreferences$EventDispatchThread::run() {
	$useLocalCurrentObjectStackCache();
	while (true) {
		$var($EventObject, event, nullptr);
		$init($AbstractPreferences);
		$synchronized($AbstractPreferences::eventQueue) {
			try {
				while ($nc($AbstractPreferences::eventQueue)->isEmpty()) {
					$nc($of($AbstractPreferences::eventQueue))->wait();
				}
				$assign(event, $cast($EventObject, $nc($AbstractPreferences::eventQueue)->remove(0)));
			} catch ($InterruptedException& e) {
				return;
			}
		}
		$var($AbstractPreferences, src, $cast($AbstractPreferences, $nc(event)->getSource()));
		if ($instanceOf($PreferenceChangeEvent, event)) {
			$var($PreferenceChangeEvent, pce, $cast($PreferenceChangeEvent, event));
			$var($PreferenceChangeListenerArray, listeners, $nc(src)->prefListeners());
			{
				$var($PreferenceChangeListenerArray, arr$, listeners);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($PreferenceChangeListener, listener, arr$->get(i$));
					$nc(listener)->preferenceChange(pce);
				}
			}
		} else {
			$var($NodeChangeEvent, nce, $cast($NodeChangeEvent, event));
			$var($NodeChangeListenerArray, listeners, $nc(src)->nodeListeners());
			if ($instanceOf($AbstractPreferences$NodeAddedEvent, nce)) {
				{
					$var($NodeChangeListenerArray, arr$, listeners);
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($NodeChangeListener, listener, arr$->get(i$));
						$nc(listener)->childAdded(nce);
					}
				}
			} else {
				{
					$var($NodeChangeListenerArray, arr$, listeners);
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($NodeChangeListener, listener, arr$->get(i$));
						$nc(listener)->childRemoved(nce);
					}
				}
			}
		}
	}
}

AbstractPreferences$EventDispatchThread::AbstractPreferences$EventDispatchThread() {
}

$Class* AbstractPreferences$EventDispatchThread::load$($String* name, bool initialize) {
	$loadClass(AbstractPreferences$EventDispatchThread, name, initialize, &_AbstractPreferences$EventDispatchThread_ClassInfo_, allocate$AbstractPreferences$EventDispatchThread);
	return class$;
}

$Class* AbstractPreferences$EventDispatchThread::class$ = nullptr;

		} // prefs
	} // util
} // java