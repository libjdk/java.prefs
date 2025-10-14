#ifndef _java_util_prefs_XmlSupport_h_
#define _java_util_prefs_XmlSupport_h_
//$ class java.util.prefs.XmlSupport
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EXTERNAL_XML_VERSION")
#undef EXTERNAL_XML_VERSION
#pragma push_macro("MAP_XML_VERSION")
#undef MAP_XML_VERSION
#pragma push_macro("PREFS_DTD")
#undef PREFS_DTD
#pragma push_macro("PREFS_DTD_URI")
#undef PREFS_DTD_URI

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace prefs {
			class Preferences;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class Element;
		}
	}
}

namespace java {
	namespace util {
		namespace prefs {

class XmlSupport : public ::java::lang::Object {
	$class(XmlSupport, 0, ::java::lang::Object)
public:
	XmlSupport();
	void init$();
	static void ImportPrefs(::java::util::prefs::Preferences* prefsNode, ::org::w3c::dom::Element* map);
	static void ImportSubtree(::java::util::prefs::Preferences* prefsNode, ::org::w3c::dom::Element* xmlNode);
	static ::org::w3c::dom::Document* createPrefsDoc($String* qname);
	static void export$(::java::io::OutputStream* os, ::java::util::prefs::Preferences* p, bool subTree);
	static void exportMap(::java::io::OutputStream* os, ::java::util::Map* map);
	static void importMap(::java::io::InputStream* is, ::java::util::Map* m);
	static void importPreferences(::java::io::InputStream* is);
	static ::org::w3c::dom::Document* loadPrefsDoc(::java::io::InputStream* in);
	static void putPreferencesInXml(::org::w3c::dom::Element* elt, ::org::w3c::dom::Document* doc, ::java::util::prefs::Preferences* prefs, bool subTree);
	static void writeDoc(::org::w3c::dom::Document* doc, ::java::io::OutputStream* out);
	static $String* PREFS_DTD_URI;
	static $String* PREFS_DTD;
	static $String* EXTERNAL_XML_VERSION;
	static $String* MAP_XML_VERSION;
};

		} // prefs
	} // util
} // java

#pragma pop_macro("EXTERNAL_XML_VERSION")
#pragma pop_macro("MAP_XML_VERSION")
#pragma pop_macro("PREFS_DTD")
#pragma pop_macro("PREFS_DTD_URI")

#endif // _java_util_prefs_XmlSupport_h_