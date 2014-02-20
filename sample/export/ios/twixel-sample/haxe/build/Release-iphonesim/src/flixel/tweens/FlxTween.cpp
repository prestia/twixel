#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_plugin_FlxPlugin
#include <flixel/plugin/FlxPlugin.h>
#endif
#ifndef INCLUDED_flixel_plugin_TweenManager
#include <flixel/plugin/TweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_AngleTween
#include <flixel/tweens/misc/AngleTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_MultiVarTween
#include <flixel/tweens/misc/MultiVarTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CircularMotion
#include <flixel/tweens/motion/CircularMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#include <flixel/tweens/motion/CubicMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearMotion
#include <flixel/tweens/motion/LinearMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearPath
#include <flixel/tweens/motion/LinearPath.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadMotion
#include <flixel/tweens/motion/QuadMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadPath
#include <flixel/tweens/motion/QuadPath.h>
#endif
#ifndef INCLUDED_flixel_tweens_sound_Fader
#include <flixel/tweens/sound/Fader.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
namespace flixel{
namespace tweens{

Void FlxTween_obj::__construct(Float duration,hx::Null< int >  __o_type,Dynamic complete,Dynamic ease)
{
HX_STACK_PUSH("FlxTween::new","flixel/tweens/FlxTween.hx",27);
int type = __o_type.Default(0);
{
	HX_STACK_LINE(489)
	this->executions = (int)0;
	HX_STACK_LINE(478)
	this->userData = null();
	HX_STACK_LINE(504)
	this->duration = duration;
	HX_STACK_LINE(505)
	this->set_type(type);
	HX_STACK_LINE(506)
	this->complete = complete;
	HX_STACK_LINE(507)
	this->ease = ease;
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",509);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(509)
	this->userData = _Function_1_1::Block();
}
;
	return null();
}

FlxTween_obj::~FlxTween_obj() { }

Dynamic FlxTween_obj::__CreateEmpty() { return  new FlxTween_obj; }
hx::ObjectPtr< FlxTween_obj > FlxTween_obj::__new(Float duration,hx::Null< int >  __o_type,Dynamic complete,Dynamic ease)
{  hx::ObjectPtr< FlxTween_obj > result = new FlxTween_obj();
	result->__construct(duration,__o_type,complete,ease);
	return result;}

Dynamic FlxTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTween_obj > result = new FlxTween_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

hx::Object *FlxTween_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

int FlxTween_obj::set_type( int value){
	HX_STACK_PUSH("FlxTween::set_type","flixel/tweens/FlxTween.hx",618);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(619)
	if (((value == (int)0))){
		HX_STACK_LINE(620)
		value = (int)8;
	}
	else{
		HX_STACK_LINE(623)
		if (((value == (int)16))){
			HX_STACK_LINE(624)
			value = (int)17;
		}
	}
	HX_STACK_LINE(628)
	this->_backward = (((int(value) & int((int)16))) > (int)0);
	HX_STACK_LINE(630)
	return this->type = value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_type,return )

Float FlxTween_obj::set_percent( Float value){
	HX_STACK_PUSH("FlxTween::set_percent","flixel/tweens/FlxTween.hx",613);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(613)
	return this->_secondsSinceStart = (this->duration * value);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,set_percent,return )

Float FlxTween_obj::get_percent( ){
	HX_STACK_PUSH("FlxTween::get_percent","flixel/tweens/FlxTween.hx",608);
	HX_STACK_THIS(this);
	HX_STACK_LINE(608)
	return (Float(this->_secondsSinceStart) / Float(this->duration));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,get_percent,return )

Void FlxTween_obj::finish( ){
{
		HX_STACK_PUSH("FlxTween::finish","flixel/tweens/FlxTween.hx",564);
		HX_STACK_THIS(this);
		HX_STACK_LINE(565)
		(this->executions)++;
		HX_STACK_LINE(567)
		if (((this->complete_dyn() != null()))){
			HX_STACK_LINE(568)
			this->complete(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(572)
		{
			HX_STACK_LINE(572)
			int _g = (int(this->type) & int((int)-17));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(572)
			switch( (int)(_g)){
				case (int)1: {
					HX_STACK_LINE(575)
					this->_secondsSinceStart = this->duration;
					HX_STACK_LINE(576)
					this->active = false;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(579)
					hx::ModEq(this->_secondsSinceStart,this->duration);
					HX_STACK_LINE(580)
					this->scale = (Float(this->_secondsSinceStart) / Float(this->duration));
					HX_STACK_LINE(581)
					if (((bool((bool((this->ease_dyn() != null())) && bool((this->scale > (int)0)))) && bool((this->scale < (int)1))))){
						HX_STACK_LINE(581)
						this->scale = this->ease(this->scale);
					}
					HX_STACK_LINE(584)
					this->start();
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(587)
					hx::ModEq(this->_secondsSinceStart,this->duration);
					HX_STACK_LINE(588)
					this->scale = (Float(this->_secondsSinceStart) / Float(this->duration));
					HX_STACK_LINE(589)
					if (((bool((bool((this->ease_dyn() != null())) && bool((this->scale > (int)0)))) && bool((this->scale < (int)1))))){
						HX_STACK_LINE(589)
						this->scale = this->ease(this->scale);
					}
					HX_STACK_LINE(592)
					this->_backward = !(this->_backward);
					HX_STACK_LINE(593)
					if ((this->_backward)){
						HX_STACK_LINE(593)
						this->scale = ((int)1 - this->scale);
					}
					HX_STACK_LINE(596)
					this->start();
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(599)
					this->_secondsSinceStart = this->duration;
					HX_STACK_LINE(600)
					this->active = false;
					HX_STACK_LINE(601)
					::flixel::tweens::FlxTween_obj::manager->remove(hx::ObjectPtr<OBJ_>(this),true);
				}
				;break;
			}
		}
		HX_STACK_LINE(604)
		this->finished = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,finish,(void))

Void FlxTween_obj::cancel( ){
{
		HX_STACK_PUSH("FlxTween::cancel","flixel/tweens/FlxTween.hx",558);
		HX_STACK_THIS(this);
		HX_STACK_LINE(559)
		this->active = false;
		HX_STACK_LINE(560)
		::flixel::tweens::FlxTween_obj::manager->remove(hx::ObjectPtr<OBJ_>(this),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,cancel,(void))

::flixel::tweens::FlxTween FlxTween_obj::start( ){
	HX_STACK_PUSH("FlxTween::start","flixel/tweens/FlxTween.hx",543);
	HX_STACK_THIS(this);
	HX_STACK_LINE(544)
	this->_secondsSinceStart = (int)0;
	HX_STACK_LINE(545)
	if (((this->duration == (int)0))){
		HX_STACK_LINE(547)
		this->active = false;
		HX_STACK_LINE(548)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(550)
	this->active = true;
	HX_STACK_LINE(551)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,start,return )

Void FlxTween_obj::update( ){
{
		HX_STACK_PUSH("FlxTween::update","flixel/tweens/FlxTween.hx",520);
		HX_STACK_THIS(this);
		HX_STACK_LINE(521)
		hx::AddEq(this->_secondsSinceStart,::flixel::FlxG_obj::elapsed);
		HX_STACK_LINE(522)
		this->scale = (Float(this->_secondsSinceStart) / Float(this->duration));
		HX_STACK_LINE(524)
		if (((this->ease_dyn() != null()))){
			HX_STACK_LINE(525)
			this->scale = this->ease(this->scale);
		}
		HX_STACK_LINE(528)
		if ((this->_backward)){
			HX_STACK_LINE(529)
			this->scale = ((int)1 - this->scale);
		}
		HX_STACK_LINE(532)
		if (((this->_secondsSinceStart >= this->duration))){
			HX_STACK_LINE(534)
			this->scale = (  ((this->_backward)) ? Float((int)0) : Float((int)1) );
			HX_STACK_LINE(535)
			this->finished = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,update,(void))

Void FlxTween_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTween::destroy","flixel/tweens/FlxTween.hx",513);
		HX_STACK_THIS(this);
		HX_STACK_LINE(514)
		this->complete = null();
		HX_STACK_LINE(515)
		this->ease = null();
		HX_STACK_LINE(516)
		this->userData = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTween_obj,destroy,(void))

int FlxTween_obj::PERSIST;

int FlxTween_obj::LOOPING;

int FlxTween_obj::PINGPONG;

int FlxTween_obj::ONESHOT;

int FlxTween_obj::BACKWARD;

::flixel::plugin::TweenManager FlxTween_obj::manager;

::flixel::tweens::misc::VarTween FlxTween_obj::singleVar( Dynamic Object,::String Property,Float To,Float Duration,Dynamic Options){
	HX_STACK_PUSH("FlxTween::singleVar","flixel/tweens/FlxTween.hx",71);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(Property,"Property");
	HX_STACK_ARG(To,"To");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(Options,"Options");
	HX_STACK_LINE(72)
	if (((Options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",74);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)8,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(73)
		Options = _Function_2_1::Block();
	}
	HX_STACK_LINE(77)
	::flixel::tweens::misc::VarTween tween = ::flixel::tweens::misc::VarTween_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
	HX_STACK_LINE(78)
	tween->tween(Object,Property,To,Duration,Options->__Field(HX_CSTRING("ease"),true));
	HX_STACK_LINE(79)
	::flixel::tweens::FlxTween_obj::addTween(tween,Options->__Field(HX_CSTRING("delay"),true));
	HX_STACK_LINE(81)
	return tween;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,singleVar,return )

::flixel::tweens::misc::MultiVarTween FlxTween_obj::multiVar( Dynamic Object,Dynamic Values,Float Duration,Dynamic Options){
	HX_STACK_PUSH("FlxTween::multiVar","flixel/tweens/FlxTween.hx",99);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(Values,"Values");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(Options,"Options");
	HX_STACK_LINE(100)
	if (((Options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",102);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)8,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(101)
		Options = _Function_2_1::Block();
	}
	HX_STACK_LINE(105)
	::flixel::tweens::misc::MultiVarTween tween = ::flixel::tweens::misc::MultiVarTween_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
	HX_STACK_LINE(106)
	tween->tween(Object,Values,Duration,Options->__Field(HX_CSTRING("ease"),true));
	HX_STACK_LINE(107)
	::flixel::tweens::FlxTween_obj::addTween(tween,Options->__Field(HX_CSTRING("delay"),true));
	HX_STACK_LINE(109)
	return tween;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTween_obj,multiVar,return )

::flixel::tweens::misc::NumTween FlxTween_obj::num( Float FromValue,Float ToValue,Float Duration,Dynamic Options){
	HX_STACK_PUSH("FlxTween::num","flixel/tweens/FlxTween.hx",127);
	HX_STACK_ARG(FromValue,"FromValue");
	HX_STACK_ARG(ToValue,"ToValue");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(Options,"Options");
	HX_STACK_LINE(128)
	if (((Options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",130);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)8,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(129)
		Options = _Function_2_1::Block();
	}
	HX_STACK_LINE(133)
	::flixel::tweens::misc::NumTween tween = ::flixel::tweens::misc::NumTween_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
	HX_STACK_LINE(134)
	tween->tween(FromValue,ToValue,Duration,Options->__Field(HX_CSTRING("ease"),true));
	HX_STACK_LINE(135)
	::flixel::tweens::FlxTween_obj::addTween(tween,Options->__Field(HX_CSTRING("delay"),true));
	HX_STACK_LINE(137)
	return tween;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTween_obj,num,return )

::flixel::tweens::misc::AngleTween FlxTween_obj::angle( ::flixel::FlxSprite Sprite,Float FromAngle,Float ToAngle,Float Duration,Dynamic Options){
	HX_STACK_PUSH("FlxTween::angle","flixel/tweens/FlxTween.hx",156);
	HX_STACK_ARG(Sprite,"Sprite");
	HX_STACK_ARG(FromAngle,"FromAngle");
	HX_STACK_ARG(ToAngle,"ToAngle");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(Options,"Options");
	HX_STACK_LINE(157)
	if (((Options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",159);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)8,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(158)
		Options = _Function_2_1::Block();
	}
	HX_STACK_LINE(162)
	::flixel::tweens::misc::AngleTween tween = ::flixel::tweens::misc::AngleTween_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
	HX_STACK_LINE(163)
	tween->tween(FromAngle,ToAngle,Duration,Options->__Field(HX_CSTRING("ease"),true),Sprite);
	HX_STACK_LINE(164)
	::flixel::tweens::FlxTween_obj::addTween(tween,Options->__Field(HX_CSTRING("delay"),true));
	HX_STACK_LINE(166)
	return tween;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,angle,return )

::flixel::tweens::misc::ColorTween FlxTween_obj::color( ::flixel::FlxSprite Sprite,Float Duration,int FromColor,int ToColor,hx::Null< Float >  __o_FromAlpha,hx::Null< Float >  __o_ToAlpha,Dynamic Options){
Float FromAlpha = __o_FromAlpha.Default(1);
Float ToAlpha = __o_ToAlpha.Default(1);
	HX_STACK_PUSH("FlxTween::color","flixel/tweens/FlxTween.hx",187);
	HX_STACK_ARG(Sprite,"Sprite");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(FromColor,"FromColor");
	HX_STACK_ARG(ToColor,"ToColor");
	HX_STACK_ARG(FromAlpha,"FromAlpha");
	HX_STACK_ARG(ToAlpha,"ToAlpha");
	HX_STACK_ARG(Options,"Options");
{
		HX_STACK_LINE(188)
		if (((Options == null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",190);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("type") , (int)8,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(189)
			Options = _Function_2_1::Block();
		}
		HX_STACK_LINE(193)
		::flixel::tweens::misc::ColorTween tween = ::flixel::tweens::misc::ColorTween_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(194)
		tween->tween(Duration,FromColor,ToColor,FromAlpha,ToAlpha,Options->__Field(HX_CSTRING("ease"),true),Sprite);
		HX_STACK_LINE(195)
		::flixel::tweens::FlxTween_obj::addTween(tween,Options->__Field(HX_CSTRING("delay"),true));
		HX_STACK_LINE(197)
		return tween;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxTween_obj,color,return )

::flixel::tweens::sound::Fader FlxTween_obj::fader( Float Volume,Float Duration,Dynamic Options){
	HX_STACK_PUSH("FlxTween::fader","flixel/tweens/FlxTween.hx",215);
	HX_STACK_ARG(Volume,"Volume");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(Options,"Options");
	HX_STACK_LINE(216)
	if (((Options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",218);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)8,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(217)
		Options = _Function_2_1::Block();
	}
	HX_STACK_LINE(221)
	::flixel::tweens::sound::Fader tween = ::flixel::tweens::sound::Fader_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
	HX_STACK_LINE(222)
	tween->fadeTo(Volume,Duration,Options->__Field(HX_CSTRING("ease"),true));
	HX_STACK_LINE(223)
	::flixel::tweens::FlxTween_obj::addTween(tween,Options->__Field(HX_CSTRING("delay"),true));
	HX_STACK_LINE(225)
	return tween;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxTween_obj,fader,return )

::flixel::tweens::motion::LinearMotion FlxTween_obj::linearMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ToX,Float ToY,Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_PUSH("FlxTween::linearMotion","flixel/tweens/FlxTween.hx",248);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(FromX,"FromX");
	HX_STACK_ARG(FromY,"FromY");
	HX_STACK_ARG(ToX,"ToX");
	HX_STACK_ARG(ToY,"ToY");
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed");
	HX_STACK_ARG(UseDuration,"UseDuration");
	HX_STACK_ARG(Options,"Options");
{
		HX_STACK_LINE(249)
		if (((Options == null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",251);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("type") , (int)8,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(250)
			Options = _Function_2_1::Block();
		}
		HX_STACK_LINE(254)
		::flixel::tweens::motion::LinearMotion tween = ::flixel::tweens::motion::LinearMotion_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(255)
		tween->setObject(Object);
		HX_STACK_LINE(256)
		tween->setMotion(FromX,FromY,ToX,ToY,DurationOrSpeed,UseDuration,Options->__Field(HX_CSTRING("ease"),true));
		HX_STACK_LINE(257)
		::flixel::tweens::FlxTween_obj::addTween(tween,Options->__Field(HX_CSTRING("delay"),true));
		HX_STACK_LINE(259)
		return tween;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxTween_obj,linearMotion,return )

::flixel::tweens::motion::QuadMotion FlxTween_obj::quadMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_PUSH("FlxTween::quadMotion","flixel/tweens/FlxTween.hx",283);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(FromX,"FromX");
	HX_STACK_ARG(FromY,"FromY");
	HX_STACK_ARG(ControlX,"ControlX");
	HX_STACK_ARG(ControlY,"ControlY");
	HX_STACK_ARG(ToX,"ToX");
	HX_STACK_ARG(ToY,"ToY");
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed");
	HX_STACK_ARG(UseDuration,"UseDuration");
	HX_STACK_ARG(Options,"Options");
{
		HX_STACK_LINE(284)
		if (((Options == null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",286);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("type") , (int)8,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(285)
			Options = _Function_2_1::Block();
		}
		HX_STACK_LINE(289)
		::flixel::tweens::motion::QuadMotion tween = ::flixel::tweens::motion::QuadMotion_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(290)
		tween->setObject(Object);
		HX_STACK_LINE(291)
		tween->setMotion(FromX,FromY,ControlX,ControlY,ToX,ToY,DurationOrSpeed,UseDuration,Options->__Field(HX_CSTRING("ease"),true));
		HX_STACK_LINE(292)
		::flixel::tweens::FlxTween_obj::addTween(tween,Options->__Field(HX_CSTRING("delay"),true));
		HX_STACK_LINE(294)
		return tween;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(FlxTween_obj,quadMotion,return )

::flixel::tweens::motion::CubicMotion FlxTween_obj::cubicMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float aX,Float aY,Float bX,Float bY,Float ToX,Float ToY,Float Duration,Dynamic Options){
	HX_STACK_PUSH("FlxTween::cubicMotion","flixel/tweens/FlxTween.hx",319);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(FromX,"FromX");
	HX_STACK_ARG(FromY,"FromY");
	HX_STACK_ARG(aX,"aX");
	HX_STACK_ARG(aY,"aY");
	HX_STACK_ARG(bX,"bX");
	HX_STACK_ARG(bY,"bY");
	HX_STACK_ARG(ToX,"ToX");
	HX_STACK_ARG(ToY,"ToY");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(Options,"Options");
	HX_STACK_LINE(320)
	if (((Options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",322);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("type") , (int)8,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(321)
		Options = _Function_2_1::Block();
	}
	HX_STACK_LINE(325)
	::flixel::tweens::motion::CubicMotion tween = ::flixel::tweens::motion::CubicMotion_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
	HX_STACK_LINE(326)
	tween->setObject(Object);
	HX_STACK_LINE(327)
	tween->setMotion(FromX,FromY,aX,aY,bX,bY,ToX,ToY,Duration,Options->__Field(HX_CSTRING("ease"),true));
	HX_STACK_LINE(328)
	::flixel::tweens::FlxTween_obj::addTween(tween,Options->__Field(HX_CSTRING("delay"),true));
	HX_STACK_LINE(330)
	return tween;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(FlxTween_obj,cubicMotion,return )

::flixel::tweens::motion::CircularMotion FlxTween_obj::circularMotion( ::flixel::FlxObject Object,Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_PUSH("FlxTween::circularMotion","flixel/tweens/FlxTween.hx",354);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(CenterX,"CenterX");
	HX_STACK_ARG(CenterY,"CenterY");
	HX_STACK_ARG(Radius,"Radius");
	HX_STACK_ARG(Angle,"Angle");
	HX_STACK_ARG(Clockwise,"Clockwise");
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed");
	HX_STACK_ARG(UseDuration,"UseDuration");
	HX_STACK_ARG(Options,"Options");
{
		HX_STACK_LINE(355)
		if (((Options == null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",357);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("type") , (int)8,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(356)
			Options = _Function_2_1::Block();
		}
		HX_STACK_LINE(360)
		::flixel::tweens::motion::CircularMotion tween = ::flixel::tweens::motion::CircularMotion_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(361)
		tween->setObject(Object);
		HX_STACK_LINE(362)
		tween->setMotion(CenterX,CenterY,Radius,Angle,Clockwise,DurationOrSpeed,UseDuration,Options->__Field(HX_CSTRING("ease"),true));
		HX_STACK_LINE(363)
		::flixel::tweens::FlxTween_obj::addTween(tween,Options->__Field(HX_CSTRING("delay"),true));
		HX_STACK_LINE(365)
		return tween;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxTween_obj,circularMotion,return )

::flixel::tweens::motion::LinearPath FlxTween_obj::linearPath( ::flixel::FlxObject Object,Array< ::Dynamic > Points,Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_PUSH("FlxTween::linearPath","flixel/tweens/FlxTween.hx",384);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(Points,"Points");
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed");
	HX_STACK_ARG(UseDuration,"UseDuration");
	HX_STACK_ARG(Options,"Options");
{
		HX_STACK_LINE(385)
		if (((Options == null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",387);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("type") , (int)8,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(386)
			Options = _Function_2_1::Block();
		}
		HX_STACK_LINE(390)
		::flixel::tweens::motion::LinearPath tween = ::flixel::tweens::motion::LinearPath_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(392)
		if (((Points != null()))){
			HX_STACK_LINE(394)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(394)
			while(((_g < Points->length))){
				HX_STACK_LINE(394)
				::flixel::util::FlxPoint point = Points->__get(_g).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(394)
				++(_g);
				HX_STACK_LINE(396)
				tween->addPoint(point->x,point->y);
			}
		}
		HX_STACK_LINE(400)
		tween->setObject(Object);
		HX_STACK_LINE(401)
		tween->setMotion(DurationOrSpeed,UseDuration,Options->__Field(HX_CSTRING("ease"),true));
		HX_STACK_LINE(402)
		::flixel::tweens::FlxTween_obj::addTween(tween,Options->__Field(HX_CSTRING("delay"),true));
		HX_STACK_LINE(404)
		return tween;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,linearPath,return )

::flixel::tweens::motion::QuadPath FlxTween_obj::quadPath( ::flixel::FlxObject Object,Array< ::Dynamic > Points,Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Options){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_PUSH("FlxTween::quadPath","flixel/tweens/FlxTween.hx",423);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(Points,"Points");
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed");
	HX_STACK_ARG(UseDuration,"UseDuration");
	HX_STACK_ARG(Options,"Options");
{
		HX_STACK_LINE(424)
		if (((Options == null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_PUSH("*::closure","flixel/tweens/FlxTween.hx",426);
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("type") , (int)8,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(425)
			Options = _Function_2_1::Block();
		}
		HX_STACK_LINE(429)
		::flixel::tweens::motion::QuadPath tween = ::flixel::tweens::motion::QuadPath_obj::__new(Options->__Field(HX_CSTRING("complete"),true),Options->__Field(HX_CSTRING("type"),true));		HX_STACK_VAR(tween,"tween");
		HX_STACK_LINE(431)
		if (((Points != null()))){
			HX_STACK_LINE(433)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(433)
			while(((_g < Points->length))){
				HX_STACK_LINE(433)
				::flixel::util::FlxPoint point = Points->__get(_g).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(433)
				++(_g);
				HX_STACK_LINE(435)
				tween->addPoint(point->x,point->y);
			}
		}
		HX_STACK_LINE(439)
		tween->setObject(Object);
		HX_STACK_LINE(440)
		tween->setMotion(DurationOrSpeed,UseDuration,Options->__Field(HX_CSTRING("ease"),true));
		HX_STACK_LINE(441)
		::flixel::tweens::FlxTween_obj::addTween(tween,Options->__Field(HX_CSTRING("delay"),true));
		HX_STACK_LINE(443)
		return tween;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTween_obj,quadPath,return )

Void FlxTween_obj::addTween( ::flixel::tweens::FlxTween Tween,Dynamic Delay){
{
		HX_STACK_PUSH("FlxTween::addTween","flixel/tweens/FlxTween.hx",450);
		HX_STACK_ARG(Tween,"Tween");
		HX_STACK_ARG(Delay,"Delay");
		HX_STACK_LINE(450)
		if (((bool((Delay != null())) || bool((Delay > (int)0))))){
			HX_STACK_LINE(453)
			::flixel::util::FlxTimer t = ::flixel::util::FlxTimer_obj::start(Delay,::flixel::tweens::FlxTween_obj::timerCallback_dyn(),null());		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(454)
			t->userData = Tween;
		}
		else{
			HX_STACK_LINE(457)
			::flixel::tweens::FlxTween_obj::manager->add(Tween,null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxTween_obj,addTween,(void))

Void FlxTween_obj::timerCallback( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_PUSH("FlxTween::timerCallback","flixel/tweens/FlxTween.hx",466);
		HX_STACK_ARG(Timer,"Timer");
		HX_STACK_LINE(466)
		::flixel::tweens::FlxTween_obj::addTween(hx::TCast< flixel::tweens::FlxTween >::cast(Timer->userData),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTween_obj,timerCallback,(void))


FlxTween_obj::FlxTween_obj()
{
}

void FlxTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTween);
	HX_MARK_MEMBER_NAME(_backward,"_backward");
	HX_MARK_MEMBER_NAME(_secondsSinceStart,"_secondsSinceStart");
	HX_MARK_MEMBER_NAME(executions,"executions");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(ease,"ease");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(complete,"complete");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void FlxTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_backward,"_backward");
	HX_VISIT_MEMBER_NAME(_secondsSinceStart,"_secondsSinceStart");
	HX_VISIT_MEMBER_NAME(executions,"executions");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(ease,"ease");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(complete,"complete");
	HX_VISIT_MEMBER_NAME(active,"active");
}

Dynamic FlxTween_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"num") ) { return num_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"ease") ) { return ease; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return angle_dyn(); }
		if (HX_FIELD_EQ(inName,"color") ) { return color_dyn(); }
		if (HX_FIELD_EQ(inName,"fader") ) { return fader_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"percent") ) { return get_percent(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"multiVar") ) { return multiVar_dyn(); }
		if (HX_FIELD_EQ(inName,"quadPath") ) { return quadPath_dyn(); }
		if (HX_FIELD_EQ(inName,"addTween") ) { return addTween_dyn(); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
		if (HX_FIELD_EQ(inName,"complete") ) { return complete; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"singleVar") ) { return singleVar_dyn(); }
		if (HX_FIELD_EQ(inName,"_backward") ) { return _backward; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quadMotion") ) { return quadMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"linearPath") ) { return linearPath_dyn(); }
		if (HX_FIELD_EQ(inName,"executions") ) { return executions; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cubicMotion") ) { return cubicMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"set_percent") ) { return set_percent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_percent") ) { return get_percent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"linearMotion") ) { return linearMotion_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"timerCallback") ) { return timerCallback_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"circularMotion") ) { return circularMotion_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_secondsSinceStart") ) { return _secondsSinceStart; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp) return set_type(inValue);type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ease") ) { ease=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::flixel::plugin::TweenManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percent") ) { return set_percent(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"complete") ) { complete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_backward") ) { _backward=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"executions") ) { executions=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_secondsSinceStart") ) { _secondsSinceStart=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_backward"));
	outFields->push(HX_CSTRING("_secondsSinceStart"));
	outFields->push(HX_CSTRING("executions"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("finished"));
	outFields->push(HX_CSTRING("percent"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("duration"));
	outFields->push(HX_CSTRING("active"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("PERSIST"),
	HX_CSTRING("LOOPING"),
	HX_CSTRING("PINGPONG"),
	HX_CSTRING("ONESHOT"),
	HX_CSTRING("BACKWARD"),
	HX_CSTRING("manager"),
	HX_CSTRING("singleVar"),
	HX_CSTRING("multiVar"),
	HX_CSTRING("num"),
	HX_CSTRING("angle"),
	HX_CSTRING("color"),
	HX_CSTRING("fader"),
	HX_CSTRING("linearMotion"),
	HX_CSTRING("quadMotion"),
	HX_CSTRING("cubicMotion"),
	HX_CSTRING("circularMotion"),
	HX_CSTRING("linearPath"),
	HX_CSTRING("quadPath"),
	HX_CSTRING("addTween"),
	HX_CSTRING("timerCallback"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_type"),
	HX_CSTRING("set_percent"),
	HX_CSTRING("get_percent"),
	HX_CSTRING("finish"),
	HX_CSTRING("cancel"),
	HX_CSTRING("start"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_backward"),
	HX_CSTRING("_secondsSinceStart"),
	HX_CSTRING("executions"),
	HX_CSTRING("scale"),
	HX_CSTRING("finished"),
	HX_CSTRING("type"),
	HX_CSTRING("userData"),
	HX_CSTRING("ease"),
	HX_CSTRING("duration"),
	HX_CSTRING("complete"),
	HX_CSTRING("active"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTween_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTween_obj::PERSIST,"PERSIST");
	HX_MARK_MEMBER_NAME(FlxTween_obj::LOOPING,"LOOPING");
	HX_MARK_MEMBER_NAME(FlxTween_obj::PINGPONG,"PINGPONG");
	HX_MARK_MEMBER_NAME(FlxTween_obj::ONESHOT,"ONESHOT");
	HX_MARK_MEMBER_NAME(FlxTween_obj::BACKWARD,"BACKWARD");
	HX_MARK_MEMBER_NAME(FlxTween_obj::manager,"manager");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTween_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::PERSIST,"PERSIST");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::LOOPING,"LOOPING");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::PINGPONG,"PINGPONG");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::ONESHOT,"ONESHOT");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::BACKWARD,"BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxTween_obj::manager,"manager");
};

Class FlxTween_obj::__mClass;

void FlxTween_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.FlxTween"), hx::TCanCast< FlxTween_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTween_obj::__boot()
{
	PERSIST= (int)1;
	LOOPING= (int)2;
	PINGPONG= (int)4;
	ONESHOT= (int)8;
	BACKWARD= (int)16;
}

} // end namespace flixel
} // end namespace tweens
