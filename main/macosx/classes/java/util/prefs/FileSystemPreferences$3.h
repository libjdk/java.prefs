#ifndef _java_util_prefs_FileSystemPreferences$3_h_
#define _java_util_prefs_FileSystemPreferences$3_h_
//$ class java.util.prefs.FileSystemPreferences$3
//$ extends java.util.TimerTask

#include <java/util/TimerTask.h>

namespace java {
	namespace util {
		namespace prefs {

class FileSystemPreferences$3 : public ::java::util::TimerTask {
	$class(FileSystemPreferences$3, $NO_CLASS_INIT, ::java::util::TimerTask)
public:
	FileSystemPreferences$3();
	void init$();
	virtual void run() override;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_FileSystemPreferences$3_h_