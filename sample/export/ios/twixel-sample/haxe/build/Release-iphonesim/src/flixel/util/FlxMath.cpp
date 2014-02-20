#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace util{

Void FlxMath_obj::__construct()
{
	return null();
}

FlxMath_obj::~FlxMath_obj() { }

Dynamic FlxMath_obj::__CreateEmpty() { return  new FlxMath_obj; }
hx::ObjectPtr< FlxMath_obj > FlxMath_obj::__new()
{  hx::ObjectPtr< FlxMath_obj > result = new FlxMath_obj();
	result->__construct();
	return result;}

Dynamic FlxMath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMath_obj > result = new FlxMath_obj();
	result->__construct();
	return result;}

Float FlxMath_obj::MIN_VALUE;

Float FlxMath_obj::MAX_VALUE;

Float FlxMath_obj::roundDecimal( Float Value,int Precision){
	HX_STACK_PUSH("FlxMath::roundDecimal","flixel/util/FlxMath.hx",38);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_ARG(Precision,"Precision");
	HX_STACK_LINE(39)
	Float mult = (int)1;		HX_STACK_VAR(mult,"mult");
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		while(((_g < Precision))){
			HX_STACK_LINE(40)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(42)
			hx::MultEq(mult,(int)10);
		}
	}
	HX_STACK_LINE(44)
	return (Float(::Math_obj::round((Value * mult))) / Float(mult));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,roundDecimal,return )

Float FlxMath_obj::bound( Float Value,Float Min,Float Max){
	HX_STACK_PUSH("FlxMath::bound","flixel/util/FlxMath.hx",56);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_ARG(Min,"Min");
	HX_STACK_ARG(Max,"Max");
	HX_STACK_LINE(57)
	Float lowerBound = (  (((Value < Min))) ? Float(Min) : Float(Value) );		HX_STACK_VAR(lowerBound,"lowerBound");
	HX_STACK_LINE(58)
	return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,bound,return )

Float FlxMath_obj::lerp( Float Min,Float Max,Float Ratio){
	HX_STACK_PUSH("FlxMath::lerp","flixel/util/FlxMath.hx",70);
	HX_STACK_ARG(Min,"Min");
	HX_STACK_ARG(Max,"Max");
	HX_STACK_ARG(Ratio,"Ratio");
	HX_STACK_LINE(70)
	return (Min + (Ratio * ((Max - Min))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,lerp,return )

bool FlxMath_obj::inBounds( Float Value,Float Min,Float Max){
	HX_STACK_PUSH("FlxMath::inBounds","flixel/util/FlxMath.hx",83);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_ARG(Min,"Min");
	HX_STACK_ARG(Max,"Max");
	HX_STACK_LINE(83)
	return (bool((Value > Min)) && bool((Value < Max)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,inBounds,return )

bool FlxMath_obj::isOdd( Float n){
	HX_STACK_PUSH("FlxMath::isOdd","flixel/util/FlxMath.hx",94);
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(94)
	if (((((int(::Std_obj::_int(n)) & int((int)1))) != (int)0))){
		HX_STACK_LINE(96)
		return true;
	}
	else{
		HX_STACK_LINE(100)
		return false;
	}
	HX_STACK_LINE(94)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,isOdd,return )

bool FlxMath_obj::isEven( Float n){
	HX_STACK_PUSH("FlxMath::isEven","flixel/util/FlxMath.hx",112);
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(112)
	if (((((int(::Std_obj::_int(n)) & int((int)1))) != (int)0))){
		HX_STACK_LINE(114)
		return false;
	}
	else{
		HX_STACK_LINE(118)
		return true;
	}
	HX_STACK_LINE(112)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,isEven,return )

int FlxMath_obj::numericComparison( Float num1,Float num2){
	HX_STACK_PUSH("FlxMath::numericComparison","flixel/util/FlxMath.hx",131);
	HX_STACK_ARG(num1,"num1");
	HX_STACK_ARG(num2,"num2");
	HX_STACK_LINE(132)
	if (((num2 > num1))){
		HX_STACK_LINE(133)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(136)
		if (((num1 > num2))){
			HX_STACK_LINE(137)
			return (int)1;
		}
	}
	HX_STACK_LINE(140)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,numericComparison,return )

bool FlxMath_obj::pointInCoordinates( Float pointX,Float pointY,Float rectX,Float rectY,Float rectWidth,Float rectHeight){
	HX_STACK_PUSH("FlxMath::pointInCoordinates","flixel/util/FlxMath.hx",156);
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	HX_STACK_ARG(rectX,"rectX");
	HX_STACK_ARG(rectY,"rectY");
	HX_STACK_ARG(rectWidth,"rectWidth");
	HX_STACK_ARG(rectHeight,"rectHeight");
	HX_STACK_LINE(157)
	if (((bool((pointX >= rectX)) && bool((pointX <= (rectX + rectWidth)))))){
		HX_STACK_LINE(158)
		if (((bool((pointY >= rectY)) && bool((pointY <= (rectY + rectHeight)))))){
			HX_STACK_LINE(160)
			return true;
		}
	}
	HX_STACK_LINE(164)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxMath_obj,pointInCoordinates,return )

bool FlxMath_obj::pointInFlxRect( Float pointX,Float pointY,::flixel::util::FlxRect rect){
	HX_STACK_PUSH("FlxMath::pointInFlxRect","flixel/util/FlxMath.hx",176);
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	HX_STACK_ARG(rect,"rect");
	HX_STACK_LINE(177)
	if (((bool((bool((bool((pointX >= rect->x)) && bool((pointX <= rect->get_right())))) && bool((pointY >= rect->y)))) && bool((pointY <= rect->get_bottom()))))){
		HX_STACK_LINE(178)
		return true;
	}
	HX_STACK_LINE(181)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,pointInFlxRect,return )

bool FlxMath_obj::mouseInFlxRect( bool useWorldCoords,::flixel::util::FlxRect rect){
	HX_STACK_PUSH("FlxMath::mouseInFlxRect","flixel/util/FlxMath.hx",194);
	HX_STACK_ARG(useWorldCoords,"useWorldCoords");
	HX_STACK_ARG(rect,"rect");
	HX_STACK_LINE(195)
	if (((rect == null()))){
		HX_STACK_LINE(196)
		return true;
	}
	HX_STACK_LINE(200)
	if ((useWorldCoords)){
		HX_STACK_LINE(201)
		return ::flixel::util::FlxMath_obj::pointInFlxRect(::Math_obj::floor(::flixel::FlxG_obj::mouse->x),::Math_obj::floor(::flixel::FlxG_obj::mouse->y),rect);
	}
	else{
		HX_STACK_LINE(205)
		return ::flixel::util::FlxMath_obj::pointInFlxRect(::flixel::FlxG_obj::mouse->screenX,::flixel::FlxG_obj::mouse->screenY,rect);
	}
	HX_STACK_LINE(200)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,mouseInFlxRect,return )

bool FlxMath_obj::pointInRectangle( Float pointX,Float pointY,::flash::geom::Rectangle rect){
	HX_STACK_PUSH("FlxMath::pointInRectangle","flixel/util/FlxMath.hx",220);
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	HX_STACK_ARG(rect,"rect");
	HX_STACK_LINE(221)
	if (((bool((bool((bool((pointX >= rect->x)) && bool((pointX <= rect->get_right())))) && bool((pointY >= rect->y)))) && bool((pointY <= rect->get_bottom()))))){
		HX_STACK_LINE(222)
		return true;
	}
	HX_STACK_LINE(225)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,pointInRectangle,return )

int FlxMath_obj::maxAdd( int value,int amount,int max,hx::Null< int >  __o_min){
int min = __o_min.Default(0);
	HX_STACK_PUSH("FlxMath::maxAdd","flixel/util/FlxMath.hx",239);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(amount,"amount");
	HX_STACK_ARG(max,"max");
	HX_STACK_ARG(min,"min");
{
		HX_STACK_LINE(240)
		hx::AddEq(value,amount);
		HX_STACK_LINE(242)
		if (((value > max))){
			HX_STACK_LINE(243)
			value = max;
		}
		else{
			HX_STACK_LINE(246)
			if (((value <= min))){
				HX_STACK_LINE(247)
				value = min;
			}
		}
		HX_STACK_LINE(251)
		return value;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,maxAdd,return )

int FlxMath_obj::wrapValue( int value,int amount,int max){
	HX_STACK_PUSH("FlxMath::wrapValue","flixel/util/FlxMath.hx",264);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(amount,"amount");
	HX_STACK_ARG(max,"max");
	HX_STACK_LINE(265)
	int diff;		HX_STACK_VAR(diff,"diff");
	HX_STACK_LINE(267)
	value = ::Std_obj::_int(::Math_obj::abs(value));
	HX_STACK_LINE(268)
	amount = ::Std_obj::_int(::Math_obj::abs(amount));
	HX_STACK_LINE(269)
	max = ::Std_obj::_int(::Math_obj::abs(max));
	HX_STACK_LINE(271)
	diff = hx::Mod(((value + amount)),max);
	HX_STACK_LINE(273)
	return diff;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,wrapValue,return )

Float FlxMath_obj::dotProduct( Float ax,Float ay,Float bx,Float by){
	HX_STACK_PUSH("FlxMath::dotProduct","flixel/util/FlxMath.hx",287);
	HX_STACK_ARG(ax,"ax");
	HX_STACK_ARG(ay,"ay");
	HX_STACK_ARG(bx,"bx");
	HX_STACK_ARG(by,"by");
	HX_STACK_LINE(287)
	return ((ax * bx) + (ay * by));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,dotProduct,return )

Float FlxMath_obj::vectorLength( Float dx,Float dy){
	HX_STACK_PUSH("FlxMath::vectorLength","flixel/util/FlxMath.hx",300);
	HX_STACK_ARG(dx,"dx");
	HX_STACK_ARG(dy,"dy");
	HX_STACK_LINE(300)
	return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,vectorLength,return )

Float FlxMath_obj::getDistance( ::flixel::util::FlxPoint Point1,::flixel::util::FlxPoint Point2){
	HX_STACK_PUSH("FlxMath::getDistance","flixel/util/FlxMath.hx",312);
	HX_STACK_ARG(Point1,"Point1");
	HX_STACK_ARG(Point2,"Point2");
	HX_STACK_LINE(313)
	Float dx = (Point1->x - Point2->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(314)
	Float dy = (Point1->y - Point2->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(315)
	return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,getDistance,return )

int FlxMath_obj::distanceBetween( ::flixel::FlxSprite SpriteA,::flixel::FlxSprite SpriteB){
	HX_STACK_PUSH("FlxMath::distanceBetween","flixel/util/FlxMath.hx",326);
	HX_STACK_ARG(SpriteA,"SpriteA");
	HX_STACK_ARG(SpriteB,"SpriteB");
	HX_STACK_LINE(327)
	Float dx = ((SpriteA->x + SpriteA->origin->x) - ((SpriteB->x + SpriteB->origin->x)));		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(328)
	Float dy = ((SpriteA->y + SpriteA->origin->y) - ((SpriteB->y + SpriteB->origin->y)));		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(329)
	return ::Std_obj::_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceBetween,return )

bool FlxMath_obj::isDistanceWithin( ::flixel::FlxSprite SpriteA,::flixel::FlxSprite SpriteB,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_PUSH("FlxMath::isDistanceWithin","flixel/util/FlxMath.hx",343);
	HX_STACK_ARG(SpriteA,"SpriteA");
	HX_STACK_ARG(SpriteB,"SpriteB");
	HX_STACK_ARG(Distance,"Distance");
	HX_STACK_ARG(IncludeEqual,"IncludeEqual");
{
		HX_STACK_LINE(344)
		Float dx = ((SpriteA->x + SpriteA->origin->x) - ((SpriteB->x + SpriteB->origin->x)));		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(345)
		Float dy = ((SpriteA->y + SpriteA->origin->y) - ((SpriteB->y + SpriteB->origin->y)));		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(347)
		if ((IncludeEqual)){
			HX_STACK_LINE(348)
			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
		}
		else{
			HX_STACK_LINE(350)
			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
		}
		HX_STACK_LINE(347)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceWithin,return )

int FlxMath_obj::distanceToPoint( ::flixel::FlxSprite Sprite,::flixel::util::FlxPoint Target){
	HX_STACK_PUSH("FlxMath::distanceToPoint","flixel/util/FlxMath.hx",362);
	HX_STACK_ARG(Sprite,"Sprite");
	HX_STACK_ARG(Target,"Target");
	HX_STACK_LINE(363)
	Float dx = ((Sprite->x + Sprite->origin->x) - Target->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(364)
	Float dy = ((Sprite->y + Sprite->origin->y) - Target->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(365)
	return ::Std_obj::_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceToPoint,return )

bool FlxMath_obj::isDistanceToPointWithin( ::flixel::FlxSprite Sprite,::flixel::util::FlxPoint Target,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_PUSH("FlxMath::isDistanceToPointWithin","flixel/util/FlxMath.hx",380);
	HX_STACK_ARG(Sprite,"Sprite");
	HX_STACK_ARG(Target,"Target");
	HX_STACK_ARG(Distance,"Distance");
	HX_STACK_ARG(IncludeEqual,"IncludeEqual");
{
		HX_STACK_LINE(381)
		Float dx = ((Sprite->x + Sprite->origin->x) - Target->x);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(382)
		Float dy = ((Sprite->y + Sprite->origin->y) - Target->y);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(384)
		if ((IncludeEqual)){
			HX_STACK_LINE(385)
			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
		}
		else{
			HX_STACK_LINE(387)
			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
		}
		HX_STACK_LINE(384)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceToPointWithin,return )

int FlxMath_obj::distanceToMouse( ::flixel::FlxSprite Sprite){
	HX_STACK_PUSH("FlxMath::distanceToMouse","flixel/util/FlxMath.hx",398);
	HX_STACK_ARG(Sprite,"Sprite");
	HX_STACK_LINE(399)
	Float dx = ((Sprite->x + Sprite->origin->x) - ::flixel::FlxG_obj::mouse->screenX);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(400)
	Float dy = ((Sprite->y + Sprite->origin->y) - ::flixel::FlxG_obj::mouse->screenY);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(401)
	return ::Std_obj::_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,distanceToMouse,return )

bool FlxMath_obj::isDistanceToMouseWithin( ::flixel::FlxSprite Sprite,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_PUSH("FlxMath::isDistanceToMouseWithin","flixel/util/FlxMath.hx",414);
	HX_STACK_ARG(Sprite,"Sprite");
	HX_STACK_ARG(Distance,"Distance");
	HX_STACK_ARG(IncludeEqual,"IncludeEqual");
{
		HX_STACK_LINE(415)
		Float dx = ((Sprite->x + Sprite->origin->x) - ::flixel::FlxG_obj::mouse->screenX);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(416)
		Float dy = ((Sprite->y + Sprite->origin->y) - ::flixel::FlxG_obj::mouse->screenY);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(418)
		if ((IncludeEqual)){
			HX_STACK_LINE(419)
			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
		}
		else{
			HX_STACK_LINE(421)
			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
		}
		HX_STACK_LINE(418)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,isDistanceToMouseWithin,return )

int FlxMath_obj::distanceToTouch( ::flixel::FlxSprite Sprite,::flixel::input::touch::FlxTouch Touch){
	HX_STACK_PUSH("FlxMath::distanceToTouch","flixel/util/FlxMath.hx",434);
	HX_STACK_ARG(Sprite,"Sprite");
	HX_STACK_ARG(Touch,"Touch");
	HX_STACK_LINE(435)
	Float dx = ((Sprite->x + Sprite->origin->x) - Touch->screenX);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(436)
	Float dy = ((Sprite->y + Sprite->origin->y) - Touch->screenY);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(437)
	return ::Std_obj::_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceToTouch,return )

bool FlxMath_obj::isDistanceToTouchWithin( ::flixel::FlxSprite Sprite,::flixel::input::touch::FlxTouch Touch,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_PUSH("FlxMath::isDistanceToTouchWithin","flixel/util/FlxMath.hx",450);
	HX_STACK_ARG(Sprite,"Sprite");
	HX_STACK_ARG(Touch,"Touch");
	HX_STACK_ARG(Distance,"Distance");
	HX_STACK_ARG(IncludeEqual,"IncludeEqual");
{
		HX_STACK_LINE(451)
		Float dx = ((Sprite->x + Sprite->origin->x) - Touch->screenX);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(452)
		Float dy = ((Sprite->y + Sprite->origin->y) - Touch->screenY);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(454)
		if ((IncludeEqual)){
			HX_STACK_LINE(455)
			return (((dx * dx) + (dy * dy)) <= (Distance * Distance));
		}
		else{
			HX_STACK_LINE(457)
			return (((dx * dx) + (dy * dy)) < (Distance * Distance));
		}
		HX_STACK_LINE(454)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceToTouchWithin,return )

int FlxMath_obj::getDecimals( Float Number){
	HX_STACK_PUSH("FlxMath::getDecimals","flixel/util/FlxMath.hx",468);
	HX_STACK_ARG(Number,"Number");
	HX_STACK_LINE(469)
	Array< ::String > helperArray = ::Std_obj::string(Number).split(HX_CSTRING("."));		HX_STACK_VAR(helperArray,"helperArray");
	HX_STACK_LINE(470)
	int decimals = (int)0;		HX_STACK_VAR(decimals,"decimals");
	HX_STACK_LINE(472)
	if (((helperArray->length > (int)1))){
		HX_STACK_LINE(473)
		decimals = helperArray->__get((int)1).length;
	}
	HX_STACK_LINE(477)
	return decimals;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,getDecimals,return )

bool FlxMath_obj::equal( Float aValueA,Float aValueB,hx::Null< Float >  __o_aDiff){
Float aDiff = __o_aDiff.Default(0.00001);
	HX_STACK_PUSH("FlxMath::equal","flixel/util/FlxMath.hx",481);
	HX_STACK_ARG(aValueA,"aValueA");
	HX_STACK_ARG(aValueB,"aValueB");
	HX_STACK_ARG(aDiff,"aDiff");
{
		HX_STACK_LINE(481)
		return (::Math_obj::abs((aValueA - aValueB)) <= aDiff);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,equal,return )


FlxMath_obj::FlxMath_obj()
{
}

void FlxMath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMath);
	HX_MARK_END_CLASS();
}

void FlxMath_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxMath_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { return bound_dyn(); }
		if (HX_FIELD_EQ(inName,"isOdd") ) { return isOdd_dyn(); }
		if (HX_FIELD_EQ(inName,"equal") ) { return equal_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isEven") ) { return isEven_dyn(); }
		if (HX_FIELD_EQ(inName,"maxAdd") ) { return maxAdd_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"inBounds") ) { return inBounds_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wrapValue") ) { return wrapValue_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dotProduct") ) { return dotProduct_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getDistance") ) { return getDistance_dyn(); }
		if (HX_FIELD_EQ(inName,"getDecimals") ) { return getDecimals_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"roundDecimal") ) { return roundDecimal_dyn(); }
		if (HX_FIELD_EQ(inName,"vectorLength") ) { return vectorLength_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pointInFlxRect") ) { return pointInFlxRect_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseInFlxRect") ) { return mouseInFlxRect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distanceBetween") ) { return distanceBetween_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceToPoint") ) { return distanceToPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceToMouse") ) { return distanceToMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceToTouch") ) { return distanceToTouch_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"pointInRectangle") ) { return pointInRectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"isDistanceWithin") ) { return isDistanceWithin_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numericComparison") ) { return numericComparison_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pointInCoordinates") ) { return pointInCoordinates_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"isDistanceToPointWithin") ) { return isDistanceToPointWithin_dyn(); }
		if (HX_FIELD_EQ(inName,"isDistanceToMouseWithin") ) { return isDistanceToMouseWithin_dyn(); }
		if (HX_FIELD_EQ(inName,"isDistanceToTouchWithin") ) { return isDistanceToTouchWithin_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMath_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMath_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MIN_VALUE"),
	HX_CSTRING("MAX_VALUE"),
	HX_CSTRING("roundDecimal"),
	HX_CSTRING("bound"),
	HX_CSTRING("lerp"),
	HX_CSTRING("inBounds"),
	HX_CSTRING("isOdd"),
	HX_CSTRING("isEven"),
	HX_CSTRING("numericComparison"),
	HX_CSTRING("pointInCoordinates"),
	HX_CSTRING("pointInFlxRect"),
	HX_CSTRING("mouseInFlxRect"),
	HX_CSTRING("pointInRectangle"),
	HX_CSTRING("maxAdd"),
	HX_CSTRING("wrapValue"),
	HX_CSTRING("dotProduct"),
	HX_CSTRING("vectorLength"),
	HX_CSTRING("getDistance"),
	HX_CSTRING("distanceBetween"),
	HX_CSTRING("isDistanceWithin"),
	HX_CSTRING("distanceToPoint"),
	HX_CSTRING("isDistanceToPointWithin"),
	HX_CSTRING("distanceToMouse"),
	HX_CSTRING("isDistanceToMouseWithin"),
	HX_CSTRING("distanceToTouch"),
	HX_CSTRING("isDistanceToTouchWithin"),
	HX_CSTRING("getDecimals"),
	HX_CSTRING("equal"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMath_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MIN_VALUE,"MIN_VALUE");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MAX_VALUE,"MAX_VALUE");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMath_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MIN_VALUE,"MIN_VALUE");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MAX_VALUE,"MAX_VALUE");
};

Class FlxMath_obj::__mClass;

void FlxMath_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxMath"), hx::TCanCast< FlxMath_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxMath_obj::__boot()
{
	MIN_VALUE= 0.0000000000000001;
	MAX_VALUE= 1.79e+308;
}

} // end namespace flixel
} // end namespace util
