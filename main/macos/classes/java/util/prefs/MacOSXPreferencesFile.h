#ifndef _java_util_prefs_MacOSXPreferencesFile_h_
#define _java_util_prefs_MacOSXPreferencesFile_h_
//$ class java.util.prefs.MacOSXPreferencesFile
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class HashMap;
		class HashSet;
		class Timer;
	}
}
namespace java {
	namespace util {
		namespace prefs {
			class MacOSXPreferencesFile$FlushTask;
		}
	}
}

namespace java {
	namespace util {
		namespace prefs {

class MacOSXPreferencesFile : public ::java::lang::Object {
	$class(MacOSXPreferencesFile, 0, ::java::lang::Object)
public:
	MacOSXPreferencesFile();
	void init$($String* newName, int64_t newUser, int64_t newHost);
	virtual bool addChildToNode($String* path, $String* child);
	static bool addChildToNode($String* path, $String* child, $String* name, int64_t user, int64_t host);
	virtual void addKeyToNode($String* path, $String* key, $String* value);
	static void addKeyToNode($String* path, $String* key, $String* value, $String* name, int64_t user, int64_t host);
	virtual bool addNode($String* path);
	static bool addNode($String* path, $String* name, int64_t user, int64_t host);
	static int64_t anyHost();
	static int64_t anyUser();
	static int64_t currentHost();
	static int64_t currentUser();
	static int64_t flushDelay();
	static bool flushUser();
	static bool flushWorld();
	virtual $StringArray* getChildrenForNode($String* path);
	static $StringArray* getChildrenForNode($String* path, $String* name, int64_t user, int64_t host);
	static ::java::util::prefs::MacOSXPreferencesFile* getFile($String* newName, bool isUser);
	virtual $String* getKeyFromNode($String* path, $String* key);
	static $String* getKeyFromNode($String* path, $String* key, $String* name, int64_t user, int64_t host);
	virtual $StringArray* getKeysForNode($String* path);
	static $StringArray* getKeysForNode($String* path, $String* name, int64_t user, int64_t host);
	virtual int64_t host();
	static void initSyncTimerIfNeeded();
	void markChanged();
	virtual $String* name();
	virtual void removeChildFromNode($String* path, $String* child);
	static void removeChildFromNode($String* path, $String* child, $String* name, int64_t user, int64_t host);
	virtual void removeKeyFromNode($String* path, $String* key);
	static void removeKeyFromNode($String* path, $String* key, $String* name, int64_t user, int64_t host);
	virtual void removeNode($String* path);
	static void removeNode($String* path, $String* name, int64_t user, int64_t host);
	static bool syncUser();
	static bool syncWorld();
	virtual bool synchronize();
	static bool synchronize($String* name, int64_t user, int64_t host);
	static ::java::util::Timer* timer();
	virtual int64_t user();
	static ::java::util::HashMap* cachedFiles;
	static ::java::util::HashSet* changedFiles;
	static ::java::util::Timer* timer$;
	static ::java::util::prefs::MacOSXPreferencesFile$FlushTask* flushTimerTask;
	static int64_t flushDelay$;
	static int64_t syncInterval;
	$String* appName = nullptr;
	int64_t user$ = 0;
	int64_t host$ = 0;
	static int64_t cfCurrentUser;
	static int64_t cfAnyUser;
	static int64_t cfCurrentHost;
	static int64_t cfAnyHost;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_MacOSXPreferencesFile_h_