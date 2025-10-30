#include <java/util/prefs/FileSystemPreferences$NodeCreate.h>

#include <java/util/prefs/FileSystemPreferences$Change.h>
#include <java/util/prefs/FileSystemPreferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemPreferences = ::java::util::prefs::FileSystemPreferences;
using $FileSystemPreferences$Change = ::java::util::prefs::FileSystemPreferences$Change;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _FileSystemPreferences$NodeCreate_FieldInfo_[] = {
	{"this$0", "Ljava/util/prefs/FileSystemPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(FileSystemPreferences$NodeCreate, this$0)},
	{}
};

$MethodInfo _FileSystemPreferences$NodeCreate_MethodInfo_[] = {
	{"<init>", "(Ljava/util/prefs/FileSystemPreferences;)V", nullptr, $PRIVATE, $method(static_cast<void(FileSystemPreferences$NodeCreate::*)($FileSystemPreferences*)>(&FileSystemPreferences$NodeCreate::init$))},
	{"replay", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _FileSystemPreferences$NodeCreate_InnerClassesInfo_[] = {
	{"java.util.prefs.FileSystemPreferences$NodeCreate", "java.util.prefs.FileSystemPreferences", "NodeCreate", $PRIVATE},
	{"java.util.prefs.FileSystemPreferences$Change", "java.util.prefs.FileSystemPreferences", "Change", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _FileSystemPreferences$NodeCreate_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.FileSystemPreferences$NodeCreate",
	"java.util.prefs.FileSystemPreferences$Change",
	nullptr,
	_FileSystemPreferences$NodeCreate_FieldInfo_,
	_FileSystemPreferences$NodeCreate_MethodInfo_,
	nullptr,
	nullptr,
	_FileSystemPreferences$NodeCreate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.FileSystemPreferences"
};

$Object* allocate$FileSystemPreferences$NodeCreate($Class* clazz) {
	return $of($alloc(FileSystemPreferences$NodeCreate));
}

void FileSystemPreferences$NodeCreate::init$($FileSystemPreferences* this$0) {
	$set(this, this$0, this$0);
	$FileSystemPreferences$Change::init$(this$0);
}

void FileSystemPreferences$NodeCreate::replay() {
}

FileSystemPreferences$NodeCreate::FileSystemPreferences$NodeCreate() {
}

$Class* FileSystemPreferences$NodeCreate::load$($String* name, bool initialize) {
	$loadClass(FileSystemPreferences$NodeCreate, name, initialize, &_FileSystemPreferences$NodeCreate_ClassInfo_, allocate$FileSystemPreferences$NodeCreate);
	return class$;
}

$Class* FileSystemPreferences$NodeCreate::class$ = nullptr;

		} // prefs
	} // util
} // java