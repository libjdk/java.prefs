#include <java/util/prefs/FileSystemPreferences$9.h>

#include <java/io/File.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/prefs/BackingStoreException.h>
#include <java/util/prefs/FileSystemPreferences$NodeCreate.h>
#include <java/util/prefs/FileSystemPreferences.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $BackingStoreException = ::java::util::prefs::BackingStoreException;
using $FileSystemPreferences = ::java::util::prefs::FileSystemPreferences;
using $FileSystemPreferences$NodeCreate = ::java::util::prefs::FileSystemPreferences$NodeCreate;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _FileSystemPreferences$9_FieldInfo_[] = {
	{"this$0", "Ljava/util/prefs/FileSystemPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(FileSystemPreferences$9, this$0)},
	{}
};

$MethodInfo _FileSystemPreferences$9_MethodInfo_[] = {
	{"<init>", "(Ljava/util/prefs/FileSystemPreferences;)V", nullptr, 0, $method(static_cast<void(FileSystemPreferences$9::*)($FileSystemPreferences*)>(&FileSystemPreferences$9::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.util.prefs.BackingStoreException"},
	{}
};

$EnclosingMethodInfo _FileSystemPreferences$9_EnclosingMethodInfo_ = {
	"java.util.prefs.FileSystemPreferences",
	"removeNodeSpi",
	"()V"
};

$InnerClassInfo _FileSystemPreferences$9_InnerClassesInfo_[] = {
	{"java.util.prefs.FileSystemPreferences$9", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileSystemPreferences$9_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.FileSystemPreferences$9",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_FileSystemPreferences$9_FieldInfo_,
	_FileSystemPreferences$9_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
	&_FileSystemPreferences$9_EnclosingMethodInfo_,
	_FileSystemPreferences$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.FileSystemPreferences"
};

$Object* allocate$FileSystemPreferences$9($Class* clazz) {
	return $of($alloc(FileSystemPreferences$9));
}

void FileSystemPreferences$9::init$($FileSystemPreferences* this$0) {
	$set(this, this$0, this$0);
}

$Object* FileSystemPreferences$9::run() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->this$0->changeLog)->contains(this->this$0->nodeCreate)) {
		$nc(this->this$0->changeLog)->remove($of(this->this$0->nodeCreate));
		$set(this->this$0, nodeCreate, nullptr);
		return $of(nullptr);
	}
	if (!$nc(this->this$0->dir)->exists()) {
		return $of(nullptr);
	}
	$nc(this->this$0->prefsFile)->delete$();
	$nc(this->this$0->tmpFile)->delete$();
	$var($FileArray, junk, $nc(this->this$0->dir)->listFiles());
	if ($nc(junk)->length != 0) {
		$nc($($FileSystemPreferences::getLogger()))->warning($$str({"Found extraneous files when removing node: "_s, $($Arrays::asList(junk))}));
		for (int32_t i = 0; i < junk->length; ++i) {
			$nc(junk->get(i))->delete$();
		}
	}
	if (!$nc(this->this$0->dir)->delete$()) {
		$throwNew($BackingStoreException, $$str({"Couldn\'t delete dir: "_s, this->this$0->dir}));
	}
	return $of(nullptr);
}

FileSystemPreferences$9::FileSystemPreferences$9() {
}

$Class* FileSystemPreferences$9::load$($String* name, bool initialize) {
	$loadClass(FileSystemPreferences$9, name, initialize, &_FileSystemPreferences$9_ClassInfo_, allocate$FileSystemPreferences$9);
	return class$;
}

$Class* FileSystemPreferences$9::class$ = nullptr;

		} // prefs
	} // util
} // java