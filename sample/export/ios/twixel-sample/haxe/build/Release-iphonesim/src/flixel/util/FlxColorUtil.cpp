#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_util_FlxColorUtil
#include <flixel/util/FlxColorUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace util{

Void FlxColorUtil_obj::__construct()
{
	return null();
}

FlxColorUtil_obj::~FlxColorUtil_obj() { }

Dynamic FlxColorUtil_obj::__CreateEmpty() { return  new FlxColorUtil_obj; }
hx::ObjectPtr< FlxColorUtil_obj > FlxColorUtil_obj::__new()
{  hx::ObjectPtr< FlxColorUtil_obj > result = new FlxColorUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxColorUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxColorUtil_obj > result = new FlxColorUtil_obj();
	result->__construct();
	return result;}

int FlxColorUtil_obj::makeFromARGB( hx::Null< Float >  __o_Alpha,int Red,int Green,int Blue){
Float Alpha = __o_Alpha.Default(1.0);
	HX_STACK_PUSH("FlxColorUtil::makeFromARGB","flixel/util/FlxColorUtil.hx",19);
	HX_STACK_ARG(Alpha,"Alpha");
	HX_STACK_ARG(Red,"Red");
	HX_STACK_ARG(Green,"Green");
	HX_STACK_ARG(Blue,"Blue");
{
		HX_STACK_LINE(19)
		return (int((int((int((int(((int(::Std_obj::_int((  (((Alpha > (int)1))) ? Float(Alpha) : Float((Alpha * (int)255)) ))) & int((int)255)))) << int((int)24))) | int((int(((int(Red) & int((int)255)))) << int((int)16))))) | int((int(((int(Green) & int((int)255)))) << int((int)8))))) | int((int(Blue) & int((int)255))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColorUtil_obj,makeFromARGB,return )

int FlxColorUtil_obj::makeFromHSBA( Float Hue,Float Saturation,Float Brightness,hx::Null< Float >  __o_Alpha){
Float Alpha = __o_Alpha.Default(1.0);
	HX_STACK_PUSH("FlxColorUtil::makeFromHSBA","flixel/util/FlxColorUtil.hx",33);
	HX_STACK_ARG(Hue,"Hue");
	HX_STACK_ARG(Saturation,"Saturation");
	HX_STACK_ARG(Brightness,"Brightness");
	HX_STACK_ARG(Alpha,"Alpha");
{
		HX_STACK_LINE(34)
		Float red;		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(35)
		Float green;		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(36)
		Float blue;		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(38)
		if (((Saturation == 0.0))){
			HX_STACK_LINE(40)
			red = Brightness;
			HX_STACK_LINE(41)
			green = Brightness;
			HX_STACK_LINE(42)
			blue = Brightness;
		}
		else{
			HX_STACK_LINE(46)
			if (((Hue == (int)360))){
				HX_STACK_LINE(47)
				Hue = (int)0;
			}
			HX_STACK_LINE(51)
			int slice = ::Std_obj::_int((Float(Hue) / Float((int)60)));		HX_STACK_VAR(slice,"slice");
			HX_STACK_LINE(52)
			Float hf = ((Float(Hue) / Float((int)60)) - slice);		HX_STACK_VAR(hf,"hf");
			HX_STACK_LINE(53)
			Float aa = (Brightness * (((int)1 - Saturation)));		HX_STACK_VAR(aa,"aa");
			HX_STACK_LINE(54)
			Float bb = (Brightness * (((int)1 - (Saturation * hf))));		HX_STACK_VAR(bb,"bb");
			HX_STACK_LINE(55)
			Float cc = (Brightness * (((int)1 - (Saturation * ((1.0 - hf))))));		HX_STACK_VAR(cc,"cc");
			HX_STACK_LINE(57)
			switch( (int)(slice)){
				case (int)0: {
					HX_STACK_LINE(60)
					red = Brightness;
					HX_STACK_LINE(61)
					green = cc;
					HX_STACK_LINE(62)
					blue = aa;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(64)
					red = bb;
					HX_STACK_LINE(65)
					green = Brightness;
					HX_STACK_LINE(66)
					blue = aa;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(68)
					red = aa;
					HX_STACK_LINE(69)
					green = Brightness;
					HX_STACK_LINE(70)
					blue = cc;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(72)
					red = aa;
					HX_STACK_LINE(73)
					green = bb;
					HX_STACK_LINE(74)
					blue = Brightness;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(76)
					red = cc;
					HX_STACK_LINE(77)
					green = aa;
					HX_STACK_LINE(78)
					blue = Brightness;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(80)
					red = Brightness;
					HX_STACK_LINE(81)
					green = aa;
					HX_STACK_LINE(82)
					blue = bb;
				}
				;break;
				default: {
					HX_STACK_LINE(84)
					red = (int)0;
					HX_STACK_LINE(85)
					green = (int)0;
					HX_STACK_LINE(86)
					blue = (int)0;
				}
			}
		}
		HX_STACK_LINE(90)
		return (int((int((int((int(((int(::Std_obj::_int((  (((Alpha > (int)1))) ? Float(Alpha) : Float((Alpha * (int)255)) ))) & int((int)255)))) << int((int)24))) | int((int(::Std_obj::_int((red * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((green * (int)255))) << int((int)8))))) | int(::Std_obj::_int((blue * (int)255))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColorUtil_obj,makeFromHSBA,return )

Dynamic FlxColorUtil_obj::getARGB( int Color,Dynamic Results){
	HX_STACK_PUSH("FlxColorUtil::getARGB","flixel/util/FlxColorUtil.hx",102);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Results,"Results");
	HX_STACK_LINE(103)
	int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
	HX_STACK_LINE(104)
	int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
	HX_STACK_LINE(105)
	int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
	HX_STACK_LINE(106)
	Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
	HX_STACK_LINE(108)
	if (((Results != null()))){
		struct _Function_2_1{
			inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
				HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",109);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("red") , red,false);
					__result->Add(HX_CSTRING("green") , green,false);
					__result->Add(HX_CSTRING("blue") , blue,false);
					__result->Add(HX_CSTRING("alpha") , alpha,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(108)
		Results = _Function_2_1::Block(red,green,blue,alpha);
	}
	struct _Function_1_1{
		inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",112);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("red") , red,false);
				__result->Add(HX_CSTRING("green") , green,false);
				__result->Add(HX_CSTRING("blue") , blue,false);
				__result->Add(HX_CSTRING("alpha") , alpha,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(112)
	return _Function_1_1::Block(red,green,blue,alpha);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,getARGB,return )

Dynamic FlxColorUtil_obj::getHSBA( int Color,Dynamic Results){
	HX_STACK_PUSH("FlxColorUtil::getHSBA","flixel/util/FlxColorUtil.hx",125);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Results,"Results");
	HX_STACK_LINE(126)
	Float hue;		HX_STACK_VAR(hue,"hue");
	HX_STACK_LINE(127)
	Float saturation;		HX_STACK_VAR(saturation,"saturation");
	HX_STACK_LINE(128)
	Float brightness;		HX_STACK_VAR(brightness,"brightness");
	HX_STACK_LINE(129)
	Float alpha;		HX_STACK_VAR(alpha,"alpha");
	HX_STACK_LINE(131)
	Float red = (Float(((int((int(Color) >> int((int)16))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(red,"red");
	HX_STACK_LINE(132)
	Float green = (Float(((int((int(Color) >> int((int)8))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(green,"green");
	HX_STACK_LINE(133)
	Float blue = (Float(((int(Color) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(blue,"blue");
	HX_STACK_LINE(135)
	Float m = (  (((red > green))) ? Float(red) : Float(green) );		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(136)
	Float dmax = (  (((m > blue))) ? Float(m) : Float(blue) );		HX_STACK_VAR(dmax,"dmax");
	HX_STACK_LINE(137)
	m = (  (((red > green))) ? Float(green) : Float(red) );
	HX_STACK_LINE(138)
	Float dmin = (  (((m > blue))) ? Float(blue) : Float(m) );		HX_STACK_VAR(dmin,"dmin");
	HX_STACK_LINE(139)
	Float range = (dmax - dmin);		HX_STACK_VAR(range,"range");
	HX_STACK_LINE(141)
	brightness = ::flixel::util::FlxMath_obj::roundDecimal(dmax,(int)4);
	HX_STACK_LINE(142)
	saturation = (int)0;
	HX_STACK_LINE(143)
	hue = (int)0;
	HX_STACK_LINE(145)
	if (((dmax != (int)0))){
		HX_STACK_LINE(146)
		saturation = ::flixel::util::FlxMath_obj::roundDecimal((Float(range) / Float(dmax)),(int)4);
	}
	HX_STACK_LINE(149)
	if (((saturation != (int)0))){
		HX_STACK_LINE(151)
		if (((red == dmax))){
			HX_STACK_LINE(152)
			hue = (Float(((green - blue))) / Float(range));
		}
		else{
			HX_STACK_LINE(155)
			if (((green == dmax))){
				HX_STACK_LINE(156)
				hue = ((int)2 + (Float(((blue - red))) / Float(range)));
			}
			else{
				HX_STACK_LINE(159)
				if (((blue == dmax))){
					HX_STACK_LINE(160)
					hue = ((int)4 + (Float(((red - green))) / Float(range)));
				}
			}
		}
		HX_STACK_LINE(163)
		hx::MultEq(hue,(int)60);
		HX_STACK_LINE(164)
		if (((hue < (int)0))){
			HX_STACK_LINE(165)
			hx::AddEq(hue,(int)360);
		}
	}
	HX_STACK_LINE(170)
	alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);
	HX_STACK_LINE(172)
	if (((Results != null()))){
		struct _Function_2_1{
			inline static Dynamic Block( Float &brightness,Float &saturation,Float &alpha,Float &hue){
				HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",173);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("hue") , ::Std_obj::_int(hue),false);
					__result->Add(HX_CSTRING("brightness") , brightness,false);
					__result->Add(HX_CSTRING("saturation") , saturation,false);
					__result->Add(HX_CSTRING("alpha") , alpha,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(172)
		Results = _Function_2_1::Block(brightness,saturation,alpha,hue);
	}
	struct _Function_1_1{
		inline static Dynamic Block( Float &brightness,Float &saturation,Float &alpha,Float &hue){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",175);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("hue") , ::Std_obj::_int(hue),false);
				__result->Add(HX_CSTRING("brightness") , brightness,false);
				__result->Add(HX_CSTRING("saturation") , saturation,false);
				__result->Add(HX_CSTRING("alpha") , alpha,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(175)
	return _Function_1_1::Block(brightness,saturation,alpha,hue);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,getHSBA,return )

int FlxColorUtil_obj::getAlpha( int Color){
	HX_STACK_PUSH("FlxColorUtil::getAlpha","flixel/util/FlxColorUtil.hx",185);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(185)
	return (int((int(Color) >> int((int)24))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getAlpha,return )

Float FlxColorUtil_obj::getAlphaFloat( int Color){
	HX_STACK_PUSH("FlxColorUtil::getAlphaFloat","flixel/util/FlxColorUtil.hx",196);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(197)
	int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(198)
	return (Float(f) / Float((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getAlphaFloat,return )

int FlxColorUtil_obj::getRed( int Color){
	HX_STACK_PUSH("FlxColorUtil::getRed","flixel/util/FlxColorUtil.hx",208);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(208)
	return (int((int(Color) >> int((int)16))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getRed,return )

int FlxColorUtil_obj::getGreen( int Color){
	HX_STACK_PUSH("FlxColorUtil::getGreen","flixel/util/FlxColorUtil.hx",219);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(219)
	return (int((int(Color) >> int((int)8))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getGreen,return )

int FlxColorUtil_obj::getBlue( int Color){
	HX_STACK_PUSH("FlxColorUtil::getBlue","flixel/util/FlxColorUtil.hx",230);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(230)
	return (int(Color) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getBlue,return )

int FlxColorUtil_obj::getRandomColor( hx::Null< int >  __o_Min,hx::Null< int >  __o_Max,hx::Null< int >  __o_Alpha){
int Min = __o_Min.Default(0);
int Max = __o_Max.Default(255);
int Alpha = __o_Alpha.Default(255);
	HX_STACK_PUSH("FlxColorUtil::getRandomColor","flixel/util/FlxColorUtil.hx",244);
	HX_STACK_ARG(Min,"Min");
	HX_STACK_ARG(Max,"Max");
	HX_STACK_ARG(Alpha,"Alpha");
{
		HX_STACK_LINE(244)
		return ::flixel::util::FlxRandom_obj::color(Min,Max,Alpha,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxColorUtil_obj,getRandomColor,return )

int FlxColorUtil_obj::getColor32( int Alpha,int Red,int Green,int Blue){
	HX_STACK_PUSH("FlxColorUtil::getColor32","flixel/util/FlxColorUtil.hx",258);
	HX_STACK_ARG(Alpha,"Alpha");
	HX_STACK_ARG(Red,"Red");
	HX_STACK_ARG(Green,"Green");
	HX_STACK_ARG(Blue,"Blue");
	HX_STACK_LINE(258)
	return (int((int((int((int(Alpha) << int((int)24))) | int((int(Red) << int((int)16))))) | int((int(Green) << int((int)8))))) | int(Blue));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColorUtil_obj,getColor32,return )

int FlxColorUtil_obj::getColor24( int Red,int Green,int Blue){
	HX_STACK_PUSH("FlxColorUtil::getColor24","flixel/util/FlxColorUtil.hx",271);
	HX_STACK_ARG(Red,"Red");
	HX_STACK_ARG(Green,"Green");
	HX_STACK_ARG(Blue,"Blue");
	HX_STACK_LINE(271)
	return (int((int((int(Red) << int((int)16))) | int((int(Green) << int((int)8))))) | int(Blue));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxColorUtil_obj,getColor24,return )

Array< int > FlxColorUtil_obj::getHSVColorWheel( hx::Null< int >  __o_Alpha){
int Alpha = __o_Alpha.Default(255);
	HX_STACK_PUSH("FlxColorUtil::getHSVColorWheel","flixel/util/FlxColorUtil.hx",282);
	HX_STACK_ARG(Alpha,"Alpha");
{
		HX_STACK_LINE(283)
		Array< int > colors = Array_obj< int >::__new();		HX_STACK_VAR(colors,"colors");
		HX_STACK_LINE(285)
		{
			HX_STACK_LINE(285)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(285)
			while(((_g < (int)360))){
				HX_STACK_LINE(285)
				int c = (_g)++;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(287)
				colors[c] = ::flixel::util::FlxColorUtil_obj::HSVtoARGB(c,1.0,1.0,Alpha);
			}
		}
		HX_STACK_LINE(290)
		return colors;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getHSVColorWheel,return )

int FlxColorUtil_obj::getComplementHarmony( int Color){
	HX_STACK_PUSH("FlxColorUtil::getComplementHarmony","flixel/util/FlxColorUtil.hx",302);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(303)
	Dynamic hsv = ::flixel::util::FlxColorUtil_obj::RGBtoHSV(Color);		HX_STACK_VAR(hsv,"hsv");
	HX_STACK_LINE(304)
	int opposite = ::flixel::util::FlxMath_obj::wrapValue(::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),(int)180,(int)359);		HX_STACK_VAR(opposite,"opposite");
	HX_STACK_LINE(306)
	return ::flixel::util::FlxColorUtil_obj::HSVtoARGB(opposite,1.0,1.0,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getComplementHarmony,return )

Dynamic FlxColorUtil_obj::getAnalogousHarmony( int Color,hx::Null< int >  __o_Threshold){
int Threshold = __o_Threshold.Default(30);
	HX_STACK_PUSH("FlxColorUtil::getAnalogousHarmony","flixel/util/FlxColorUtil.hx",319);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Threshold,"Threshold");
{
		HX_STACK_LINE(320)
		Dynamic hsv = ::flixel::util::FlxColorUtil_obj::RGBtoHSV(Color);		HX_STACK_VAR(hsv,"hsv");
		HX_STACK_LINE(322)
		if (((bool((Threshold > (int)359)) || bool((Threshold < (int)0))))){
			HX_STACK_LINE(323)
			Dynamic();
		}
		HX_STACK_LINE(327)
		int warmer = ::flixel::util::FlxMath_obj::wrapValue(::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),((int)359 - Threshold),(int)359);		HX_STACK_VAR(warmer,"warmer");
		HX_STACK_LINE(328)
		int colder = ::flixel::util::FlxMath_obj::wrapValue(::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),Threshold,(int)359);		HX_STACK_VAR(colder,"colder");
		struct _Function_1_1{
			inline static Dynamic Block( int &warmer,Dynamic &hsv,int &Color,int &colder){
				HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",330);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("color1") , Color,false);
					__result->Add(HX_CSTRING("color2") , ::flixel::util::FlxColorUtil_obj::HSVtoARGB(warmer,1.0,1.0,null()),false);
					__result->Add(HX_CSTRING("color3") , ::flixel::util::FlxColorUtil_obj::HSVtoARGB(colder,1.0,1.0,null()),false);
					__result->Add(HX_CSTRING("hue1") , ::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),false);
					__result->Add(HX_CSTRING("hue2") , warmer,false);
					__result->Add(HX_CSTRING("hue3") , colder,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(330)
		return _Function_1_1::Block(warmer,hsv,Color,colder);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,getAnalogousHarmony,return )

Dynamic FlxColorUtil_obj::getSplitComplementHarmony( int Color,hx::Null< int >  __o_Threshold){
int Threshold = __o_Threshold.Default(30);
	HX_STACK_PUSH("FlxColorUtil::getSplitComplementHarmony","flixel/util/FlxColorUtil.hx",343);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Threshold,"Threshold");
{
		HX_STACK_LINE(344)
		Dynamic hsv = ::flixel::util::FlxColorUtil_obj::RGBtoHSV(Color);		HX_STACK_VAR(hsv,"hsv");
		HX_STACK_LINE(346)
		if (((bool((Threshold >= (int)359)) || bool((Threshold <= (int)0))))){
			HX_STACK_LINE(347)
			Dynamic();
		}
		HX_STACK_LINE(351)
		int opposite = ::flixel::util::FlxMath_obj::wrapValue(::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),(int)180,(int)359);		HX_STACK_VAR(opposite,"opposite");
		HX_STACK_LINE(353)
		int warmer = ::flixel::util::FlxMath_obj::wrapValue(::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),(opposite - Threshold),(int)359);		HX_STACK_VAR(warmer,"warmer");
		HX_STACK_LINE(354)
		int colder = ::flixel::util::FlxMath_obj::wrapValue(::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),(opposite + Threshold),(int)359);		HX_STACK_VAR(colder,"colder");
		struct _Function_1_1{
			inline static Dynamic Block( int &warmer,Dynamic &hsv,int &Color,int &colder){
				HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",358);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("color1") , Color,false);
					__result->Add(HX_CSTRING("color2") , ::flixel::util::FlxColorUtil_obj::HSVtoARGB(warmer,hsv->__Field(HX_CSTRING("saturation"),true),hsv->__Field(HX_CSTRING("value"),true),null()),false);
					__result->Add(HX_CSTRING("color3") , ::flixel::util::FlxColorUtil_obj::HSVtoARGB(colder,hsv->__Field(HX_CSTRING("saturation"),true),hsv->__Field(HX_CSTRING("value"),true),null()),false);
					__result->Add(HX_CSTRING("hue1") , ::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),false);
					__result->Add(HX_CSTRING("hue2") , warmer,false);
					__result->Add(HX_CSTRING("hue3") , colder,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(358)
		return _Function_1_1::Block(warmer,hsv,Color,colder);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,getSplitComplementHarmony,return )

Dynamic FlxColorUtil_obj::getTriadicHarmony( int Color){
	HX_STACK_PUSH("FlxColorUtil::getTriadicHarmony","flixel/util/FlxColorUtil.hx",369);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(370)
	Dynamic hsv = ::flixel::util::FlxColorUtil_obj::RGBtoHSV(Color);		HX_STACK_VAR(hsv,"hsv");
	HX_STACK_LINE(372)
	int triadic1 = ::flixel::util::FlxMath_obj::wrapValue(::Std_obj::_int(hsv->__Field(HX_CSTRING("hue"),true)),(int)120,(int)359);		HX_STACK_VAR(triadic1,"triadic1");
	HX_STACK_LINE(373)
	int triadic2 = ::flixel::util::FlxMath_obj::wrapValue(triadic1,(int)120,(int)359);		HX_STACK_VAR(triadic2,"triadic2");
	struct _Function_1_1{
		inline static Dynamic Block( int &Color,int &triadic2,int &triadic1){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",375);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("color1") , Color,false);
				__result->Add(HX_CSTRING("color2") , ::flixel::util::FlxColorUtil_obj::HSVtoARGB(triadic1,1.0,1.0,null()),false);
				__result->Add(HX_CSTRING("color3") , ::flixel::util::FlxColorUtil_obj::HSVtoARGB(triadic2,1.0,1.0,null()),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(375)
	return _Function_1_1::Block(Color,triadic2,triadic1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getTriadicHarmony,return )

::String FlxColorUtil_obj::getColorInfo( int Color){
	HX_STACK_PUSH("FlxColorUtil::getColorInfo","flixel/util/FlxColorUtil.hx",386);
	HX_STACK_ARG(Color,"Color");
	struct _Function_1_1{
		inline static Dynamic Block( int &Color){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",387);
			{
				HX_STACK_LINE(387)
				Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
				HX_STACK_LINE(387)
				int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
				HX_STACK_LINE(387)
				int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
				HX_STACK_LINE(387)
				int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
				HX_STACK_LINE(387)
				Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(387)
				if (((Results != null()))){
					struct _Function_3_1{
						inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
							HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",387);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("red") , red,false);
								__result->Add(HX_CSTRING("green") , green,false);
								__result->Add(HX_CSTRING("blue") , blue,false);
								__result->Add(HX_CSTRING("alpha") , alpha,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(387)
					Results = _Function_3_1::Block(red,green,blue,alpha);
				}
				struct _Function_2_1{
					inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
						HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",387);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("red") , red,false);
							__result->Add(HX_CSTRING("green") , green,false);
							__result->Add(HX_CSTRING("blue") , blue,false);
							__result->Add(HX_CSTRING("alpha") , alpha,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(387)
				return _Function_2_1::Block(red,green,blue,alpha);
			}
			return null();
		}
	};
	HX_STACK_LINE(387)
	Dynamic argb = _Function_1_1::Block(Color);		HX_STACK_VAR(argb,"argb");
	HX_STACK_LINE(388)
	Dynamic hsl = ::flixel::util::FlxColorUtil_obj::RGBtoHSV(Color);		HX_STACK_VAR(hsl,"hsl");
	struct _Function_1_2{
		inline static ::String Block( int &Color){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",391);
			{
				struct _Function_2_1{
					inline static Dynamic Block( int &Color){
						HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",391);
						{
							HX_STACK_LINE(391)
							Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
							HX_STACK_LINE(391)
							int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
							HX_STACK_LINE(391)
							int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
							HX_STACK_LINE(391)
							int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
							HX_STACK_LINE(391)
							Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
							HX_STACK_LINE(391)
							if (((Results != null()))){
								struct _Function_4_1{
									inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
										HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",391);
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("red") , red,false);
											__result->Add(HX_CSTRING("green") , green,false);
											__result->Add(HX_CSTRING("blue") , blue,false);
											__result->Add(HX_CSTRING("alpha") , alpha,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(391)
								Results = _Function_4_1::Block(red,green,blue,alpha);
							}
							struct _Function_3_1{
								inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
									HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",391);
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_CSTRING("red") , red,false);
										__result->Add(HX_CSTRING("green") , green,false);
										__result->Add(HX_CSTRING("blue") , blue,false);
										__result->Add(HX_CSTRING("alpha") , alpha,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(391)
							return _Function_3_1::Block(red,green,blue,alpha);
						}
						return null();
					}
				};
				HX_STACK_LINE(391)
				Dynamic argb1 = _Function_2_1::Block(Color);		HX_STACK_VAR(argb1,"argb1");
				struct _Function_2_2{
					inline static ::String Block( Dynamic &argb1){
						HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",391);
						{
							HX_STACK_LINE(391)
							int Color1 = ::Std_obj::_int(argb1->__Field(HX_CSTRING("alpha"),true));		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(391)
							::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
							HX_STACK_LINE(391)
							Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
							HX_STACK_LINE(391)
							Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
							HX_STACK_LINE(391)
							return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
						}
						return null();
					}
				};
				struct _Function_2_3{
					inline static ::String Block( Dynamic &argb1){
						HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",391);
						{
							HX_STACK_LINE(391)
							int Color1 = argb1->__Field(HX_CSTRING("red"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(391)
							::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
							HX_STACK_LINE(391)
							Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
							HX_STACK_LINE(391)
							Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
							HX_STACK_LINE(391)
							return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
						}
						return null();
					}
				};
				struct _Function_2_4{
					inline static ::String Block( Dynamic &argb1){
						HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",391);
						{
							HX_STACK_LINE(391)
							int Color1 = argb1->__Field(HX_CSTRING("green"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(391)
							::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
							HX_STACK_LINE(391)
							Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
							HX_STACK_LINE(391)
							Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
							HX_STACK_LINE(391)
							return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
						}
						return null();
					}
				};
				struct _Function_2_5{
					inline static ::String Block( Dynamic &argb1){
						HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",391);
						{
							HX_STACK_LINE(391)
							int Color1 = argb1->__Field(HX_CSTRING("blue"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(391)
							::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
							HX_STACK_LINE(391)
							Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
							HX_STACK_LINE(391)
							Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
							HX_STACK_LINE(391)
							return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
						}
						return null();
					}
				};
				HX_STACK_LINE(391)
				return ((((HX_CSTRING("0x") + _Function_2_2::Block(argb1)) + _Function_2_3::Block(argb1)) + _Function_2_4::Block(argb1)) + _Function_2_5::Block(argb1));
			}
			return null();
		}
	};
	HX_STACK_LINE(391)
	::String result = (_Function_1_2::Block(Color) + HX_CSTRING("\n"));		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(394)
	hx::AddEq(result,((((((((HX_CSTRING("Alpha: ") + argb->__Field(HX_CSTRING("alpha"),true)) + HX_CSTRING(" Red: ")) + argb->__Field(HX_CSTRING("red"),true)) + HX_CSTRING(" Green: ")) + argb->__Field(HX_CSTRING("green"),true)) + HX_CSTRING(" Blue: ")) + argb->__Field(HX_CSTRING("blue"),true)) + HX_CSTRING("\n")));
	HX_STACK_LINE(397)
	hx::AddEq(result,(((((HX_CSTRING("Hue: ") + hsl->__Field(HX_CSTRING("hue"),true)) + HX_CSTRING(" Saturation: ")) + hsl->__Field(HX_CSTRING("saturation"),true)) + HX_CSTRING(" Lightnes: ")) + hsl->__Field(HX_CSTRING("lightness"),true)));
	HX_STACK_LINE(399)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,getColorInfo,return )

::String FlxColorUtil_obj::ARGBtoHexString( int Color){
	HX_STACK_PUSH("FlxColorUtil::ARGBtoHexString","flixel/util/FlxColorUtil.hx",409);
	HX_STACK_ARG(Color,"Color");
	struct _Function_1_1{
		inline static Dynamic Block( int &Color){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",410);
			{
				HX_STACK_LINE(410)
				Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
				HX_STACK_LINE(410)
				int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
				HX_STACK_LINE(410)
				int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
				HX_STACK_LINE(410)
				int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
				HX_STACK_LINE(410)
				Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(410)
				if (((Results != null()))){
					struct _Function_3_1{
						inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
							HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",410);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("red") , red,false);
								__result->Add(HX_CSTRING("green") , green,false);
								__result->Add(HX_CSTRING("blue") , blue,false);
								__result->Add(HX_CSTRING("alpha") , alpha,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(410)
					Results = _Function_3_1::Block(red,green,blue,alpha);
				}
				struct _Function_2_1{
					inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
						HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",410);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("red") , red,false);
							__result->Add(HX_CSTRING("green") , green,false);
							__result->Add(HX_CSTRING("blue") , blue,false);
							__result->Add(HX_CSTRING("alpha") , alpha,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(410)
				return _Function_2_1::Block(red,green,blue,alpha);
			}
			return null();
		}
	};
	HX_STACK_LINE(410)
	Dynamic argb = _Function_1_1::Block(Color);		HX_STACK_VAR(argb,"argb");
	struct _Function_1_2{
		inline static ::String Block( Dynamic &argb){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",411);
			{
				HX_STACK_LINE(411)
				int Color1 = ::Std_obj::_int(argb->__Field(HX_CSTRING("alpha"),true));		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(411)
				::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
				HX_STACK_LINE(411)
				Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
				HX_STACK_LINE(411)
				Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
				HX_STACK_LINE(411)
				return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static ::String Block( Dynamic &argb){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",411);
			{
				HX_STACK_LINE(411)
				int Color1 = argb->__Field(HX_CSTRING("red"),true);		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(411)
				::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
				HX_STACK_LINE(411)
				Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
				HX_STACK_LINE(411)
				Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
				HX_STACK_LINE(411)
				return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static ::String Block( Dynamic &argb){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",411);
			{
				HX_STACK_LINE(411)
				int Color1 = argb->__Field(HX_CSTRING("green"),true);		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(411)
				::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
				HX_STACK_LINE(411)
				Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
				HX_STACK_LINE(411)
				Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
				HX_STACK_LINE(411)
				return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
			}
			return null();
		}
	};
	struct _Function_1_5{
		inline static ::String Block( Dynamic &argb){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",411);
			{
				HX_STACK_LINE(411)
				int Color1 = argb->__Field(HX_CSTRING("blue"),true);		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(411)
				::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
				HX_STACK_LINE(411)
				Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
				HX_STACK_LINE(411)
				Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
				HX_STACK_LINE(411)
				return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
			}
			return null();
		}
	};
	HX_STACK_LINE(411)
	return ((((HX_CSTRING("0x") + _Function_1_2::Block(argb)) + _Function_1_3::Block(argb)) + _Function_1_4::Block(argb)) + _Function_1_5::Block(argb));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,ARGBtoHexString,return )

::String FlxColorUtil_obj::ARGBtoWebString( int Color){
	HX_STACK_PUSH("FlxColorUtil::ARGBtoWebString","flixel/util/FlxColorUtil.hx",421);
	HX_STACK_ARG(Color,"Color");
	struct _Function_1_1{
		inline static Dynamic Block( int &Color){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",422);
			{
				HX_STACK_LINE(422)
				Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
				HX_STACK_LINE(422)
				int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
				HX_STACK_LINE(422)
				int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
				HX_STACK_LINE(422)
				int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
				HX_STACK_LINE(422)
				Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(422)
				if (((Results != null()))){
					struct _Function_3_1{
						inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
							HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",422);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("red") , red,false);
								__result->Add(HX_CSTRING("green") , green,false);
								__result->Add(HX_CSTRING("blue") , blue,false);
								__result->Add(HX_CSTRING("alpha") , alpha,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(422)
					Results = _Function_3_1::Block(red,green,blue,alpha);
				}
				struct _Function_2_1{
					inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
						HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",422);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("red") , red,false);
							__result->Add(HX_CSTRING("green") , green,false);
							__result->Add(HX_CSTRING("blue") , blue,false);
							__result->Add(HX_CSTRING("alpha") , alpha,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(422)
				return _Function_2_1::Block(red,green,blue,alpha);
			}
			return null();
		}
	};
	HX_STACK_LINE(422)
	Dynamic argb = _Function_1_1::Block(Color);		HX_STACK_VAR(argb,"argb");
	struct _Function_1_2{
		inline static ::String Block( Dynamic &argb){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",423);
			{
				HX_STACK_LINE(423)
				int Color1 = argb->__Field(HX_CSTRING("red"),true);		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(423)
				::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
				HX_STACK_LINE(423)
				Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
				HX_STACK_LINE(423)
				Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
				HX_STACK_LINE(423)
				return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static ::String Block( Dynamic &argb){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",423);
			{
				HX_STACK_LINE(423)
				int Color1 = argb->__Field(HX_CSTRING("green"),true);		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(423)
				::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
				HX_STACK_LINE(423)
				Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
				HX_STACK_LINE(423)
				Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
				HX_STACK_LINE(423)
				return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static ::String Block( Dynamic &argb){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",423);
			{
				HX_STACK_LINE(423)
				int Color1 = argb->__Field(HX_CSTRING("blue"),true);		HX_STACK_VAR(Color1,"Color1");
				HX_STACK_LINE(423)
				::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
				HX_STACK_LINE(423)
				Float lsd = hx::Mod(Color1,(int)16);		HX_STACK_VAR(lsd,"lsd");
				HX_STACK_LINE(423)
				Float msd = (Float(((Color1 - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
				HX_STACK_LINE(423)
				return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
			}
			return null();
		}
	};
	HX_STACK_LINE(423)
	return (((HX_CSTRING("#") + _Function_1_2::Block(argb)) + _Function_1_3::Block(argb)) + _Function_1_4::Block(argb));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,ARGBtoWebString,return )

::String FlxColorUtil_obj::colorToHexString( int Color){
	HX_STACK_PUSH("FlxColorUtil::colorToHexString","flixel/util/FlxColorUtil.hx",433);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(434)
	::String digits = HX_CSTRING("0123456789ABCDEF");		HX_STACK_VAR(digits,"digits");
	HX_STACK_LINE(436)
	Float lsd = hx::Mod(Color,(int)16);		HX_STACK_VAR(lsd,"lsd");
	HX_STACK_LINE(437)
	Float msd = (Float(((Color - lsd))) / Float((int)16));		HX_STACK_VAR(msd,"msd");
	HX_STACK_LINE(439)
	return (digits.charAt(::Std_obj::_int(msd)) + digits.charAt(::Std_obj::_int(lsd)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,colorToHexString,return )

int FlxColorUtil_obj::HSVtoARGB( Float H,Float S,Float V,hx::Null< int >  __o_Alpha){
int Alpha = __o_Alpha.Default(255);
	HX_STACK_PUSH("FlxColorUtil::HSVtoARGB","flixel/util/FlxColorUtil.hx",452);
	HX_STACK_ARG(H,"H");
	HX_STACK_ARG(S,"S");
	HX_STACK_ARG(V,"V");
	HX_STACK_ARG(Alpha,"Alpha");
{
		HX_STACK_LINE(453)
		int result = (int)0;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(455)
		if (((S == 0.0))){
			HX_STACK_LINE(456)
			result = (int((int((int((int(Alpha) << int((int)24))) | int((int(::Std_obj::_int((V * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((V * (int)255))) << int((int)8))))) | int(::Std_obj::_int((V * (int)255))));
		}
		else{
			HX_STACK_LINE(461)
			H = (Float(H) / Float(60.0));
			HX_STACK_LINE(462)
			Float f = (H - ::Std_obj::_int(H));		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(463)
			Float p = (V * ((1.0 - S)));		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(464)
			Float q = (V * ((1.0 - (S * f))));		HX_STACK_VAR(q,"q");
			HX_STACK_LINE(465)
			Float t = (V * ((1.0 - (S * ((1.0 - f))))));		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(467)
			{
				HX_STACK_LINE(467)
				int _g = ::Std_obj::_int(H);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(467)
				switch( (int)(_g)){
					case (int)0: {
						HX_STACK_LINE(469)
						result = (int((int((int((int(Alpha) << int((int)24))) | int((int(::Std_obj::_int((V * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((t * (int)255))) << int((int)8))))) | int(::Std_obj::_int((p * (int)255))));
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(471)
						result = (int((int((int((int(Alpha) << int((int)24))) | int((int(::Std_obj::_int((q * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((V * (int)255))) << int((int)8))))) | int(::Std_obj::_int((p * (int)255))));
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(473)
						result = (int((int((int((int(Alpha) << int((int)24))) | int((int(::Std_obj::_int((p * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((V * (int)255))) << int((int)8))))) | int(::Std_obj::_int((t * (int)255))));
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(475)
						result = (int((int((int((int(Alpha) << int((int)24))) | int((int(::Std_obj::_int((p * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((q * (int)255))) << int((int)8))))) | int(::Std_obj::_int((V * (int)255))));
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(477)
						result = (int((int((int((int(Alpha) << int((int)24))) | int((int(::Std_obj::_int((t * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((p * (int)255))) << int((int)8))))) | int(::Std_obj::_int((V * (int)255))));
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(479)
						result = (int((int((int((int(Alpha) << int((int)24))) | int((int(::Std_obj::_int((V * (int)255))) << int((int)16))))) | int((int(::Std_obj::_int((p * (int)255))) << int((int)8))))) | int(::Std_obj::_int((q * (int)255))));
					}
					;break;
					default: {
						HX_STACK_LINE(481)
						Dynamic();
					}
				}
			}
		}
		HX_STACK_LINE(486)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColorUtil_obj,HSVtoARGB,return )

Dynamic FlxColorUtil_obj::RGBtoHSV( int Color){
	HX_STACK_PUSH("FlxColorUtil::RGBtoHSV","flixel/util/FlxColorUtil.hx",496);
	HX_STACK_ARG(Color,"Color");
	struct _Function_1_1{
		inline static Dynamic Block( int &Color){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",497);
			{
				HX_STACK_LINE(497)
				Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
				HX_STACK_LINE(497)
				int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
				HX_STACK_LINE(497)
				int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
				HX_STACK_LINE(497)
				int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
				HX_STACK_LINE(497)
				Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(497)
				if (((Results != null()))){
					struct _Function_3_1{
						inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
							HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",497);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("red") , red,false);
								__result->Add(HX_CSTRING("green") , green,false);
								__result->Add(HX_CSTRING("blue") , blue,false);
								__result->Add(HX_CSTRING("alpha") , alpha,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(497)
					Results = _Function_3_1::Block(red,green,blue,alpha);
				}
				struct _Function_2_1{
					inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
						HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",497);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("red") , red,false);
							__result->Add(HX_CSTRING("green") , green,false);
							__result->Add(HX_CSTRING("blue") , blue,false);
							__result->Add(HX_CSTRING("alpha") , alpha,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(497)
				return _Function_2_1::Block(red,green,blue,alpha);
			}
			return null();
		}
	};
	HX_STACK_LINE(497)
	Dynamic rgb = _Function_1_1::Block(Color);		HX_STACK_VAR(rgb,"rgb");
	HX_STACK_LINE(499)
	Float red = (Float(rgb->__Field(HX_CSTRING("red"),true)) / Float((int)255));		HX_STACK_VAR(red,"red");
	HX_STACK_LINE(500)
	Float green = (Float(rgb->__Field(HX_CSTRING("green"),true)) / Float((int)255));		HX_STACK_VAR(green,"green");
	HX_STACK_LINE(501)
	Float blue = (Float(rgb->__Field(HX_CSTRING("blue"),true)) / Float((int)255));		HX_STACK_VAR(blue,"blue");
	HX_STACK_LINE(503)
	Float min = ::Math_obj::min(red,::Math_obj::min(green,blue));		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(504)
	Float max = ::Math_obj::max(red,::Math_obj::max(green,blue));		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(505)
	Float delta = (max - min);		HX_STACK_VAR(delta,"delta");
	HX_STACK_LINE(506)
	Float lightness = (Float(((max + min))) / Float((int)2));		HX_STACK_VAR(lightness,"lightness");
	HX_STACK_LINE(507)
	Float hue = (int)0;		HX_STACK_VAR(hue,"hue");
	HX_STACK_LINE(508)
	Float saturation;		HX_STACK_VAR(saturation,"saturation");
	HX_STACK_LINE(511)
	if (((delta == (int)0))){
		HX_STACK_LINE(513)
		hue = (int)0;
		HX_STACK_LINE(514)
		saturation = (int)0;
	}
	else{
		HX_STACK_LINE(518)
		if (((lightness < 0.5))){
			HX_STACK_LINE(519)
			saturation = (Float(delta) / Float(((max + min))));
		}
		else{
			HX_STACK_LINE(523)
			saturation = (Float(delta) / Float(((((int)2 - max) - min))));
		}
		HX_STACK_LINE(527)
		Float delta_r = (Float((((Float(((max - red))) / Float((int)6)) + (Float(delta) / Float((int)2))))) / Float(delta));		HX_STACK_VAR(delta_r,"delta_r");
		HX_STACK_LINE(528)
		Float delta_g = (Float((((Float(((max - green))) / Float((int)6)) + (Float(delta) / Float((int)2))))) / Float(delta));		HX_STACK_VAR(delta_g,"delta_g");
		HX_STACK_LINE(529)
		Float delta_b = (Float((((Float(((max - blue))) / Float((int)6)) + (Float(delta) / Float((int)2))))) / Float(delta));		HX_STACK_VAR(delta_b,"delta_b");
		HX_STACK_LINE(531)
		if (((red == max))){
			HX_STACK_LINE(532)
			hue = (delta_b - delta_g);
		}
		else{
			HX_STACK_LINE(535)
			if (((green == max))){
				HX_STACK_LINE(536)
				hue = (((Float((int)1) / Float((int)3)) + delta_r) - delta_b);
			}
			else{
				HX_STACK_LINE(539)
				if (((blue == max))){
					HX_STACK_LINE(540)
					hue = (((Float((int)2) / Float((int)3)) + delta_g) - delta_r);
				}
			}
		}
		HX_STACK_LINE(544)
		if (((hue < (int)0))){
			HX_STACK_LINE(545)
			hx::AddEq(hue,(int)1);
		}
		HX_STACK_LINE(549)
		if (((hue > (int)1))){
			HX_STACK_LINE(550)
			hx::SubEq(hue,(int)1);
		}
	}
	HX_STACK_LINE(556)
	hx::MultEq(hue,(int)360);
	HX_STACK_LINE(557)
	hue = ::Math_obj::round(hue);
	struct _Function_1_2{
		inline static Dynamic Block( Float &saturation,Float &lightness,Float &hue){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",559);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("hue") , hue,false);
				__result->Add(HX_CSTRING("saturation") , saturation,false);
				__result->Add(HX_CSTRING("lightness") , lightness,false);
				__result->Add(HX_CSTRING("value") , lightness,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(559)
	return _Function_1_2::Block(saturation,lightness,hue);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,RGBtoHSV,return )

int FlxColorUtil_obj::ARGBtoRGB( int Color){
	HX_STACK_PUSH("FlxColorUtil::ARGBtoRGB","flixel/util/FlxColorUtil.hx",570);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(570)
	return (int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorUtil_obj,ARGBtoRGB,return )

int FlxColorUtil_obj::interpolateColor( int Color1,int Color2,int Steps,int CurrentStep,hx::Null< int >  __o_Alpha){
int Alpha = __o_Alpha.Default(255);
	HX_STACK_PUSH("FlxColorUtil::interpolateColor","flixel/util/FlxColorUtil.hx",585);
	HX_STACK_ARG(Color1,"Color1");
	HX_STACK_ARG(Color2,"Color2");
	HX_STACK_ARG(Steps,"Steps");
	HX_STACK_ARG(CurrentStep,"CurrentStep");
	HX_STACK_ARG(Alpha,"Alpha");
{
		struct _Function_1_1{
			inline static Dynamic Block( int &Color1){
				HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",586);
				{
					HX_STACK_LINE(586)
					Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
					HX_STACK_LINE(586)
					int red = (int((int(Color1) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
					HX_STACK_LINE(586)
					int green = (int((int(Color1) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
					HX_STACK_LINE(586)
					int blue = (int(Color1) & int((int)255));		HX_STACK_VAR(blue,"blue");
					HX_STACK_LINE(586)
					Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color1) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
					HX_STACK_LINE(586)
					if (((Results != null()))){
						struct _Function_3_1{
							inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
								HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",586);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("red") , red,false);
									__result->Add(HX_CSTRING("green") , green,false);
									__result->Add(HX_CSTRING("blue") , blue,false);
									__result->Add(HX_CSTRING("alpha") , alpha,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(586)
						Results = _Function_3_1::Block(red,green,blue,alpha);
					}
					struct _Function_2_1{
						inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
							HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",586);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("red") , red,false);
								__result->Add(HX_CSTRING("green") , green,false);
								__result->Add(HX_CSTRING("blue") , blue,false);
								__result->Add(HX_CSTRING("alpha") , alpha,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(586)
					return _Function_2_1::Block(red,green,blue,alpha);
				}
				return null();
			}
		};
		HX_STACK_LINE(586)
		Dynamic src1 = _Function_1_1::Block(Color1);		HX_STACK_VAR(src1,"src1");
		struct _Function_1_2{
			inline static Dynamic Block( int &Color2){
				HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",587);
				{
					HX_STACK_LINE(587)
					Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
					HX_STACK_LINE(587)
					int red = (int((int(Color2) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
					HX_STACK_LINE(587)
					int green = (int((int(Color2) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
					HX_STACK_LINE(587)
					int blue = (int(Color2) & int((int)255));		HX_STACK_VAR(blue,"blue");
					HX_STACK_LINE(587)
					Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color2) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
					HX_STACK_LINE(587)
					if (((Results != null()))){
						struct _Function_3_1{
							inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
								HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",587);
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("red") , red,false);
									__result->Add(HX_CSTRING("green") , green,false);
									__result->Add(HX_CSTRING("blue") , blue,false);
									__result->Add(HX_CSTRING("alpha") , alpha,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(587)
						Results = _Function_3_1::Block(red,green,blue,alpha);
					}
					struct _Function_2_1{
						inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
							HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",587);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("red") , red,false);
								__result->Add(HX_CSTRING("green") , green,false);
								__result->Add(HX_CSTRING("blue") , blue,false);
								__result->Add(HX_CSTRING("alpha") , alpha,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(587)
					return _Function_2_1::Block(red,green,blue,alpha);
				}
				return null();
			}
		};
		HX_STACK_LINE(587)
		Dynamic src2 = _Function_1_2::Block(Color2);		HX_STACK_VAR(src2,"src2");
		HX_STACK_LINE(589)
		int r = ::Std_obj::_int(((Float((((src2->__Field(HX_CSTRING("red"),true) - src1->__Field(HX_CSTRING("red"),true))) * CurrentStep)) / Float(Steps)) + src1->__Field(HX_CSTRING("red"),true)));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(590)
		int g = ::Std_obj::_int(((Float((((src2->__Field(HX_CSTRING("green"),true) - src1->__Field(HX_CSTRING("green"),true))) * CurrentStep)) / Float(Steps)) + src1->__Field(HX_CSTRING("green"),true)));		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(591)
		int b = ::Std_obj::_int(((Float((((src2->__Field(HX_CSTRING("blue"),true) - src1->__Field(HX_CSTRING("blue"),true))) * CurrentStep)) / Float(Steps)) + src1->__Field(HX_CSTRING("blue"),true)));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(593)
		return (int((int((int((int(Alpha) << int((int)24))) | int((int(r) << int((int)16))))) | int((int(g) << int((int)8))))) | int(b));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColorUtil_obj,interpolateColor,return )

int FlxColorUtil_obj::interpolateColorWithRGB( int Color,int R2,int G2,int B2,int Steps,int CurrentStep){
	HX_STACK_PUSH("FlxColorUtil::interpolateColorWithRGB","flixel/util/FlxColorUtil.hx",609);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(R2,"R2");
	HX_STACK_ARG(G2,"G2");
	HX_STACK_ARG(B2,"B2");
	HX_STACK_ARG(Steps,"Steps");
	HX_STACK_ARG(CurrentStep,"CurrentStep");
	struct _Function_1_1{
		inline static Dynamic Block( int &Color){
			HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",610);
			{
				HX_STACK_LINE(610)
				Dynamic Results = null();		HX_STACK_VAR(Results,"Results");
				HX_STACK_LINE(610)
				int red = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(red,"red");
				HX_STACK_LINE(610)
				int green = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(green,"green");
				HX_STACK_LINE(610)
				int blue = (int(Color) & int((int)255));		HX_STACK_VAR(blue,"blue");
				HX_STACK_LINE(610)
				Float alpha = ::flixel::util::FlxMath_obj::roundDecimal((Float(((int((int(Color) >> int((int)24))) & int((int)255)))) / Float((int)255)),(int)4);		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(610)
				if (((Results != null()))){
					struct _Function_3_1{
						inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
							HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",610);
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("red") , red,false);
								__result->Add(HX_CSTRING("green") , green,false);
								__result->Add(HX_CSTRING("blue") , blue,false);
								__result->Add(HX_CSTRING("alpha") , alpha,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(610)
					Results = _Function_3_1::Block(red,green,blue,alpha);
				}
				struct _Function_2_1{
					inline static Dynamic Block( int &red,int &green,int &blue,Float &alpha){
						HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",610);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("red") , red,false);
							__result->Add(HX_CSTRING("green") , green,false);
							__result->Add(HX_CSTRING("blue") , blue,false);
							__result->Add(HX_CSTRING("alpha") , alpha,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(610)
				return _Function_2_1::Block(red,green,blue,alpha);
			}
			return null();
		}
	};
	HX_STACK_LINE(610)
	Dynamic src = _Function_1_1::Block(Color);		HX_STACK_VAR(src,"src");
	HX_STACK_LINE(612)
	int r = ::Std_obj::_int(((Float((((R2 - src->__Field(HX_CSTRING("red"),true))) * CurrentStep)) / Float(Steps)) + src->__Field(HX_CSTRING("red"),true)));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(613)
	int g = ::Std_obj::_int(((Float((((G2 - src->__Field(HX_CSTRING("green"),true))) * CurrentStep)) / Float(Steps)) + src->__Field(HX_CSTRING("green"),true)));		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(614)
	int b = ::Std_obj::_int(((Float((((B2 - src->__Field(HX_CSTRING("blue"),true))) * CurrentStep)) / Float(Steps)) + src->__Field(HX_CSTRING("blue"),true)));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(616)
	return (int((int((int(r) << int((int)16))) | int((int(g) << int((int)8))))) | int(b));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxColorUtil_obj,interpolateColorWithRGB,return )

int FlxColorUtil_obj::interpolateRGB( int R1,int G1,int B1,int R2,int G2,int B2,int Steps,int CurrentStep){
	HX_STACK_PUSH("FlxColorUtil::interpolateRGB","flixel/util/FlxColorUtil.hx",634);
	HX_STACK_ARG(R1,"R1");
	HX_STACK_ARG(G1,"G1");
	HX_STACK_ARG(B1,"B1");
	HX_STACK_ARG(R2,"R2");
	HX_STACK_ARG(G2,"G2");
	HX_STACK_ARG(B2,"B2");
	HX_STACK_ARG(Steps,"Steps");
	HX_STACK_ARG(CurrentStep,"CurrentStep");
	HX_STACK_LINE(635)
	int r = ::Std_obj::_int(((Float((((R2 - R1)) * CurrentStep)) / Float(Steps)) + R1));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(636)
	int g = ::Std_obj::_int(((Float((((G2 - G1)) * CurrentStep)) / Float(Steps)) + G1));		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(637)
	int b = ::Std_obj::_int(((Float((((B2 - B1)) * CurrentStep)) / Float(Steps)) + B1));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(639)
	return (int((int((int(r) << int((int)16))) | int((int(g) << int((int)8))))) | int(b));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxColorUtil_obj,interpolateRGB,return )

int FlxColorUtil_obj::darken( int Color,hx::Null< Float >  __o_Factor){
Float Factor = __o_Factor.Default(0.2);
	HX_STACK_PUSH("FlxColorUtil::darken","flixel/util/FlxColorUtil.hx",650);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Factor,"Factor");
{
		HX_STACK_LINE(651)
		{
			HX_STACK_LINE(651)
			Float lowerBound = (  (((Factor < (int)0))) ? Float((int)0) : Float(Factor) );		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(651)
			if (((lowerBound > (int)1))){
				HX_STACK_LINE(651)
				(int)1;
			}
			else{
				HX_STACK_LINE(651)
				lowerBound;
			}
		}
		HX_STACK_LINE(653)
		int r = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(654)
		int g = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(655)
		int b = (int(Color) & int((int)255));		HX_STACK_VAR(b,"b");
		struct _Function_1_1{
			inline static Float Block( int &Color){
				HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",656);
				{
					HX_STACK_LINE(656)
					int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(656)
					return (Float(f) / Float((int)255));
				}
				return null();
			}
		};
		HX_STACK_LINE(656)
		Float a = _Function_1_1::Block(Color);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(658)
		Factor = ((int)1 - Factor);
		HX_STACK_LINE(660)
		r = ::Std_obj::_int((r * Factor));
		HX_STACK_LINE(661)
		g = ::Std_obj::_int((g * Factor));
		HX_STACK_LINE(662)
		b = ::Std_obj::_int((b * Factor));
		HX_STACK_LINE(664)
		return (int((int((int((int(((int(::Std_obj::_int((  (((a > (int)1))) ? Float(a) : Float((a * (int)255)) ))) & int((int)255)))) << int((int)24))) | int((int(((int(r) & int((int)255)))) << int((int)16))))) | int((int(((int(g) & int((int)255)))) << int((int)8))))) | int((int(b) & int((int)255))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,darken,return )

int FlxColorUtil_obj::brighten( int Color,hx::Null< Float >  __o_Factor){
Float Factor = __o_Factor.Default(0.2);
	HX_STACK_PUSH("FlxColorUtil::brighten","flixel/util/FlxColorUtil.hx",675);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Factor,"Factor");
{
		HX_STACK_LINE(676)
		{
			HX_STACK_LINE(676)
			Float lowerBound = (  (((Factor < (int)0))) ? Float((int)0) : Float(Factor) );		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(676)
			if (((lowerBound > (int)1))){
				HX_STACK_LINE(676)
				(int)1;
			}
			else{
				HX_STACK_LINE(676)
				lowerBound;
			}
		}
		HX_STACK_LINE(678)
		int r = (int((int(Color) >> int((int)16))) & int((int)255));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(679)
		int g = (int((int(Color) >> int((int)8))) & int((int)255));		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(680)
		int b = (int(Color) & int((int)255));		HX_STACK_VAR(b,"b");
		struct _Function_1_1{
			inline static Float Block( int &Color){
				HX_STACK_PUSH("*::closure","flixel/util/FlxColorUtil.hx",681);
				{
					HX_STACK_LINE(681)
					int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(681)
					return (Float(f) / Float((int)255));
				}
				return null();
			}
		};
		HX_STACK_LINE(681)
		Float a = _Function_1_1::Block(Color);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(683)
		hx::AddEq(r,::Std_obj::_int(((((int)255 - r)) * Factor)));
		HX_STACK_LINE(684)
		hx::AddEq(g,::Std_obj::_int(((((int)255 - g)) * Factor)));
		HX_STACK_LINE(685)
		hx::AddEq(b,::Std_obj::_int(((((int)255 - b)) * Factor)));
		HX_STACK_LINE(687)
		return (int((int((int((int(((int(::Std_obj::_int((  (((a > (int)1))) ? Float(a) : Float((a * (int)255)) ))) & int((int)255)))) << int((int)24))) | int((int(((int(r) & int((int)255)))) << int((int)16))))) | int((int(((int(g) & int((int)255)))) << int((int)8))))) | int((int(b) & int((int)255))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColorUtil_obj,brighten,return )


FlxColorUtil_obj::FlxColorUtil_obj()
{
}

void FlxColorUtil_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxColorUtil);
	HX_MARK_END_CLASS();
}

void FlxColorUtil_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxColorUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"getRed") ) { return getRed_dyn(); }
		if (HX_FIELD_EQ(inName,"darken") ) { return darken_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getARGB") ) { return getARGB_dyn(); }
		if (HX_FIELD_EQ(inName,"getHSBA") ) { return getHSBA_dyn(); }
		if (HX_FIELD_EQ(inName,"getBlue") ) { return getBlue_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getAlpha") ) { return getAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"getGreen") ) { return getGreen_dyn(); }
		if (HX_FIELD_EQ(inName,"RGBtoHSV") ) { return RGBtoHSV_dyn(); }
		if (HX_FIELD_EQ(inName,"brighten") ) { return brighten_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"HSVtoARGB") ) { return HSVtoARGB_dyn(); }
		if (HX_FIELD_EQ(inName,"ARGBtoRGB") ) { return ARGBtoRGB_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getColor32") ) { return getColor32_dyn(); }
		if (HX_FIELD_EQ(inName,"getColor24") ) { return getColor24_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"makeFromARGB") ) { return makeFromARGB_dyn(); }
		if (HX_FIELD_EQ(inName,"makeFromHSBA") ) { return makeFromHSBA_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorInfo") ) { return getColorInfo_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getAlphaFloat") ) { return getAlphaFloat_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getRandomColor") ) { return getRandomColor_dyn(); }
		if (HX_FIELD_EQ(inName,"interpolateRGB") ) { return interpolateRGB_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ARGBtoHexString") ) { return ARGBtoHexString_dyn(); }
		if (HX_FIELD_EQ(inName,"ARGBtoWebString") ) { return ARGBtoWebString_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getHSVColorWheel") ) { return getHSVColorWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"colorToHexString") ) { return colorToHexString_dyn(); }
		if (HX_FIELD_EQ(inName,"interpolateColor") ) { return interpolateColor_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getTriadicHarmony") ) { return getTriadicHarmony_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getAnalogousHarmony") ) { return getAnalogousHarmony_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getComplementHarmony") ) { return getComplementHarmony_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"interpolateColorWithRGB") ) { return interpolateColorWithRGB_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getSplitComplementHarmony") ) { return getSplitComplementHarmony_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxColorUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxColorUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("makeFromARGB"),
	HX_CSTRING("makeFromHSBA"),
	HX_CSTRING("getARGB"),
	HX_CSTRING("getHSBA"),
	HX_CSTRING("getAlpha"),
	HX_CSTRING("getAlphaFloat"),
	HX_CSTRING("getRed"),
	HX_CSTRING("getGreen"),
	HX_CSTRING("getBlue"),
	HX_CSTRING("getRandomColor"),
	HX_CSTRING("getColor32"),
	HX_CSTRING("getColor24"),
	HX_CSTRING("getHSVColorWheel"),
	HX_CSTRING("getComplementHarmony"),
	HX_CSTRING("getAnalogousHarmony"),
	HX_CSTRING("getSplitComplementHarmony"),
	HX_CSTRING("getTriadicHarmony"),
	HX_CSTRING("getColorInfo"),
	HX_CSTRING("ARGBtoHexString"),
	HX_CSTRING("ARGBtoWebString"),
	HX_CSTRING("colorToHexString"),
	HX_CSTRING("HSVtoARGB"),
	HX_CSTRING("RGBtoHSV"),
	HX_CSTRING("ARGBtoRGB"),
	HX_CSTRING("interpolateColor"),
	HX_CSTRING("interpolateColorWithRGB"),
	HX_CSTRING("interpolateRGB"),
	HX_CSTRING("darken"),
	HX_CSTRING("brighten"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxColorUtil_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxColorUtil_obj::__mClass,"__mClass");
};

Class FlxColorUtil_obj::__mClass;

void FlxColorUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxColorUtil"), hx::TCanCast< FlxColorUtil_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxColorUtil_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
