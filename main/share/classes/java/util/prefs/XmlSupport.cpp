#include <java/util/prefs/XmlSupport.h>

#include <java/io/BufferedWriter.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Writer.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/prefs/AbstractPreferences.h>
#include <java/util/prefs/InvalidPreferencesFormatException.h>
#include <java/util/prefs/Preferences.h>
#include <java/util/prefs/XmlSupport$EH.h>
#include <java/util/prefs/XmlSupport$Resolver.h>
#include <javax/xml/parsers/DocumentBuilder.h>
#include <javax/xml/parsers/DocumentBuilderFactory.h>
#include <javax/xml/parsers/ParserConfigurationException.h>
#include <javax/xml/transform/OutputKeys.h>
#include <javax/xml/transform/Result.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/Transformer.h>
#include <javax/xml/transform/TransformerException.h>
#include <javax/xml/transform/TransformerFactory.h>
#include <javax/xml/transform/dom/DOMSource.h>
#include <javax/xml/transform/stream/StreamResult.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef DOCTYPE_SYSTEM
#undef EXTERNAL_XML_VERSION
#undef INDENT
#undef MAP_XML_VERSION
#undef PREFS_DTD
#undef PREFS_DTD_URI
#undef UTF_8

using $PreferencesArray = $Array<::java::util::prefs::Preferences>;
using $BufferedWriter = ::java::io::BufferedWriter;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Writer = ::java::io::Writer;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $AbstractPreferences = ::java::util::prefs::AbstractPreferences;
using $InvalidPreferencesFormatException = ::java::util::prefs::InvalidPreferencesFormatException;
using $Preferences = ::java::util::prefs::Preferences;
using $XmlSupport$EH = ::java::util::prefs::XmlSupport$EH;
using $XmlSupport$Resolver = ::java::util::prefs::XmlSupport$Resolver;
using $DocumentBuilder = ::javax::xml::parsers::DocumentBuilder;
using $DocumentBuilderFactory = ::javax::xml::parsers::DocumentBuilderFactory;
using $ParserConfigurationException = ::javax::xml::parsers::ParserConfigurationException;
using $OutputKeys = ::javax::xml::transform::OutputKeys;
using $Result = ::javax::xml::transform::Result;
using $Source = ::javax::xml::transform::Source;
using $Transformer = ::javax::xml::transform::Transformer;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $TransformerFactory = ::javax::xml::transform::TransformerFactory;
using $DOMSource = ::javax::xml::transform::dom::DOMSource;
using $StreamResult = ::javax::xml::transform::stream::StreamResult;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $Document = ::org::w3c::dom::Document;
using $DocumentType = ::org::w3c::dom::DocumentType;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXException = ::org::xml::sax::SAXException;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _XmlSupport_FieldInfo_[] = {
	{"PREFS_DTD_URI", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XmlSupport, PREFS_DTD_URI)},
	{"PREFS_DTD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XmlSupport, PREFS_DTD)},
	{"EXTERNAL_XML_VERSION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XmlSupport, EXTERNAL_XML_VERSION)},
	{"MAP_XML_VERSION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XmlSupport, MAP_XML_VERSION)},
	{}
};

$MethodInfo _XmlSupport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XmlSupport::*)()>(&XmlSupport::init$))},
	{"ImportPrefs", "(Ljava/util/prefs/Preferences;Lorg/w3c/dom/Element;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Preferences*,$Element*)>(&XmlSupport::ImportPrefs))},
	{"ImportSubtree", "(Ljava/util/prefs/Preferences;Lorg/w3c/dom/Element;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Preferences*,$Element*)>(&XmlSupport::ImportSubtree))},
	{"createPrefsDoc", "(Ljava/lang/String;)Lorg/w3c/dom/Document;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Document*(*)($String*)>(&XmlSupport::createPrefsDoc))},
	{"export", "(Ljava/io/OutputStream;Ljava/util/prefs/Preferences;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($OutputStream*,$Preferences*,bool)>(&XmlSupport::export$)), "java.io.IOException,java.util.prefs.BackingStoreException"},
	{"exportMap", "(Ljava/io/OutputStream;Ljava/util/Map;)V", "(Ljava/io/OutputStream;Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)V", $STATIC, $method(static_cast<void(*)($OutputStream*,$Map*)>(&XmlSupport::exportMap)), "java.io.IOException"},
	{"importMap", "(Ljava/io/InputStream;Ljava/util/Map;)V", "(Ljava/io/InputStream;Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)V", $STATIC, $method(static_cast<void(*)($InputStream*,$Map*)>(&XmlSupport::importMap)), "java.io.IOException,java.util.prefs.InvalidPreferencesFormatException"},
	{"importPreferences", "(Ljava/io/InputStream;)V", nullptr, $STATIC, $method(static_cast<void(*)($InputStream*)>(&XmlSupport::importPreferences)), "java.io.IOException,java.util.prefs.InvalidPreferencesFormatException"},
	{"loadPrefsDoc", "(Ljava/io/InputStream;)Lorg/w3c/dom/Document;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Document*(*)($InputStream*)>(&XmlSupport::loadPrefsDoc)), "org.xml.sax.SAXException,java.io.IOException"},
	{"putPreferencesInXml", "(Lorg/w3c/dom/Element;Lorg/w3c/dom/Document;Ljava/util/prefs/Preferences;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Element*,$Document*,$Preferences*,bool)>(&XmlSupport::putPreferencesInXml)), "java.util.prefs.BackingStoreException"},
	{"writeDoc", "(Lorg/w3c/dom/Document;Ljava/io/OutputStream;)V", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<void(*)($Document*,$OutputStream*)>(&XmlSupport::writeDoc)), "java.io.IOException"},
	{}
};

$InnerClassInfo _XmlSupport_InnerClassesInfo_[] = {
	{"java.util.prefs.XmlSupport$EH", "java.util.prefs.XmlSupport", "EH", $PRIVATE | $STATIC},
	{"java.util.prefs.XmlSupport$Resolver", "java.util.prefs.XmlSupport", "Resolver", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XmlSupport_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.XmlSupport",
	"java.lang.Object",
	nullptr,
	_XmlSupport_FieldInfo_,
	_XmlSupport_MethodInfo_,
	nullptr,
	nullptr,
	_XmlSupport_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.prefs.XmlSupport$EH,java.util.prefs.XmlSupport$Resolver"
};

$Object* allocate$XmlSupport($Class* clazz) {
	return $of($alloc(XmlSupport));
}

$String* XmlSupport::PREFS_DTD_URI = nullptr;
$String* XmlSupport::PREFS_DTD = nullptr;
$String* XmlSupport::EXTERNAL_XML_VERSION = nullptr;
$String* XmlSupport::MAP_XML_VERSION = nullptr;

void XmlSupport::init$() {
}

void XmlSupport::export$($OutputStream* os, $Preferences* p, bool subTree) {
	$init(XmlSupport);
	$useLocalCurrentObjectStackCache();
	if ($nc(($cast($AbstractPreferences, p)))->isRemoved()) {
		$throwNew($IllegalStateException, "Node has been removed"_s);
	}
	$var($Document, doc, createPrefsDoc("preferences"_s));
	$var($Element, preferences, $nc(doc)->getDocumentElement());
	$nc(preferences)->setAttribute("EXTERNAL_XML_VERSION"_s, XmlSupport::EXTERNAL_XML_VERSION);
	$var($Element, xmlRoot, $cast($Element, preferences->appendChild($(doc->createElement("root"_s)))));
	$nc(xmlRoot)->setAttribute("type"_s, ($nc(p)->isUserNode() ? "user"_s : "system"_s));
	$var($List, ancestors, $new($ArrayList));
	{
		$var($Preferences, kid, p);
		$var($Preferences, dad, $nc(kid)->parent());
		for (; dad != nullptr; $assign(kid, dad), $assign(dad, kid->parent())) {
			ancestors->add(kid);
		}
	}
	$var($Element, e, xmlRoot);
	for (int32_t i = ancestors->size() - 1; i >= 0; --i) {
		$nc(e)->appendChild($(doc->createElement("map"_s)));
		$assign(e, $cast($Element, e->appendChild($(doc->createElement("node"_s)))));
		e->setAttribute("name"_s, $($nc(($cast($Preferences, $(ancestors->get(i)))))->name()));
	}
	putPreferencesInXml(e, doc, p, subTree);
	writeDoc(doc, os);
}

void XmlSupport::putPreferencesInXml($Element* elt, $Document* doc, $Preferences* prefs, bool subTree) {
	$init(XmlSupport);
	$useLocalCurrentObjectStackCache();
	$var($PreferencesArray, kidsCopy, nullptr);
	$var($StringArray, kidNames, nullptr);
	$synchronized($nc(($cast($AbstractPreferences, prefs)))->lock) {
		if (($cast($AbstractPreferences, prefs))->isRemoved()) {
			$nc($($nc(elt)->getParentNode()))->removeChild(elt);
			return;
		}
		$var($StringArray, keys, $nc(prefs)->keys());
		$var($Element, map, $cast($Element, $nc(elt)->appendChild($($nc(doc)->createElement("map"_s)))));
		{
			$var($StringArray, arr$, keys);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, key, arr$->get(i$));
				{
					$var($Element, entry, $cast($Element, $nc(map)->appendChild($($nc(doc)->createElement("entry"_s)))));
					$nc(entry)->setAttribute("key"_s, key);
					entry->setAttribute("value"_s, $(prefs->get(key, nullptr)));
				}
			}
		}
		if (subTree) {
			$assign(kidNames, prefs->childrenNames());
			$assign(kidsCopy, $new($PreferencesArray, $nc(kidNames)->length));
			for (int32_t i = 0; i < kidNames->length; ++i) {
				kidsCopy->set(i, $(prefs->node(kidNames->get(i))));
			}
		}
	}
	if (subTree) {
		for (int32_t i = 0; i < $nc(kidNames)->length; ++i) {
			$var($Element, xmlKid, $cast($Element, $nc(elt)->appendChild($($nc(doc)->createElement("node"_s)))));
			$nc(xmlKid)->setAttribute("name"_s, kidNames->get(i));
			putPreferencesInXml(xmlKid, doc, $nc(kidsCopy)->get(i), subTree);
		}
	}
}

void XmlSupport::importPreferences($InputStream* is) {
	$init(XmlSupport);
	$useLocalCurrentObjectStackCache();
	try {
		$var($Document, doc, loadPrefsDoc(is));
		$var($String, xmlVersion, $nc($($nc(doc)->getDocumentElement()))->getAttribute("EXTERNAL_XML_VERSION"_s));
		if ($nc(xmlVersion)->compareTo(XmlSupport::EXTERNAL_XML_VERSION) > 0) {
			$throwNew($InvalidPreferencesFormatException, $$str({"Exported preferences file format version "_s, xmlVersion, " is not supported. This java installation can read versions "_s, XmlSupport::EXTERNAL_XML_VERSION, " or older. You may need to install a newer version of JDK."_s}));
		}
		$var($Element, xmlRoot, $cast($Element, $nc($($nc($(doc->getDocumentElement()))->getChildNodes()))->item(0)));
		$var($Preferences, prefsRoot, $nc($($nc(xmlRoot)->getAttribute("type"_s)))->equals("user"_s) ? $Preferences::userRoot() : $Preferences::systemRoot());
		ImportSubtree(prefsRoot, xmlRoot);
	} catch ($SAXException& e) {
		$throwNew($InvalidPreferencesFormatException, static_cast<$Throwable*>(e));
	}
}

$Document* XmlSupport::createPrefsDoc($String* qname) {
	$init(XmlSupport);
	$useLocalCurrentObjectStackCache();
	try {
		$var($DOMImplementation, di, $nc($($nc($($DocumentBuilderFactory::newInstance()))->newDocumentBuilder()))->getDOMImplementation());
		$var($DocumentType, dt, $nc(di)->createDocumentType(qname, nullptr, XmlSupport::PREFS_DTD_URI));
		return di->createDocument(nullptr, qname, dt);
	} catch ($ParserConfigurationException& e) {
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

$Document* XmlSupport::loadPrefsDoc($InputStream* in) {
	$init(XmlSupport);
	$useLocalCurrentObjectStackCache();
	$var($DocumentBuilderFactory, dbf, $DocumentBuilderFactory::newInstance());
	$nc(dbf)->setIgnoringElementContentWhitespace(true);
	dbf->setValidating(true);
	dbf->setCoalescing(true);
	dbf->setIgnoringComments(true);
	try {
		$var($DocumentBuilder, db, dbf->newDocumentBuilder());
		$nc(db)->setEntityResolver($$new($XmlSupport$Resolver));
		db->setErrorHandler($$new($XmlSupport$EH));
		return db->parse($$new($InputSource, in));
	} catch ($ParserConfigurationException& e) {
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

void XmlSupport::writeDoc($Document* doc, $OutputStream* out) {
	$init(XmlSupport);
	$useLocalCurrentObjectStackCache();
	try {
		$var($TransformerFactory, tf, $TransformerFactory::newInstance());
		try {
			$nc(tf)->setAttribute("indent-number"_s, $($Integer::valueOf(2)));
		} catch ($IllegalArgumentException& iae) {
		}
		$var($Transformer, t, $nc(tf)->newTransformer());
		$init($OutputKeys);
		$nc(t)->setOutputProperty($OutputKeys::DOCTYPE_SYSTEM, $($nc($($nc(doc)->getDoctype()))->getSystemId()));
		t->setOutputProperty($OutputKeys::INDENT, "yes"_s);
		$var($Source, var$0, static_cast<$Source*>($new($DOMSource, doc)));
		$init($StandardCharsets);
		t->transform(var$0, $$new($StreamResult, static_cast<$Writer*>($$new($BufferedWriter, $$new($OutputStreamWriter, out, $StandardCharsets::UTF_8)))));
	} catch ($TransformerException& e) {
		$throwNew($AssertionError, $of(e));
	}
}

void XmlSupport::ImportSubtree($Preferences* prefsNode, $Element* xmlNode) {
	$init(XmlSupport);
	$useLocalCurrentObjectStackCache();
	$var($NodeList, xmlKids, $nc(xmlNode)->getChildNodes());
	int32_t numXmlKids = $nc(xmlKids)->getLength();
	$var($PreferencesArray, prefsKids, nullptr);
	$synchronized($nc(($cast($AbstractPreferences, prefsNode)))->lock) {
		if (($cast($AbstractPreferences, prefsNode))->isRemoved()) {
			return;
		}
		$var($Element, firstXmlKid, $cast($Element, xmlKids->item(0)));
		ImportPrefs(prefsNode, firstXmlKid);
		$assign(prefsKids, $new($PreferencesArray, numXmlKids - 1));
		for (int32_t i = 1; i < numXmlKids; ++i) {
			$var($Element, xmlKid, $cast($Element, xmlKids->item(i)));
			prefsKids->set(i - 1, $($nc(prefsNode)->node($($nc(xmlKid)->getAttribute("name"_s)))));
		}
	}
	for (int32_t i = 1; i < numXmlKids; ++i) {
		ImportSubtree($nc(prefsKids)->get(i - 1), $cast($Element, $(xmlKids->item(i))));
	}
}

void XmlSupport::ImportPrefs($Preferences* prefsNode, $Element* map) {
	$init(XmlSupport);
	$useLocalCurrentObjectStackCache();
	$var($NodeList, entries, $nc(map)->getChildNodes());
	{
		int32_t i = 0;
		int32_t numEntries = $nc(entries)->getLength();
		for (; i < numEntries; ++i) {
			$var($Element, entry, $cast($Element, entries->item(i)));
			$var($String, var$0, $nc(entry)->getAttribute("key"_s));
			$nc(prefsNode)->put(var$0, $(entry->getAttribute("value"_s)));
		}
	}
}

void XmlSupport::exportMap($OutputStream* os, $Map* map) {
	$init(XmlSupport);
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, createPrefsDoc("map"_s));
	$var($Element, xmlMap, $nc(doc)->getDocumentElement());
	$nc(xmlMap)->setAttribute("MAP_XML_VERSION"_s, XmlSupport::MAP_XML_VERSION);
	{
		$var($Iterator, i$, $nc($($nc(map)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				$var($Element, xe, $cast($Element, xmlMap->appendChild($(doc->createElement("entry"_s)))));
				$nc(xe)->setAttribute("key"_s, $cast($String, $($nc(e)->getKey())));
				xe->setAttribute("value"_s, $cast($String, $($nc(e)->getValue())));
			}
		}
	}
	writeDoc(doc, os);
}

void XmlSupport::importMap($InputStream* is, $Map* m) {
	$init(XmlSupport);
	$useLocalCurrentObjectStackCache();
	try {
		$var($Document, doc, loadPrefsDoc(is));
		$var($Element, xmlMap, $nc(doc)->getDocumentElement());
		$var($String, mapVersion, $nc(xmlMap)->getAttribute("MAP_XML_VERSION"_s));
		if ($nc(mapVersion)->compareTo(XmlSupport::MAP_XML_VERSION) > 0) {
			$throwNew($InvalidPreferencesFormatException, $$str({"Preferences map file format version "_s, mapVersion, " is not supported. This java installation can read versions "_s, XmlSupport::MAP_XML_VERSION, " or older. You may need to install a newer version of JDK."_s}));
		}
		$var($NodeList, entries, xmlMap->getChildNodes());
		{
			int32_t i = 0;
			int32_t numEntries = $nc(entries)->getLength();
			for (; i < numEntries; ++i) {
				$var($Element, entry, $cast($Element, entries->item(i)));
				$var($Object, var$0, $of($nc(entry)->getAttribute("key"_s)));
				$nc(m)->put(var$0, $(entry->getAttribute("value"_s)));
			}
		}
	} catch ($SAXException& e) {
		$throwNew($InvalidPreferencesFormatException, static_cast<$Throwable*>(e));
	}
}

XmlSupport::XmlSupport() {
}

void clinit$XmlSupport($Class* class$) {
	$assignStatic(XmlSupport::PREFS_DTD_URI, "http://java.sun.com/dtd/preferences.dtd"_s);
	$assignStatic(XmlSupport::PREFS_DTD, "<?xml version=\"1.0\" encoding=\"UTF-8\"?><!-- DTD for preferences --><!ELEMENT preferences (root) ><!ATTLIST preferences EXTERNAL_XML_VERSION CDATA \"0.0\"  ><!ELEMENT root (map, node*) ><!ATTLIST root          type (system|user) #REQUIRED ><!ELEMENT node (map, node*) ><!ATTLIST node          name CDATA #REQUIRED ><!ELEMENT map (entry*) ><!ATTLIST map  MAP_XML_VERSION CDATA \"0.0\"  ><!ELEMENT entry EMPTY ><!ATTLIST entry          key CDATA #REQUIRED          value CDATA #REQUIRED >"_s);
	$assignStatic(XmlSupport::EXTERNAL_XML_VERSION, "1.0"_s);
	$assignStatic(XmlSupport::MAP_XML_VERSION, "1.0"_s);
}

$Class* XmlSupport::load$($String* name, bool initialize) {
	$loadClass(XmlSupport, name, initialize, &_XmlSupport_ClassInfo_, clinit$XmlSupport, allocate$XmlSupport);
	return class$;
}

$Class* XmlSupport::class$ = nullptr;

		} // prefs
	} // util
} // java