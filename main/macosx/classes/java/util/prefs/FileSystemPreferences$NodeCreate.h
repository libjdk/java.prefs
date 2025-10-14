#ifndef _java_util_prefs_FileSystemPreferences$NodeCreate_h_
#define _java_util_prefs_FileSystemPreferences$NodeCreate_h_
//$ class java.util.prefs.FileSystemPreferences$NodeCreate
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

class FileSystemPreferences$NodeCreate : public ::java::util::prefs::FileSystemPreferences$Change {
	$class(FileSystemPreferences$NodeCreate, $NO_CLASS_INIT, ::java::util::prefs::FileSystemPreferences$Change)
public:
	FileSystemPreferences$NodeCreate();
	void init$(::java::util::prefs::FileSystemPreferences* this$0);
	virtual void replay() override;
	::java::util::prefs::FileSystemPreferences* this$0 = nullptr;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_FileSystemPreferences$NodeCreate_h_