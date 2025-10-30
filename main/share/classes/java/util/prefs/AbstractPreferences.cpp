#include <java/util/prefs/AbstractPreferences.h>

#include <java/io/OutputStream.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <java/util/TreeSet.h>
#include <java/util/prefs/AbstractPreferences$1.h>
#include <java/util/prefs/AbstractPreferences$EventDispatchThread.h>
#include <java/util/prefs/AbstractPreferences$NodeAddedEvent.h>
#include <java/util/prefs/AbstractPreferences$NodeRemovedEvent.h>
#include <java/util/prefs/BackingStoreException.h>
#include <java/util/prefs/Base64.h>
#include <java/util/prefs/NodeChangeListener.h>
#include <java/util/prefs/PreferenceChangeEvent.h>
#include <java/util/prefs/PreferenceChangeListener.h>
#include <java/util/prefs/Preferences.h>
#include <java/util/prefs/XmlSupport.h>
#include <jcpp.h>

#undef EMPTY_ABSTRACT_PREFS_ARRAY
#undef EMPTY_STRING_ARRAY
#undef MAX_KEY_LENGTH
#undef MAX_NAME_LENGTH
#undef MAX_VALUE_LENGTH

using $AbstractPreferencesArray = $Array<::java::util::prefs::AbstractPreferences>;
using $NodeChangeListenerArray = $Array<::java::util::prefs::NodeChangeListener>;
using $PreferenceChangeListenerArray = $Array<::java::util::prefs::PreferenceChangeListener>;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;
using $TreeSet = ::java::util::TreeSet;
using $AbstractPreferences$1 = ::java::util::prefs::AbstractPreferences$1;
using $AbstractPreferences$EventDispatchThread = ::java::util::prefs::AbstractPreferences$EventDispatchThread;
using $AbstractPreferences$NodeAddedEvent = ::java::util::prefs::AbstractPreferences$NodeAddedEvent;
using $AbstractPreferences$NodeRemovedEvent = ::java::util::prefs::AbstractPreferences$NodeRemovedEvent;
using $BackingStoreException = ::java::util::prefs::BackingStoreException;
using $Base64 = ::java::util::prefs::Base64;
using $NodeChangeListener = ::java::util::prefs::NodeChangeListener;
using $PreferenceChangeEvent = ::java::util::prefs::PreferenceChangeEvent;
using $PreferenceChangeListener = ::java::util::prefs::PreferenceChangeListener;
using $Preferences = ::java::util::prefs::Preferences;
using $XmlSupport = ::java::util::prefs::XmlSupport;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _AbstractPreferences_FieldInfo_[] = {
	{"CODE_POINT_U0000", "I", nullptr, $STATIC | $FINAL, $constField(AbstractPreferences, CODE_POINT_U0000)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(AbstractPreferences, name$)},
	{"absolutePath", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(AbstractPreferences, absolutePath$)},
	{"parent", "Ljava/util/prefs/AbstractPreferences;", nullptr, $FINAL, $field(AbstractPreferences, parent$)},
	{"root", "Ljava/util/prefs/AbstractPreferences;", nullptr, $PRIVATE | $FINAL, $field(AbstractPreferences, root)},
	{"newNode", "Z", nullptr, $PROTECTED, $field(AbstractPreferences, newNode)},
	{"kidCache", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/prefs/AbstractPreferences;>;", $PRIVATE, $field(AbstractPreferences, kidCache)},
	{"removed", "Z", nullptr, $PRIVATE, $field(AbstractPreferences, removed)},
	{"prefListeners", "[Ljava/util/prefs/PreferenceChangeListener;", nullptr, $PRIVATE, $field(AbstractPreferences, prefListeners$)},
	{"nodeListeners", "[Ljava/util/prefs/NodeChangeListener;", nullptr, $PRIVATE, $field(AbstractPreferences, nodeListeners$)},
	{"lock", "Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $field(AbstractPreferences, lock)},
	{"EMPTY_STRING_ARRAY", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractPreferences, EMPTY_STRING_ARRAY)},
	{"EMPTY_ABSTRACT_PREFS_ARRAY", "[Ljava/util/prefs/AbstractPreferences;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractPreferences, EMPTY_ABSTRACT_PREFS_ARRAY)},
	{"eventQueue", "Ljava/util/List;", "Ljava/util/List<Ljava/util/EventObject;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AbstractPreferences, eventQueue)},
	{"eventDispatchThread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC, $staticField(AbstractPreferences, eventDispatchThread)},
	{}
};

$MethodInfo _AbstractPreferences_MethodInfo_[] = {
	{"<init>", "(Ljava/util/prefs/AbstractPreferences;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(AbstractPreferences::*)(AbstractPreferences*,$String*)>(&AbstractPreferences::init$))},
	{"absolutePath", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"addNodeChangeListener", "(Ljava/util/prefs/NodeChangeListener;)V", nullptr, $PUBLIC},
	{"addPreferenceChangeListener", "(Ljava/util/prefs/PreferenceChangeListener;)V", nullptr, $PUBLIC},
	{"cachedChildren", "()[Ljava/util/prefs/AbstractPreferences;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$AbstractPreferencesArray*(AbstractPreferences::*)()>(&AbstractPreferences::cachedChildren))},
	{"childSpi", "(Ljava/lang/String;)Ljava/util/prefs/AbstractPreferences;", nullptr, $PROTECTED | $ABSTRACT},
	{"childrenNames", "()[Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.util.prefs.BackingStoreException"},
	{"childrenNamesSpi", "()[Ljava/lang/String;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.util.prefs.BackingStoreException"},
	{"clear", "()V", nullptr, $PUBLIC, nullptr, "java.util.prefs.BackingStoreException"},
	{"enqueueNodeAddedEvent", "(Ljava/util/prefs/Preferences;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractPreferences::*)($Preferences*)>(&AbstractPreferences::enqueueNodeAddedEvent))},
	{"enqueueNodeRemovedEvent", "(Ljava/util/prefs/Preferences;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractPreferences::*)($Preferences*)>(&AbstractPreferences::enqueueNodeRemovedEvent))},
	{"enqueuePreferenceChangeEvent", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractPreferences::*)($String*,$String*)>(&AbstractPreferences::enqueuePreferenceChangeEvent))},
	{"exportNode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,java.util.prefs.BackingStoreException"},
	{"exportSubtree", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,java.util.prefs.BackingStoreException"},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.util.prefs.BackingStoreException"},
	{"flush2", "()V", nullptr, $PRIVATE, $method(static_cast<void(AbstractPreferences::*)()>(&AbstractPreferences::flush2)), "java.util.prefs.BackingStoreException"},
	{"flushSpi", "()V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.util.prefs.BackingStoreException"},
	{"get", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getBoolean", "(Ljava/lang/String;Z)Z", nullptr, $PUBLIC},
	{"getByteArray", "(Ljava/lang/String;[B)[B", nullptr, $PUBLIC},
	{"getChild", "(Ljava/lang/String;)Ljava/util/prefs/AbstractPreferences;", nullptr, $PROTECTED, nullptr, "java.util.prefs.BackingStoreException"},
	{"getDouble", "(Ljava/lang/String;D)D", nullptr, $PUBLIC},
	{"getFloat", "(Ljava/lang/String;F)F", nullptr, $PUBLIC},
	{"getInt", "(Ljava/lang/String;I)I", nullptr, $PUBLIC},
	{"getLong", "(Ljava/lang/String;J)J", nullptr, $PUBLIC},
	{"getSpi", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $ABSTRACT},
	{"isRemoved", "()Z", nullptr, $PROTECTED},
	{"isUserNode", "()Z", nullptr, $PUBLIC},
	{"keys", "()[Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.util.prefs.BackingStoreException"},
	{"keysSpi", "()[Ljava/lang/String;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.util.prefs.BackingStoreException"},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"node", "(Ljava/lang/String;)Ljava/util/prefs/Preferences;", nullptr, $PUBLIC},
	{"node", "(Ljava/util/StringTokenizer;)Ljava/util/prefs/Preferences;", nullptr, $PRIVATE, $method(static_cast<$Preferences*(AbstractPreferences::*)($StringTokenizer*)>(&AbstractPreferences::node))},
	{"nodeExists", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, nullptr, "java.util.prefs.BackingStoreException"},
	{"nodeExists", "(Ljava/util/StringTokenizer;)Z", nullptr, $PRIVATE, $method(static_cast<bool(AbstractPreferences::*)($StringTokenizer*)>(&AbstractPreferences::nodeExists)), "java.util.prefs.BackingStoreException"},
	{"nodeListeners", "()[Ljava/util/prefs/NodeChangeListener;", nullptr, 0},
	{"parent", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC},
	{"prefListeners", "()[Ljava/util/prefs/PreferenceChangeListener;", nullptr, 0},
	{"put", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"putBoolean", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC},
	{"putByteArray", "(Ljava/lang/String;[B)V", nullptr, $PUBLIC},
	{"putDouble", "(Ljava/lang/String;D)V", nullptr, $PUBLIC},
	{"putFloat", "(Ljava/lang/String;F)V", nullptr, $PUBLIC},
	{"putInt", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"putLong", "(Ljava/lang/String;J)V", nullptr, $PUBLIC},
	{"putSpi", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"remove", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"removeNode", "()V", nullptr, $PUBLIC, nullptr, "java.util.prefs.BackingStoreException"},
	{"removeNode2", "()V", nullptr, $PRIVATE, $method(static_cast<void(AbstractPreferences::*)()>(&AbstractPreferences::removeNode2)), "java.util.prefs.BackingStoreException"},
	{"removeNodeChangeListener", "(Ljava/util/prefs/NodeChangeListener;)V", nullptr, $PUBLIC},
	{"removeNodeSpi", "()V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.util.prefs.BackingStoreException"},
	{"removePreferenceChangeListener", "(Ljava/util/prefs/PreferenceChangeListener;)V", nullptr, $PUBLIC},
	{"removeSpi", "(Ljava/lang/String;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"startEventDispatchThreadIfNecessary", "()V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&AbstractPreferences::startEventDispatchThreadIfNecessary))},
	{"sync", "()V", nullptr, $PUBLIC, nullptr, "java.util.prefs.BackingStoreException"},
	{"sync2", "()V", nullptr, $PRIVATE, $method(static_cast<void(AbstractPreferences::*)()>(&AbstractPreferences::sync2)), "java.util.prefs.BackingStoreException"},
	{"syncSpi", "()V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.util.prefs.BackingStoreException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractPreferences_InnerClassesInfo_[] = {
	{"java.util.prefs.AbstractPreferences$EventDispatchThread", "java.util.prefs.AbstractPreferences", "EventDispatchThread", $PRIVATE | $STATIC},
	{"java.util.prefs.AbstractPreferences$NodeRemovedEvent", "java.util.prefs.AbstractPreferences", "NodeRemovedEvent", $PRIVATE},
	{"java.util.prefs.AbstractPreferences$NodeAddedEvent", "java.util.prefs.AbstractPreferences", "NodeAddedEvent", $PRIVATE},
	{"java.util.prefs.AbstractPreferences$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractPreferences_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.util.prefs.AbstractPreferences",
	"java.util.prefs.Preferences",
	nullptr,
	_AbstractPreferences_FieldInfo_,
	_AbstractPreferences_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractPreferences_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.prefs.AbstractPreferences$EventDispatchThread,java.util.prefs.AbstractPreferences$NodeRemovedEvent,java.util.prefs.AbstractPreferences$NodeAddedEvent,java.util.prefs.AbstractPreferences$1"
};

$Object* allocate$AbstractPreferences($Class* clazz) {
	return $of($alloc(AbstractPreferences));
}

$StringArray* AbstractPreferences::EMPTY_STRING_ARRAY = nullptr;
$AbstractPreferencesArray* AbstractPreferences::EMPTY_ABSTRACT_PREFS_ARRAY = nullptr;
$List* AbstractPreferences::eventQueue = nullptr;
$Thread* AbstractPreferences::eventDispatchThread = nullptr;

void AbstractPreferences::init$(AbstractPreferences* parent, $String* name) {
	$useLocalCurrentObjectStackCache();
	$Preferences::init$();
	this->newNode = false;
	$set(this, kidCache, $new($HashMap));
	this->removed = false;
	$set(this, prefListeners$, $new($PreferenceChangeListenerArray, 0));
	$set(this, nodeListeners$, $new($NodeChangeListenerArray, 0));
	$set(this, lock, $new($Object));
	if (parent == nullptr) {
		if (!$nc(name)->isEmpty()) {
			$throwNew($IllegalArgumentException, $$str({"Root name \'"_s, name, "\' must be \"\""_s}));
		}
		$set(this, absolutePath$, "/"_s);
		$set(this, root, this);
	} else {
		if ($nc(name)->indexOf((int32_t)u'/') != -1) {
			$throwNew($IllegalArgumentException, $$str({"Name \'"_s, name, "\' contains \'/\'"_s}));
		}
		if ($nc(name)->isEmpty()) {
			$throwNew($IllegalArgumentException, "Illegal name: empty string"_s);
		}
		$set(this, root, $nc(parent)->root);
		$set(this, absolutePath$, parent == this->root ? $str({"/"_s, name}) : $str({$(parent->absolutePath()), "/"_s, name}));
	}
	$set(this, name$, name);
	$set(this, parent$, parent);
}

void AbstractPreferences::put($String* key, $String* value) {
	$useLocalCurrentObjectStackCache();
	if (key == nullptr || value == nullptr) {
		$throwNew($NullPointerException);
	}
	if ($nc(key)->length() > $Preferences::MAX_KEY_LENGTH) {
		$throwNew($IllegalArgumentException, $$str({"Key too long: "_s, key}));
	}
	if ($nc(value)->length() > $Preferences::MAX_VALUE_LENGTH) {
		$throwNew($IllegalArgumentException, $$str({"Value too long: "_s, value}));
	}
	if ($nc(key)->indexOf(AbstractPreferences::CODE_POINT_U0000) != -1) {
		$throwNew($IllegalArgumentException, "Key contains code point U+0000"_s);
	}
	if ($nc(value)->indexOf(AbstractPreferences::CODE_POINT_U0000) != -1) {
		$throwNew($IllegalArgumentException, "Value contains code point U+0000"_s);
	}
	$synchronized(this->lock) {
		if (this->removed) {
			$throwNew($IllegalStateException, "Node has been removed."_s);
		}
		putSpi(key, value);
		enqueuePreferenceChangeEvent(key, value);
	}
}

$String* AbstractPreferences::get($String* key, $String* def) {
	if (key == nullptr) {
		$throwNew($NullPointerException, "Null key"_s);
	}
	if ($nc(key)->indexOf(AbstractPreferences::CODE_POINT_U0000) != -1) {
		$throwNew($IllegalArgumentException, "Key contains code point U+0000"_s);
	}
	$synchronized(this->lock) {
		if (this->removed) {
			$throwNew($IllegalStateException, "Node has been removed."_s);
		}
		$var($String, result, nullptr);
		try {
			$assign(result, getSpi(key));
		} catch ($Exception& e) {
		}
		return (result == nullptr ? def : result);
	}
}

void AbstractPreferences::remove($String* key) {
	$Objects::requireNonNull($of(key), "Specified key cannot be null"_s);
	if ($nc(key)->indexOf(AbstractPreferences::CODE_POINT_U0000) != -1) {
		$throwNew($IllegalArgumentException, "Key contains code point U+0000"_s);
	}
	$synchronized(this->lock) {
		if (this->removed) {
			$throwNew($IllegalStateException, "Node has been removed."_s);
		}
		removeSpi(key);
		enqueuePreferenceChangeEvent(key, nullptr);
	}
}

void AbstractPreferences::clear() {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->lock) {
		{
			$var($StringArray, arr$, keys());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, key, arr$->get(i$));
				remove(key);
			}
		}
	}
}

void AbstractPreferences::putInt($String* key, int32_t value) {
	put(key, $($Integer::toString(value)));
}

int32_t AbstractPreferences::getInt($String* key, int32_t def) {
	int32_t result = def;
	try {
		$var($String, value, get(key, nullptr));
		if (value != nullptr) {
			result = $Integer::parseInt(value);
		}
	} catch ($NumberFormatException& e) {
	}
	return result;
}

void AbstractPreferences::putLong($String* key, int64_t value) {
	put(key, $($Long::toString(value)));
}

int64_t AbstractPreferences::getLong($String* key, int64_t def) {
	int64_t result = def;
	try {
		$var($String, value, get(key, nullptr));
		if (value != nullptr) {
			result = $Long::parseLong(value);
		}
	} catch ($NumberFormatException& e) {
	}
	return result;
}

void AbstractPreferences::putBoolean($String* key, bool value) {
	put(key, $($String::valueOf(value)));
}

bool AbstractPreferences::getBoolean($String* key, bool def) {
	bool result = def;
	$var($String, value, get(key, nullptr));
	if (value != nullptr) {
		if (value->equalsIgnoreCase("true"_s)) {
			result = true;
		} else if (value->equalsIgnoreCase("false"_s)) {
			result = false;
		}
	}
	return result;
}

void AbstractPreferences::putFloat($String* key, float value) {
	put(key, $($Float::toString(value)));
}

float AbstractPreferences::getFloat($String* key, float def) {
	float result = def;
	try {
		$var($String, value, get(key, nullptr));
		if (value != nullptr) {
			result = $Float::parseFloat(value);
		}
	} catch ($NumberFormatException& e) {
	}
	return result;
}

void AbstractPreferences::putDouble($String* key, double value) {
	put(key, $($Double::toString(value)));
}

double AbstractPreferences::getDouble($String* key, double def) {
	double result = def;
	try {
		$var($String, value, get(key, nullptr));
		if (value != nullptr) {
			result = $Double::parseDouble(value);
		}
	} catch ($NumberFormatException& e) {
	}
	return result;
}

void AbstractPreferences::putByteArray($String* key, $bytes* value) {
	put(key, $($Base64::byteArrayToBase64(value)));
}

$bytes* AbstractPreferences::getByteArray($String* key, $bytes* def) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, result, def);
	$var($String, value, get(key, nullptr));
	try {
		if (value != nullptr) {
			$assign(result, $Base64::base64ToByteArray(value));
		}
	} catch ($RuntimeException& e) {
	}
	return result;
}

$StringArray* AbstractPreferences::keys() {
	$synchronized(this->lock) {
		if (this->removed) {
			$throwNew($IllegalStateException, "Node has been removed."_s);
		}
		return keysSpi();
	}
}

$StringArray* AbstractPreferences::childrenNames() {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->lock) {
		if (this->removed) {
			$throwNew($IllegalStateException, "Node has been removed."_s);
		}
		$var($Set, s, static_cast<$Set*>(static_cast<$AbstractSet*>($new($TreeSet, $(static_cast<$Collection*>($nc(this->kidCache)->keySet()))))));
		{
			$var($StringArray, arr$, childrenNamesSpi());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, kid, arr$->get(i$));
				s->add(kid);
			}
		}
		return $fcast($StringArray, s->toArray(AbstractPreferences::EMPTY_STRING_ARRAY));
	}
}

$AbstractPreferencesArray* AbstractPreferences::cachedChildren() {
	return $fcast($AbstractPreferencesArray, $nc($($nc(this->kidCache)->values()))->toArray(AbstractPreferences::EMPTY_ABSTRACT_PREFS_ARRAY));
}

$Preferences* AbstractPreferences::parent() {
	$synchronized(this->lock) {
		if (this->removed) {
			$throwNew($IllegalStateException, "Node has been removed."_s);
		}
		return this->parent$;
	}
}

$Preferences* AbstractPreferences::node($String* path) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->lock) {
		if (this->removed) {
			$throwNew($IllegalStateException, "Node has been removed."_s);
		}
		if ($nc(path)->isEmpty()) {
			return this;
		}
		if ($nc(path)->equals("/"_s)) {
			return this->root;
		}
		if ($nc(path)->charAt(0) != u'/') {
			return node($$new($StringTokenizer, path, "/"_s, true));
		}
	}
	return $nc(this->root)->node($$new($StringTokenizer, $($nc(path)->substring(1)), "/"_s, true));
}

$Preferences* AbstractPreferences::node($StringTokenizer* path) {
	$useLocalCurrentObjectStackCache();
	$var($String, token, $nc(path)->nextToken());
	if ($nc(token)->equals("/"_s)) {
		$throwNew($IllegalArgumentException, "Consecutive slashes in path"_s);
	}
	$synchronized(this->lock) {
		$var(AbstractPreferences, child, $cast(AbstractPreferences, $nc(this->kidCache)->get(token)));
		if (child == nullptr) {
			if ($nc(token)->length() > $Preferences::MAX_NAME_LENGTH) {
				$throwNew($IllegalArgumentException, $$str({"Node name "_s, token, " too long"_s}));
			}
			$assign(child, childSpi(token));
			if ($nc(child)->newNode) {
				enqueueNodeAddedEvent(child);
			}
			$nc(this->kidCache)->put(token, child);
		}
		if (!path->hasMoreTokens()) {
			return child;
		}
		path->nextToken();
		if (!path->hasMoreTokens()) {
			$throwNew($IllegalArgumentException, "Path ends with slash"_s);
		}
		return $nc(child)->node(path);
	}
}

bool AbstractPreferences::nodeExists($String* path) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->lock) {
		if ($nc(path)->isEmpty()) {
			return !this->removed;
		}
		if (this->removed) {
			$throwNew($IllegalStateException, "Node has been removed."_s);
		}
		if ($nc(path)->equals("/"_s)) {
			return true;
		}
		if ($nc(path)->charAt(0) != u'/') {
			return nodeExists($$new($StringTokenizer, path, "/"_s, true));
		}
	}
	return $nc(this->root)->nodeExists($$new($StringTokenizer, $($nc(path)->substring(1)), "/"_s, true));
}

bool AbstractPreferences::nodeExists($StringTokenizer* path) {
	$useLocalCurrentObjectStackCache();
	$var($String, token, $nc(path)->nextToken());
	if ($nc(token)->equals("/"_s)) {
		$throwNew($IllegalArgumentException, "Consecutive slashes in path"_s);
	}
	$synchronized(this->lock) {
		$var(AbstractPreferences, child, $cast(AbstractPreferences, $nc(this->kidCache)->get(token)));
		if (child == nullptr) {
			$assign(child, getChild(token));
		}
		if (child == nullptr) {
			return false;
		}
		if (!path->hasMoreTokens()) {
			return true;
		}
		path->nextToken();
		if (!path->hasMoreTokens()) {
			$throwNew($IllegalArgumentException, "Path ends with slash"_s);
		}
		return $nc(child)->nodeExists(path);
	}
}

void AbstractPreferences::removeNode() {
	if (this == this->root) {
		$throwNew($UnsupportedOperationException, "Can\'t remove the root!"_s);
	}
	$synchronized($nc(this->parent$)->lock) {
		removeNode2();
		$nc($nc(this->parent$)->kidCache)->remove(this->name$);
	}
}

void AbstractPreferences::removeNode2() {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->lock) {
		if (this->removed) {
			$throwNew($IllegalStateException, "Node already removed."_s);
		}
		$var($StringArray, kidNames, childrenNamesSpi());
		{
			$var($StringArray, arr$, kidNames);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, kidName, arr$->get(i$));
				if (!$nc(this->kidCache)->containsKey(kidName)) {
					$nc(this->kidCache)->put(kidName, $(childSpi(kidName)));
				}
			}
		}
		{
			$var($Iterator, i, $nc($($nc(this->kidCache)->values()))->iterator());
			for (; $nc(i)->hasNext();) {
				try {
					$nc(($cast(AbstractPreferences, $(i->next()))))->removeNode2();
					i->remove();
				} catch ($BackingStoreException& x) {
				}
			}
		}
		removeNodeSpi();
		this->removed = true;
		$nc(this->parent$)->enqueueNodeRemovedEvent(this);
	}
}

$String* AbstractPreferences::name() {
	return this->name$;
}

$String* AbstractPreferences::absolutePath() {
	return this->absolutePath$;
}

bool AbstractPreferences::isUserNode() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	return $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($AbstractPreferences$1, this)))))))->booleanValue();
}

void AbstractPreferences::addPreferenceChangeListener($PreferenceChangeListener* pcl) {
	if (pcl == nullptr) {
		$throwNew($NullPointerException, "Change listener is null."_s);
	}
	$synchronized(this->lock) {
		if (this->removed) {
			$throwNew($IllegalStateException, "Node has been removed."_s);
		}
		$var($PreferenceChangeListenerArray, old, this->prefListeners$);
		$set(this, prefListeners$, $new($PreferenceChangeListenerArray, $nc(old)->length + 1));
		$System::arraycopy(old, 0, this->prefListeners$, 0, old->length);
		$nc(this->prefListeners$)->set(old->length, pcl);
	}
	startEventDispatchThreadIfNecessary();
}

void AbstractPreferences::removePreferenceChangeListener($PreferenceChangeListener* pcl) {
	$synchronized(this->lock) {
		if (this->removed) {
			$throwNew($IllegalStateException, "Node has been removed."_s);
		}
		if ((this->prefListeners$ == nullptr) || ($nc(this->prefListeners$)->length == 0)) {
			$throwNew($IllegalArgumentException, "Listener not registered."_s);
		}
		$var($PreferenceChangeListenerArray, newPl, $new($PreferenceChangeListenerArray, $nc(this->prefListeners$)->length - 1));
		int32_t i = 0;
		while (i < newPl->length && $nc(this->prefListeners$)->get(i) != pcl) {
			int32_t var$0 = i;
			newPl->set(var$0, $nc(this->prefListeners$)->get(i++));
		}
		if (i == newPl->length && $nc(this->prefListeners$)->get(i) != pcl) {
			$throwNew($IllegalArgumentException, "Listener not registered."_s);
		}
		while (i < newPl->length) {
			int32_t var$1 = i;
			newPl->set(var$1, $nc(this->prefListeners$)->get(++i));
		}
		$set(this, prefListeners$, newPl);
	}
}

void AbstractPreferences::addNodeChangeListener($NodeChangeListener* ncl) {
	if (ncl == nullptr) {
		$throwNew($NullPointerException, "Change listener is null."_s);
	}
	$synchronized(this->lock) {
		if (this->removed) {
			$throwNew($IllegalStateException, "Node has been removed."_s);
		}
		if (this->nodeListeners$ == nullptr) {
			$set(this, nodeListeners$, $new($NodeChangeListenerArray, 1));
			$nc(this->nodeListeners$)->set(0, ncl);
		} else {
			$var($NodeChangeListenerArray, old, this->nodeListeners$);
			$set(this, nodeListeners$, $new($NodeChangeListenerArray, $nc(old)->length + 1));
			$System::arraycopy(old, 0, this->nodeListeners$, 0, old->length);
			$nc(this->nodeListeners$)->set(old->length, ncl);
		}
	}
	startEventDispatchThreadIfNecessary();
}

void AbstractPreferences::removeNodeChangeListener($NodeChangeListener* ncl) {
	$synchronized(this->lock) {
		if (this->removed) {
			$throwNew($IllegalStateException, "Node has been removed."_s);
		}
		if ((this->nodeListeners$ == nullptr) || ($nc(this->nodeListeners$)->length == 0)) {
			$throwNew($IllegalArgumentException, "Listener not registered."_s);
		}
		int32_t i = 0;
		while (i < $nc(this->nodeListeners$)->length && $nc(this->nodeListeners$)->get(i) != ncl) {
			++i;
		}
		if (i == $nc(this->nodeListeners$)->length) {
			$throwNew($IllegalArgumentException, "Listener not registered."_s);
		}
		$var($NodeChangeListenerArray, newNl, $new($NodeChangeListenerArray, $nc(this->nodeListeners$)->length - 1));
		if (i != 0) {
			$System::arraycopy(this->nodeListeners$, 0, newNl, 0, i);
		}
		if (i != newNl->length) {
			$System::arraycopy(this->nodeListeners$, i + 1, newNl, i, newNl->length - i);
		}
		$set(this, nodeListeners$, newNl);
	}
}

AbstractPreferences* AbstractPreferences::getChild($String* nodeName) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->lock) {
		$var($StringArray, kidNames, childrenNames());
		{
			$var($StringArray, arr$, kidNames);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, kidName, arr$->get(i$));
				if ($nc(kidName)->equals(nodeName)) {
					return childSpi(kidName);
				}
			}
		}
	}
	return nullptr;
}

$String* AbstractPreferences::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({(this->isUserNode() ? "User"_s : "System"_s), " Preference Node: "_s}));
	return $concat(var$0, $(this->absolutePath()));
}

void AbstractPreferences::sync() {
	sync2();
}

void AbstractPreferences::sync2() {
	$useLocalCurrentObjectStackCache();
	$var($AbstractPreferencesArray, cachedKids, nullptr);
	$synchronized(this->lock) {
		if (this->removed) {
			$throwNew($IllegalStateException, "Node has been removed"_s);
		}
		syncSpi();
		$assign(cachedKids, cachedChildren());
	}
	{
		$var($AbstractPreferencesArray, arr$, cachedKids);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var(AbstractPreferences, cachedKid, arr$->get(i$));
			$nc(cachedKid)->sync2();
		}
	}
}

void AbstractPreferences::flush() {
	flush2();
}

void AbstractPreferences::flush2() {
	$useLocalCurrentObjectStackCache();
	$var($AbstractPreferencesArray, cachedKids, nullptr);
	$synchronized(this->lock) {
		flushSpi();
		if (this->removed) {
			return;
		}
		$assign(cachedKids, cachedChildren());
	}
	{
		$var($AbstractPreferencesArray, arr$, cachedKids);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var(AbstractPreferences, cachedKid, arr$->get(i$));
			$nc(cachedKid)->flush2();
		}
	}
}

bool AbstractPreferences::isRemoved() {
	$synchronized(this->lock) {
		return this->removed;
	}
}

void AbstractPreferences::startEventDispatchThreadIfNecessary() {
	$load(AbstractPreferences);
	$synchronized(class$) {
		$init(AbstractPreferences);
		if (AbstractPreferences::eventDispatchThread == nullptr) {
			$assignStatic(AbstractPreferences::eventDispatchThread, $new($AbstractPreferences$EventDispatchThread));
			$nc(AbstractPreferences::eventDispatchThread)->setDaemon(true);
			$nc(AbstractPreferences::eventDispatchThread)->start();
		}
	}
}

$PreferenceChangeListenerArray* AbstractPreferences::prefListeners() {
	$synchronized(this->lock) {
		return this->prefListeners$;
	}
}

$NodeChangeListenerArray* AbstractPreferences::nodeListeners() {
	$synchronized(this->lock) {
		return this->nodeListeners$;
	}
}

void AbstractPreferences::enqueuePreferenceChangeEvent($String* key, $String* newValue) {
	if ($nc(this->prefListeners$)->length != 0) {
		$synchronized(AbstractPreferences::eventQueue) {
			$nc(AbstractPreferences::eventQueue)->add($$new($PreferenceChangeEvent, this, key, newValue));
			$nc($of(AbstractPreferences::eventQueue))->notify();
		}
	}
}

void AbstractPreferences::enqueueNodeAddedEvent($Preferences* child) {
	if ($nc(this->nodeListeners$)->length != 0) {
		$synchronized(AbstractPreferences::eventQueue) {
			$nc(AbstractPreferences::eventQueue)->add($$new($AbstractPreferences$NodeAddedEvent, this, this, child));
			$nc($of(AbstractPreferences::eventQueue))->notify();
		}
	}
}

void AbstractPreferences::enqueueNodeRemovedEvent($Preferences* child) {
	if ($nc(this->nodeListeners$)->length != 0) {
		$synchronized(AbstractPreferences::eventQueue) {
			$nc(AbstractPreferences::eventQueue)->add($$new($AbstractPreferences$NodeRemovedEvent, this, this, child));
			$nc($of(AbstractPreferences::eventQueue))->notify();
		}
	}
}

void AbstractPreferences::exportNode($OutputStream* os) {
	$XmlSupport::export$(os, this, false);
}

void AbstractPreferences::exportSubtree($OutputStream* os) {
	$XmlSupport::export$(os, this, true);
}

void clinit$AbstractPreferences($Class* class$) {
	$assignStatic(AbstractPreferences::EMPTY_STRING_ARRAY, $new($StringArray, 0));
	$assignStatic(AbstractPreferences::EMPTY_ABSTRACT_PREFS_ARRAY, $new($AbstractPreferencesArray, 0));
	$assignStatic(AbstractPreferences::eventQueue, $new($LinkedList));
	$assignStatic(AbstractPreferences::eventDispatchThread, nullptr);
}

AbstractPreferences::AbstractPreferences() {
}

$Class* AbstractPreferences::load$($String* name, bool initialize) {
	$loadClass(AbstractPreferences, name, initialize, &_AbstractPreferences_ClassInfo_, clinit$AbstractPreferences, allocate$AbstractPreferences);
	return class$;
}

$Class* AbstractPreferences::class$ = nullptr;

		} // prefs
	} // util
} // java