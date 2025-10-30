#include <java/util/prefs/FileSystemPreferences$4$1.h>

#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/Timer.h>
#include <java/util/prefs/FileSystemPreferences$4.h>
#include <java/util/prefs/FileSystemPreferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Timer = ::java::util::Timer;
using $FileSystemPreferences = ::java::util::prefs::FileSystemPreferences;
using $FileSystemPreferences$4 = ::java::util::prefs::FileSystemPreferences$4;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _FileSystemPreferences$4$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/prefs/FileSystemPreferences$4;", nullptr, $FINAL | $SYNTHETIC, $field(FileSystemPreferences$4$1, this$0)},
	{}
};

$MethodInfo _FileSystemPreferences$4$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/prefs/FileSystemPreferences$4;Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;JZ)V", nullptr, 0, $method(static_cast<void(FileSystemPreferences$4$1::*)($FileSystemPreferences$4*,$ThreadGroup*,$Runnable*,$String*,int64_t,bool)>(&FileSystemPreferences$4$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FileSystemPreferences$4$1_EnclosingMethodInfo_ = {
	"java.util.prefs.FileSystemPreferences$4",
	"run",
	"()Ljava/lang/Void;"
};

$InnerClassInfo _FileSystemPreferences$4$1_InnerClassesInfo_[] = {
	{"java.util.prefs.FileSystemPreferences$4", nullptr, nullptr, 0},
	{"java.util.prefs.FileSystemPreferences$4$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileSystemPreferences$4$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.FileSystemPreferences$4$1",
	"java.lang.Thread",
	nullptr,
	_FileSystemPreferences$4$1_FieldInfo_,
	_FileSystemPreferences$4$1_MethodInfo_,
	nullptr,
	&_FileSystemPreferences$4$1_EnclosingMethodInfo_,
	_FileSystemPreferences$4$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.FileSystemPreferences"
};

$Object* allocate$FileSystemPreferences$4$1($Class* clazz) {
	return $of($alloc(FileSystemPreferences$4$1));
}

void FileSystemPreferences$4$1::init$($FileSystemPreferences$4* this$0, $ThreadGroup* arg0, $Runnable* arg1, $String* arg2, int64_t arg3, bool arg4) {
	$set(this, this$0, this$0);
	$Thread::init$(arg0, arg1, arg2, arg3, arg4);
}

void FileSystemPreferences$4$1::run() {
	$init($FileSystemPreferences);
	$nc($FileSystemPreferences::syncTimer)->cancel();
	$FileSystemPreferences::syncWorld();
}

FileSystemPreferences$4$1::FileSystemPreferences$4$1() {
}

$Class* FileSystemPreferences$4$1::load$($String* name, bool initialize) {
	$loadClass(FileSystemPreferences$4$1, name, initialize, &_FileSystemPreferences$4$1_ClassInfo_, allocate$FileSystemPreferences$4$1);
	return class$;
}

$Class* FileSystemPreferences$4$1::class$ = nullptr;

		} // prefs
	} // util
} // java