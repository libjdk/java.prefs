#include <java/util/prefs/Base64.h>

#include <java/util/Arrays.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Random = ::java::util::Random;

namespace java {
	namespace util {
		namespace prefs {

$FieldInfo _Base64_FieldInfo_[] = {
	{"intToBase64", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Base64, intToBase64)},
	{"intToAltBase64", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Base64, intToAltBase64)},
	{"base64ToInt", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Base64, base64ToInt)},
	{"altBase64ToInt", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Base64, altBase64ToInt)},
	{}
};

$MethodInfo _Base64_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Base64::*)()>(&Base64::init$))},
	{"altBase64ToByteArray", "(Ljava/lang/String;)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)($String*)>(&Base64::altBase64ToByteArray))},
	{"base64ToByteArray", "(Ljava/lang/String;)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)($String*)>(&Base64::base64ToByteArray))},
	{"base64ToByteArray", "(Ljava/lang/String;Z)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($String*,bool)>(&Base64::base64ToByteArray))},
	{"base64toInt", "(C[B)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(char16_t,$bytes*)>(&Base64::base64toInt))},
	{"byteArrayToAltBase64", "([B)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($bytes*)>(&Base64::byteArrayToAltBase64))},
	{"byteArrayToBase64", "([B)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($bytes*)>(&Base64::byteArrayToBase64))},
	{"byteArrayToBase64", "([BZ)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($bytes*,bool)>(&Base64::byteArrayToBase64))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Base64::main))},
	{}
};

$ClassInfo _Base64_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.prefs.Base64",
	"java.lang.Object",
	nullptr,
	_Base64_FieldInfo_,
	_Base64_MethodInfo_
};

$Object* allocate$Base64($Class* clazz) {
	return $of($alloc(Base64));
}

$chars* Base64::intToBase64 = nullptr;
$chars* Base64::intToAltBase64 = nullptr;
$bytes* Base64::base64ToInt = nullptr;
$bytes* Base64::altBase64ToInt = nullptr;

void Base64::init$() {
}

$String* Base64::byteArrayToBase64($bytes* a) {
	$init(Base64);
	return byteArrayToBase64(a, false);
}

$String* Base64::byteArrayToAltBase64($bytes* a) {
	$init(Base64);
	return byteArrayToBase64(a, true);
}

$String* Base64::byteArrayToBase64($bytes* a, bool alternate) {
	$init(Base64);
	$useLocalCurrentObjectStackCache();
	int32_t aLen = $nc(a)->length;
	int32_t numFullGroups = aLen / 3;
	int32_t numBytesInPartialGroup = aLen - 3 * numFullGroups;
	int32_t resultLen = 4 * ((aLen + 2) / 3);
	$var($StringBuilder, result, $new($StringBuilder, resultLen));
	$var($chars, intToAlpha, alternate ? Base64::intToAltBase64 : Base64::intToBase64);
	int32_t inCursor = 0;
	for (int32_t i = 0; i < numFullGroups; ++i) {
		int32_t byte0 = (int32_t)(a->get(inCursor++) & (uint32_t)255);
		int32_t byte1 = (int32_t)(a->get(inCursor++) & (uint32_t)255);
		int32_t byte2 = (int32_t)(a->get(inCursor++) & (uint32_t)255);
		result->append($nc(intToAlpha)->get(byte0 >> 2));
		result->append($nc(intToAlpha)->get(((int32_t)((byte0 << 4) & (uint32_t)63)) | (byte1 >> 4)));
		result->append($nc(intToAlpha)->get(((int32_t)((byte1 << 2) & (uint32_t)63)) | (byte2 >> 6)));
		result->append($nc(intToAlpha)->get((int32_t)(byte2 & (uint32_t)63)));
	}
	if (numBytesInPartialGroup != 0) {
		int32_t byte0 = (int32_t)(a->get(inCursor++) & (uint32_t)255);
		result->append($nc(intToAlpha)->get(byte0 >> 2));
		if (numBytesInPartialGroup == 1) {
			result->append($nc(intToAlpha)->get((int32_t)((byte0 << 4) & (uint32_t)63)));
			result->append("=="_s);
		} else {
			int32_t byte1 = (int32_t)(a->get(inCursor++) & (uint32_t)255);
			result->append($nc(intToAlpha)->get(((int32_t)((byte0 << 4) & (uint32_t)63)) | (byte1 >> 4)));
			result->append($nc(intToAlpha)->get((int32_t)((byte1 << 2) & (uint32_t)63)));
			result->append(u'=');
		}
	}
	return result->toString();
}

$bytes* Base64::base64ToByteArray($String* s) {
	$init(Base64);
	return base64ToByteArray(s, false);
}

$bytes* Base64::altBase64ToByteArray($String* s) {
	$init(Base64);
	return base64ToByteArray(s, true);
}

$bytes* Base64::base64ToByteArray($String* s, bool alternate) {
	$init(Base64);
	$useLocalCurrentObjectStackCache();
	$var($bytes, alphaToInt, alternate ? Base64::altBase64ToInt : Base64::base64ToInt);
	int32_t sLen = $nc(s)->length();
	int32_t numGroups = sLen / 4;
	if (4 * numGroups != sLen) {
		$throwNew($IllegalArgumentException, "String length must be a multiple of four."_s);
	}
	int32_t missingBytesInLastGroup = 0;
	int32_t numFullGroups = numGroups;
	if (sLen != 0) {
		if (s->charAt(sLen - 1) == u'=') {
			++missingBytesInLastGroup;
			--numFullGroups;
		}
		if (s->charAt(sLen - 2) == u'=') {
			++missingBytesInLastGroup;
		}
	}
	$var($bytes, result, $new($bytes, 3 * numGroups - missingBytesInLastGroup));
	int32_t inCursor = 0;
	int32_t outCursor = 0;
	for (int32_t i = 0; i < numFullGroups; ++i) {
		int32_t ch0 = base64toInt(s->charAt(inCursor++), alphaToInt);
		int32_t ch1 = base64toInt(s->charAt(inCursor++), alphaToInt);
		int32_t ch2 = base64toInt(s->charAt(inCursor++), alphaToInt);
		int32_t ch3 = base64toInt(s->charAt(inCursor++), alphaToInt);
		result->set(outCursor++, (int8_t)((ch0 << 2) | (ch1 >> 4)));
		result->set(outCursor++, (int8_t)((ch1 << 4) | (ch2 >> 2)));
		result->set(outCursor++, (int8_t)((ch2 << 6) | ch3));
	}
	if (missingBytesInLastGroup != 0) {
		int32_t ch0 = base64toInt(s->charAt(inCursor++), alphaToInt);
		int32_t ch1 = base64toInt(s->charAt(inCursor++), alphaToInt);
		result->set(outCursor++, (int8_t)((ch0 << 2) | (ch1 >> 4)));
		if (missingBytesInLastGroup == 1) {
			int32_t ch2 = base64toInt(s->charAt(inCursor++), alphaToInt);
			result->set(outCursor++, (int8_t)((ch1 << 4) | (ch2 >> 2)));
		}
	}
	return result;
}

int32_t Base64::base64toInt(char16_t c, $bytes* alphaToInt) {
	$init(Base64);
	$useLocalCurrentObjectStackCache();
	int32_t result = $nc(alphaToInt)->get(c);
	if (result < 0) {
		$throwNew($IllegalArgumentException, $$str({"Illegal character "_s, $$str(c)}));
	}
	return result;
}

void Base64::main($StringArray* args) {
	$init(Base64);
	$useLocalCurrentObjectStackCache();
	int32_t numRuns = $Integer::parseInt($nc(args)->get(0));
	int32_t numBytes = $Integer::parseInt($nc(args)->get(1));
	$var($Random, rnd, $new($Random));
	for (int32_t i = 0; i < numRuns; ++i) {
		for (int32_t j = 0; j < numBytes; ++j) {
			$var($bytes, arr, $new($bytes, j));
			for (int32_t k = 0; k < j; ++k) {
				arr->set(k, (int8_t)rnd->nextInt());
			}
			$var($String, s, byteArrayToBase64(arr));
			$var($bytes, b, base64ToByteArray(s));
			if (!$Arrays::equals(arr, b)) {
				$nc($System::out)->println("Dismal failure!"_s);
			}
			$assign(s, byteArrayToAltBase64(arr));
			$assign(b, altBase64ToByteArray(s));
			if (!$Arrays::equals(arr, b)) {
				$nc($System::out)->println("Alternate dismal failure!"_s);
			}
		}
	}
}

void clinit$Base64($Class* class$) {
	$assignStatic(Base64::intToBase64, $new($chars, {
		u'A',
		u'B',
		u'C',
		u'D',
		u'E',
		u'F',
		u'G',
		u'H',
		u'I',
		u'J',
		u'K',
		u'L',
		u'M',
		u'N',
		u'O',
		u'P',
		u'Q',
		u'R',
		u'S',
		u'T',
		u'U',
		u'V',
		u'W',
		u'X',
		u'Y',
		u'Z',
		u'a',
		u'b',
		u'c',
		u'd',
		u'e',
		u'f',
		u'g',
		u'h',
		u'i',
		u'j',
		u'k',
		u'l',
		u'm',
		u'n',
		u'o',
		u'p',
		u'q',
		u'r',
		u's',
		u't',
		u'u',
		u'v',
		u'w',
		u'x',
		u'y',
		u'z',
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9',
		u'+',
		u'/'
	}));
	$assignStatic(Base64::intToAltBase64, $new($chars, {
		u'!',
		u'\"',
		u'#',
		u'$',
		u'%',
		u'&',
		u'\'',
		u'(',
		u')',
		u',',
		u'-',
		u'.',
		u':',
		u';',
		u'<',
		u'>',
		u'@',
		u'[',
		u']',
		u'^',
		u'`',
		u'_',
		u'{',
		u'|',
		u'}',
		u'~',
		u'a',
		u'b',
		u'c',
		u'd',
		u'e',
		u'f',
		u'g',
		u'h',
		u'i',
		u'j',
		u'k',
		u'l',
		u'm',
		u'n',
		u'o',
		u'p',
		u'q',
		u'r',
		u's',
		u't',
		u'u',
		u'v',
		u'w',
		u'x',
		u'y',
		u'z',
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9',
		u'+',
		u'?'
	}));
	$assignStatic(Base64::base64ToInt, $new($bytes, {
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)62,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)63,
		(int8_t)52,
		(int8_t)53,
		(int8_t)54,
		(int8_t)55,
		(int8_t)56,
		(int8_t)57,
		(int8_t)58,
		(int8_t)59,
		(int8_t)60,
		(int8_t)61,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)0,
		(int8_t)1,
		(int8_t)2,
		(int8_t)3,
		(int8_t)4,
		(int8_t)5,
		(int8_t)6,
		(int8_t)7,
		(int8_t)8,
		(int8_t)9,
		(int8_t)10,
		(int8_t)11,
		(int8_t)12,
		(int8_t)13,
		(int8_t)14,
		(int8_t)15,
		(int8_t)16,
		(int8_t)17,
		(int8_t)18,
		(int8_t)19,
		(int8_t)20,
		(int8_t)21,
		(int8_t)22,
		(int8_t)23,
		(int8_t)24,
		(int8_t)25,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)26,
		(int8_t)27,
		(int8_t)28,
		(int8_t)29,
		(int8_t)30,
		(int8_t)31,
		(int8_t)32,
		(int8_t)33,
		(int8_t)34,
		(int8_t)35,
		(int8_t)36,
		(int8_t)37,
		(int8_t)38,
		(int8_t)39,
		(int8_t)40,
		(int8_t)41,
		(int8_t)42,
		(int8_t)43,
		(int8_t)44,
		(int8_t)45,
		(int8_t)46,
		(int8_t)47,
		(int8_t)48,
		(int8_t)49,
		(int8_t)50,
		(int8_t)51
	}));
	$assignStatic(Base64::altBase64ToInt, $new($bytes, {
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)0,
		(int8_t)1,
		(int8_t)2,
		(int8_t)3,
		(int8_t)4,
		(int8_t)5,
		(int8_t)6,
		(int8_t)7,
		(int8_t)8,
		(int8_t)-1,
		(int8_t)62,
		(int8_t)9,
		(int8_t)10,
		(int8_t)11,
		(int8_t)-1,
		(int8_t)52,
		(int8_t)53,
		(int8_t)54,
		(int8_t)55,
		(int8_t)56,
		(int8_t)57,
		(int8_t)58,
		(int8_t)59,
		(int8_t)60,
		(int8_t)61,
		(int8_t)12,
		(int8_t)13,
		(int8_t)14,
		(int8_t)-1,
		(int8_t)15,
		(int8_t)63,
		(int8_t)16,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)17,
		(int8_t)-1,
		(int8_t)18,
		(int8_t)19,
		(int8_t)21,
		(int8_t)20,
		(int8_t)26,
		(int8_t)27,
		(int8_t)28,
		(int8_t)29,
		(int8_t)30,
		(int8_t)31,
		(int8_t)32,
		(int8_t)33,
		(int8_t)34,
		(int8_t)35,
		(int8_t)36,
		(int8_t)37,
		(int8_t)38,
		(int8_t)39,
		(int8_t)40,
		(int8_t)41,
		(int8_t)42,
		(int8_t)43,
		(int8_t)44,
		(int8_t)45,
		(int8_t)46,
		(int8_t)47,
		(int8_t)48,
		(int8_t)49,
		(int8_t)50,
		(int8_t)51,
		(int8_t)22,
		(int8_t)23,
		(int8_t)24,
		(int8_t)25
	}));
}

Base64::Base64() {
}

$Class* Base64::load$($String* name, bool initialize) {
	$loadClass(Base64, name, initialize, &_Base64_ClassInfo_, clinit$Base64, allocate$Base64);
	return class$;
}

$Class* Base64::class$ = nullptr;

		} // prefs
	} // util
} // java