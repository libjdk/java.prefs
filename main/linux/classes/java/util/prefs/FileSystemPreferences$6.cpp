#include <java/util/prefs/FileSystemPreferences$6.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/InputStream.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map.h>
#include <java/util/TreeMap.h>
#include <java/util/prefs/BackingStoreException.h>
#include <java/util/prefs/FileSystemPreferences.h>
#include <java/util/prefs/InvalidPreferencesFormatException.h>
#include <java/util/prefs/XmlSupport.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $AbstractMap = ::java::util::AbstractMap;
using $Map = ::java::util::Map;
using $TreeMap = ::java::util::TreeMap;
using $BackingStoreException = ::java::util::prefs::BackingStoreException;
using $FileSystemPreferences = ::java::util::prefs::FileSystemPreferences;
using $InvalidPreferencesFormatException = ::java::util::prefs::InvalidPreferencesFormatException;
using $XmlSupport = ::java::util::prefs::XmlSupport;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _FileSystemPreferences$6_FieldInfo_[] = {
	{"this$0", "Ljava/util/prefs/FileSystemPreferences;", nullptr, $FINAL | $SYNTHETIC, $field(FileSystemPreferences$6, this$0)},
	{}
};

$MethodInfo _FileSystemPreferences$6_MethodInfo_[] = {
	{"<init>", "(Ljava/util/prefs/FileSystemPreferences;)V", nullptr, 0, $method(static_cast<void(FileSystemPreferences$6::*)($FileSystemPreferences*)>(&FileSystemPreferences$6::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.util.prefs.BackingStoreException"},
	{}
};

$EnclosingMethodInfo _FileSystemPreferences$6_EnclosingMethodInfo_ = {
	"java.util.prefs.FileSystemPreferences",
	"loadCache",
	"()V"
};

$InnerClassInfo _FileSystemPreferences$6_InnerClassesInfo_[] = {
	{"java.util.prefs.FileSystemPreferences$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileSystemPreferences$6_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.FileSystemPreferences$6",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_FileSystemPreferences$6_FieldInfo_,
	_FileSystemPreferences$6_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
	&_FileSystemPreferences$6_EnclosingMethodInfo_,
	_FileSystemPreferences$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.FileSystemPreferences"
};

$Object* allocate$FileSystemPreferences$6($Class* clazz) {
	return $of($alloc(FileSystemPreferences$6));
}

void FileSystemPreferences$6::init$($FileSystemPreferences* this$0) {
	$set(this, this$0, this$0);
}

$Object* FileSystemPreferences$6::run() {
	$useLocalCurrentObjectStackCache();
	$var($Map, m, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap))));
	int64_t newLastSyncTime = 0;
	try {
		newLastSyncTime = $nc(this->this$0->prefsFile)->lastModified();
		{
			$var($FileInputStream, fis, $new($FileInputStream, this->this$0->prefsFile));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$XmlSupport::importMap(fis, m);
					} catch ($Throwable& t$) {
						try {
							fis->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					fis->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	} catch ($Exception& e) {
		if ($instanceOf($InvalidPreferencesFormatException, e)) {
			$nc($($FileSystemPreferences::getLogger()))->warning($$str({"Invalid preferences format in "_s, $($nc(this->this$0->prefsFile)->getPath())}));
			$nc(this->this$0->prefsFile)->renameTo($$new($File, $($nc(this->this$0->prefsFile)->getParentFile()), "IncorrectFormatPrefs.xml"_s));
			$assign(m, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap))));
		} else if ($instanceOf($FileNotFoundException, e)) {
			$nc($($FileSystemPreferences::getLogger()))->warning($$str({"Prefs file removed in background "_s, $($nc(this->this$0->prefsFile)->getPath())}));
		} else {
			$throwNew($BackingStoreException, static_cast<$Throwable*>(e));
		}
	}
	$set(this->this$0, prefsCache, m);
	this->this$0->lastSyncTime = newLastSyncTime;
	return $of(nullptr);
}

FileSystemPreferences$6::FileSystemPreferences$6() {
}

$Class* FileSystemPreferences$6::load$($String* name, bool initialize) {
	$loadClass(FileSystemPreferences$6, name, initialize, &_FileSystemPreferences$6_ClassInfo_, allocate$FileSystemPreferences$6);
	return class$;
}

$Class* FileSystemPreferences$6::class$ = nullptr;

		} // prefs
	} // util
} // java