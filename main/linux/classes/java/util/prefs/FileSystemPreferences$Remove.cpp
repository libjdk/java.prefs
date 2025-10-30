#include <java/util/prefs/FileSystemPreferences$Remove.h>

#include <java/util/Map.h>
#include <java/util/prefs/FileSystemPreferences$Change.h>
#include <java/util/prefs/FileSystemPreferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $FileSystemPreferences = ::java::util::prefs::FileSystemPreferences;
using $FileSystemPreferences$Change = ::java::util::prefs::FileSystemPreferences$Change;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _FileSystemPreferences$Remove_FieldInfo_[] = {
	{"this$0", "Ljava/util/prefs/FileSystemPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(FileSystemPreferences$Remove, this$0)},
	{"key", "Ljava/lang/String;", nullptr, 0, $field(FileSystemPreferences$Remove, key)},
	{}
};

$MethodInfo _FileSystemPreferences$Remove_MethodInfo_[] = {
	{"<init>", "(Ljava/util/prefs/FileSystemPreferences;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(FileSystemPreferences$Remove::*)($FileSystemPreferences*,$String*)>(&FileSystemPreferences$Remove::init$))},
	{"replay", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _FileSystemPreferences$Remove_InnerClassesInfo_[] = {
	{"java.util.prefs.FileSystemPreferences$Remove", "java.util.prefs.FileSystemPreferences", "Remove", $PRIVATE},
	{"java.util.prefs.FileSystemPreferences$Change", "java.util.prefs.FileSystemPreferences", "Change", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _FileSystemPreferences$Remove_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.FileSystemPreferences$Remove",
	"java.util.prefs.FileSystemPreferences$Change",
	nullptr,
	_FileSystemPreferences$Remove_FieldInfo_,
	_FileSystemPreferences$Remove_MethodInfo_,
	nullptr,
	nullptr,
	_FileSystemPreferences$Remove_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.FileSystemPreferences"
};

$Object* allocate$FileSystemPreferences$Remove($Class* clazz) {
	return $of($alloc(FileSystemPreferences$Remove));
}

void FileSystemPreferences$Remove::init$($FileSystemPreferences* this$0, $String* key) {
	$set(this, this$0, this$0);
	$FileSystemPreferences$Change::init$(this$0);
	$set(this, key, key);
}

void FileSystemPreferences$Remove::replay() {
	$nc(this->this$0->prefsCache)->remove(this->key);
}

FileSystemPreferences$Remove::FileSystemPreferences$Remove() {
}

$Class* FileSystemPreferences$Remove::load$($String* name, bool initialize) {
	$loadClass(FileSystemPreferences$Remove, name, initialize, &_FileSystemPreferences$Remove_ClassInfo_, allocate$FileSystemPreferences$Remove);
	return class$;
}

$Class* FileSystemPreferences$Remove::class$ = nullptr;

		} // prefs
	} // util
} // java