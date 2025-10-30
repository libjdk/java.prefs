#include <java/util/prefs/FileSystemPreferences$8.h>

#include <java/io/File.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/prefs/FileSystemPreferences.h>
#include <jcpp.h>

#undef EMPTY_STRING_ARRAY

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $FileSystemPreferences = ::java::util::prefs::FileSystemPreferences;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _FileSystemPreferences$8_FieldInfo_[] = {
	{"this$0", "Ljava/util/prefs/FileSystemPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(FileSystemPreferences$8, this$0)},
	{}
};

$MethodInfo _FileSystemPreferences$8_MethodInfo_[] = {
	{"<init>", "(Ljava/util/prefs/FileSystemPreferences;)V", nullptr, 0, $method(static_cast<void(FileSystemPreferences$8::*)($FileSystemPreferences*)>(&FileSystemPreferences$8::init$))},
	{"run", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FileSystemPreferences$8_EnclosingMethodInfo_ = {
	"java.util.prefs.FileSystemPreferences",
	"childrenNamesSpi",
	"()[Ljava/lang/String;"
};

$InnerClassInfo _FileSystemPreferences$8_InnerClassesInfo_[] = {
	{"java.util.prefs.FileSystemPreferences$8", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileSystemPreferences$8_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.FileSystemPreferences$8",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_FileSystemPreferences$8_FieldInfo_,
	_FileSystemPreferences$8_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<[Ljava/lang/String;>;",
	&_FileSystemPreferences$8_EnclosingMethodInfo_,
	_FileSystemPreferences$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.FileSystemPreferences"
};

$Object* allocate$FileSystemPreferences$8($Class* clazz) {
	return $of($alloc(FileSystemPreferences$8));
}

void FileSystemPreferences$8::init$($FileSystemPreferences* this$0) {
	$set(this, this$0, this$0);
}

$Object* FileSystemPreferences$8::run() {
	$useLocalCurrentObjectStackCache();
	$var($List, result, $new($ArrayList));
	$var($FileArray, dirContents, $nc(this->this$0->dir)->listFiles());
	if (dirContents != nullptr) {
		for (int32_t i = 0; i < dirContents->length; ++i) {
			if ($nc(dirContents->get(i))->isDirectory()) {
				result->add($($FileSystemPreferences::nodeName($($nc(dirContents->get(i))->getName()))));
			}
		}
	}
	$init($FileSystemPreferences);
	return $of($fcast($StringArray, result->toArray($FileSystemPreferences::EMPTY_STRING_ARRAY)));
}

FileSystemPreferences$8::FileSystemPreferences$8() {
}

$Class* FileSystemPreferences$8::load$($String* name, bool initialize) {
	$loadClass(FileSystemPreferences$8, name, initialize, &_FileSystemPreferences$8_ClassInfo_, allocate$FileSystemPreferences$8);
	return class$;
}

$Class* FileSystemPreferences$8::class$ = nullptr;

		} // prefs
	} // util
} // java