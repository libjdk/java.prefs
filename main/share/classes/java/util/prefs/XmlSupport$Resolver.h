#ifndef _java_util_prefs_XmlSupport$Resolver_h_
#define _java_util_prefs_XmlSupport$Resolver_h_
//$ class java.util.prefs.XmlSupport$Resolver
//$ extends org.xml.sax.EntityResolver

#include <org/xml/sax/EntityResolver.h>

namespace org {
	namespace xml {
		namespace sax {
			class InputSource;
		}
	}
}

namespace java {
	namespace util {
		namespace prefs {

class XmlSupport$Resolver : public ::org::xml::sax::EntityResolver {
	$class(XmlSupport$Resolver, $NO_CLASS_INIT, ::org::xml::sax::EntityResolver)
public:
	XmlSupport$Resolver();
	void init$();
	virtual ::org::xml::sax::InputSource* resolveEntity($String* pid, $String* sid) override;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_XmlSupport$Resolver_h_