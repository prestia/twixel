#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace util{

Void FlxStringUtil_obj::__construct()
{
	return null();
}

FlxStringUtil_obj::~FlxStringUtil_obj() { }

Dynamic FlxStringUtil_obj::__CreateEmpty() { return  new FlxStringUtil_obj; }
hx::ObjectPtr< FlxStringUtil_obj > FlxStringUtil_obj::__new()
{  hx::ObjectPtr< FlxStringUtil_obj > result = new FlxStringUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxStringUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxStringUtil_obj > result = new FlxStringUtil_obj();
	result->__construct();
	return result;}

::String FlxStringUtil_obj::formatTicks( int StartTicks,int EndTicks){
	HX_STACK_PUSH("FlxStringUtil::formatTicks","flixel/util/FlxStringUtil.hx",21);
	HX_STACK_ARG(StartTicks,"StartTicks");
	HX_STACK_ARG(EndTicks,"EndTicks");
	HX_STACK_LINE(21)
	return ((Float(::Math_obj::abs((EndTicks - StartTicks))) / Float((int)1000)) + HX_CSTRING("s"));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatTicks,return )

::String FlxStringUtil_obj::formatTime( Float Seconds,hx::Null< bool >  __o_ShowMS){
bool ShowMS = __o_ShowMS.Default(false);
	HX_STACK_PUSH("FlxStringUtil::formatTime","flixel/util/FlxStringUtil.hx",33);
	HX_STACK_ARG(Seconds,"Seconds");
	HX_STACK_ARG(ShowMS,"ShowMS");
{
		HX_STACK_LINE(34)
		::String timeString = (::Std_obj::_int((Float(Seconds) / Float((int)60))) + HX_CSTRING(":"));		HX_STACK_VAR(timeString,"timeString");
		HX_STACK_LINE(35)
		int timeStringHelper = hx::Mod(::Std_obj::_int(Seconds),(int)60);		HX_STACK_VAR(timeStringHelper,"timeStringHelper");
		HX_STACK_LINE(36)
		if (((timeStringHelper < (int)10))){
			HX_STACK_LINE(37)
			hx::AddEq(timeString,HX_CSTRING("0"));
		}
		HX_STACK_LINE(40)
		hx::AddEq(timeString,timeStringHelper);
		HX_STACK_LINE(41)
		if ((ShowMS)){
			HX_STACK_LINE(43)
			hx::AddEq(timeString,HX_CSTRING("."));
			HX_STACK_LINE(44)
			timeStringHelper = ::Std_obj::_int((((Seconds - ::Std_obj::_int(Seconds))) * (int)100));
			HX_STACK_LINE(45)
			if (((timeStringHelper < (int)10))){
				HX_STACK_LINE(46)
				hx::AddEq(timeString,HX_CSTRING("0"));
			}
			HX_STACK_LINE(49)
			hx::AddEq(timeString,timeStringHelper);
		}
		HX_STACK_LINE(52)
		return timeString;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxStringUtil_obj,formatTime,return )

::String FlxStringUtil_obj::formatArray( Dynamic AnyArray){
	HX_STACK_PUSH("FlxStringUtil::formatArray","flixel/util/FlxStringUtil.hx",63);
	HX_STACK_ARG(AnyArray,"AnyArray");
	HX_STACK_LINE(64)
	::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
	HX_STACK_LINE(65)
	if (((bool((AnyArray != null())) && bool((AnyArray->__Field(HX_CSTRING("length"),true) > (int)0))))){
		HX_STACK_LINE(67)
		string = ::Std_obj::string(AnyArray->__GetItem((int)0));
		HX_STACK_LINE(68)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(69)
		int l = AnyArray->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(70)
		while(((i < l))){
			HX_STACK_LINE(71)
			hx::AddEq(string,(HX_CSTRING(", ") + ::Std_obj::string(AnyArray->__GetItem((i)++))));
		}
	}
	HX_STACK_LINE(75)
	return string;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,formatArray,return )

::String FlxStringUtil_obj::formatStringMap( ::haxe::ds::StringMap AnyMap){
	HX_STACK_PUSH("FlxStringUtil::formatStringMap","flixel/util/FlxStringUtil.hx",85);
	HX_STACK_ARG(AnyMap,"AnyMap");
	HX_STACK_LINE(86)
	::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
	HX_STACK_LINE(87)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(AnyMap->keys());  __it->hasNext(); ){
		::String key = __it->next();
		{
			HX_STACK_LINE(88)
			hx::AddEq(string,::Std_obj::string(key));
			HX_STACK_LINE(89)
			hx::AddEq(string,HX_CSTRING(", "));
		}
;
	}
	HX_STACK_LINE(92)
	return string.substring((int)0,(string.length - (int)2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,formatStringMap,return )

::String FlxStringUtil_obj::formatMoney( Float Amount,hx::Null< bool >  __o_ShowDecimal,hx::Null< bool >  __o_EnglishStyle){
bool ShowDecimal = __o_ShowDecimal.Default(true);
bool EnglishStyle = __o_EnglishStyle.Default(true);
	HX_STACK_PUSH("FlxStringUtil::formatMoney","flixel/util/FlxStringUtil.hx",107);
	HX_STACK_ARG(Amount,"Amount");
	HX_STACK_ARG(ShowDecimal,"ShowDecimal");
	HX_STACK_ARG(EnglishStyle,"EnglishStyle");
{
		HX_STACK_LINE(108)
		int helper;		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(109)
		int amount = ::Math_obj::floor(Amount);		HX_STACK_VAR(amount,"amount");
		HX_STACK_LINE(110)
		::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
		HX_STACK_LINE(111)
		::String comma = HX_CSTRING("");		HX_STACK_VAR(comma,"comma");
		HX_STACK_LINE(112)
		::String zeroes = HX_CSTRING("");		HX_STACK_VAR(zeroes,"zeroes");
		HX_STACK_LINE(113)
		while(((amount > (int)0))){
			HX_STACK_LINE(115)
			if (((bool((string.length > (int)0)) && bool((comma.length <= (int)0))))){
				HX_STACK_LINE(116)
				if ((EnglishStyle)){
					HX_STACK_LINE(118)
					comma = HX_CSTRING(",");
				}
				else{
					HX_STACK_LINE(122)
					comma = HX_CSTRING(".");
				}
			}
			HX_STACK_LINE(126)
			zeroes = HX_CSTRING("");
			HX_STACK_LINE(127)
			helper = (amount - (::Math_obj::floor((Float(amount) / Float((int)1000))) * (int)1000));
			HX_STACK_LINE(128)
			amount = ::Math_obj::floor((Float(amount) / Float((int)1000)));
			HX_STACK_LINE(129)
			if (((amount > (int)0))){
				HX_STACK_LINE(131)
				if (((helper < (int)100))){
					HX_STACK_LINE(132)
					hx::AddEq(zeroes,HX_CSTRING("0"));
				}
				HX_STACK_LINE(135)
				if (((helper < (int)10))){
					HX_STACK_LINE(136)
					hx::AddEq(zeroes,HX_CSTRING("0"));
				}
			}
			HX_STACK_LINE(140)
			string = (((zeroes + helper) + comma) + string);
		}
		HX_STACK_LINE(142)
		if ((ShowDecimal)){
			HX_STACK_LINE(144)
			amount = (::Std_obj::_int((Amount * (int)100)) - (::Std_obj::_int(Amount) * (int)100));
			HX_STACK_LINE(145)
			hx::AddEq(string,(((  ((EnglishStyle)) ? ::String(HX_CSTRING(".")) : ::String(HX_CSTRING(",")) )) + amount));
			HX_STACK_LINE(146)
			if (((amount < (int)10))){
				HX_STACK_LINE(147)
				hx::AddEq(string,HX_CSTRING("0"));
			}
		}
		HX_STACK_LINE(151)
		return string;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,formatMoney,return )

::String FlxStringUtil_obj::filterDigits( ::String Input){
	HX_STACK_PUSH("FlxStringUtil::filterDigits","flixel/util/FlxStringUtil.hx",161);
	HX_STACK_ARG(Input,"Input");
	HX_STACK_LINE(162)
	::StringBuf output = ::StringBuf_obj::__new();		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(163)
	{
		HX_STACK_LINE(163)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = Input.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(163)
		while(((_g1 < _g))){
			HX_STACK_LINE(163)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(164)
			Dynamic c = Input.charCodeAt(i);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(165)
			if (((bool((c >= (int)48)) && bool((c <= (int)57))))){
				HX_STACK_LINE(166)
				int c1 = c;		HX_STACK_VAR(c1,"c1");
				HX_STACK_LINE(166)
				output->b->push(::String::fromCharCode(c1));
			}
		}
	}
	HX_STACK_LINE(169)
	return output->b->join(HX_CSTRING(""));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,filterDigits,return )

::String FlxStringUtil_obj::htmlFormat( ::String Text,hx::Null< int >  __o_Size,::String __o_Color,hx::Null< bool >  __o_Bold,hx::Null< bool >  __o_Italic,hx::Null< bool >  __o_Underlined){
int Size = __o_Size.Default(12);
::String Color = __o_Color.Default(HX_CSTRING("FFFFFF"));
bool Bold = __o_Bold.Default(false);
bool Italic = __o_Italic.Default(false);
bool Underlined = __o_Underlined.Default(false);
	HX_STACK_PUSH("FlxStringUtil::htmlFormat","flixel/util/FlxStringUtil.hx",185);
	HX_STACK_ARG(Text,"Text");
	HX_STACK_ARG(Size,"Size");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Bold,"Bold");
	HX_STACK_ARG(Italic,"Italic");
	HX_STACK_ARG(Underlined,"Underlined");
{
		HX_STACK_LINE(186)
		::String prefix = ((((HX_CSTRING("<font size='") + Size) + HX_CSTRING("' color='#")) + Color) + HX_CSTRING("'>"));		HX_STACK_VAR(prefix,"prefix");
		HX_STACK_LINE(187)
		::String suffix = HX_CSTRING("</font>");		HX_STACK_VAR(suffix,"suffix");
		HX_STACK_LINE(189)
		if ((Bold)){
			HX_STACK_LINE(191)
			prefix = (HX_CSTRING("<b>") + prefix);
			HX_STACK_LINE(192)
			suffix = (suffix + HX_CSTRING("</b>"));
		}
		HX_STACK_LINE(194)
		if ((Italic)){
			HX_STACK_LINE(196)
			prefix = (HX_CSTRING("<i>") + prefix);
			HX_STACK_LINE(197)
			suffix = (suffix + HX_CSTRING("</i>"));
		}
		HX_STACK_LINE(199)
		if ((Underlined)){
			HX_STACK_LINE(201)
			prefix = (HX_CSTRING("<u>") + prefix);
			HX_STACK_LINE(202)
			suffix = (suffix + HX_CSTRING("</u>"));
		}
		HX_STACK_LINE(205)
		return ((prefix + Text) + suffix);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxStringUtil_obj,htmlFormat,return )

::String FlxStringUtil_obj::getDomain( ::String url){
	HX_STACK_PUSH("FlxStringUtil::getDomain","flixel/util/FlxStringUtil.hx",233);
	HX_STACK_ARG(url,"url");
	HX_STACK_LINE(234)
	int urlStart = (url.indexOf(HX_CSTRING("://"),null()) + (int)3);		HX_STACK_VAR(urlStart,"urlStart");
	HX_STACK_LINE(235)
	int urlEnd = url.indexOf(HX_CSTRING("/"),urlStart);		HX_STACK_VAR(urlEnd,"urlEnd");
	HX_STACK_LINE(236)
	::String home = url.substring(urlStart,urlEnd);		HX_STACK_VAR(home,"home");
	HX_STACK_LINE(237)
	int LastDot = (home.lastIndexOf(HX_CSTRING("."),null()) - (int)1);		HX_STACK_VAR(LastDot,"LastDot");
	HX_STACK_LINE(238)
	int domEnd = (home.lastIndexOf(HX_CSTRING("."),LastDot) + (int)1);		HX_STACK_VAR(domEnd,"domEnd");
	HX_STACK_LINE(239)
	home = home.substring(domEnd,home.length);
	HX_STACK_LINE(240)
	home = home.split(HX_CSTRING(":"))->__get((int)0);
	HX_STACK_LINE(241)
	return (  (((home == HX_CSTRING("")))) ? ::String(HX_CSTRING("local")) : ::String(home) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,getDomain,return )

bool FlxStringUtil_obj::sameClassName( Dynamic Obj1,Dynamic Obj2,hx::Null< bool >  __o_Simple){
bool Simple = __o_Simple.Default(true);
	HX_STACK_PUSH("FlxStringUtil::sameClassName","flixel/util/FlxStringUtil.hx",253);
	HX_STACK_ARG(Obj1,"Obj1");
	HX_STACK_ARG(Obj2,"Obj2");
	HX_STACK_ARG(Simple,"Simple");
{
		struct _Function_1_1{
			inline static ::String Block( Dynamic &Obj1,bool &Simple){
				HX_STACK_PUSH("*::closure","flixel/util/FlxStringUtil.hx",254);
				{
					HX_STACK_LINE(254)
					::String s = ::Type_obj::getClassName(::Type_obj::getClass(Obj1));		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(254)
					if (((s != null()))){
						HX_STACK_LINE(254)
						s = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));
						HX_STACK_LINE(254)
						if ((Simple)){
							HX_STACK_LINE(254)
							s = s.substr((s.lastIndexOf(HX_CSTRING("."),null()) + (int)1),null());
						}
					}
					HX_STACK_LINE(254)
					return s;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::String Block( Dynamic &Obj2,bool &Simple){
				HX_STACK_PUSH("*::closure","flixel/util/FlxStringUtil.hx",254);
				{
					HX_STACK_LINE(254)
					::String s = ::Type_obj::getClassName(::Type_obj::getClass(Obj2));		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(254)
					if (((s != null()))){
						HX_STACK_LINE(254)
						s = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));
						HX_STACK_LINE(254)
						if ((Simple)){
							HX_STACK_LINE(254)
							s = s.substr((s.lastIndexOf(HX_CSTRING("."),null()) + (int)1),null());
						}
					}
					HX_STACK_LINE(254)
					return s;
				}
				return null();
			}
		};
		HX_STACK_LINE(253)
		return (_Function_1_1::Block(Obj1,Simple) == _Function_1_2::Block(Obj2,Simple));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxStringUtil_obj,sameClassName,return )

Array< int > FlxStringUtil_obj::toIntArray( ::String Data){
	HX_STACK_PUSH("FlxStringUtil::toIntArray","flixel/util/FlxStringUtil.hx",265);
	HX_STACK_ARG(Data,"Data");
	HX_STACK_LINE(266)
	if (((bool((Data != null())) && bool((Data != HX_CSTRING("")))))){
		HX_STACK_LINE(268)
		Array< ::String > strArray = Data.split(HX_CSTRING(","));		HX_STACK_VAR(strArray,"strArray");
		HX_STACK_LINE(269)
		Array< int > iArray = Array_obj< int >::__new();		HX_STACK_VAR(iArray,"iArray");
		HX_STACK_LINE(270)
		{
			HX_STACK_LINE(270)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(270)
			while(((_g < strArray->length))){
				HX_STACK_LINE(270)
				::String str = strArray->__get(_g);		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(270)
				++(_g);
				HX_STACK_LINE(272)
				iArray->push(::Std_obj::parseInt(str));
			}
		}
		HX_STACK_LINE(274)
		return iArray;
	}
	HX_STACK_LINE(276)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,toIntArray,return )

Array< Float > FlxStringUtil_obj::toFloatArray( ::String Data){
	HX_STACK_PUSH("FlxStringUtil::toFloatArray","flixel/util/FlxStringUtil.hx",286);
	HX_STACK_ARG(Data,"Data");
	HX_STACK_LINE(287)
	if (((bool((Data != null())) && bool((Data != HX_CSTRING("")))))){
		HX_STACK_LINE(289)
		Array< ::String > strArray = Data.split(HX_CSTRING(","));		HX_STACK_VAR(strArray,"strArray");
		HX_STACK_LINE(290)
		Array< Float > fArray = Array_obj< Float >::__new();		HX_STACK_VAR(fArray,"fArray");
		HX_STACK_LINE(291)
		{
			HX_STACK_LINE(291)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(291)
			while(((_g < strArray->length))){
				HX_STACK_LINE(291)
				::String str = strArray->__get(_g);		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(291)
				++(_g);
				HX_STACK_LINE(293)
				fArray->push(::Std_obj::parseFloat(str));
			}
		}
		HX_STACK_LINE(295)
		return fArray;
	}
	HX_STACK_LINE(297)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxStringUtil_obj,toFloatArray,return )


FlxStringUtil_obj::FlxStringUtil_obj()
{
}

void FlxStringUtil_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxStringUtil);
	HX_MARK_END_CLASS();
}

void FlxStringUtil_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxStringUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"getDomain") ) { return getDomain_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"formatTime") ) { return formatTime_dyn(); }
		if (HX_FIELD_EQ(inName,"htmlFormat") ) { return htmlFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"toIntArray") ) { return toIntArray_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"formatTicks") ) { return formatTicks_dyn(); }
		if (HX_FIELD_EQ(inName,"formatArray") ) { return formatArray_dyn(); }
		if (HX_FIELD_EQ(inName,"formatMoney") ) { return formatMoney_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"filterDigits") ) { return filterDigits_dyn(); }
		if (HX_FIELD_EQ(inName,"toFloatArray") ) { return toFloatArray_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sameClassName") ) { return sameClassName_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"formatStringMap") ) { return formatStringMap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxStringUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxStringUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("formatTicks"),
	HX_CSTRING("formatTime"),
	HX_CSTRING("formatArray"),
	HX_CSTRING("formatStringMap"),
	HX_CSTRING("formatMoney"),
	HX_CSTRING("filterDigits"),
	HX_CSTRING("htmlFormat"),
	HX_CSTRING("getDomain"),
	HX_CSTRING("sameClassName"),
	HX_CSTRING("toIntArray"),
	HX_CSTRING("toFloatArray"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxStringUtil_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxStringUtil_obj::__mClass,"__mClass");
};

Class FlxStringUtil_obj::__mClass;

void FlxStringUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxStringUtil"), hx::TCanCast< FlxStringUtil_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxStringUtil_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
