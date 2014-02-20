#include <hxcpp.h>

#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace tweens{

Void FlxEase_obj::__construct()
{
	return null();
}

FlxEase_obj::~FlxEase_obj() { }

Dynamic FlxEase_obj::__CreateEmpty() { return  new FlxEase_obj; }
hx::ObjectPtr< FlxEase_obj > FlxEase_obj::__new()
{  hx::ObjectPtr< FlxEase_obj > result = new FlxEase_obj();
	result->__construct();
	return result;}

Dynamic FlxEase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxEase_obj > result = new FlxEase_obj();
	result->__construct();
	return result;}

Float FlxEase_obj::PI2;

Float FlxEase_obj::EL;

Float FlxEase_obj::B1;

Float FlxEase_obj::B2;

Float FlxEase_obj::B3;

Float FlxEase_obj::B4;

Float FlxEase_obj::B5;

Float FlxEase_obj::B6;

Float FlxEase_obj::ELASTIC_AMPLITUDE;

Float FlxEase_obj::ELASTIC_PERIOD;

Float FlxEase_obj::quadIn( Float t){
	HX_STACK_PUSH("FlxEase::quadIn","flixel/tweens/FlxEase.hx",34);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(34)
	return (t * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quadIn,return )

Float FlxEase_obj::quadOut( Float t){
	HX_STACK_PUSH("FlxEase::quadOut","flixel/tweens/FlxEase.hx",39);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(39)
	return (-(t) * ((t - (int)2)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quadOut,return )

Float FlxEase_obj::quadInOut( Float t){
	HX_STACK_PUSH("FlxEase::quadInOut","flixel/tweens/FlxEase.hx",44);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(44)
	return (  (((t <= .5))) ? Float(((t * t) * (int)2)) : Float(((int)1 - ((--(t) * t) * (int)2))) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quadInOut,return )

Float FlxEase_obj::cubeIn( Float t){
	HX_STACK_PUSH("FlxEase::cubeIn","flixel/tweens/FlxEase.hx",49);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(49)
	return ((t * t) * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,cubeIn,return )

Float FlxEase_obj::cubeOut( Float t){
	HX_STACK_PUSH("FlxEase::cubeOut","flixel/tweens/FlxEase.hx",54);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(54)
	return ((int)1 + ((--(t) * t) * t));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,cubeOut,return )

Float FlxEase_obj::cubeInOut( Float t){
	HX_STACK_PUSH("FlxEase::cubeInOut","flixel/tweens/FlxEase.hx",59);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(59)
	return (  (((t <= .5))) ? Float((((t * t) * t) * (int)4)) : Float(((int)1 + (((--(t) * t) * t) * (int)4))) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,cubeInOut,return )

Float FlxEase_obj::quartIn( Float t){
	HX_STACK_PUSH("FlxEase::quartIn","flixel/tweens/FlxEase.hx",64);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(64)
	return (((t * t) * t) * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quartIn,return )

Float FlxEase_obj::quartOut( Float t){
	HX_STACK_PUSH("FlxEase::quartOut","flixel/tweens/FlxEase.hx",69);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(69)
	return ((int)1 - ((((hx::SubEq(t,(int)1)) * t) * t) * t));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quartOut,return )

Float FlxEase_obj::quartInOut( Float t){
	HX_STACK_PUSH("FlxEase::quartInOut","flixel/tweens/FlxEase.hx",74);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(74)
	return (  (((t <= .5))) ? Float(((((t * t) * t) * t) * (int)8)) : Float(((Float((((int)1 - ((((t = ((t * (int)2) - (int)2)) * t) * t) * t)))) / Float((int)2)) + .5)) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quartInOut,return )

Float FlxEase_obj::quintIn( Float t){
	HX_STACK_PUSH("FlxEase::quintIn","flixel/tweens/FlxEase.hx",79);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(79)
	return ((((t * t) * t) * t) * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quintIn,return )

Float FlxEase_obj::quintOut( Float t){
	HX_STACK_PUSH("FlxEase::quintOut","flixel/tweens/FlxEase.hx",84);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(84)
	return ((((((t = (t - (int)1)) * t) * t) * t) * t) + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quintOut,return )

Float FlxEase_obj::quintInOut( Float t){
	HX_STACK_PUSH("FlxEase::quintInOut","flixel/tweens/FlxEase.hx",89);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(89)
	return (  ((((hx::MultEq(t,(int)2)) < (int)1))) ? Float((Float(((((t * t) * t) * t) * t)) / Float((int)2))) : Float((Float((((((((hx::SubEq(t,(int)2)) * t) * t) * t) * t) + (int)2))) / Float((int)2))) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quintInOut,return )

Float FlxEase_obj::sineIn( Float t){
	HX_STACK_PUSH("FlxEase::sineIn","flixel/tweens/FlxEase.hx",94);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(94)
	return (-(::Math_obj::cos((::flixel::tweens::FlxEase_obj::PI2 * t))) + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,sineIn,return )

Float FlxEase_obj::sineOut( Float t){
	HX_STACK_PUSH("FlxEase::sineOut","flixel/tweens/FlxEase.hx",99);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(99)
	return ::Math_obj::sin((::flixel::tweens::FlxEase_obj::PI2 * t));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,sineOut,return )

Float FlxEase_obj::sineInOut( Float t){
	HX_STACK_PUSH("FlxEase::sineInOut","flixel/tweens/FlxEase.hx",104);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(104)
	return ((Float(-(::Math_obj::cos((::Math_obj::PI * t)))) / Float((int)2)) + .5);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,sineInOut,return )

Float FlxEase_obj::bounceIn( Float t){
	HX_STACK_PUSH("FlxEase::bounceIn","flixel/tweens/FlxEase.hx",109);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(110)
	t = ((int)1 - t);
	HX_STACK_LINE(111)
	if (((t < ::flixel::tweens::FlxEase_obj::B1))){
		HX_STACK_LINE(111)
		return ((int)1 - ((7.5625 * t) * t));
	}
	HX_STACK_LINE(112)
	if (((t < ::flixel::tweens::FlxEase_obj::B2))){
		HX_STACK_LINE(112)
		return ((int)1 - ((((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B3))) * ((t - ::flixel::tweens::FlxEase_obj::B3))) + .75)));
	}
	HX_STACK_LINE(113)
	if (((t < ::flixel::tweens::FlxEase_obj::B4))){
		HX_STACK_LINE(113)
		return ((int)1 - ((((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B5))) * ((t - ::flixel::tweens::FlxEase_obj::B5))) + .9375)));
	}
	HX_STACK_LINE(114)
	return ((int)1 - ((((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B6))) * ((t - ::flixel::tweens::FlxEase_obj::B6))) + .984375)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,bounceIn,return )

Float FlxEase_obj::bounceOut( Float t){
	HX_STACK_PUSH("FlxEase::bounceOut","flixel/tweens/FlxEase.hx",118);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(119)
	if (((t < ::flixel::tweens::FlxEase_obj::B1))){
		HX_STACK_LINE(119)
		return ((7.5625 * t) * t);
	}
	HX_STACK_LINE(120)
	if (((t < ::flixel::tweens::FlxEase_obj::B2))){
		HX_STACK_LINE(120)
		return (((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B3))) * ((t - ::flixel::tweens::FlxEase_obj::B3))) + .75);
	}
	HX_STACK_LINE(121)
	if (((t < ::flixel::tweens::FlxEase_obj::B4))){
		HX_STACK_LINE(121)
		return (((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B5))) * ((t - ::flixel::tweens::FlxEase_obj::B5))) + .9375);
	}
	HX_STACK_LINE(122)
	return (((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B6))) * ((t - ::flixel::tweens::FlxEase_obj::B6))) + .984375);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,bounceOut,return )

Float FlxEase_obj::bounceInOut( Float t){
	HX_STACK_PUSH("FlxEase::bounceInOut","flixel/tweens/FlxEase.hx",126);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(127)
	if (((t < .5))){
		HX_STACK_LINE(129)
		t = ((int)1 - (t * (int)2));
		HX_STACK_LINE(130)
		if (((t < ::flixel::tweens::FlxEase_obj::B1))){
			HX_STACK_LINE(130)
			return (Float((((int)1 - ((7.5625 * t) * t)))) / Float((int)2));
		}
		HX_STACK_LINE(131)
		if (((t < ::flixel::tweens::FlxEase_obj::B2))){
			HX_STACK_LINE(131)
			return (Float((((int)1 - ((((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B3))) * ((t - ::flixel::tweens::FlxEase_obj::B3))) + .75))))) / Float((int)2));
		}
		HX_STACK_LINE(132)
		if (((t < ::flixel::tweens::FlxEase_obj::B4))){
			HX_STACK_LINE(132)
			return (Float((((int)1 - ((((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B5))) * ((t - ::flixel::tweens::FlxEase_obj::B5))) + .9375))))) / Float((int)2));
		}
		HX_STACK_LINE(133)
		return (Float((((int)1 - ((((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B6))) * ((t - ::flixel::tweens::FlxEase_obj::B6))) + .984375))))) / Float((int)2));
	}
	HX_STACK_LINE(135)
	t = ((t * (int)2) - (int)1);
	HX_STACK_LINE(136)
	if (((t < ::flixel::tweens::FlxEase_obj::B1))){
		HX_STACK_LINE(136)
		return ((Float(((7.5625 * t) * t)) / Float((int)2)) + .5);
	}
	HX_STACK_LINE(137)
	if (((t < ::flixel::tweens::FlxEase_obj::B2))){
		HX_STACK_LINE(137)
		return ((Float(((((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B3))) * ((t - ::flixel::tweens::FlxEase_obj::B3))) + .75))) / Float((int)2)) + .5);
	}
	HX_STACK_LINE(138)
	if (((t < ::flixel::tweens::FlxEase_obj::B4))){
		HX_STACK_LINE(138)
		return ((Float(((((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B5))) * ((t - ::flixel::tweens::FlxEase_obj::B5))) + .9375))) / Float((int)2)) + .5);
	}
	HX_STACK_LINE(139)
	return ((Float(((((7.5625 * ((t - ::flixel::tweens::FlxEase_obj::B6))) * ((t - ::flixel::tweens::FlxEase_obj::B6))) + .984375))) / Float((int)2)) + .5);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,bounceInOut,return )

Float FlxEase_obj::circIn( Float t){
	HX_STACK_PUSH("FlxEase::circIn","flixel/tweens/FlxEase.hx",143);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(143)
	return -(((::Math_obj::sqrt(((int)1 - (t * t))) - (int)1)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,circIn,return )

Float FlxEase_obj::circOut( Float t){
	HX_STACK_PUSH("FlxEase::circOut","flixel/tweens/FlxEase.hx",148);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(148)
	return ::Math_obj::sqrt(((int)1 - (((t - (int)1)) * ((t - (int)1)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,circOut,return )

Float FlxEase_obj::circInOut( Float t){
	HX_STACK_PUSH("FlxEase::circInOut","flixel/tweens/FlxEase.hx",153);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(153)
	return (  (((t <= .5))) ? Float((Float(((::Math_obj::sqrt(((int)1 - ((t * t) * (int)4))) - (int)1))) / Float((int)-2))) : Float((Float(((::Math_obj::sqrt(((int)1 - ((((t * (int)2) - (int)2)) * (((t * (int)2) - (int)2))))) + (int)1))) / Float((int)2))) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,circInOut,return )

Float FlxEase_obj::expoIn( Float t){
	HX_STACK_PUSH("FlxEase::expoIn","flixel/tweens/FlxEase.hx",158);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(158)
	return ::Math_obj::pow((int)2,((int)10 * ((t - (int)1))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,expoIn,return )

Float FlxEase_obj::expoOut( Float t){
	HX_STACK_PUSH("FlxEase::expoOut","flixel/tweens/FlxEase.hx",163);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(163)
	return (-(::Math_obj::pow((int)2,((int)-10 * t))) + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,expoOut,return )

Float FlxEase_obj::expoInOut( Float t){
	HX_STACK_PUSH("FlxEase::expoInOut","flixel/tweens/FlxEase.hx",168);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(168)
	return (  (((t < .5))) ? Float((Float(::Math_obj::pow((int)2,((int)10 * (((t * (int)2) - (int)1))))) / Float((int)2))) : Float((Float(((-(::Math_obj::pow((int)2,((int)-10 * (((t * (int)2) - (int)1))))) + (int)2))) / Float((int)2))) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,expoInOut,return )

Float FlxEase_obj::backIn( Float t){
	HX_STACK_PUSH("FlxEase::backIn","flixel/tweens/FlxEase.hx",173);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(173)
	return ((t * t) * (((2.70158 * t) - 1.70158)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,backIn,return )

Float FlxEase_obj::backOut( Float t){
	HX_STACK_PUSH("FlxEase::backOut","flixel/tweens/FlxEase.hx",178);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(178)
	return ((int)1 - ((--(t) * t) * (((-2.70158 * t) - 1.70158))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,backOut,return )

Float FlxEase_obj::backInOut( Float t){
	HX_STACK_PUSH("FlxEase::backInOut","flixel/tweens/FlxEase.hx",183);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(184)
	hx::MultEq(t,(int)2);
	HX_STACK_LINE(185)
	if (((t < (int)1))){
		HX_STACK_LINE(185)
		return (Float(((t * t) * (((2.70158 * t) - 1.70158)))) / Float((int)2));
	}
	HX_STACK_LINE(186)
	(t)--;
	HX_STACK_LINE(187)
	return ((Float((((int)1 - ((--(t) * t) * (((-2.70158 * t) - 1.70158)))))) / Float((int)2)) + .5);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,backInOut,return )

Float FlxEase_obj::elasticIn( Float t){
	HX_STACK_PUSH("FlxEase::elasticIn","flixel/tweens/FlxEase.hx",191);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(191)
	return -((((::flixel::tweens::FlxEase_obj::ELASTIC_AMPLITUDE * ::Math_obj::pow((int)2,((int)10 * (hx::SubEq(t,(int)1))))) * ::Math_obj::sin((Float((((t - ((Float(::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD) / Float((((int)2 * ::Math_obj::PI)))) * ::Math_obj::asin((Float((int)1) / Float(::flixel::tweens::FlxEase_obj::ELASTIC_AMPLITUDE)))))) * (((int)2 * ::Math_obj::PI)))) / Float(::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD))))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,elasticIn,return )

Float FlxEase_obj::elasticOut( Float t){
	HX_STACK_PUSH("FlxEase::elasticOut","flixel/tweens/FlxEase.hx",196);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(196)
	return (((::flixel::tweens::FlxEase_obj::ELASTIC_AMPLITUDE * ::Math_obj::pow((int)2,((int)-10 * t))) * ::Math_obj::sin((Float((((t - ((Float(::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD) / Float((((int)2 * ::Math_obj::PI)))) * ::Math_obj::asin((Float((int)1) / Float(::flixel::tweens::FlxEase_obj::ELASTIC_AMPLITUDE)))))) * (((int)2 * ::Math_obj::PI)))) / Float(::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD)))) + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,elasticOut,return )

Float FlxEase_obj::elasticInOut( Float t){
	HX_STACK_PUSH("FlxEase::elasticInOut","flixel/tweens/FlxEase.hx",201);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(202)
	if (((t < 0.5))){
		HX_STACK_LINE(203)
		return (-0.5 * ((::Math_obj::pow((int)2,((int)10 * (hx::SubEq(t,0.5)))) * ::Math_obj::sin((Float((((t - (Float(::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD) / Float((int)4)))) * (((int)2 * ::Math_obj::PI)))) / Float(::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD))))));
	}
	HX_STACK_LINE(206)
	return (((::Math_obj::pow((int)2,((int)-10 * (hx::SubEq(t,0.5)))) * ::Math_obj::sin((Float((((t - (Float(::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD) / Float((int)4)))) * (((int)2 * ::Math_obj::PI)))) / Float(::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD)))) * 0.5) + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,elasticInOut,return )


FlxEase_obj::FlxEase_obj()
{
}

void FlxEase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxEase);
	HX_MARK_END_CLASS();
}

void FlxEase_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxEase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"EL") ) { return EL; }
		if (HX_FIELD_EQ(inName,"B1") ) { return B1; }
		if (HX_FIELD_EQ(inName,"B2") ) { return B2; }
		if (HX_FIELD_EQ(inName,"B3") ) { return B3; }
		if (HX_FIELD_EQ(inName,"B4") ) { return B4; }
		if (HX_FIELD_EQ(inName,"B5") ) { return B5; }
		if (HX_FIELD_EQ(inName,"B6") ) { return B6; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"PI2") ) { return PI2; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"quadIn") ) { return quadIn_dyn(); }
		if (HX_FIELD_EQ(inName,"cubeIn") ) { return cubeIn_dyn(); }
		if (HX_FIELD_EQ(inName,"sineIn") ) { return sineIn_dyn(); }
		if (HX_FIELD_EQ(inName,"circIn") ) { return circIn_dyn(); }
		if (HX_FIELD_EQ(inName,"expoIn") ) { return expoIn_dyn(); }
		if (HX_FIELD_EQ(inName,"backIn") ) { return backIn_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quadOut") ) { return quadOut_dyn(); }
		if (HX_FIELD_EQ(inName,"cubeOut") ) { return cubeOut_dyn(); }
		if (HX_FIELD_EQ(inName,"quartIn") ) { return quartIn_dyn(); }
		if (HX_FIELD_EQ(inName,"quintIn") ) { return quintIn_dyn(); }
		if (HX_FIELD_EQ(inName,"sineOut") ) { return sineOut_dyn(); }
		if (HX_FIELD_EQ(inName,"circOut") ) { return circOut_dyn(); }
		if (HX_FIELD_EQ(inName,"expoOut") ) { return expoOut_dyn(); }
		if (HX_FIELD_EQ(inName,"backOut") ) { return backOut_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quartOut") ) { return quartOut_dyn(); }
		if (HX_FIELD_EQ(inName,"quintOut") ) { return quintOut_dyn(); }
		if (HX_FIELD_EQ(inName,"bounceIn") ) { return bounceIn_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"quadInOut") ) { return quadInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"cubeInOut") ) { return cubeInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"sineInOut") ) { return sineInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"bounceOut") ) { return bounceOut_dyn(); }
		if (HX_FIELD_EQ(inName,"circInOut") ) { return circInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"expoInOut") ) { return expoInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"backInOut") ) { return backInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"elasticIn") ) { return elasticIn_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quartInOut") ) { return quartInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"quintInOut") ) { return quintInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"elasticOut") ) { return elasticOut_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bounceInOut") ) { return bounceInOut_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"elasticInOut") ) { return elasticInOut_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ELASTIC_PERIOD") ) { return ELASTIC_PERIOD; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ELASTIC_AMPLITUDE") ) { return ELASTIC_AMPLITUDE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxEase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"EL") ) { EL=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B1") ) { B1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B2") ) { B2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B3") ) { B3=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B4") ) { B4=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B5") ) { B5=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B6") ) { B6=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"PI2") ) { PI2=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ELASTIC_PERIOD") ) { ELASTIC_PERIOD=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"ELASTIC_AMPLITUDE") ) { ELASTIC_AMPLITUDE=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxEase_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("PI2"),
	HX_CSTRING("EL"),
	HX_CSTRING("B1"),
	HX_CSTRING("B2"),
	HX_CSTRING("B3"),
	HX_CSTRING("B4"),
	HX_CSTRING("B5"),
	HX_CSTRING("B6"),
	HX_CSTRING("ELASTIC_AMPLITUDE"),
	HX_CSTRING("ELASTIC_PERIOD"),
	HX_CSTRING("quadIn"),
	HX_CSTRING("quadOut"),
	HX_CSTRING("quadInOut"),
	HX_CSTRING("cubeIn"),
	HX_CSTRING("cubeOut"),
	HX_CSTRING("cubeInOut"),
	HX_CSTRING("quartIn"),
	HX_CSTRING("quartOut"),
	HX_CSTRING("quartInOut"),
	HX_CSTRING("quintIn"),
	HX_CSTRING("quintOut"),
	HX_CSTRING("quintInOut"),
	HX_CSTRING("sineIn"),
	HX_CSTRING("sineOut"),
	HX_CSTRING("sineInOut"),
	HX_CSTRING("bounceIn"),
	HX_CSTRING("bounceOut"),
	HX_CSTRING("bounceInOut"),
	HX_CSTRING("circIn"),
	HX_CSTRING("circOut"),
	HX_CSTRING("circInOut"),
	HX_CSTRING("expoIn"),
	HX_CSTRING("expoOut"),
	HX_CSTRING("expoInOut"),
	HX_CSTRING("backIn"),
	HX_CSTRING("backOut"),
	HX_CSTRING("backInOut"),
	HX_CSTRING("elasticIn"),
	HX_CSTRING("elasticOut"),
	HX_CSTRING("elasticInOut"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxEase_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxEase_obj::PI2,"PI2");
	HX_MARK_MEMBER_NAME(FlxEase_obj::EL,"EL");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B1,"B1");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B2,"B2");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B3,"B3");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B4,"B4");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B5,"B5");
	HX_MARK_MEMBER_NAME(FlxEase_obj::B6,"B6");
	HX_MARK_MEMBER_NAME(FlxEase_obj::ELASTIC_AMPLITUDE,"ELASTIC_AMPLITUDE");
	HX_MARK_MEMBER_NAME(FlxEase_obj::ELASTIC_PERIOD,"ELASTIC_PERIOD");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxEase_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::PI2,"PI2");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::EL,"EL");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B1,"B1");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B2,"B2");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B3,"B3");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B4,"B4");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B5,"B5");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::B6,"B6");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::ELASTIC_AMPLITUDE,"ELASTIC_AMPLITUDE");
	HX_VISIT_MEMBER_NAME(FlxEase_obj::ELASTIC_PERIOD,"ELASTIC_PERIOD");
};

Class FlxEase_obj::__mClass;

void FlxEase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.FlxEase"), hx::TCanCast< FlxEase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxEase_obj::__boot()
{
	PI2= (Float(::Math_obj::PI) / Float((int)2));
	EL= (Float(((int)2 * ::Math_obj::PI)) / Float(.45));
	B1= (Float((int)1) / Float(2.75));
	B2= (Float((int)2) / Float(2.75));
	B3= (Float(1.5) / Float(2.75));
	B4= (Float(2.5) / Float(2.75));
	B5= (Float(2.25) / Float(2.75));
	B6= (Float(2.625) / Float(2.75));
	ELASTIC_AMPLITUDE= (int)1;
	ELASTIC_PERIOD= 0.4;
}

} // end namespace flixel
} // end namespace tweens
