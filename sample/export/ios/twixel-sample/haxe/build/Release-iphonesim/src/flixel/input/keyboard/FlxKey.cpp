#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_keyboard_FlxKey
#include <flixel/input/keyboard/FlxKey.h>
#endif
namespace flixel{
namespace input{
namespace keyboard{

Void FlxKey_obj::__construct(::String Name)
{
HX_STACK_PUSH("FlxKey::new","flixel/input/keyboard/FlxKey.hx",6);
{
	HX_STACK_LINE(121)
	this->last = (int)0;
	HX_STACK_LINE(117)
	this->current = (int)0;
	HX_STACK_LINE(124)
	this->name = Name;
}
;
	return null();
}

FlxKey_obj::~FlxKey_obj() { }

Dynamic FlxKey_obj::__CreateEmpty() { return  new FlxKey_obj; }
hx::ObjectPtr< FlxKey_obj > FlxKey_obj::__new(::String Name)
{  hx::ObjectPtr< FlxKey_obj > result = new FlxKey_obj();
	result->__construct(Name);
	return result;}

Dynamic FlxKey_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxKey_obj > result = new FlxKey_obj();
	result->__construct(inArgs[0]);
	return result;}

int FlxKey_obj::JUST_RELEASED;

int FlxKey_obj::RELEASED;

int FlxKey_obj::PRESSED;

int FlxKey_obj::JUST_PRESSED;

int FlxKey_obj::A;

int FlxKey_obj::B;

int FlxKey_obj::C;

int FlxKey_obj::D;

int FlxKey_obj::E;

int FlxKey_obj::F;

int FlxKey_obj::G;

int FlxKey_obj::H;

int FlxKey_obj::I;

int FlxKey_obj::J;

int FlxKey_obj::K;

int FlxKey_obj::L;

int FlxKey_obj::M;

int FlxKey_obj::N;

int FlxKey_obj::O;

int FlxKey_obj::P;

int FlxKey_obj::Q;

int FlxKey_obj::R;

int FlxKey_obj::S;

int FlxKey_obj::T;

int FlxKey_obj::U;

int FlxKey_obj::V;

int FlxKey_obj::W;

int FlxKey_obj::X;

int FlxKey_obj::Y;

int FlxKey_obj::Z;

int FlxKey_obj::ZERO;

int FlxKey_obj::ONE;

int FlxKey_obj::TWO;

int FlxKey_obj::THREE;

int FlxKey_obj::FOUR;

int FlxKey_obj::FIVE;

int FlxKey_obj::SIX;

int FlxKey_obj::SEVEN;

int FlxKey_obj::EIGHT;

int FlxKey_obj::NINE;

int FlxKey_obj::PAGEUP;

int FlxKey_obj::PAGEDOWN;

int FlxKey_obj::HOME;

int FlxKey_obj::END;

int FlxKey_obj::INSERT;

int FlxKey_obj::ESCAPE;

int FlxKey_obj::MINUS;

int FlxKey_obj::PLUS;

int FlxKey_obj::DELETE;

int FlxKey_obj::BACKSPACE;

int FlxKey_obj::LBRACKET;

int FlxKey_obj::RBRACKET;

int FlxKey_obj::BACKSLASH;

int FlxKey_obj::CAPSLOCK;

int FlxKey_obj::SEMICOLON;

int FlxKey_obj::QUOTE;

int FlxKey_obj::ENTER;

int FlxKey_obj::SHIFT;

int FlxKey_obj::COMMA;

int FlxKey_obj::PERIOD;

int FlxKey_obj::SLASH;

int FlxKey_obj::NUMPADSLASH;

int FlxKey_obj::GRAVEACCENT;

int FlxKey_obj::CONTROL;

int FlxKey_obj::ALT;

int FlxKey_obj::SPACE;

int FlxKey_obj::UP;

int FlxKey_obj::DOWN;

int FlxKey_obj::LEFT;

int FlxKey_obj::RIGHT;

int FlxKey_obj::TAB;


FlxKey_obj::FlxKey_obj()
{
}

void FlxKey_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxKey);
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void FlxKey_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic FlxKey_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxKey_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxKey_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("last"));
	outFields->push(HX_CSTRING("current"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("JUST_RELEASED"),
	HX_CSTRING("RELEASED"),
	HX_CSTRING("PRESSED"),
	HX_CSTRING("JUST_PRESSED"),
	HX_CSTRING("A"),
	HX_CSTRING("B"),
	HX_CSTRING("C"),
	HX_CSTRING("D"),
	HX_CSTRING("E"),
	HX_CSTRING("F"),
	HX_CSTRING("G"),
	HX_CSTRING("H"),
	HX_CSTRING("I"),
	HX_CSTRING("J"),
	HX_CSTRING("K"),
	HX_CSTRING("L"),
	HX_CSTRING("M"),
	HX_CSTRING("N"),
	HX_CSTRING("O"),
	HX_CSTRING("P"),
	HX_CSTRING("Q"),
	HX_CSTRING("R"),
	HX_CSTRING("S"),
	HX_CSTRING("T"),
	HX_CSTRING("U"),
	HX_CSTRING("V"),
	HX_CSTRING("W"),
	HX_CSTRING("X"),
	HX_CSTRING("Y"),
	HX_CSTRING("Z"),
	HX_CSTRING("ZERO"),
	HX_CSTRING("ONE"),
	HX_CSTRING("TWO"),
	HX_CSTRING("THREE"),
	HX_CSTRING("FOUR"),
	HX_CSTRING("FIVE"),
	HX_CSTRING("SIX"),
	HX_CSTRING("SEVEN"),
	HX_CSTRING("EIGHT"),
	HX_CSTRING("NINE"),
	HX_CSTRING("PAGEUP"),
	HX_CSTRING("PAGEDOWN"),
	HX_CSTRING("HOME"),
	HX_CSTRING("END"),
	HX_CSTRING("INSERT"),
	HX_CSTRING("ESCAPE"),
	HX_CSTRING("MINUS"),
	HX_CSTRING("PLUS"),
	HX_CSTRING("DELETE"),
	HX_CSTRING("BACKSPACE"),
	HX_CSTRING("LBRACKET"),
	HX_CSTRING("RBRACKET"),
	HX_CSTRING("BACKSLASH"),
	HX_CSTRING("CAPSLOCK"),
	HX_CSTRING("SEMICOLON"),
	HX_CSTRING("QUOTE"),
	HX_CSTRING("ENTER"),
	HX_CSTRING("SHIFT"),
	HX_CSTRING("COMMA"),
	HX_CSTRING("PERIOD"),
	HX_CSTRING("SLASH"),
	HX_CSTRING("NUMPADSLASH"),
	HX_CSTRING("GRAVEACCENT"),
	HX_CSTRING("CONTROL"),
	HX_CSTRING("ALT"),
	HX_CSTRING("SPACE"),
	HX_CSTRING("UP"),
	HX_CSTRING("DOWN"),
	HX_CSTRING("LEFT"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("TAB"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("last"),
	HX_CSTRING("current"),
	HX_CSTRING("name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxKey_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxKey_obj::JUST_RELEASED,"JUST_RELEASED");
	HX_MARK_MEMBER_NAME(FlxKey_obj::RELEASED,"RELEASED");
	HX_MARK_MEMBER_NAME(FlxKey_obj::PRESSED,"PRESSED");
	HX_MARK_MEMBER_NAME(FlxKey_obj::JUST_PRESSED,"JUST_PRESSED");
	HX_MARK_MEMBER_NAME(FlxKey_obj::A,"A");
	HX_MARK_MEMBER_NAME(FlxKey_obj::B,"B");
	HX_MARK_MEMBER_NAME(FlxKey_obj::C,"C");
	HX_MARK_MEMBER_NAME(FlxKey_obj::D,"D");
	HX_MARK_MEMBER_NAME(FlxKey_obj::E,"E");
	HX_MARK_MEMBER_NAME(FlxKey_obj::F,"F");
	HX_MARK_MEMBER_NAME(FlxKey_obj::G,"G");
	HX_MARK_MEMBER_NAME(FlxKey_obj::H,"H");
	HX_MARK_MEMBER_NAME(FlxKey_obj::I,"I");
	HX_MARK_MEMBER_NAME(FlxKey_obj::J,"J");
	HX_MARK_MEMBER_NAME(FlxKey_obj::K,"K");
	HX_MARK_MEMBER_NAME(FlxKey_obj::L,"L");
	HX_MARK_MEMBER_NAME(FlxKey_obj::M,"M");
	HX_MARK_MEMBER_NAME(FlxKey_obj::N,"N");
	HX_MARK_MEMBER_NAME(FlxKey_obj::O,"O");
	HX_MARK_MEMBER_NAME(FlxKey_obj::P,"P");
	HX_MARK_MEMBER_NAME(FlxKey_obj::Q,"Q");
	HX_MARK_MEMBER_NAME(FlxKey_obj::R,"R");
	HX_MARK_MEMBER_NAME(FlxKey_obj::S,"S");
	HX_MARK_MEMBER_NAME(FlxKey_obj::T,"T");
	HX_MARK_MEMBER_NAME(FlxKey_obj::U,"U");
	HX_MARK_MEMBER_NAME(FlxKey_obj::V,"V");
	HX_MARK_MEMBER_NAME(FlxKey_obj::W,"W");
	HX_MARK_MEMBER_NAME(FlxKey_obj::X,"X");
	HX_MARK_MEMBER_NAME(FlxKey_obj::Y,"Y");
	HX_MARK_MEMBER_NAME(FlxKey_obj::Z,"Z");
	HX_MARK_MEMBER_NAME(FlxKey_obj::ZERO,"ZERO");
	HX_MARK_MEMBER_NAME(FlxKey_obj::ONE,"ONE");
	HX_MARK_MEMBER_NAME(FlxKey_obj::TWO,"TWO");
	HX_MARK_MEMBER_NAME(FlxKey_obj::THREE,"THREE");
	HX_MARK_MEMBER_NAME(FlxKey_obj::FOUR,"FOUR");
	HX_MARK_MEMBER_NAME(FlxKey_obj::FIVE,"FIVE");
	HX_MARK_MEMBER_NAME(FlxKey_obj::SIX,"SIX");
	HX_MARK_MEMBER_NAME(FlxKey_obj::SEVEN,"SEVEN");
	HX_MARK_MEMBER_NAME(FlxKey_obj::EIGHT,"EIGHT");
	HX_MARK_MEMBER_NAME(FlxKey_obj::NINE,"NINE");
	HX_MARK_MEMBER_NAME(FlxKey_obj::PAGEUP,"PAGEUP");
	HX_MARK_MEMBER_NAME(FlxKey_obj::PAGEDOWN,"PAGEDOWN");
	HX_MARK_MEMBER_NAME(FlxKey_obj::HOME,"HOME");
	HX_MARK_MEMBER_NAME(FlxKey_obj::END,"END");
	HX_MARK_MEMBER_NAME(FlxKey_obj::INSERT,"INSERT");
	HX_MARK_MEMBER_NAME(FlxKey_obj::ESCAPE,"ESCAPE");
	HX_MARK_MEMBER_NAME(FlxKey_obj::MINUS,"MINUS");
	HX_MARK_MEMBER_NAME(FlxKey_obj::PLUS,"PLUS");
	HX_MARK_MEMBER_NAME(FlxKey_obj::DELETE,"DELETE");
	HX_MARK_MEMBER_NAME(FlxKey_obj::BACKSPACE,"BACKSPACE");
	HX_MARK_MEMBER_NAME(FlxKey_obj::LBRACKET,"LBRACKET");
	HX_MARK_MEMBER_NAME(FlxKey_obj::RBRACKET,"RBRACKET");
	HX_MARK_MEMBER_NAME(FlxKey_obj::BACKSLASH,"BACKSLASH");
	HX_MARK_MEMBER_NAME(FlxKey_obj::CAPSLOCK,"CAPSLOCK");
	HX_MARK_MEMBER_NAME(FlxKey_obj::SEMICOLON,"SEMICOLON");
	HX_MARK_MEMBER_NAME(FlxKey_obj::QUOTE,"QUOTE");
	HX_MARK_MEMBER_NAME(FlxKey_obj::ENTER,"ENTER");
	HX_MARK_MEMBER_NAME(FlxKey_obj::SHIFT,"SHIFT");
	HX_MARK_MEMBER_NAME(FlxKey_obj::COMMA,"COMMA");
	HX_MARK_MEMBER_NAME(FlxKey_obj::PERIOD,"PERIOD");
	HX_MARK_MEMBER_NAME(FlxKey_obj::SLASH,"SLASH");
	HX_MARK_MEMBER_NAME(FlxKey_obj::NUMPADSLASH,"NUMPADSLASH");
	HX_MARK_MEMBER_NAME(FlxKey_obj::GRAVEACCENT,"GRAVEACCENT");
	HX_MARK_MEMBER_NAME(FlxKey_obj::CONTROL,"CONTROL");
	HX_MARK_MEMBER_NAME(FlxKey_obj::ALT,"ALT");
	HX_MARK_MEMBER_NAME(FlxKey_obj::SPACE,"SPACE");
	HX_MARK_MEMBER_NAME(FlxKey_obj::UP,"UP");
	HX_MARK_MEMBER_NAME(FlxKey_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(FlxKey_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxKey_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxKey_obj::TAB,"TAB");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxKey_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::JUST_RELEASED,"JUST_RELEASED");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::RELEASED,"RELEASED");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::PRESSED,"PRESSED");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::JUST_PRESSED,"JUST_PRESSED");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::A,"A");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::B,"B");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::C,"C");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::D,"D");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::E,"E");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::F,"F");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::G,"G");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::H,"H");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::I,"I");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::J,"J");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::K,"K");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::L,"L");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::M,"M");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::N,"N");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::O,"O");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::P,"P");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::Q,"Q");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::R,"R");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::S,"S");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::T,"T");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::U,"U");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::V,"V");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::W,"W");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::X,"X");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::Z,"Z");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::ZERO,"ZERO");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::ONE,"ONE");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::TWO,"TWO");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::THREE,"THREE");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::FOUR,"FOUR");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::FIVE,"FIVE");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::SIX,"SIX");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::SEVEN,"SEVEN");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::EIGHT,"EIGHT");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::NINE,"NINE");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::PAGEUP,"PAGEUP");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::PAGEDOWN,"PAGEDOWN");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::HOME,"HOME");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::END,"END");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::INSERT,"INSERT");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::ESCAPE,"ESCAPE");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::MINUS,"MINUS");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::PLUS,"PLUS");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::DELETE,"DELETE");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::BACKSPACE,"BACKSPACE");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::LBRACKET,"LBRACKET");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::RBRACKET,"RBRACKET");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::BACKSLASH,"BACKSLASH");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::CAPSLOCK,"CAPSLOCK");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::SEMICOLON,"SEMICOLON");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::QUOTE,"QUOTE");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::ENTER,"ENTER");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::SHIFT,"SHIFT");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::COMMA,"COMMA");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::PERIOD,"PERIOD");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::SLASH,"SLASH");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::NUMPADSLASH,"NUMPADSLASH");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::GRAVEACCENT,"GRAVEACCENT");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::CONTROL,"CONTROL");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::ALT,"ALT");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::SPACE,"SPACE");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxKey_obj::TAB,"TAB");
};

Class FlxKey_obj::__mClass;

void FlxKey_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.keyboard.FlxKey"), hx::TCanCast< FlxKey_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxKey_obj::__boot()
{
	JUST_RELEASED= (int)-1;
	RELEASED= (int)0;
	PRESSED= (int)1;
	JUST_PRESSED= (int)2;
	A= (int)65;
	B= (int)66;
	C= (int)67;
	D= (int)68;
	E= (int)69;
	F= (int)70;
	G= (int)71;
	H= (int)72;
	I= (int)73;
	J= (int)74;
	K= (int)75;
	L= (int)76;
	M= (int)77;
	N= (int)78;
	O= (int)79;
	P= (int)80;
	Q= (int)81;
	R= (int)82;
	S= (int)83;
	T= (int)84;
	U= (int)85;
	V= (int)86;
	W= (int)87;
	X= (int)88;
	Y= (int)89;
	Z= (int)90;
	ZERO= (int)48;
	ONE= (int)49;
	TWO= (int)50;
	THREE= (int)51;
	FOUR= (int)52;
	FIVE= (int)53;
	SIX= (int)54;
	SEVEN= (int)55;
	EIGHT= (int)56;
	NINE= (int)57;
	PAGEUP= (int)33;
	PAGEDOWN= (int)34;
	HOME= (int)36;
	END= (int)35;
	INSERT= (int)45;
	ESCAPE= (int)27;
	MINUS= (int)189;
	PLUS= (int)187;
	DELETE= (int)46;
	BACKSPACE= (int)8;
	LBRACKET= (int)219;
	RBRACKET= (int)221;
	BACKSLASH= (int)220;
	CAPSLOCK= (int)20;
	SEMICOLON= (int)186;
	QUOTE= (int)222;
	ENTER= (int)13;
	SHIFT= (int)16;
	COMMA= (int)188;
	PERIOD= (int)190;
	SLASH= (int)191;
	NUMPADSLASH= (int)191;
	GRAVEACCENT= (int)192;
	CONTROL= (int)17;
	ALT= (int)18;
	SPACE= (int)32;
	UP= (int)38;
	DOWN= (int)40;
	LEFT= (int)37;
	RIGHT= (int)39;
	TAB= (int)9;
}

} // end namespace flixel
} // end namespace input
} // end namespace keyboard
