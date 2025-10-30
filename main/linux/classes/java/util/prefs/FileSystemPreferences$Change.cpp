#include <java/util/prefs/FileSystemPreferences$Change.h>

#include <java/util/prefs/FileSystemPreferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemPreferences = ::java::util::prefs::FileSystemPreferences;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _FileSystemPreferences$Change_FieldInfo_[] = {
	{"this$0", "Ljava/util/prefs/FileSystemPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(FileSystemPreferences$Change, this$0)},
	{}
};

$MethodInfo _FileSystemPreferences$Change_MethodInfo_[] = {
	{"<init>", "(Ljava/util/prefs/FileSystemPreferences;)V", nullptr, $PRIVATE, $method(static_cast<void(FileSystemPreferences$Change::*)($FileSystemPreferences*)>(&FileSystemPreferences$Change::init$))},
	{"replay", "()V", nullptr, $ABSTRACT},
	{}
};

$InnerClassInfo _FileSystemPreferences$Change_InnerClassesInfo_[] = {
	{"java.util.prefs.FileSystemPreferences$Change", "java.util.prefs.FileSystemPreferences", "Change", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _FileSystemPreferences$Change_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.prefs.FileSystemPreferences$Change",
	"java.lang.Object",
	nullptr,
	_FileSystemPreferences$Change_FieldInfo_,
	_FileSystemPreferences$Change_MethodInfo_,
	nullptr,
	nullptr,
	_FileSystemPreferences$Change_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.FileSystemPreferences"
};

$Object* allocate$FileSystemPreferences$Change($Class* clazz) {
	return $of($alloc(FileSystemPreferences$Change));
}

void FileSystemPreferences$Change::init$($FileSystemPreferences* this$0) {
	$set(this, this$0, this$0);
}

FileSystemPreferences$Change::FileSystemPreferences$Change() {
}

$Class* FileSystemPreferences$Change::load$($String* name, bool initialize) {
	$loadClass(FileSystemPreferences$Change, name, initialize, &_FileSystemPreferences$Change_ClassInfo_, allocate$FileSystemPreferences$Change);
	return class$;
}

$Class* FileSystemPreferences$Change::class$ = nullptr;

		} // prefs
	} // util
} // java