#ifndef _java_util_prefs_FileSystemPreferences$Change_h_
#define _java_util_prefs_FileSystemPreferences$Change_h_
//$ class java.util.prefs.FileSystemPreferences$Change
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class FileSystemPreferences$Change : public ::java::lang::Object {
	$class(FileSystemPreferences$Change, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FileSystemPreferences$Change();
	void init$(::java::util::prefs::FileSystemPreferences* this$0);
	virtual void replay() {}
	::java::util::prefs::FileSystemPreferences* this$0 = nullptr;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_FileSystemPreferences$Change_h_