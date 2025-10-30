#include <java/util/prefs/FileSystemPreferences$Put.h>

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

$FieldInfo _FileSystemPreferences$Put_FieldInfo_[] = {
	{"this$0", "Ljava/util/prefs/FileSystemPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(FileSystemPreferences$Put, this$0)},
	{"key", "Ljava/lang/String;", nullptr, 0, $field(FileSystemPreferences$Put, key)},
	{"value", "Ljava/lang/String;", nullptr, 0, $field(FileSystemPreferences$Put, value)},
	{}
};

$MethodInfo _FileSystemPreferences$Put_MethodInfo_[] = {
	{"<init>", "(Ljava/util/prefs/FileSystemPreferences;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(FileSystemPreferences$Put::*)($FileSystemPreferences*,$String*,$String*)>(&FileSystemPreferences$Put::init$))},
	{"replay", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _FileSystemPreferences$Put_InnerClassesInfo_[] = {
	{"java.util.prefs.FileSystemPreferences$Put", "java.util.prefs.FileSystemPreferences", "Put", $PRIVATE},
	{"java.util.prefs.FileSystemPreferences$Change", "java.util.prefs.FileSystemPreferences", "Change", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _FileSystemPreferences$Put_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.FileSystemPreferences$Put",
	"java.util.prefs.FileSystemPreferences$Change",
	nullptr,
	_FileSystemPreferences$Put_FieldInfo_,
	_FileSystemPreferences$Put_MethodInfo_,
	nullptr,
	nullptr,
	_FileSystemPreferences$Put_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.FileSystemPreferences"
};

$Object* allocate$FileSystemPreferences$Put($Class* clazz) {
	return $of($alloc(FileSystemPreferences$Put));
}

void FileSystemPreferences$Put::init$($FileSystemPreferences* this$0, $String* key, $String* value) {
	$set(this, this$0, this$0);
	$FileSystemPreferences$Change::init$(this$0);
	$set(this, key, key);
	$set(this, value, value);
}

void FileSystemPreferences$Put::replay() {
	$nc(this->this$0->prefsCache)->put(this->key, this->value);
}

FileSystemPreferences$Put::FileSystemPreferences$Put() {
}

$Class* FileSystemPreferences$Put::load$($String* name, bool initialize) {
	$loadClass(FileSystemPreferences$Put, name, initialize, &_FileSystemPreferences$Put_ClassInfo_, allocate$FileSystemPreferences$Put);
	return class$;
}

$Class* FileSystemPreferences$Put::class$ = nullptr;

		} // prefs
	} // util
} // java