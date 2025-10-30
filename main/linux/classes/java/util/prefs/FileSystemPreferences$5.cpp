#include <java/util/prefs/FileSystemPreferences$5.h>

#include <java/io/File.h>
#include <java/util/prefs/FileSystemPreferences.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractPreferences = ::java::util::prefs::AbstractPreferences;
using $FileSystemPreferences = ::java::util::prefs::FileSystemPreferences;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _FileSystemPreferences$5_FieldInfo_[] = {
	{"this$0", "Ljava/util/prefs/FileSystemPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(FileSystemPreferences$5, this$0)},
	{}
};

$MethodInfo _FileSystemPreferences$5_MethodInfo_[] = {
	{"<init>", "(Ljava/util/prefs/FileSystemPreferences;)V", nullptr, 0, $method(static_cast<void(FileSystemPreferences$5::*)($FileSystemPreferences*)>(&FileSystemPreferences$5::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FileSystemPreferences$5_EnclosingMethodInfo_ = {
	"java.util.prefs.FileSystemPreferences",
	"<init>",
	"(Ljava/util/prefs/FileSystemPreferences;Ljava/lang/String;)V"
};

$InnerClassInfo _FileSystemPreferences$5_InnerClassesInfo_[] = {
	{"java.util.prefs.FileSystemPreferences$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileSystemPreferences$5_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.FileSystemPreferences$5",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_FileSystemPreferences$5_FieldInfo_,
	_FileSystemPreferences$5_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_FileSystemPreferences$5_EnclosingMethodInfo_,
	_FileSystemPreferences$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.FileSystemPreferences"
};

$Object* allocate$FileSystemPreferences$5($Class* clazz) {
	return $of($alloc(FileSystemPreferences$5));
}

void FileSystemPreferences$5::init$($FileSystemPreferences* this$0) {
	$set(this, this$0, this$0);
}

$Object* FileSystemPreferences$5::run() {
	this->this$0->newNode = !$nc(this->this$0->dir)->exists();
	return $of(nullptr);
}

FileSystemPreferences$5::FileSystemPreferences$5() {
}

$Class* FileSystemPreferences$5::load$($String* name, bool initialize) {
	$loadClass(FileSystemPreferences$5, name, initialize, &_FileSystemPreferences$5_ClassInfo_, allocate$FileSystemPreferences$5);
	return class$;
}

$Class* FileSystemPreferences$5::class$ = nullptr;

		} // prefs
	} // util
} // java