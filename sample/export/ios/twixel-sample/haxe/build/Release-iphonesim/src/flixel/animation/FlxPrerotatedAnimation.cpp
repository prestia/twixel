#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxPrerotatedAnimation
#include <flixel/animation/FlxPrerotatedAnimation.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace animation{

Void FlxPrerotatedAnimation_obj::__construct(::flixel::animation::FlxAnimationController Parent,Float Baked)
{
HX_STACK_PUSH("FlxPrerotatedAnimation::new","flixel/animation/FlxPrerotatedAnimation.hx",9);
{
	HX_STACK_LINE(24)
	this->angle = (int)0;
	HX_STACK_LINE(19)
	super::__construct(Parent,HX_CSTRING("prerotated_animation"));
	HX_STACK_LINE(20)
	this->baked = Baked;
	HX_STACK_LINE(21)
	this->rotations = ::Math_obj::round((Float((int)360) / Float(Baked)));
}
;
	return null();
}

FlxPrerotatedAnimation_obj::~FlxPrerotatedAnimation_obj() { }

Dynamic FlxPrerotatedAnimation_obj::__CreateEmpty() { return  new FlxPrerotatedAnimation_obj; }
hx::ObjectPtr< FlxPrerotatedAnimation_obj > FlxPrerotatedAnimation_obj::__new(::flixel::animation::FlxAnimationController Parent,Float Baked)
{  hx::ObjectPtr< FlxPrerotatedAnimation_obj > result = new FlxPrerotatedAnimation_obj();
	result->__construct(Parent,Baked);
	return result;}

Dynamic FlxPrerotatedAnimation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPrerotatedAnimation_obj > result = new FlxPrerotatedAnimation_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::flixel::animation::FlxBaseAnimation FlxPrerotatedAnimation_obj::clone( ::flixel::animation::FlxAnimationController Parent){
	HX_STACK_PUSH("FlxPrerotatedAnimation::clone","flixel/animation/FlxPrerotatedAnimation.hx",59);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Parent,"Parent");
	HX_STACK_LINE(59)
	return ::flixel::animation::FlxPrerotatedAnimation_obj::__new(Parent,this->baked);
}


int FlxPrerotatedAnimation_obj::set_curIndex( int Value){
	HX_STACK_PUSH("FlxPrerotatedAnimation::set_curIndex","flixel/animation/FlxPrerotatedAnimation.hx",47);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(48)
	this->curIndex = Value;
	HX_STACK_LINE(50)
	if (((this->parent != null()))){
		HX_STACK_LINE(51)
		this->parent->set_frameIndex(Value);
	}
	HX_STACK_LINE(55)
	return Value;
}


Float FlxPrerotatedAnimation_obj::set_angle( Float Value){
	HX_STACK_PUSH("FlxPrerotatedAnimation::set_angle","flixel/animation/FlxPrerotatedAnimation.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(28)
	int oldIndex = this->curIndex;		HX_STACK_VAR(oldIndex,"oldIndex");
	HX_STACK_LINE(29)
	int angleHelper = ::Math_obj::floor(hx::Mod(Value,(int)360));		HX_STACK_VAR(angleHelper,"angleHelper");
	HX_STACK_LINE(31)
	while(((angleHelper < (int)0))){
		HX_STACK_LINE(32)
		hx::AddEq(angleHelper,(int)360);
	}
	HX_STACK_LINE(36)
	int newIndex = ::Math_obj::floor(((Float(angleHelper) / Float(this->baked)) + 0.5));		HX_STACK_VAR(newIndex,"newIndex");
	HX_STACK_LINE(37)
	newIndex = ::Std_obj::_int(hx::Mod(newIndex,this->rotations));
	HX_STACK_LINE(38)
	if (((oldIndex != newIndex))){
		HX_STACK_LINE(39)
		this->set_curIndex(newIndex);
	}
	HX_STACK_LINE(43)
	return this->angle = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPrerotatedAnimation_obj,set_angle,return )

::String FlxPrerotatedAnimation_obj::PREROTATED;


FlxPrerotatedAnimation_obj::FlxPrerotatedAnimation_obj()
{
}

void FlxPrerotatedAnimation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPrerotatedAnimation);
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(baked,"baked");
	HX_MARK_MEMBER_NAME(rotations,"rotations");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxPrerotatedAnimation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(baked,"baked");
	HX_VISIT_MEMBER_NAME(rotations,"rotations");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxPrerotatedAnimation_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"baked") ) { return baked; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"rotations") ) { return rotations; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_curIndex") ) { return set_curIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxPrerotatedAnimation_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp) return set_angle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"baked") ) { baked=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rotations") ) { rotations=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPrerotatedAnimation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("baked"));
	outFields->push(HX_CSTRING("rotations"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("PREROTATED"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clone"),
	HX_CSTRING("set_curIndex"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("angle"),
	HX_CSTRING("baked"),
	HX_CSTRING("rotations"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPrerotatedAnimation_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxPrerotatedAnimation_obj::PREROTATED,"PREROTATED");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPrerotatedAnimation_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxPrerotatedAnimation_obj::PREROTATED,"PREROTATED");
};

Class FlxPrerotatedAnimation_obj::__mClass;

void FlxPrerotatedAnimation_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.animation.FlxPrerotatedAnimation"), hx::TCanCast< FlxPrerotatedAnimation_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxPrerotatedAnimation_obj::__boot()
{
	PREROTATED= HX_CSTRING("prerotated_animation");
}

} // end namespace flixel
} // end namespace animation
