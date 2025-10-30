#include <java/util/prefs/MacOSXPreferencesFile.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/Math.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/Runnable.h>
#include <java/lang/Runtime.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/ref/WeakReference.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Timer.h>
#include <java/util/TimerTask.h>
#include <java/util/prefs/MacOSXPreferencesFile$1.h>
#include <java/util/prefs/MacOSXPreferencesFile$2.h>
#include <java/util/prefs/MacOSXPreferencesFile$3.h>
#include <java/util/prefs/MacOSXPreferencesFile$FlushTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Timer = ::java::util::Timer;
using $TimerTask = ::java::util::TimerTask;
using $MacOSXPreferencesFile$1 = ::java::util::prefs::MacOSXPreferencesFile$1;
using $MacOSXPreferencesFile$2 = ::java::util::prefs::MacOSXPreferencesFile$2;
using $MacOSXPreferencesFile$3 = ::java::util::prefs::MacOSXPreferencesFile$3;
using $MacOSXPreferencesFile$FlushTask = ::java::util::prefs::MacOSXPreferencesFile$FlushTask;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _MacOSXPreferencesFile_FieldInfo_[] = {
	{"cachedFiles", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/ref/WeakReference<Ljava/util/prefs/MacOSXPreferencesFile;>;>;", $PRIVATE | $STATIC, $staticField(MacOSXPreferencesFile, cachedFiles)},
	{"changedFiles", "Ljava/util/HashSet;", "Ljava/util/HashSet<Ljava/util/prefs/MacOSXPreferencesFile;>;", $PRIVATE | $STATIC, $staticField(MacOSXPreferencesFile, changedFiles)},
	{"timer", "Ljava/util/Timer;", nullptr, $PRIVATE | $STATIC, $staticField(MacOSXPreferencesFile, timer$)},
	{"flushTimerTask", "Ljava/util/prefs/MacOSXPreferencesFile$FlushTask;", nullptr, $PRIVATE | $STATIC, $staticField(MacOSXPreferencesFile, flushTimerTask)},
	{"flushDelay", "J", nullptr, $PRIVATE | $STATIC, $staticField(MacOSXPreferencesFile, flushDelay$)},
	{"syncInterval", "J", nullptr, $PRIVATE | $STATIC, $staticField(MacOSXPreferencesFile, syncInterval)},
	{"appName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MacOSXPreferencesFile, appName)},
	{"user", "J", nullptr, $PRIVATE, $field(MacOSXPreferencesFile, user$)},
	{"host", "J", nullptr, $PRIVATE, $field(MacOSXPreferencesFile, host$)},
	{"cfCurrentUser", "J", nullptr, $PRIVATE | $STATIC, $staticField(MacOSXPreferencesFile, cfCurrentUser)},
	{"cfAnyUser", "J", nullptr, $PRIVATE | $STATIC, $staticField(MacOSXPreferencesFile, cfAnyUser)},
	{"cfCurrentHost", "J", nullptr, $PRIVATE | $STATIC, $staticField(MacOSXPreferencesFile, cfCurrentHost)},
	{"cfAnyHost", "J", nullptr, $PRIVATE | $STATIC, $staticField(MacOSXPreferencesFile, cfAnyHost)},
	{}
};

$MethodInfo _MacOSXPreferencesFile_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;JJ)V", nullptr, $PRIVATE, $method(static_cast<void(MacOSXPreferencesFile::*)($String*,int64_t,int64_t)>(&MacOSXPreferencesFile::init$))},
	{"addChildToNode", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, 0},
	{"addChildToNode", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JJ)Z", nullptr, $PRIVATE | $STATIC | $FINAL | $NATIVE, $method(static_cast<bool(*)($String*,$String*,$String*,int64_t,int64_t)>(&MacOSXPreferencesFile::addChildToNode))},
	{"addKeyToNode", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0},
	{"addKeyToNode", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JJ)V", nullptr, $PRIVATE | $STATIC | $FINAL | $NATIVE, $method(static_cast<void(*)($String*,$String*,$String*,$String*,int64_t,int64_t)>(&MacOSXPreferencesFile::addKeyToNode))},
	{"addNode", "(Ljava/lang/String;)Z", nullptr, 0},
	{"addNode", "(Ljava/lang/String;Ljava/lang/String;JJ)Z", nullptr, $PRIVATE | $STATIC | $FINAL | $NATIVE, $method(static_cast<bool(*)($String*,$String*,int64_t,int64_t)>(&MacOSXPreferencesFile::addNode))},
	{"anyHost", "()J", nullptr, $PRIVATE | $STATIC | $FINAL | $NATIVE, $method(static_cast<int64_t(*)()>(&MacOSXPreferencesFile::anyHost))},
	{"anyUser", "()J", nullptr, $PRIVATE | $STATIC | $FINAL | $NATIVE, $method(static_cast<int64_t(*)()>(&MacOSXPreferencesFile::anyUser))},
	{"currentHost", "()J", nullptr, $PRIVATE | $STATIC | $FINAL | $NATIVE, $method(static_cast<int64_t(*)()>(&MacOSXPreferencesFile::currentHost))},
	{"currentUser", "()J", nullptr, $PRIVATE | $STATIC | $FINAL | $NATIVE, $method(static_cast<int64_t(*)()>(&MacOSXPreferencesFile::currentUser))},
	{"flushDelay", "()J", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<int64_t(*)()>(&MacOSXPreferencesFile::flushDelay))},
	{"flushUser", "()Z", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<bool(*)()>(&MacOSXPreferencesFile::flushUser))},
	{"flushWorld", "()Z", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<bool(*)()>(&MacOSXPreferencesFile::flushWorld))},
	{"getChildrenForNode", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, 0},
	{"getChildrenForNode", "(Ljava/lang/String;Ljava/lang/String;JJ)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL | $NATIVE, $method(static_cast<$StringArray*(*)($String*,$String*,int64_t,int64_t)>(&MacOSXPreferencesFile::getChildrenForNode))},
	{"getFile", "(Ljava/lang/String;Z)Ljava/util/prefs/MacOSXPreferencesFile;", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<MacOSXPreferencesFile*(*)($String*,bool)>(&MacOSXPreferencesFile::getFile))},
	{"getKeyFromNode", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{"getKeyFromNode", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JJ)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL | $NATIVE, $method(static_cast<$String*(*)($String*,$String*,$String*,int64_t,int64_t)>(&MacOSXPreferencesFile::getKeyFromNode))},
	{"getKeysForNode", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, 0},
	{"getKeysForNode", "(Ljava/lang/String;Ljava/lang/String;JJ)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL | $NATIVE, $method(static_cast<$StringArray*(*)($String*,$String*,int64_t,int64_t)>(&MacOSXPreferencesFile::getKeysForNode))},
	{"host", "()J", nullptr, 0},
	{"initSyncTimerIfNeeded", "()V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&MacOSXPreferencesFile::initSyncTimerIfNeeded))},
	{"markChanged", "()V", nullptr, $PRIVATE, $method(static_cast<void(MacOSXPreferencesFile::*)()>(&MacOSXPreferencesFile::markChanged))},
	{"name", "()Ljava/lang/String;", nullptr, 0},
	{"removeChildFromNode", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0},
	{"removeChildFromNode", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JJ)V", nullptr, $PRIVATE | $STATIC | $FINAL | $NATIVE, $method(static_cast<void(*)($String*,$String*,$String*,int64_t,int64_t)>(&MacOSXPreferencesFile::removeChildFromNode))},
	{"removeKeyFromNode", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0},
	{"removeKeyFromNode", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;JJ)V", nullptr, $PRIVATE | $STATIC | $FINAL | $NATIVE, $method(static_cast<void(*)($String*,$String*,$String*,int64_t,int64_t)>(&MacOSXPreferencesFile::removeKeyFromNode))},
	{"removeNode", "(Ljava/lang/String;)V", nullptr, 0},
	{"removeNode", "(Ljava/lang/String;Ljava/lang/String;JJ)V", nullptr, $PRIVATE | $STATIC | $FINAL | $NATIVE, $method(static_cast<void(*)($String*,$String*,int64_t,int64_t)>(&MacOSXPreferencesFile::removeNode))},
	{"syncUser", "()Z", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<bool(*)()>(&MacOSXPreferencesFile::syncUser))},
	{"syncWorld", "()Z", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<bool(*)()>(&MacOSXPreferencesFile::syncWorld))},
	{"synchronize", "()Z", nullptr, 0},
	{"synchronize", "(Ljava/lang/String;JJ)Z", nullptr, $PRIVATE | $STATIC | $FINAL | $NATIVE, $method(static_cast<bool(*)($String*,int64_t,int64_t)>(&MacOSXPreferencesFile::synchronize))},
	{"timer", "()Ljava/util/Timer;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<$Timer*(*)()>(&MacOSXPreferencesFile::timer))},
	{"user", "()J", nullptr, 0},
	{}
};

#define _METHOD_INDEX_addChildToNode 2
#define _METHOD_INDEX_addKeyToNode 4
#define _METHOD_INDEX_addNode 6
#define _METHOD_INDEX_anyHost 7
#define _METHOD_INDEX_anyUser 8
#define _METHOD_INDEX_currentHost 9
#define _METHOD_INDEX_currentUser 10
#define _METHOD_INDEX_getChildrenForNode 15
#define _METHOD_INDEX_getKeyFromNode 18
#define _METHOD_INDEX_getKeysForNode 20
#define _METHOD_INDEX_removeChildFromNode 26
#define _METHOD_INDEX_removeKeyFromNode 28
#define _METHOD_INDEX_removeNode 30
#define _METHOD_INDEX_synchronize 34

$InnerClassInfo _MacOSXPreferencesFile_InnerClassesInfo_[] = {
	{"java.util.prefs.MacOSXPreferencesFile$SyncTask", "java.util.prefs.MacOSXPreferencesFile", "SyncTask", $PRIVATE},
	{"java.util.prefs.MacOSXPreferencesFile$FlushTask", "java.util.prefs.MacOSXPreferencesFile", "FlushTask", $PRIVATE},
	{"java.util.prefs.MacOSXPreferencesFile$3", nullptr, nullptr, 0},
	{"java.util.prefs.MacOSXPreferencesFile$2", nullptr, nullptr, 0},
	{"java.util.prefs.MacOSXPreferencesFile$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MacOSXPreferencesFile_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.MacOSXPreferencesFile",
	"java.lang.Object",
	nullptr,
	_MacOSXPreferencesFile_FieldInfo_,
	_MacOSXPreferencesFile_MethodInfo_,
	nullptr,
	nullptr,
	_MacOSXPreferencesFile_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.prefs.MacOSXPreferencesFile$SyncTask,java.util.prefs.MacOSXPreferencesFile$FlushTask,java.util.prefs.MacOSXPreferencesFile$3,java.util.prefs.MacOSXPreferencesFile$2,java.util.prefs.MacOSXPreferencesFile$1"
};

$Object* allocate$MacOSXPreferencesFile($Class* clazz) {
	return $of($alloc(MacOSXPreferencesFile));
}

$HashMap* MacOSXPreferencesFile::cachedFiles = nullptr;
$HashSet* MacOSXPreferencesFile::changedFiles = nullptr;
$Timer* MacOSXPreferencesFile::timer$ = nullptr;
$MacOSXPreferencesFile$FlushTask* MacOSXPreferencesFile::flushTimerTask = nullptr;
int64_t MacOSXPreferencesFile::flushDelay$ = 0;
int64_t MacOSXPreferencesFile::syncInterval = 0;
int64_t MacOSXPreferencesFile::cfCurrentUser = 0;
int64_t MacOSXPreferencesFile::cfAnyUser = 0;
int64_t MacOSXPreferencesFile::cfCurrentHost = 0;
int64_t MacOSXPreferencesFile::cfAnyHost = 0;

$String* MacOSXPreferencesFile::name() {
	return this->appName;
}

int64_t MacOSXPreferencesFile::user() {
	return this->user$;
}

int64_t MacOSXPreferencesFile::host() {
	return this->host$;
}

void MacOSXPreferencesFile::init$($String* newName, int64_t newUser, int64_t newHost) {
	$set(this, appName, newName);
	this->user$ = newUser;
	this->host$ = newHost;
}

MacOSXPreferencesFile* MacOSXPreferencesFile::getFile($String* newName, bool isUser) {
	$load(MacOSXPreferencesFile);
	$synchronized(class$) {
		$init(MacOSXPreferencesFile);
		$useLocalCurrentObjectStackCache();
		$var(MacOSXPreferencesFile, result, nullptr);
		if (MacOSXPreferencesFile::cachedFiles == nullptr) {
			$assignStatic(MacOSXPreferencesFile::cachedFiles, $new($HashMap));
		}
		$var($String, hashkey, $str({newName, $($String::valueOf(isUser))}));
		$var($WeakReference, hashvalue, $cast($WeakReference, $nc(MacOSXPreferencesFile::cachedFiles)->get(hashkey)));
		if (hashvalue != nullptr) {
			$assign(result, $cast(MacOSXPreferencesFile, hashvalue->get()));
		}
		if (result == nullptr) {
			$assign(result, $new(MacOSXPreferencesFile, newName, isUser ? MacOSXPreferencesFile::cfCurrentUser : MacOSXPreferencesFile::cfAnyUser, isUser ? MacOSXPreferencesFile::cfAnyHost : MacOSXPreferencesFile::cfCurrentHost));
			$nc(MacOSXPreferencesFile::cachedFiles)->put(hashkey, $$new($WeakReference, result));
		}
		initSyncTimerIfNeeded();
		return result;
	}
}

bool MacOSXPreferencesFile::syncWorld() {
	$load(MacOSXPreferencesFile);
	$synchronized(class$) {
		$init(MacOSXPreferencesFile);
		$useLocalCurrentObjectStackCache();
		bool ok = true;
		if (MacOSXPreferencesFile::cachedFiles != nullptr && !$nc(MacOSXPreferencesFile::cachedFiles)->isEmpty()) {
			$var($Iterator, iter, $nc($($nc(MacOSXPreferencesFile::cachedFiles)->values()))->iterator());
			while ($nc(iter)->hasNext()) {
				$var($WeakReference, ref, $cast($WeakReference, iter->next()));
				$var(MacOSXPreferencesFile, f, $cast(MacOSXPreferencesFile, $nc(ref)->get()));
				if (f != nullptr) {
					if (!f->synchronize()) {
						ok = false;
					}
				} else {
					iter->remove();
				}
			}
		}
		if (MacOSXPreferencesFile::flushTimerTask != nullptr) {
			$nc(MacOSXPreferencesFile::flushTimerTask)->cancel();
			$assignStatic(MacOSXPreferencesFile::flushTimerTask, nullptr);
		}
		if (MacOSXPreferencesFile::changedFiles != nullptr) {
			$nc(MacOSXPreferencesFile::changedFiles)->clear();
		}
		return ok;
	}
}

bool MacOSXPreferencesFile::syncUser() {
	$load(MacOSXPreferencesFile);
	$synchronized(class$) {
		$init(MacOSXPreferencesFile);
		$useLocalCurrentObjectStackCache();
		bool ok = true;
		if (MacOSXPreferencesFile::cachedFiles != nullptr && !$nc(MacOSXPreferencesFile::cachedFiles)->isEmpty()) {
			$var($Iterator, iter, $nc($($nc(MacOSXPreferencesFile::cachedFiles)->values()))->iterator());
			while ($nc(iter)->hasNext()) {
				$var($WeakReference, ref, $cast($WeakReference, iter->next()));
				$var(MacOSXPreferencesFile, f, $cast(MacOSXPreferencesFile, $nc(ref)->get()));
				if (f != nullptr && f->user$ == MacOSXPreferencesFile::cfCurrentUser) {
					if (!f->synchronize()) {
						ok = false;
					}
				} else {
					iter->remove();
				}
			}
		}
		if (MacOSXPreferencesFile::changedFiles != nullptr) {
			$var($Iterator, iterChanged, $nc(MacOSXPreferencesFile::changedFiles)->iterator());
			while ($nc(iterChanged)->hasNext()) {
				$var(MacOSXPreferencesFile, f, $cast(MacOSXPreferencesFile, iterChanged->next()));
				if (f != nullptr && f->user$ == MacOSXPreferencesFile::cfCurrentUser) {
					iterChanged->remove();
				}
			}
		}
		return ok;
	}
}

bool MacOSXPreferencesFile::flushUser() {
	$load(MacOSXPreferencesFile);
	$synchronized(class$) {
		$init(MacOSXPreferencesFile);
		$useLocalCurrentObjectStackCache();
		bool ok = true;
		if (MacOSXPreferencesFile::changedFiles != nullptr && !$nc(MacOSXPreferencesFile::changedFiles)->isEmpty()) {
			$var($Iterator, iterator, $nc(MacOSXPreferencesFile::changedFiles)->iterator());
			while ($nc(iterator)->hasNext()) {
				$var(MacOSXPreferencesFile, f, $cast(MacOSXPreferencesFile, iterator->next()));
				if ($nc(f)->user$ == MacOSXPreferencesFile::cfCurrentUser) {
					if (!f->synchronize()) {
						ok = false;
					} else {
						iterator->remove();
					}
				}
			}
		}
		return ok;
	}
}

bool MacOSXPreferencesFile::flushWorld() {
	$load(MacOSXPreferencesFile);
	$synchronized(class$) {
		$init(MacOSXPreferencesFile);
		$useLocalCurrentObjectStackCache();
		bool ok = true;
		if (MacOSXPreferencesFile::changedFiles != nullptr && !$nc(MacOSXPreferencesFile::changedFiles)->isEmpty()) {
			{
				$var($Iterator, i$, $nc(MacOSXPreferencesFile::changedFiles)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var(MacOSXPreferencesFile, f, $cast(MacOSXPreferencesFile, i$->next()));
					{
						if (!$nc(f)->synchronize()) {
							ok = false;
						}
					}
				}
			}
			$nc(MacOSXPreferencesFile::changedFiles)->clear();
		}
		if (MacOSXPreferencesFile::flushTimerTask != nullptr) {
			$nc(MacOSXPreferencesFile::flushTimerTask)->cancel();
			$assignStatic(MacOSXPreferencesFile::flushTimerTask, nullptr);
		}
		return ok;
	}
}

void MacOSXPreferencesFile::markChanged() {
	if (MacOSXPreferencesFile::changedFiles == nullptr) {
		$assignStatic(MacOSXPreferencesFile::changedFiles, $new($HashSet));
	}
	$nc(MacOSXPreferencesFile::changedFiles)->add(this);
	if (MacOSXPreferencesFile::flushTimerTask == nullptr) {
		$assignStatic(MacOSXPreferencesFile::flushTimerTask, $new($MacOSXPreferencesFile$FlushTask, this));
		$nc($(timer()))->schedule(static_cast<$TimerTask*>(MacOSXPreferencesFile::flushTimerTask), flushDelay() * 1000);
	}
}

int64_t MacOSXPreferencesFile::flushDelay() {
	$load(MacOSXPreferencesFile);
	$synchronized(class$) {
		$init(MacOSXPreferencesFile);
		if (MacOSXPreferencesFile::flushDelay$ == -1) {
			try {
				MacOSXPreferencesFile::flushDelay$ = $Math::max(5, $Integer::parseInt($($System::getProperty("java.util.prefs.flushDelay"_s, "60"_s))));
			} catch ($NumberFormatException& e) {
				MacOSXPreferencesFile::flushDelay$ = 60;
			}
		}
		return MacOSXPreferencesFile::flushDelay$;
	}
}

void MacOSXPreferencesFile::initSyncTimerIfNeeded() {
	$load(MacOSXPreferencesFile);
	$synchronized(class$) {
		$init(MacOSXPreferencesFile);
		$useLocalCurrentObjectStackCache();
		if (MacOSXPreferencesFile::syncInterval == -1) {
			try {
				MacOSXPreferencesFile::syncInterval = $Integer::parseInt($($System::getProperty("java.util.prefs.syncInterval"_s, "-2"_s)));
				if (MacOSXPreferencesFile::syncInterval >= 0) {
					MacOSXPreferencesFile::syncInterval = $Math::max((int64_t)5, MacOSXPreferencesFile::syncInterval);
				} else {
					MacOSXPreferencesFile::syncInterval = -2;
				}
			} catch ($NumberFormatException& e) {
				MacOSXPreferencesFile::syncInterval = -2;
			}
			if (MacOSXPreferencesFile::syncInterval > 0) {
				$nc($(timer()))->schedule(static_cast<$TimerTask*>($$new($MacOSXPreferencesFile$2)), MacOSXPreferencesFile::syncInterval * 1000, MacOSXPreferencesFile::syncInterval * 1000);
			} else {
			}
		}
	}
}

$Timer* MacOSXPreferencesFile::timer() {
	$load(MacOSXPreferencesFile);
	$synchronized(class$) {
		$init(MacOSXPreferencesFile);
		$useLocalCurrentObjectStackCache();
		if (MacOSXPreferencesFile::timer$ == nullptr) {
			$assignStatic(MacOSXPreferencesFile::timer$, $new($Timer, true));
			$var($Thread, flushThread, $new($MacOSXPreferencesFile$3, nullptr, nullptr, "Flush Thread"_s, 0, false));
			flushThread->setContextClassLoader(nullptr);
			$nc($($Runtime::getRuntime()))->addShutdownHook(flushThread);
		}
		return MacOSXPreferencesFile::timer$;
	}
}

bool MacOSXPreferencesFile::addNode($String* path) {
	$synchronized(MacOSXPreferencesFile::class$) {
		markChanged();
		return addNode(path, this->appName, this->user$, this->host$);
	}
}

void MacOSXPreferencesFile::removeNode($String* path) {
	$synchronized(MacOSXPreferencesFile::class$) {
		markChanged();
		removeNode(path, this->appName, this->user$, this->host$);
	}
}

bool MacOSXPreferencesFile::addChildToNode($String* path, $String* child) {
	$synchronized(MacOSXPreferencesFile::class$) {
		markChanged();
		return addChildToNode(path, $$str({child, "/"_s}), this->appName, this->user$, this->host$);
	}
}

void MacOSXPreferencesFile::removeChildFromNode($String* path, $String* child) {
	$synchronized(MacOSXPreferencesFile::class$) {
		markChanged();
		removeChildFromNode(path, $$str({child, "/"_s}), this->appName, this->user$, this->host$);
	}
}

void MacOSXPreferencesFile::addKeyToNode($String* path, $String* key, $String* value) {
	$synchronized(MacOSXPreferencesFile::class$) {
		markChanged();
		addKeyToNode(path, key, value, this->appName, this->user$, this->host$);
	}
}

void MacOSXPreferencesFile::removeKeyFromNode($String* path, $String* key) {
	$synchronized(MacOSXPreferencesFile::class$) {
		markChanged();
		removeKeyFromNode(path, key, this->appName, this->user$, this->host$);
	}
}

$String* MacOSXPreferencesFile::getKeyFromNode($String* path, $String* key) {
	$synchronized(MacOSXPreferencesFile::class$) {
		return getKeyFromNode(path, key, this->appName, this->user$, this->host$);
	}
}

$StringArray* MacOSXPreferencesFile::getChildrenForNode($String* path) {
	$synchronized(MacOSXPreferencesFile::class$) {
		return getChildrenForNode(path, this->appName, this->user$, this->host$);
	}
}

$StringArray* MacOSXPreferencesFile::getKeysForNode($String* path) {
	$synchronized(MacOSXPreferencesFile::class$) {
		return getKeysForNode(path, this->appName, this->user$, this->host$);
	}
}

bool MacOSXPreferencesFile::synchronize() {
	$synchronized(MacOSXPreferencesFile::class$) {
		return synchronize(this->appName, this->user$, this->host$);
	}
}

bool MacOSXPreferencesFile::addNode($String* path, $String* name, int64_t user, int64_t host) {
	$init(MacOSXPreferencesFile);
	bool $ret = false;
	$prepareNativeStatic(MacOSXPreferencesFile, addNode, bool, $String* path, $String* name, int64_t user, int64_t host);
	$ret = $invokeNativeStatic(MacOSXPreferencesFile, addNode, path, name, user, host);
	$finishNativeStatic();
	return $ret;
}

void MacOSXPreferencesFile::removeNode($String* path, $String* name, int64_t user, int64_t host) {
	$init(MacOSXPreferencesFile);
	$prepareNativeStatic(MacOSXPreferencesFile, removeNode, void, $String* path, $String* name, int64_t user, int64_t host);
	$invokeNativeStatic(MacOSXPreferencesFile, removeNode, path, name, user, host);
	$finishNativeStatic();
}

bool MacOSXPreferencesFile::addChildToNode($String* path, $String* child, $String* name, int64_t user, int64_t host) {
	$init(MacOSXPreferencesFile);
	bool $ret = false;
	$prepareNativeStatic(MacOSXPreferencesFile, addChildToNode, bool, $String* path, $String* child, $String* name, int64_t user, int64_t host);
	$ret = $invokeNativeStatic(MacOSXPreferencesFile, addChildToNode, path, child, name, user, host);
	$finishNativeStatic();
	return $ret;
}

void MacOSXPreferencesFile::removeChildFromNode($String* path, $String* child, $String* name, int64_t user, int64_t host) {
	$init(MacOSXPreferencesFile);
	$prepareNativeStatic(MacOSXPreferencesFile, removeChildFromNode, void, $String* path, $String* child, $String* name, int64_t user, int64_t host);
	$invokeNativeStatic(MacOSXPreferencesFile, removeChildFromNode, path, child, name, user, host);
	$finishNativeStatic();
}

void MacOSXPreferencesFile::addKeyToNode($String* path, $String* key, $String* value, $String* name, int64_t user, int64_t host) {
	$init(MacOSXPreferencesFile);
	$prepareNativeStatic(MacOSXPreferencesFile, addKeyToNode, void, $String* path, $String* key, $String* value, $String* name, int64_t user, int64_t host);
	$invokeNativeStatic(MacOSXPreferencesFile, addKeyToNode, path, key, value, name, user, host);
	$finishNativeStatic();
}

void MacOSXPreferencesFile::removeKeyFromNode($String* path, $String* key, $String* name, int64_t user, int64_t host) {
	$init(MacOSXPreferencesFile);
	$prepareNativeStatic(MacOSXPreferencesFile, removeKeyFromNode, void, $String* path, $String* key, $String* name, int64_t user, int64_t host);
	$invokeNativeStatic(MacOSXPreferencesFile, removeKeyFromNode, path, key, name, user, host);
	$finishNativeStatic();
}

$String* MacOSXPreferencesFile::getKeyFromNode($String* path, $String* key, $String* name, int64_t user, int64_t host) {
	$init(MacOSXPreferencesFile);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(MacOSXPreferencesFile, getKeyFromNode, $String*, $String* path, $String* key, $String* name, int64_t user, int64_t host);
	$assign($ret, $invokeNativeStatic(MacOSXPreferencesFile, getKeyFromNode, path, key, name, user, host));
	$finishNativeStatic();
	return $ret;
}

$StringArray* MacOSXPreferencesFile::getChildrenForNode($String* path, $String* name, int64_t user, int64_t host) {
	$init(MacOSXPreferencesFile);
	$var($StringArray, $ret, nullptr);
	$prepareNativeStatic(MacOSXPreferencesFile, getChildrenForNode, $StringArray*, $String* path, $String* name, int64_t user, int64_t host);
	$assign($ret, $invokeNativeStatic(MacOSXPreferencesFile, getChildrenForNode, path, name, user, host));
	$finishNativeStatic();
	return $ret;
}

$StringArray* MacOSXPreferencesFile::getKeysForNode($String* path, $String* name, int64_t user, int64_t host) {
	$init(MacOSXPreferencesFile);
	$var($StringArray, $ret, nullptr);
	$prepareNativeStatic(MacOSXPreferencesFile, getKeysForNode, $StringArray*, $String* path, $String* name, int64_t user, int64_t host);
	$assign($ret, $invokeNativeStatic(MacOSXPreferencesFile, getKeysForNode, path, name, user, host));
	$finishNativeStatic();
	return $ret;
}

bool MacOSXPreferencesFile::synchronize($String* name, int64_t user, int64_t host) {
	$init(MacOSXPreferencesFile);
	bool $ret = false;
	$prepareNativeStatic(MacOSXPreferencesFile, synchronize, bool, $String* name, int64_t user, int64_t host);
	$ret = $invokeNativeStatic(MacOSXPreferencesFile, synchronize, name, user, host);
	$finishNativeStatic();
	return $ret;
}

int64_t MacOSXPreferencesFile::currentUser() {
	$init(MacOSXPreferencesFile);
	int64_t $ret = 0;
	$prepareNativeStatic(MacOSXPreferencesFile, currentUser, int64_t);
	$ret = $invokeNativeStatic(MacOSXPreferencesFile, currentUser);
	$finishNativeStatic();
	return $ret;
}

int64_t MacOSXPreferencesFile::anyUser() {
	$init(MacOSXPreferencesFile);
	int64_t $ret = 0;
	$prepareNativeStatic(MacOSXPreferencesFile, anyUser, int64_t);
	$ret = $invokeNativeStatic(MacOSXPreferencesFile, anyUser);
	$finishNativeStatic();
	return $ret;
}

int64_t MacOSXPreferencesFile::currentHost() {
	$init(MacOSXPreferencesFile);
	int64_t $ret = 0;
	$prepareNativeStatic(MacOSXPreferencesFile, currentHost, int64_t);
	$ret = $invokeNativeStatic(MacOSXPreferencesFile, currentHost);
	$finishNativeStatic();
	return $ret;
}

int64_t MacOSXPreferencesFile::anyHost() {
	$init(MacOSXPreferencesFile);
	int64_t $ret = 0;
	$prepareNativeStatic(MacOSXPreferencesFile, anyHost, int64_t);
	$ret = $invokeNativeStatic(MacOSXPreferencesFile, anyHost);
	$finishNativeStatic();
	return $ret;
}

void clinit$MacOSXPreferencesFile($Class* class$) {
	$beforeCallerSensitive();
	{
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($MacOSXPreferencesFile$1)));
	}
	$assignStatic(MacOSXPreferencesFile::timer$, nullptr);
	$assignStatic(MacOSXPreferencesFile::flushTimerTask, nullptr);
	MacOSXPreferencesFile::flushDelay$ = -1;
	MacOSXPreferencesFile::syncInterval = -1;
	MacOSXPreferencesFile::cfCurrentUser = MacOSXPreferencesFile::currentUser();
	MacOSXPreferencesFile::cfAnyUser = MacOSXPreferencesFile::anyUser();
	MacOSXPreferencesFile::cfCurrentHost = MacOSXPreferencesFile::currentHost();
	MacOSXPreferencesFile::cfAnyHost = MacOSXPreferencesFile::anyHost();
}

MacOSXPreferencesFile::MacOSXPreferencesFile() {
}

$Class* MacOSXPreferencesFile::load$($String* name, bool initialize) {
	$loadClass(MacOSXPreferencesFile, name, initialize, &_MacOSXPreferencesFile_ClassInfo_, clinit$MacOSXPreferencesFile, allocate$MacOSXPreferencesFile);
	return class$;
}

$Class* MacOSXPreferencesFile::class$ = nullptr;

		} // prefs
	} // util
} // java