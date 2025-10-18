#ifndef _java_util_prefs_MacOSXPreferences_h_
#define _java_util_prefs_MacOSXPreferences_h_
//$ class java.util.prefs.MacOSXPreferences
//$ extends java.util.prefs.AbstractPreferences

#include <java/lang/Array.h>
#include <java/util/prefs/AbstractPreferences.h>

namespace java {
	namespace util {
		namespace prefs {
			class MacOSXPreferencesFile;
			class Preferences;
		}
	}
}

namespace java {
	namespace util {
		namespace prefs {

class MacOSXPreferences : public ::java::util::prefs::AbstractPreferences {
	$class(MacOSXPreferences, 0, ::java::util::prefs::AbstractPreferences)
public:
	MacOSXPreferences();
	void init$(bool newIsUser);
	void init$(::java::util::prefs::MacOSXPreferences* parent, $String* name);
	void init$(::java::util::prefs::MacOSXPreferences* parent, $String* name, bool isNew);
	void init$(::java::util::prefs::MacOSXPreferences* parent, $String* name, bool isNew, bool isRoot, bool isUser);
	::java::util::prefs::MacOSXPreferencesFile* cfFileForNode(bool isUser);
	virtual ::java::util::prefs::AbstractPreferences* childSpi($String* name) override;
	virtual $StringArray* childrenNamesSpi() override;
	virtual void flush() override;
	virtual void flushSpi() override;
	virtual $String* getSpi($String* key) override;
	static ::java::util::prefs::Preferences* getSystemRoot();
	static ::java::util::prefs::Preferences* getUserRoot();
	virtual $StringArray* keysSpi() override;
	virtual void putSpi($String* key, $String* value) override;
	void removeChild($String* child);
	virtual void removeNodeSpi() override;
	virtual void removeSpi($String* key) override;
	virtual void sync() override;
	virtual void syncSpi() override;
	static $String* defaultAppName;
	bool isUser = false;
	::java::util::prefs::MacOSXPreferencesFile* file = nullptr;
	$String* path = nullptr;
	static $volatile(::java::util::prefs::MacOSXPreferences*) userRoot;
	static $volatile(::java::util::prefs::MacOSXPreferences*) systemRoot;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_MacOSXPreferences_h_