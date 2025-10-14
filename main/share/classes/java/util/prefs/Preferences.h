#ifndef _java_util_prefs_Preferences_h_
#define _java_util_prefs_Preferences_h_
//$ class java.util.prefs.Preferences
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAX_KEY_LENGTH")
#undef MAX_KEY_LENGTH
#pragma push_macro("MAX_NAME_LENGTH")
#undef MAX_NAME_LENGTH
#pragma push_macro("MAX_VALUE_LENGTH")
#undef MAX_VALUE_LENGTH

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace security {
		class Permission;
	}
}
namespace java {
	namespace util {
		namespace prefs {
			class NodeChangeListener;
			class PreferenceChangeListener;
			class PreferencesFactory;
		}
	}
}

namespace java {
	namespace util {
		namespace prefs {

class $export Preferences : public ::java::lang::Object {
	$class(Preferences, 0, ::java::lang::Object)
public:
	Preferences();
	void init$();
	virtual $String* absolutePath() {return nullptr;}
	virtual void addNodeChangeListener(::java::util::prefs::NodeChangeListener* ncl) {}
	virtual void addPreferenceChangeListener(::java::util::prefs::PreferenceChangeListener* pcl) {}
	virtual $StringArray* childrenNames() {return nullptr;}
	virtual void clear() {}
	virtual void exportNode(::java::io::OutputStream* os) {}
	virtual void exportSubtree(::java::io::OutputStream* os) {}
	static ::java::util::prefs::PreferencesFactory* factory();
	static ::java::util::prefs::PreferencesFactory* factory1();
	virtual void flush() {}
	virtual $String* get($String* key, $String* def) {return nullptr;}
	virtual bool getBoolean($String* key, bool def) {return false;}
	virtual $bytes* getByteArray($String* key, $bytes* def) {return nullptr;}
	virtual double getDouble($String* key, double def) {return 0.0;}
	virtual float getFloat($String* key, float def) {return 0.0;}
	virtual int32_t getInt($String* key, int32_t def) {return 0;}
	virtual int64_t getLong($String* key, int64_t def) {return 0;}
	static void importPreferences(::java::io::InputStream* is);
	virtual bool isUserNode() {return false;}
	virtual $StringArray* keys() {return nullptr;}
	virtual $String* name() {return nullptr;}
	virtual ::java::util::prefs::Preferences* node($String* pathName) {return nullptr;}
	virtual bool nodeExists($String* pathName) {return false;}
	static $String* nodeName($Class* c);
	virtual ::java::util::prefs::Preferences* parent() {return nullptr;}
	virtual void put($String* key, $String* value) {}
	virtual void putBoolean($String* key, bool value) {}
	virtual void putByteArray($String* key, $bytes* value) {}
	virtual void putDouble($String* key, double value) {}
	virtual void putFloat($String* key, float value) {}
	virtual void putInt($String* key, int32_t value) {}
	virtual void putLong($String* key, int64_t value) {}
	virtual void remove($String* key) {}
	virtual void removeNode() {}
	virtual void removeNodeChangeListener(::java::util::prefs::NodeChangeListener* ncl) {}
	virtual void removePreferenceChangeListener(::java::util::prefs::PreferenceChangeListener* pcl) {}
	virtual void sync() {}
	static ::java::util::prefs::Preferences* systemNodeForPackage($Class* c);
	static ::java::util::prefs::Preferences* systemRoot();
	virtual $String* toString() override;
	static ::java::util::prefs::Preferences* userNodeForPackage($Class* c);
	static ::java::util::prefs::Preferences* userRoot();
	static ::java::util::prefs::PreferencesFactory* factory$;
	static const int32_t MAX_KEY_LENGTH = 80;
	static const int32_t MAX_VALUE_LENGTH = 8192; // 8 * 1024
	static const int32_t MAX_NAME_LENGTH = 80;
	static ::java::security::Permission* prefsPerm;
};

		} // prefs
	} // util
} // java

#pragma pop_macro("MAX_KEY_LENGTH")
#pragma pop_macro("MAX_NAME_LENGTH")
#pragma pop_macro("MAX_VALUE_LENGTH")

#endif // _java_util_prefs_Preferences_h_