#ifndef _java_util_prefs_FileSystemPreferences$Put_h_
#define _java_util_prefs_FileSystemPreferences$Put_h_
//$ class java.util.prefs.FileSystemPreferences$Put
//$ extends java.util.prefs.FileSystemPreferences$Change

#include <java/util/prefs/FileSystemPreferences$Change.h>

namespace java {
	namespace util {
		namespace prefs {
			class FileSystemPreferences;
		}
	}
}

namespace java {
	namespace util {
		namespace prefs {

class FileSystemPreferences$Put : public ::java::util::prefs::FileSystemPreferences$Change {
	$class(FileSystemPreferences$Put, $NO_CLASS_INIT, ::java::util::prefs::FileSystemPreferences$Change)
public:
	FileSystemPreferences$Put();
	void init$(::java::util::prefs::FileSystemPreferences* this$0, $String* key, $String* value);
	virtual void replay() override;
	::java::util::prefs::FileSystemPreferences* this$0 = nullptr;
	$String* key = nullptr;
	$String* value = nullptr;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_FileSystemPreferences$Put_h_