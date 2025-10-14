#ifndef _java_util_prefs_FileSystemPreferences$Remove_h_
#define _java_util_prefs_FileSystemPreferences$Remove_h_
//$ class java.util.prefs.FileSystemPreferences$Remove
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

class FileSystemPreferences$Remove : public ::java::util::prefs::FileSystemPreferences$Change {
	$class(FileSystemPreferences$Remove, $NO_CLASS_INIT, ::java::util::prefs::FileSystemPreferences$Change)
public:
	FileSystemPreferences$Remove();
	void init$(::java::util::prefs::FileSystemPreferences* this$0, $String* key);
	virtual void replay() override;
	::java::util::prefs::FileSystemPreferences* this$0 = nullptr;
	$String* key = nullptr;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_FileSystemPreferences$Remove_h_