static pointer FLET158();
static pointer FLET303();
static pointer (*ftab[12])();

#define QUOTE_STRINGS_SIZE 227
static char *quote_strings[QUOTE_STRINGS_SIZE]={
    "(65 73 85 69 79)",
    "member",
    "((65 0) (73 1) (85 2) (69 3) (79 4))",
    "assoc",
    "((65 0) (85 1) (79 2))",
    ":initial-contents",
    ":element-type",
    ":char",
    "make-array",
    "string",
    "\"mainasu\"",
    "0",
    "\"rei\"",
    "1",
    "\"ichi\"",
    "\"\"",
    "2",
    "\"ni\"",
    "3",
    "\"sann\"",
    "4",
    "\"yonn\"",
    "5",
    "\"go\"",
    "6",
    "\"roku\"",
    "7",
    "\"nana\"",
    "8",
    "\"hachi\"",
    "9",
    "\"kyuu\"",
    "\"juu\"",
    "\"\"",
    "\"hyaku\"",
    "\"\"",
    "\"senn\"",
    "\"\"",
    "\"mann\"",
    "\"\"",
    "\"totemotakusann\"",
    "\"\"",
    "read-from-string",
    "\"purasu\"",
    "\"mainasu\"",
    "\"\"",
    "\"tenn\"",
    "concatenate",
    ":kana",
    "string-upcase",
    ":start",
    "(s (string-upcase str))",
    "(s (string-upcase str))",
    ":end",
    "(s (string-upcase str))",
    "(s (string-upcase str))",
    "make-string-input-stream",
    "eof",
    "((65 \"あ\") (73 \"い\") (69 \"え\") (79 \"お\") (85 \"う\"))",
    "((65 \"あ\") (73 \"い\") (69 \"え\") (79 \"お\") (85 \"う\"))",
    "kana2",
    "kana-y",
    "kana-ts",
    "kana-ch",
    "kana-sh",
    "\"ん\"",
    "\"ん\"",
    "\"っ\"",
    ":character",
    "\"~agatsu~a~ayoubi\"",
    "1",
    "\"tsuitachi\"",
    "2",
    "\"futsuka\"",
    "3",
    "\"mikka\"",
    "4",
    "\"yokka\"",
    "5",
    "\"itsuka\"",
    "6",
    "\"muika\"",
    "7",
    "\"nanoka\"",
    "8",
    "\"yo-ka\"",
    "9",
    "\"kokonoka\"",
    "10",
    "\"to-ka\"",
    "20",
    "\"hatsuka\"",
    "\"~anichi\"",
    "#(\"nichi\" \"getsu\" \"ka\" \"sui\" \"moku\" \"kinn\" \"do\")",
    ":now",
    "calendar-time",
    ":year",
    ":month",
    ":day",
    ":weekday",
    "vector",
    "\"time object or vector expected for kana-date\"",
    ":hour",
    ":minute",
    "\"time object or vector expected for kana-date\"",
    "\"~a ~aji~a~a\"",
    "\"gogo\"",
    "\"gozen\"",
    "(1 3 4 6 8 0)",
    "\"punn\"",
    "\"funn\"",
    "(in instr)",
    "(in instr)",
    "(in instr)",
    "(in instr)",
    "make-string-output-stream",
    "/=",
    "get-output-stream-string",
    "(in instr)",
    "(in instr)",
    "(in instr)",
    "(in instr)",
    "make-string",
    "0",
    "1",
    "2",
    "(66 64)",
    "4",
    "\"  \"",
    "\"    \"",
    "hiragana-small-yayuyo",
    ":test",
    "equal",
    "hiragana-2",
    ":key",
    "car",
    "hiragana-small-aiueo",
    "hiragana-3",
    "hiragana-small-tsu",
    "hiragana-1",
    "\"ー\"",
    "\"マイナス\"",
    "(cs code-string)",
    "(cs code-string)",
    "(cs code-string)",
    "(cs code-string)",
    "*read-base*",
    ":time",
    "\"time\"",
    ":package",
    ":lisp",
    "require",
    "(romkan kana-date kana-time)",
    ":vtype",
    ":global",
    "(26 5)",
    "(nil (\"ば\" \"び\" \"ぶ\" \"べ\" \"ぼ\") (\"さ\" \"し\" \"す\" \"せ\" \"そ\") (\"だ\" \"ぢ\" \"づ\" \"で\" \"ど\") nil (\"ふぁ\" \"ふぃ\" \"ふ\" \"ふぇ\" \"ふぉ\") (\"が\" \"ぎ\" \"ぐ\" \"げ\" \"ご\") (\"は\" \"ひ\" \"ふ\" \"へ\" \"ほ\") nil (\"じゃ\" \"じ\" \"じゅ\" \"じぇ\" \"じょ\") (\"か\" \"き\" \"く\" \"け\" \"こ\") (\"ら\" \"り\" \"る\" \"れ\" \"ろ\") (\"ま\" \"み\" \"む\" \"め\" \"も\") (\"な\" \"に\" \"ぬ\" \"ね\" \"の\") nil (\"ぱ\" \"ぴ\" \"ぷ\" \"ぺ\" \"ぽ\") (\"くぁ\" \"くぃ\" \"きゅ\" \"きぇ\" \"きょ\") (\"ら\" \"り\" \"る\" \"れ\" \"ろ\") (\"さ\" \"し\" \"す\" \"せ\" \"そ\") (\"た\" \"ち\" \"つ\" \"て\" \"と\") nil (\"ぶぁ\" \"ぶぃ\" \"ぶ\" \"ぶぇ\" \"ぼ\") (\"わ\" \"ゐ\" \"う\" \"ゑ\" \"を\") (\"ぁ\" \"ぃ\" \"ぅ\" \"ぇ\" \"ぉ\") (\"や\" \"い\" \"ゆ\" \"いぇ\" \"よ\") (\"ざ\" \"じ\" \"ず\" \"ぜ\" \"ぞ\"))",
    "(26 3)",
    "(nil (\"びゃ\" \"びゅ\" \"びょ\") (\"きゃ\" \"きゅ\" \"きょ\") (\"ぢゃ\" \"ぢゅ\" \"ぢょ\") nil nil (\"ぎゃ\" \"ぎゅ\" \"ぎょ\") (\"ひゃ\" \"ひゅ\" \"ひょ\") nil (\"じゃ\" \"じゅ\" \"じょ\") (\"きゃ\" \"きゅ\" \"きょ\") (\"りゃ\" \"りゅ\" \"りょ\") (\"みゃ\" \"みゅ\" \"みょ\") (\"にゃ\" \"にゅ\" \"にょ\") nil (\"ぴゃ\" \"ぴゅ\" \"ぴょ\") nil (\"りゃ\" \"りゅ\" \"りょ\") (\"しゃ\" \"しゅ\" \"しょ\") (\"ちゃ\" \"ちゅ\" \"ちょ\") nil (\"ぶぁ\" \"ぶゅ\" \"びょ\") (\"わ\" \"う\" \"を\") (\"ぁ\" \"ぅ\" \"ぉ\") nil (\"じゃ\" \"じゅ\" \"じょ\"))",
    "(5)",
    "(\"つぁ\" \"つぃ\" \"つ\" \"つぇ\" \"つぉ\")",
    "(5)",
    "(\"ちゃ\" \"ち\" \"ちゅ\" \"ちぇ\" \"ちょ\")",
    "(5)",
    "(\"しゃ\" \"し\" \"しゅ\" \"しぇ\" \"しょ\")",
    "vowelp",
    "\"(ch)\"",
    "vowel-ord",
    "\"(ch)\"",
    "vowel-ord3",
    "\"(ch)\"",
    "char-string",
    "\"(ch)\"",
    "kana-decimal",
    "\"(num &optional (one t))\"",
    "romnum1",
    "\"(s)\"",
    "romnum",
    "\"(s)\"",
    "romkan",
    "\"(str)\"",
    "romanji-date",
    "\"(month-int day-int week-int &optional (conversion t))\"",
    "kana-date",
    "\"(&optional (xtime (unix:localtime)) (conversion t))\"",
    "kana-time",
    "\"(&optional (xtime (unix:localtime)) (conversion nil))\"",
    "sjis2euc-char",
    "\"(hi low s)\"",
    "sjis2euc",
    "\"(instr)\"",
    "euc2sjis-char",
    "\"(c2 c1 s)\"",
    "euc2sjis",
    "\"(instr)\"",
    "jis2euc",
    "\"(jstr)\"",
    "hiragana-aiueo",
    "(\"あ\" \"い\" \"う\" \"え\" \"お\" \"ア\" \"イ\" \"ウ\" \"エ\" \"オ\")",
    "(\"ぁ\" \"ぃ\" \"ぅ\" \"ぇ\" \"ぉ\" \"ァ\" \"ィ\" \"ゥ\" \"ェ\" \"ォ\")",
    "(\"ゃ\" \"ゅ\" \"ょ\" \"ャ\" \"ュ\" \"ョ\")",
    "(\"っ\" \"ッ\")",
    "((\"あ\" \"a\") (\"い\" \"i\") (\"う\" \"u\") (\"え\" \"e\") (\"お\" \"o\") (\"か\" \"ka\") (\"き\" \"ki\") (\"く\" \"ku\") (\"け\" \"ke\") (\"こ\" \"ko\") (\"さ\" \"sa\") (\"し\" \"shi\") (\"す\" \"su\") (\"せ\" \"se\") (\"そ\" \"so\") (\"た\" \"ta\") (\"ち\" \"chi\") (\"つ\" \"tsu\") (\"て\" \"te\") (\"と\" \"to\") (\"な\" \"na\") (\"に\" \"ni\") (\"ぬ\" \"nu\") (\"ね\" \"ne\") (\"の\" \"no\") (\"は\" \"ha\") (\"ひ\" \"hi\") (\"ふ\" \"fu\") (\"へ\" \"he\") (\"ほ\" \"ho\") (\"ま\" \"ma\") (\"み\" \"mi\") (\"む\" \"mu\") (\"め\" \"me\") (\"も\" \"mo\") (\"や\" \"ya\") (\"い\" \"yi\") (\"ゆ\" \"yu\") (\"え\" \"ye\") (\"よ\" \"yo\") (\"ら\" \"ra\") (\"り\" \"ri\") (\"る\" \"ru\") (\"れ\" \"re\") (\"ろ\" \"ro\") (\"わ\" \"wa\") (\"ゐ\" \"wi\") (\"う\" \"wu\") (\"ゑ\" \"we\") (\"を\" \"wo\") (\"が\" \"ga\") (\"ぎ\" \"gi\") (\"ぐ\" \"gu\") (\"げ\" \"ge\") (\"ご\" \"go\") (\"ざ\" \"za\") (\"じ\" \"ji\") (\"ず\" \"zu\") (\"ぜ\" \"ze\") (\"ぞ\" \"zo\") (\"だ\" \"da\") (\"ぢ\" \"di\") (\"づ\" \"du\") (\"で\" \"de\") (\"ど\" \"do\") (\"ば\" \"ba\") (\"び\" \"bi\") (\"ぶ\" \"bu\") (\"べ\" \"be\") (\"ぼ\" \"bo\") (\"ぱ\" \"pa\") (\"ぴ\" \"pi\") (\"ぷ\" \"pu\") (\"ぺ\" \"pe\") (\"ぽ\" \"po\") (\"ん\" \"nn\") (\"ぁ\" \"a\") (\"ぃ\" \"i\") (\"ぅ\" \"u\") (\"ぇ\" \"e\") (\"ぉ\" \"o\") (\"ゃ\" \"ya\") (\"ゅ\" \"yu\") (\"ょ\" \"yo\") (\"。\" \".\") (\"、\" \",\") (\"「\" \"\\\"\") (\"」\" \"\\\"\") (\"ー\" \"-\") (\"ア\" \"a\") (\"イ\" \"i\") (\"ウ\" \"u\") (\"エ\" \"e\") (\"オ\" \"o\") (\"カ\" \"ka\") (\"キ\" \"ki\") (\"ク\" \"ku\") (\"ケ\" \"ke\") (\"コ\" \"ko\") (\"サ\" \"sa\") (\"シ\" \"shi\") (\"ス\" \"su\") (\"セ\" \"se\") (\"タ\" \"ta\") (\"チ\" \"chi\") (\"ツ\" \"tsu\") (\"テ\" \"te\") (\"ト\" \"to\") (\"ナ\" \"na\") (\"ニ\" \"ni\") (\"ヌ\" \"nu\") (\"ネ\" \"ne\") (\"ノ\" \"no\") (\"ハ\" \"ha\") (\"ヒ\" \"hi\") (\"フ\" \"fu\") (\"ヘ\" \"he\") (\"ホ\" \"ho\") (\"マ\" \"ma\") (\"ミ\" \"mi\") (\"ム\" \"mu\") (\"メ\" \"me\") (\"モ\" \"mo\") (\"ヤ\" \"ya\") (\"ユ\" \"yu\") (\"ヨ\" \"yo\") (\"ラ\" \"ra\") (\"リ\" \"ri\") (\"ル\" \"ru\") (\"レ\" \"re\") (\"ロ\" \"ro\") (\"ワ\" \"wa\") (\"ヰ\" \"wi\") (\"ヱ\" \"we\") (\"ヲ\" \"wo\") (\"ガ\" \"ga\") (\"ギ\" \"gi\") (\"グ\" \"gu\") (\"ゲ\" \"ge\") (\"ゴ\" \"go\") (\"ザ\" \"za\") (\"ジ\" \"ji\") (\"ズ\" \"zu\") (\"ゼ\" \"ze\") (\"ゾ\" \"zo\") (\"ダ\" \"da\") (\"ヂ\" \"di\") (\"ヅ\" \"du\") (\"デ\" \"de\") (\"ド\" \"do\") (\"バ\" \"ba\") (\"ビ\" \"bi\") (\"ブ\" \"bu\") (\"ベ\" \"be\") (\"ボ\" \"bo\") (\"パ\" \"pa\") (\"ピ\" \"pi\") (\"プ\" \"pu\") (\"ペ\" \"pe\") (\"ポ\" \"po\") (\"ン\" \"nn\") (\"ァ\" \"a\") (\"ィ\" \"i\") (\"ゥ\" \"u\") (\"ェ\" \"e\") (\"ォ\" \"o\") (\"ャ\" \"ya\") (\"ュ\" \"yu\") (\"ョ\" \"yo\"))",
    "((\"きゃ\" \"kya\") (\"きゅ\" \"kyu\") (\"きょ\" \"kyo\") (\"しゃ\" \"sha\") (\"しゅ\" \"shu\") (\"しょ\" \"sho\") (\"ちゃ\" \"cha\") (\"ちゅ\" \"chu\") (\"ちょ\" \"cho\") (\"にゃ\" \"nya\") (\"にゅ\" \"nyu\") (\"にょ\" \"nyo\") (\"ひゃ\" \"hya\") (\"ひゅ\" \"hyu\") (\"ひょ\" \"hyo\") (\"みゃ\" \"mya\") (\"みゅ\" \"myu\") (\"みょ\" \"myo\") (\"りゃ\" \"rya\") (\"りゅ\" \"ryu\") (\"りょ\" \"ryo\") (\"ぎゃ\" \"gya\") (\"ぎゅ\" \"gyu\") (\"ぎょ\" \"gyo\") (\"じゃ\" \"ja\") (\"じゅ\" \"ju\") (\"じょ\" \"jo\") (\"ぢゃ\" \"dya\") (\"ぢゅ\" \"dyu\") (\"ぢょ\" \"dyo\") (\"ぴゃ\" \"pya\") (\"ぴゅ\" \"pyu\") (\"ぴょ\" \"pyo\") (\"でゅ\" \"dyu\") (\"てゅ\" \"tyu\") (\"キャ\" \"kya\") (\"キュ\" \"kyu\") (\"キョ\" \"kyo\") (\"シャ\" \"sha\") (\"シュ\" \"shu\") (\"ショ\" \"sho\") (\"チャ\" \"cha\") (\"チュ\" \"chu\") (\"チョ\" \"cho\") (\"ニャ\" \"nya\") (\"ニュ\" \"nyu\") (\"ニョ\" \"nyo\") (\"ヒャ\" \"hya\") (\"ヒュ\" \"hyu\") (\"ヒョ\" \"hyo\") (\"ミャ\" \"mya\") (\"ミュ\" \"myu\") (\"ミョ\" \"myo\") (\"リャ\" \"rya\") (\"リュ\" \"ryu\") (\"リョ\" \"ryo\") (\"ギャ\" \"gya\") (\"ギュ\" \"gyu\") (\"ギョ\" \"gyo\") (\"ジャ\" \"ja\") (\"ジュ\" \"ju\") (\"ジョ\" \"jo\") (\"ヂャ\" \"dya\") (\"ヂュ\" \"dyu\") (\"ヂョ\" \"dyo\") (\"ピャ\" \"pya\") (\"ピュ\" \"pyu\") (\"ピョ\" \"pyo\") (\"デュ\" \"dyu\") (\"テュ\" \"tyu\"))",
    "((\"てぃ\" \"ti\") (\"でぃ\" \"di\") (\"とぅ\" \"tu\") (\"どぅ\" \"du\") (\"ふぁ\" \"fa\") (\"ふぃ\" \"fi\") (\"ふぇ\" \"fe\") (\"ふぉ\" \"fo\") (\"うぃ\" \"ui\") (\"うぇ\" \"ue\") (\"うぉ\" \"uo\") (\"ちぇ\" \"che\") (\"つぁ\" \"tsa\") (\"つぃ\" \"tsi\") (\"つぇ\" \"tse\") (\"つぉ\" \"tso\") (\"しぇ\" \"she\") (\"くぁ\" \"kua\") (\"くぃ\" \"kui\") (\"くぇ\" \"kue\") (\"くぉ\" \"kuo\") (\"じぇ\" \"je\") (\"ティ\" \"ti\") (\"ディ\" \"di\") (\"トゥ\" \"tu\") (\"ドゥ\" \"du\") (\"ファ\" \"fa\") (\"フィ\" \"fi\") (\"フェ\" \"fe\") (\"フォ\" \"fo\") (\"ウィ\" \"ui\") (\"ウェ\" \"ue\") (\"ウォ\" \"uo\") (\"チェ\" \"che\") (\"ツァ\" \"tsa\") (\"ツィ\" \"tsi\") (\"ツェ\" \"tse\") (\"ツォ\" \"tso\") (\"シェ\" \"she\") (\"クァ\" \"kua\") (\"クィ\" \"kui\") (\"クェ\" \"kue\") (\"クォ\" \"kuo\") (\"ジェ\" \"je\"))",
    "romanji",
    "\"(kanastring)\"",
    "hira2kata",
    "\"(hirastr)\"",
    "kata2hira",
    "\"(katastr)\"",
    "euc-space",
    "string-match-at",
    "\"(pattern target pos)\"",
    "string-match",
    "\"(pattern target &optional (start 0))\"",
    "euc-string-trim",
    "\"(euc-str target)\"",
    "euc-digit",
    "\"(estr pos)\"",
    "euc-number",
    "\"(estr)\"",
    "percent-code-to-euc",
    "\"(code-string)\"",
    ":romkan",
    "\"#(@)$Id: kana_euc.l,v 1.1.1.1 2003/11/20 07:53:25 eus Exp $\"",
    "provide",
  };
