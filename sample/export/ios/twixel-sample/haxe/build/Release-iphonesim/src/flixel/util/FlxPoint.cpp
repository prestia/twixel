#include <hxcpp.h>

#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
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

Void FlxPoint_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_PUSH("FlxPoint::new","flixel/util/FlxPoint.hx",10);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(25)
	this->y = (int)0;
	HX_STACK_LINE(15)
	this->x = (int)0;
	HX_STACK_LINE(39)
	this->set_x(X);
	HX_STACK_LINE(40)
	this->set_y(Y);
}
;
	return null();
}

FlxPoint_obj::~FlxPoint_obj() { }

Dynamic FlxPoint_obj::__CreateEmpty() { return  new FlxPoint_obj; }
hx::ObjectPtr< FlxPoint_obj > FlxPoint_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< FlxPoint_obj > result = new FlxPoint_obj();
	result->__construct(__o_X,__o_Y);
	return result;}

Dynamic FlxPoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPoint_obj > result = new FlxPoint_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *FlxPoint_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

::String FlxPoint_obj::toString( ){
	HX_STACK_PUSH("FlxPoint::toString","flixel/util/FlxPoint.hx",149);
	HX_STACK_THIS(this);
	HX_STACK_LINE(150)
	int p = ::flixel::FlxG_obj::debugger->precision;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(151)
	return ((((HX_CSTRING("(x: ") + ::flixel::util::FlxMath_obj::roundDecimal(this->x,p)) + HX_CSTRING(" | y: ")) + ::flixel::util::FlxMath_obj::roundDecimal(this->y,p)) + HX_CSTRING(")"));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,toString,return )

Void FlxPoint_obj::destroy( ){
{
		HX_STACK_PUSH("FlxPoint::destroy","flixel/util/FlxPoint.hx",143);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPoint_obj,destroy,(void))

Float FlxPoint_obj::distanceTo( ::flixel::util::FlxPoint AnotherPoint){
	HX_STACK_PUSH("FlxPoint::distanceTo","flixel/util/FlxPoint.hx",139);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AnotherPoint,"AnotherPoint");
	struct _Function_1_1{
		inline static Float Block( ::flixel::util::FlxPoint_obj *__this,::flixel::util::FlxPoint &AnotherPoint){
			HX_STACK_PUSH("*::closure","flixel/util/FlxPoint.hx",140);
			{
				HX_STACK_LINE(140)
				Float dx = (__this->x - AnotherPoint->x);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(140)
				Float dy = (__this->y - AnotherPoint->y);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(140)
				return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
			}
			return null();
		}
	};
	HX_STACK_LINE(139)
	return _Function_1_1::Block(this,AnotherPoint);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,distanceTo,return )

bool FlxPoint_obj::inFlxRect( ::flixel::util::FlxRect Rect){
	HX_STACK_PUSH("FlxPoint::inFlxRect","flixel/util/FlxPoint.hx",128);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Rect,"Rect");
	HX_STACK_LINE(128)
	return ::flixel::util::FlxMath_obj::pointInFlxRect(this->x,this->y,Rect);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,inFlxRect,return )

bool FlxPoint_obj::inCoords( Float RectX,Float RectY,Float RectWidth,Float RectHeight){
	HX_STACK_PUSH("FlxPoint::inCoords","flixel/util/FlxPoint.hx",117);
	HX_STACK_THIS(this);
	HX_STACK_ARG(RectX,"RectX");
	HX_STACK_ARG(RectY,"RectY");
	HX_STACK_ARG(RectWidth,"RectWidth");
	HX_STACK_ARG(RectHeight,"RectHeight");
	HX_STACK_LINE(117)
	return ::flixel::util::FlxMath_obj::pointInCoordinates(this->x,this->y,RectX,RectY,RectWidth,RectHeight);
}


HX_DEFINE_DYNAMIC_FUNC4(FlxPoint_obj,inCoords,return )

::flash::geom::Point FlxPoint_obj::copyToFlash( ::flash::geom::Point FlashPoint){
	HX_STACK_PUSH("FlxPoint::copyToFlash","flixel/util/FlxPoint.hx",101);
	HX_STACK_THIS(this);
	HX_STACK_ARG(FlashPoint,"FlashPoint");
	HX_STACK_LINE(102)
	FlashPoint->x = this->x;
	HX_STACK_LINE(103)
	FlashPoint->y = this->y;
	HX_STACK_LINE(104)
	return FlashPoint;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyToFlash,return )

::flixel::util::FlxPoint FlxPoint_obj::copyFromFlash( ::flash::geom::Point FlashPoint){
	HX_STACK_PUSH("FlxPoint::copyFromFlash","flixel/util/FlxPoint.hx",89);
	HX_STACK_THIS(this);
	HX_STACK_ARG(FlashPoint,"FlashPoint");
	HX_STACK_LINE(90)
	this->set_x(FlashPoint->x);
	HX_STACK_LINE(91)
	this->set_y(FlashPoint->y);
	HX_STACK_LINE(92)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyFromFlash,return )

::flixel::util::FlxPoint FlxPoint_obj::copyTo( ::flixel::util::FlxPoint point){
	HX_STACK_PUSH("FlxPoint::copyTo","flixel/util/FlxPoint.hx",73);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(74)
	if (((point == null()))){
		HX_STACK_LINE(75)
		point = ::flixel::util::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(78)
	point->set_x(this->x);
	HX_STACK_LINE(79)
	point->set_y(this->y);
	HX_STACK_LINE(80)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyTo,return )

::flixel::util::FlxPoint FlxPoint_obj::copyFrom( ::flixel::util::FlxPoint point){
	HX_STACK_PUSH("FlxPoint::copyFrom","flixel/util/FlxPoint.hx",61);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(62)
	this->set_x(point->x);
	HX_STACK_LINE(63)
	this->set_y(point->y);
	HX_STACK_LINE(64)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,copyFrom,return )

::flixel::util::FlxPoint FlxPoint_obj::set( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_PUSH("FlxPoint::set","flixel/util/FlxPoint.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
{
		HX_STACK_LINE(50)
		this->set_x(X);
		HX_STACK_LINE(51)
		this->set_y(Y);
		HX_STACK_LINE(52)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPoint_obj,set,return )

Float FlxPoint_obj::set_y( Float Value){
	HX_STACK_PUSH("FlxPoint::set_y","flixel/util/FlxPoint.hx",28);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(28)
	return this->y = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,set_y,return )

Float FlxPoint_obj::set_x( Float Value){
	HX_STACK_PUSH("FlxPoint::set_x","flixel/util/FlxPoint.hx",18);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(18)
	return this->x = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPoint_obj,set_x,return )


FlxPoint_obj::FlxPoint_obj()
{
}

void FlxPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPoint);
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void FlxPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic FlxPoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"copyTo") ) { return copyTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"inCoords") ) { return inCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inFlxRect") ) { return inFlxRect_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"distanceTo") ) { return distanceTo_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyToFlash") ) { return copyToFlash_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyFromFlash") ) { return copyFromFlash_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxPoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("destroy"),
	HX_CSTRING("distanceTo"),
	HX_CSTRING("inFlxRect"),
	HX_CSTRING("inCoords"),
	HX_CSTRING("copyToFlash"),
	HX_CSTRING("copyFromFlash"),
	HX_CSTRING("copyTo"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("set"),
	HX_CSTRING("set_y"),
	HX_CSTRING("y"),
	HX_CSTRING("set_x"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPoint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPoint_obj::__mClass,"__mClass");
};

Class FlxPoint_obj::__mClass;

void FlxPoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxPoint"), hx::TCanCast< FlxPoint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxPoint_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
