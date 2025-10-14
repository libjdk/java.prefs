#ifndef _java_util_prefs_AbstractPreferences_h_
#define _java_util_prefs_AbstractPreferences_h_
//$ class java.util.prefs.AbstractPreferences
//$ extends java.util.prefs.Preferences

#include <java/lang/Array.h>
#include <java/util/prefs/Preferences.h>

#pragma push_macro("EMPTY_ABSTRACT_PREFS_ARRAY")
#undef EMPTY_ABSTRACT_PREFS_ARRAY
#pragma push_macro("EMPTY_STRING_ARRAY")
#undef EMPTY_STRING_ARRAY

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class StringTokenizer;
	}
}
namespace java {
	namespace util {
		namespace prefs {
			class NodeChangeListener;
			class PreferenceChangeListener;
		}
	}
}

namespace java {
	namespace util {
		namespace prefs {

class $export AbstractPreferences : public ::java::util::prefs::Preferences {
	$class(AbstractPreferences, 0, ::java::util::prefs::Preferences)
public:
	AbstractPreferences();
	void init$(::java::util::prefs::AbstractPreferences* parent, $String* name);
	virtual $String* absolutePath() override;
	virtual void addNodeChangeListener(::java::util::prefs::NodeChangeListener* ncl) override;
	virtual void addPreferenceChangeListener(::java::util::prefs::PreferenceChangeListener* pcl) override;
	$Array<::java::util::prefs::AbstractPreferences>* cachedChildren();
	virtual ::java::util::prefs::AbstractPreferences* childSpi($String* name) {return nullptr;}
	virtual $StringArray* childrenNames() override;
	virtual $StringArray* childrenNamesSpi() {return nullptr;}
	virtual void clear() override;
	void enqueueNodeAddedEvent(::java::util::prefs::Preferences* child);
	void enqueueNodeRemovedEvent(::java::util::prefs::Preferences* child);
	void enqueuePreferenceChangeEvent($String* key, $String* newValue);
	virtual void exportNode(::java::io::OutputStream* os) override;
	virtual void exportSubtree(::java::io::OutputStream* os) override;
	virtual void flush() override;
	void flush2();
	virtual void flushSpi() {}
	virtual $String* get($String* key, $String* def) override;
	virtual bool getBoolean($String* key, bool def) override;
	virtual $bytes* getByteArray($String* key, $bytes* def) override;
	virtual ::java::util::prefs::AbstractPreferences* getChild($String* nodeName);
	virtual double getDouble($String* key, double def) override;
	virtual float getFloat($String* key, float def) override;
	virtual int32_t getInt($String* key, int32_t def) override;
	virtual int64_t getLong($String* key, int64_t def) override;
	virtual $String* getSpi($String* key) {return nullptr;}
	virtual bool isRemoved();
	virtual bool isUserNode() override;
	virtual $StringArray* keys() override;
	virtual $StringArray* keysSpi() {return nullptr;}
	virtual $String* name() override;
	virtual ::java::util::prefs::Preferences* node($String* path) override;
	::java::util::prefs::Preferences* node(::java::util::StringTokenizer* path);
	virtual bool nodeExists($String* path) override;
	bool nodeExists(::java::util::StringTokenizer* path);
	virtual $Array<::java::util::prefs::NodeChangeListener>* nodeListeners();
	virtual ::java::util::prefs::Preferences* parent() override;
	virtual $Array<::java::util::prefs::PreferenceChangeListener>* prefListeners();
	virtual void put($String* key, $String* value) override;
	virtual void putBoolean($String* key, bool value) override;
	virtual void putByteArray($String* key, $bytes* value) override;
	virtual void putDouble($String* key, double value) override;
	virtual void putFloat($String* key, float value) override;
	virtual void putInt($String* key, int32_t value) override;
	virtual void putLong($String* key, int64_t value) override;
	virtual void putSpi($String* key, $String* value) {}
	virtual void remove($String* key) override;
	virtual void removeNode() override;
	void removeNode2();
	virtual void removeNodeChangeListener(::java::util::prefs::NodeChangeListener* ncl) override;
	virtual void removeNodeSpi() {}
	virtual void removePreferenceChangeListener(::java::util::prefs::PreferenceChangeListener* pcl) override;
	virtual void removeSpi($String* key) {}
	static void startEventDispatchThreadIfNecessary();
	virtual void sync() override;
	void sync2();
	virtual void syncSpi() {}
	virtual $String* toString() override;
	static const int32_t CODE_POINT_U0000 = ((char16_t)0);
	$String* name$ = nullptr;
	$String* absolutePath$ = nullptr;
	::java::util::prefs::AbstractPreferences* parent$ = nullptr;
	::java::util::prefs::AbstractPreferences* root = nullptr;
	bool newNode = false;
	::java::util::Map* kidCache = nullptr;
	bool removed = false;
	$Array<::java::util::prefs::PreferenceChangeListener>* prefListeners$ = nullptr;
	$Array<::java::util::prefs::NodeChangeListener>* nodeListeners$ = nullptr;
	$Object* lock = nullptr;
	static $StringArray* EMPTY_STRING_ARRAY;
	static $Array<::java::util::prefs::AbstractPreferences>* EMPTY_ABSTRACT_PREFS_ARRAY;
	static ::java::util::List* eventQueue;
	static $Thread* eventDispatchThread;
};

		} // prefs
	} // util
} // java

#pragma pop_macro("EMPTY_ABSTRACT_PREFS_ARRAY")
#pragma pop_macro("EMPTY_STRING_ARRAY")

#endif // _java_util_prefs_AbstractPreferences_h_