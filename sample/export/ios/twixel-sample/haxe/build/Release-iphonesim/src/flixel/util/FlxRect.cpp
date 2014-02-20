#include <hxcpp.h>

#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
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
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace util{

Void FlxRect_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{
HX_STACK_PUSH("FlxRect::new","flixel/util/FlxRect.hx",37);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
{
	HX_STACK_LINE(38)
	this->x = X;
	HX_STACK_LINE(39)
	this->y = Y;
	HX_STACK_LINE(40)
	this->width = Width;
	HX_STACK_LINE(41)
	this->height = Height;
}
;
	return null();
}

FlxRect_obj::~FlxRect_obj() { }

Dynamic FlxRect_obj::__CreateEmpty() { return  new FlxRect_obj; }
hx::ObjectPtr< FlxRect_obj > FlxRect_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{  hx::ObjectPtr< FlxRect_obj > result = new FlxRect_obj();
	result->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return result;}

Dynamic FlxRect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxRect_obj > result = new FlxRect_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::String FlxRect_obj::toString( ){
	HX_STACK_PUSH("FlxRect::toString","flixel/util/FlxRect.hx",236);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static Dynamic Block( ::flixel::util::FlxRect_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/util/FlxRect.hx",237);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("label") , HX_CSTRING("x"),false);
				__result->Add(HX_CSTRING("value") , __this->x,false);
				return __result;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Dynamic Block( ::flixel::util::FlxRect_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/util/FlxRect.hx",238);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("label") , HX_CSTRING("y"),false);
				__result->Add(HX_CSTRING("value") , __this->y,false);
				return __result;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static Dynamic Block( ::flixel::util::FlxRect_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/util/FlxRect.hx",239);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("label") , HX_CSTRING("w"),false);
				__result->Add(HX_CSTRING("value") , __this->width,false);
				return __result;
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static Dynamic Block( ::flixel::util::FlxRect_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/util/FlxRect.hx",240);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("label") , HX_CSTRING("h"),false);
				__result->Add(HX_CSTRING("value") , __this->height,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(236)
	return ::flixel::util::FlxStringUtil_obj::getDebugString(Dynamic( Array_obj<Dynamic>::__new().Add(_Function_1_1::Block(this)).Add(_Function_1_2::Block(this)).Add(_Function_1_3::Block(this)).Add(_Function_1_4::Block(this))));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,toString,return )

::flixel::util::FlxRect FlxRect_obj::_union( ::flixel::util::FlxRect Rect){
	HX_STACK_PUSH("FlxRect::union","flixel/util/FlxRect.hx",223);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Rect,"Rect");
	HX_STACK_LINE(224)
	Float minX = ::Math_obj::min(this->x,Rect->x);		HX_STACK_VAR(minX,"minX");
	HX_STACK_LINE(225)
	Float minY = ::Math_obj::min(this->y,Rect->y);		HX_STACK_VAR(minY,"minY");
	HX_STACK_LINE(226)
	Float maxX = ::Math_obj::max(this->get_right(),Rect->get_right());		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(227)
	Float maxY = ::Math_obj::max(this->get_bottom(),Rect->get_bottom());		HX_STACK_VAR(maxY,"maxY");
	struct _Function_1_1{
		inline static ::flixel::util::FlxRect Block( ::flixel::util::FlxRect_obj *__this,Float &minY,Float &maxY,Float &minX,Float &maxX){
			HX_STACK_PUSH("*::closure","flixel/util/FlxRect.hx",229);
			{
				HX_STACK_LINE(229)
				__this->x = minX;
				HX_STACK_LINE(229)
				__this->y = minY;
				HX_STACK_LINE(229)
				__this->width = (maxX - minX);
				HX_STACK_LINE(229)
				__this->height = (maxY - minY);
				HX_STACK_LINE(229)
				return __this;
			}
			return null();
		}
	};
	HX_STACK_LINE(229)
	return _Function_1_1::Block(this,minY,maxY,minX,maxX);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,_union,return )

bool FlxRect_obj::containsFlxPoint( ::flixel::util::FlxPoint Point){
	HX_STACK_PUSH("FlxRect::containsFlxPoint","flixel/util/FlxRect.hx",211);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Point,"Point");
	HX_STACK_LINE(211)
	return ::flixel::util::FlxMath_obj::pointInFlxRect(Point->x,Point->y,hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,containsFlxPoint,return )

bool FlxRect_obj::overlaps( ::flixel::util::FlxRect Rect){
	HX_STACK_PUSH("FlxRect::overlaps","flixel/util/FlxRect.hx",200);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Rect,"Rect");
	HX_STACK_LINE(200)
	return (bool((bool((bool(((Rect->x + Rect->width) > this->x)) && bool((Rect->x < (this->x + this->width))))) && bool(((Rect->y + Rect->height) > this->y)))) && bool((Rect->y < (this->y + this->height))));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,overlaps,return )

::flash::geom::Rectangle FlxRect_obj::copyToFlash( ::flash::geom::Rectangle FlashRect){
	HX_STACK_PUSH("FlxRect::copyToFlash","flixel/util/FlxRect.hx",186);
	HX_STACK_THIS(this);
	HX_STACK_ARG(FlashRect,"FlashRect");
	HX_STACK_LINE(187)
	FlashRect->x = this->x;
	HX_STACK_LINE(188)
	FlashRect->y = this->y;
	HX_STACK_LINE(189)
	FlashRect->width = this->width;
	HX_STACK_LINE(190)
	FlashRect->height = this->height;
	HX_STACK_LINE(191)
	return FlashRect;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyToFlash,return )

::flixel::util::FlxRect FlxRect_obj::copyFromFlash( ::flash::geom::Rectangle FlashRect){
	HX_STACK_PUSH("FlxRect::copyFromFlash","flixel/util/FlxRect.hx",172);
	HX_STACK_THIS(this);
	HX_STACK_ARG(FlashRect,"FlashRect");
	HX_STACK_LINE(173)
	this->x = FlashRect->x;
	HX_STACK_LINE(174)
	this->y = FlashRect->y;
	HX_STACK_LINE(175)
	this->width = FlashRect->width;
	HX_STACK_LINE(176)
	this->height = FlashRect->height;
	HX_STACK_LINE(177)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyFromFlash,return )

::flixel::util::FlxRect FlxRect_obj::copyTo( ::flixel::util::FlxRect Rect){
	HX_STACK_PUSH("FlxRect::copyTo","flixel/util/FlxRect.hx",158);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Rect,"Rect");
	HX_STACK_LINE(159)
	Rect->x = this->x;
	HX_STACK_LINE(160)
	Rect->y = this->y;
	HX_STACK_LINE(161)
	Rect->width = this->width;
	HX_STACK_LINE(162)
	Rect->height = this->height;
	HX_STACK_LINE(163)
	return Rect;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyTo,return )

::flixel::util::FlxRect FlxRect_obj::copyFrom( ::flixel::util::FlxRect Rect){
	HX_STACK_PUSH("FlxRect::copyFrom","flixel/util/FlxRect.hx",144);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Rect,"Rect");
	HX_STACK_LINE(145)
	this->x = Rect->x;
	HX_STACK_LINE(146)
	this->y = Rect->y;
	HX_STACK_LINE(147)
	this->width = Rect->width;
	HX_STACK_LINE(148)
	this->height = Rect->height;
	HX_STACK_LINE(149)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyFrom,return )

::flixel::util::FlxRect FlxRect_obj::set( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
	HX_STACK_PUSH("FlxRect::set","flixel/util/FlxRect.hx",130);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
{
		HX_STACK_LINE(131)
		this->x = X;
		HX_STACK_LINE(132)
		this->y = Y;
		HX_STACK_LINE(133)
		this->width = Width;
		HX_STACK_LINE(134)
		this->height = Height;
		HX_STACK_LINE(135)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxRect_obj,set,return )

Float FlxRect_obj::set_bottom( Float Value){
	HX_STACK_PUSH("FlxRect::set_bottom","flixel/util/FlxRect.hx",115);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(116)
	this->height = (Value - this->y);
	HX_STACK_LINE(117)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_bottom,return )

Float FlxRect_obj::get_bottom( ){
	HX_STACK_PUSH("FlxRect::get_bottom","flixel/util/FlxRect.hx",110);
	HX_STACK_THIS(this);
	HX_STACK_LINE(110)
	return (this->y + this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_bottom,return )

Float FlxRect_obj::set_top( Float Value){
	HX_STACK_PUSH("FlxRect::set_top","flixel/util/FlxRect.hx",99);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(100)
	hx::SubEq(this->height,(Value - this->y));
	HX_STACK_LINE(101)
	return this->y = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_top,return )

Float FlxRect_obj::get_top( ){
	HX_STACK_PUSH("FlxRect::get_top","flixel/util/FlxRect.hx",94);
	HX_STACK_THIS(this);
	HX_STACK_LINE(94)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_top,return )

Float FlxRect_obj::set_right( Float Value){
	HX_STACK_PUSH("FlxRect::set_right","flixel/util/FlxRect.hx",83);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(84)
	this->width = (Value - this->x);
	HX_STACK_LINE(85)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_right,return )

Float FlxRect_obj::get_right( ){
	HX_STACK_PUSH("FlxRect::get_right","flixel/util/FlxRect.hx",78);
	HX_STACK_THIS(this);
	HX_STACK_LINE(78)
	return (this->x + this->width);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_right,return )

Float FlxRect_obj::set_left( Float Value){
	HX_STACK_PUSH("FlxRect::set_left","flixel/util/FlxRect.hx",67);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(68)
	hx::SubEq(this->width,(Value - this->x));
	HX_STACK_LINE(69)
	return this->x = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_left,return )

Float FlxRect_obj::get_left( ){
	HX_STACK_PUSH("FlxRect::get_left","flixel/util/FlxRect.hx",62);
	HX_STACK_THIS(this);
	HX_STACK_LINE(62)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_left,return )

Void FlxRect_obj::setSize( Float Width,Float Height){
{
		HX_STACK_PUSH("FlxRect::setSize","flixel/util/FlxRect.hx",51);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Width,"Width");
		HX_STACK_ARG(Height,"Height");
		HX_STACK_LINE(52)
		this->width = Width;
		HX_STACK_LINE(53)
		this->height = Height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxRect_obj,setSize,(void))


FlxRect_obj::FlxRect_obj()
{
}

void FlxRect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxRect);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void FlxRect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic FlxRect_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"top") ) { return get_top(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return get_left(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"union") ) { return _union_dyn(); }
		if (HX_FIELD_EQ(inName,"right") ) { return get_right(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"copyTo") ) { return copyTo_dyn(); }
		if (HX_FIELD_EQ(inName,"bottom") ) { return get_bottom(); }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_top") ) { return set_top_dyn(); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return get_top_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return set_left_dyn(); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return get_left_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_right") ) { return set_right_dyn(); }
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return set_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyToFlash") ) { return copyToFlash_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyFromFlash") ) { return copyFromFlash_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"containsFlxPoint") ) { return containsFlxPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxRect_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return set_top(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return set_left(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return set_right(inValue); }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { return set_bottom(inValue); }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxRect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bottom"));
	outFields->push(HX_CSTRING("top"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("union"),
	HX_CSTRING("containsFlxPoint"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("copyToFlash"),
	HX_CSTRING("copyFromFlash"),
	HX_CSTRING("copyTo"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("set"),
	HX_CSTRING("set_bottom"),
	HX_CSTRING("get_bottom"),
	HX_CSTRING("set_top"),
	HX_CSTRING("get_top"),
	HX_CSTRING("set_right"),
	HX_CSTRING("get_right"),
	HX_CSTRING("set_left"),
	HX_CSTRING("get_left"),
	HX_CSTRING("setSize"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRect_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRect_obj::__mClass,"__mClass");
};

Class FlxRect_obj::__mClass;

void FlxRect_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxRect"), hx::TCanCast< FlxRect_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxRect_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
