#ifndef _java_util_prefs_FileSystemPreferences$4$1_h_
#define _java_util_prefs_FileSystemPreferences$4$1_h_
//$ class java.util.prefs.FileSystemPreferences$4$1
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace lang {
		class Runnable;
		class ThreadGroup;
	}
}
namespace java {
	namespace util {
		namespace prefs {
			class FileSystemPreferences$4;
		}
	}
}

namespace java {
	namespace util {
		namespace prefs {

class FileSystemPreferences$4$1 : public ::java::lang::Thread {
	$class(FileSystemPreferences$4$1, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	FileSystemPreferences$4$1();
	void init$(::java::util::prefs::FileSystemPreferences$4* this$0, ::java::lang::ThreadGroup* arg0, ::java::lang::Runnable* arg1, $String* arg2, int64_t arg3, bool arg4);
	virtual void run() override;
	::java::util::prefs::FileSystemPreferences$4* this$0 = nullptr;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_FileSystemPreferences$4$1_h_