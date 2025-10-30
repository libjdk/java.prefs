#include <java/util/prefs/XmlSupport$EH.h>

#include <java/util/prefs/XmlSupport.h>
#include <org/xml/sax/SAXParseException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $XmlSupport = ::java::util::prefs::XmlSupport;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $SAXParseException = ::org::xml::sax::SAXParseException;

namespace java {
	namespace util {
		namespace prefs {

$MethodInfo _XmlSupport$EH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XmlSupport$EH::*)()>(&XmlSupport$EH::init$))},
	{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"fatalError", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{"warning", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{}
};

$InnerClassInfo _XmlSupport$EH_InnerClassesInfo_[] = {
	{"java.util.prefs.XmlSupport$EH", "java.util.prefs.XmlSupport", "EH", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XmlSupport$EH_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.XmlSupport$EH",
	"java.lang.Object",
	"org.xml.sax.ErrorHandler",
	nullptr,
	_XmlSupport$EH_MethodInfo_,
	nullptr,
	nullptr,
	_XmlSupport$EH_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.XmlSupport"
};

$Object* allocate$XmlSupport$EH($Class* clazz) {
	return $of($alloc(XmlSupport$EH));
}

void XmlSupport$EH::init$() {
}

void XmlSupport$EH::error($SAXParseException* x) {
	$throw(x);
}

void XmlSupport$EH::fatalError($SAXParseException* x) {
	$throw(x);
}

void XmlSupport$EH::warning($SAXParseException* x) {
	$throw(x);
}

XmlSupport$EH::XmlSupport$EH() {
}

$Class* XmlSupport$EH::load$($String* name, bool initialize) {
	$loadClass(XmlSupport$EH, name, initialize, &_XmlSupport$EH_ClassInfo_, allocate$XmlSupport$EH);
	return class$;
}

$Class* XmlSupport$EH::class$ = nullptr;

		} // prefs
	} // util
} // java