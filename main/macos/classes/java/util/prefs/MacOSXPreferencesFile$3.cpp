#include <java/util/prefs/MacOSXPreferencesFile$3.h>

#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/prefs/MacOSXPreferencesFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $MacOSXPreferencesFile = ::java::util::prefs::MacOSXPreferencesFile;

namespace java {
	namespace util {
		namespace prefs {

$MethodInfo _MacOSXPreferencesFile$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;JZ)V", nullptr, 0, $method(static_cast<void(MacOSXPreferencesFile$3::*)($ThreadGroup*,$Runnable*,$String*,int64_t,bool)>(&MacOSXPreferencesFile$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MacOSXPreferencesFile$3_EnclosingMethodInfo_ = {
	"java.util.prefs.MacOSXPreferencesFile",
	"timer",
	"()Ljava/util/Timer;"
};

$InnerClassInfo _MacOSXPreferencesFile$3_InnerClassesInfo_[] = {
	{"java.util.prefs.MacOSXPreferencesFile$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MacOSXPreferencesFile$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.MacOSXPreferencesFile$3",
	"java.lang.Thread",
	nullptr,
	nullptr,
	_MacOSXPreferencesFile$3_MethodInfo_,
	nullptr,
	&_MacOSXPreferencesFile$3_EnclosingMethodInfo_,
	_MacOSXPreferencesFile$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.MacOSXPreferencesFile"
};

$Object* allocate$MacOSXPreferencesFile$3($Class* clazz) {
	return $of($alloc(MacOSXPreferencesFile$3));
}

void MacOSXPreferencesFile$3::init$($ThreadGroup* arg0, $Runnable* arg1, $String* arg2, int64_t arg3, bool arg4) {
	$Thread::init$(arg0, arg1, arg2, arg3, arg4);
}

void MacOSXPreferencesFile$3::run() {
	$MacOSXPreferencesFile::flushWorld();
}

MacOSXPreferencesFile$3::MacOSXPreferencesFile$3() {
}

$Class* MacOSXPreferencesFile$3::load$($String* name, bool initialize) {
	$loadClass(MacOSXPreferencesFile$3, name, initialize, &_MacOSXPreferencesFile$3_ClassInfo_, allocate$MacOSXPreferencesFile$3);
	return class$;
}

$Class* MacOSXPreferencesFile$3::class$ = nullptr;

		} // prefs
	} // util
} // java