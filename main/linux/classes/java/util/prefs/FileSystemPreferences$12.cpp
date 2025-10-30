#include <java/util/prefs/FileSystemPreferences$12.h>

#include <java/util/prefs/FileSystemPreferences.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $FileSystemPreferences = ::java::util::prefs::FileSystemPreferences;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _FileSystemPreferences$12_FieldInfo_[] = {
	{"this$0", "Ljava/util/prefs/FileSystemPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(FileSystemPreferences$12, this$0)},
	{}
};

$MethodInfo _FileSystemPreferences$12_MethodInfo_[] = {
	{"<init>", "(Ljava/util/prefs/FileSystemPreferences;)V", nullptr, 0, $method(static_cast<void(FileSystemPreferences$12::*)($FileSystemPreferences*)>(&FileSystemPreferences$12::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.util.prefs.BackingStoreException"},
	{}
};

$EnclosingMethodInfo _FileSystemPreferences$12_EnclosingMethodInfo_ = {
	"java.util.prefs.FileSystemPreferences",
	"syncSpi",
	"()V"
};

$InnerClassInfo _FileSystemPreferences$12_InnerClassesInfo_[] = {
	{"java.util.prefs.FileSystemPreferences$12", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileSystemPreferences$12_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.FileSystemPreferences$12",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_FileSystemPreferences$12_FieldInfo_,
	_FileSystemPreferences$12_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
	&_FileSystemPreferences$12_EnclosingMethodInfo_,
	_FileSystemPreferences$12_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.FileSystemPreferences"
};

$Object* allocate$FileSystemPreferences$12($Class* clazz) {
	return $of($alloc(FileSystemPreferences$12));
}

void FileSystemPreferences$12::init$($FileSystemPreferences* this$0) {
	$set(this, this$0, this$0);
}

$Object* FileSystemPreferences$12::run() {
	this->this$0->syncSpiPrivileged();
	return $of(nullptr);
}

FileSystemPreferences$12::FileSystemPreferences$12() {
}

$Class* FileSystemPreferences$12::load$($String* name, bool initialize) {
	$loadClass(FileSystemPreferences$12, name, initialize, &_FileSystemPreferences$12_ClassInfo_, allocate$FileSystemPreferences$12);
	return class$;
}

$Class* FileSystemPreferences$12::class$ = nullptr;

		} // prefs
	} // util
} // java