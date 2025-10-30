#include <java/util/prefs/FileSystemPreferences$7.h>

#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/util/Map.h>
#include <java/util/prefs/BackingStoreException.h>
#include <java/util/prefs/FileSystemPreferences.h>
#include <java/util/prefs/XmlSupport.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Map = ::java::util::Map;
using $BackingStoreException = ::java::util::prefs::BackingStoreException;
using $FileSystemPreferences = ::java::util::prefs::FileSystemPreferences;
using $XmlSupport = ::java::util::prefs::XmlSupport;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _FileSystemPreferences$7_FieldInfo_[] = {
	{"this$0", "Ljava/util/prefs/FileSystemPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(FileSystemPreferences$7, this$0)},
	{}
};

$MethodInfo _FileSystemPreferences$7_MethodInfo_[] = {
	{"<init>", "(Ljava/util/prefs/FileSystemPreferences;)V", nullptr, 0, $method(static_cast<void(FileSystemPreferences$7::*)($FileSystemPreferences*)>(&FileSystemPreferences$7::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.util.prefs.BackingStoreException"},
	{}
};

$EnclosingMethodInfo _FileSystemPreferences$7_EnclosingMethodInfo_ = {
	"java.util.prefs.FileSystemPreferences",
	"writeBackCache",
	"()V"
};

$InnerClassInfo _FileSystemPreferences$7_InnerClassesInfo_[] = {
	{"java.util.prefs.FileSystemPreferences$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileSystemPreferences$7_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.FileSystemPreferences$7",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_FileSystemPreferences$7_FieldInfo_,
	_FileSystemPreferences$7_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
	&_FileSystemPreferences$7_EnclosingMethodInfo_,
	_FileSystemPreferences$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.FileSystemPreferences"
};

$Object* allocate$FileSystemPreferences$7($Class* clazz) {
	return $of($alloc(FileSystemPreferences$7));
}

void FileSystemPreferences$7::init$($FileSystemPreferences* this$0) {
	$set(this, this$0, this$0);
}

$Object* FileSystemPreferences$7::run() {
	$useLocalCurrentObjectStackCache();
	try {
		bool var$0 = !$nc(this->this$0->dir)->exists();
		if (var$0 && !$nc(this->this$0->dir)->mkdirs()) {
			$throwNew($BackingStoreException, $$str({this->this$0->dir, " create failed."_s}));
		}
		{
			$var($FileOutputStream, fos, $new($FileOutputStream, this->this$0->tmpFile));
			{
				$var($Throwable, var$1, nullptr);
				try {
					try {
						$XmlSupport::exportMap(fos, this->this$0->prefsCache);
					} catch ($Throwable& t$) {
						try {
							fos->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					fos->close();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		}
		if (!$nc(this->this$0->tmpFile)->renameTo(this->this$0->prefsFile)) {
			$throwNew($BackingStoreException, $$str({"Can\'t rename "_s, this->this$0->tmpFile, " to "_s, this->this$0->prefsFile}));
		}
	} catch ($Exception& e) {
		if ($instanceOf($BackingStoreException, e)) {
			$throw($cast($BackingStoreException, e));
		}
		$throwNew($BackingStoreException, static_cast<$Throwable*>(e));
	}
	return $of(nullptr);
}

FileSystemPreferences$7::FileSystemPreferences$7() {
}

$Class* FileSystemPreferences$7::load$($String* name, bool initialize) {
	$loadClass(FileSystemPreferences$7, name, initialize, &_FileSystemPreferences$7_ClassInfo_, allocate$FileSystemPreferences$7);
	return class$;
}

$Class* FileSystemPreferences$7::class$ = nullptr;

		} // prefs
	} // util
} // java