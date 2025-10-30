#include <java/util/prefs/XmlSupport$Resolver.h>

#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/util/prefs/XmlSupport.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XmlSupport = ::java::util::prefs::XmlSupport;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXException = ::org::xml::sax::SAXException;

namespace java {
	namespace util {
		namespace prefs {

$MethodInfo _XmlSupport$Resolver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XmlSupport$Resolver::*)()>(&XmlSupport$Resolver::init$))},
	{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC, nullptr, "org.xml.sax.SAXException"},
	{}
};

$InnerClassInfo _XmlSupport$Resolver_InnerClassesInfo_[] = {
	{"java.util.prefs.XmlSupport$Resolver", "java.util.prefs.XmlSupport", "Resolver", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XmlSupport$Resolver_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.XmlSupport$Resolver",
	"java.lang.Object",
	"org.xml.sax.EntityResolver",
	nullptr,
	_XmlSupport$Resolver_MethodInfo_,
	nullptr,
	nullptr,
	_XmlSupport$Resolver_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.prefs.XmlSupport"
};

$Object* allocate$XmlSupport$Resolver($Class* clazz) {
	return $of($alloc(XmlSupport$Resolver));
}

void XmlSupport$Resolver::init$() {
}

$InputSource* XmlSupport$Resolver::resolveEntity($String* pid, $String* sid) {
	$useLocalCurrentObjectStackCache();
	if ($nc(sid)->equals("http://java.sun.com/dtd/preferences.dtd"_s)) {
		$var($InputSource, is, nullptr);
		$assign(is, $new($InputSource, static_cast<$Reader*>($$new($StringReader, "<?xml version=\"1.0\" encoding=\"UTF-8\"?><!-- DTD for preferences --><!ELEMENT preferences (root) ><!ATTLIST preferences EXTERNAL_XML_VERSION CDATA \"0.0\"  ><!ELEMENT root (map, node*) ><!ATTLIST root          type (system|user) #REQUIRED ><!ELEMENT node (map, node*) ><!ATTLIST node          name CDATA #REQUIRED ><!ELEMENT map (entry*) ><!ATTLIST map  MAP_XML_VERSION CDATA \"0.0\"  ><!ELEMENT entry EMPTY ><!ATTLIST entry          key CDATA #REQUIRED          value CDATA #REQUIRED >"_s))));
		is->setSystemId("http://java.sun.com/dtd/preferences.dtd"_s);
		return is;
	}
	$throwNew($SAXException, $$str({"Invalid system identifier: "_s, sid}));
}

XmlSupport$Resolver::XmlSupport$Resolver() {
}

$Class* XmlSupport$Resolver::load$($String* name, bool initialize) {
	$loadClass(XmlSupport$Resolver, name, initialize, &_XmlSupport$Resolver_ClassInfo_, allocate$XmlSupport$Resolver);
	return class$;
}

$Class* XmlSupport$Resolver::class$ = nullptr;

		} // prefs
	} // util
} // java