#ifndef _java_util_prefs_XmlSupport$EH_h_
#define _java_util_prefs_XmlSupport$EH_h_
//$ class java.util.prefs.XmlSupport$EH
//$ extends org.xml.sax.ErrorHandler

#include <org/xml/sax/ErrorHandler.h>

namespace org {
	namespace xml {
		namespace sax {
			class SAXParseException;
		}
	}
}

namespace java {
	namespace util {
		namespace prefs {

class XmlSupport$EH : public ::org::xml::sax::ErrorHandler {
	$class(XmlSupport$EH, $NO_CLASS_INIT, ::org::xml::sax::ErrorHandler)
public:
	XmlSupport$EH();
	void init$();
	virtual void error(::org::xml::sax::SAXParseException* x) override;
	virtual void fatalError(::org::xml::sax::SAXParseException* x) override;
	virtual void warning(::org::xml::sax::SAXParseException* x) override;
};

		} // prefs
	} // util
} // java

#endif // _java_util_prefs_XmlSupport$EH_h_