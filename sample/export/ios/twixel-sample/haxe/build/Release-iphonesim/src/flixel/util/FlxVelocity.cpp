#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_util_FlxAngle
#include <flixel/util/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxVelocity
#include <flixel/util/FlxVelocity.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace util{

Void FlxVelocity_obj::__construct()
{
	return null();
}

FlxVelocity_obj::~FlxVelocity_obj() { }

Dynamic FlxVelocity_obj::__CreateEmpty() { return  new FlxVelocity_obj; }
hx::ObjectPtr< FlxVelocity_obj > FlxVelocity_obj::__new()
{  hx::ObjectPtr< FlxVelocity_obj > result = new FlxVelocity_obj();
	result->__construct();
	return result;}

Dynamic FlxVelocity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxVelocity_obj > result = new FlxVelocity_obj();
	result->__construct();
	return result;}

Void FlxVelocity_obj::moveTowardsObject( ::flixel::FlxSprite Source,::flixel::FlxSprite Dest,hx::Null< int >  __o_Speed,hx::Null< int >  __o_MaxTime){
int Speed = __o_Speed.Default(60);
int MaxTime = __o_MaxTime.Default(0);
	HX_STACK_PUSH("FlxVelocity::moveTowardsObject","flixel/util/FlxVelocity.hx",24);
	HX_STACK_ARG(Source,"Source");
	HX_STACK_ARG(Dest,"Dest");
	HX_STACK_ARG(Speed,"Speed");
	HX_STACK_ARG(MaxTime,"MaxTime");
{
		struct _Function_1_1{
			inline static Float Block( ::flixel::FlxSprite &Dest,::flixel::FlxSprite &Source){
				HX_STACK_PUSH("*::closure","flixel/util/FlxVelocity.hx",25);
				{
					HX_STACK_LINE(25)
					bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
					HX_STACK_LINE(25)
					Float dx = ((Dest->x + Dest->origin->x) - ((Source->x + Source->origin->x)));		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(25)
					Float dy = ((Dest->y + Dest->origin->y) - ((Source->y + Source->origin->y)));		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(25)
					return (  ((AsDegrees)) ? Float((::Math_obj::atan2(dy,dx) * ::flixel::util::FlxAngle_obj::TO_DEG)) : Float(::Math_obj::atan2(dy,dx)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(25)
		Float a = _Function_1_1::Block(Dest,Source);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(27)
		if (((MaxTime > (int)0))){
			struct _Function_2_1{
				inline static int Block( ::flixel::FlxSprite &Source,::flixel::FlxSprite &Dest){
					HX_STACK_PUSH("*::closure","flixel/util/FlxVelocity.hx",29);
					{
						HX_STACK_LINE(29)
						Float dx = ((Source->x + Source->origin->x) - ((Dest->x + Dest->origin->x)));		HX_STACK_VAR(dx,"dx");
						HX_STACK_LINE(29)
						Float dy = ((Source->y + Source->origin->y) - ((Dest->y + Dest->origin->y)));		HX_STACK_VAR(dy,"dy");
						HX_STACK_LINE(29)
						return ::Std_obj::_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
					}
					return null();
				}
			};
			HX_STACK_LINE(29)
			int d = _Function_2_1::Block(Source,Dest);		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(32)
			Speed = ::Std_obj::_int((Float(d) / Float(((Float(MaxTime) / Float((int)1000))))));
		}
		HX_STACK_LINE(35)
		Source->velocity->set_x((::Math_obj::cos(a) * Speed));
		HX_STACK_LINE(36)
		Source->velocity->set_y((::Math_obj::sin(a) * Speed));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsObject,(void))

Void FlxVelocity_obj::accelerateTowardsObject( ::flixel::FlxSprite Source,::flixel::FlxSprite Dest,int Speed,int MaxXSpeed,int MaxYSpeed){
{
		HX_STACK_PUSH("FlxVelocity::accelerateTowardsObject","flixel/util/FlxVelocity.hx",51);
		HX_STACK_ARG(Source,"Source");
		HX_STACK_ARG(Dest,"Dest");
		HX_STACK_ARG(Speed,"Speed");
		HX_STACK_ARG(MaxXSpeed,"MaxXSpeed");
		HX_STACK_ARG(MaxYSpeed,"MaxYSpeed");
		struct _Function_1_1{
			inline static Float Block( ::flixel::FlxSprite &Dest,::flixel::FlxSprite &Source){
				HX_STACK_PUSH("*::closure","flixel/util/FlxVelocity.hx",52);
				{
					HX_STACK_LINE(52)
					bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
					HX_STACK_LINE(52)
					Float dx = ((Dest->x + Dest->origin->x) - ((Source->x + Source->origin->x)));		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(52)
					Float dy = ((Dest->y + Dest->origin->y) - ((Source->y + Source->origin->y)));		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(52)
					return (  ((AsDegrees)) ? Float((::Math_obj::atan2(dy,dx) * ::flixel::util::FlxAngle_obj::TO_DEG)) : Float(::Math_obj::atan2(dy,dx)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(52)
		Float a = _Function_1_1::Block(Dest,Source);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(54)
		Source->velocity->set_x((int)0);
		HX_STACK_LINE(55)
		Source->velocity->set_y((int)0);
		HX_STACK_LINE(57)
		Source->acceleration->set_x(::Std_obj::_int((::Math_obj::cos(a) * Speed)));
		HX_STACK_LINE(58)
		Source->acceleration->set_y(::Std_obj::_int((::Math_obj::sin(a) * Speed)));
		HX_STACK_LINE(60)
		Source->maxVelocity->set_x(MaxXSpeed);
		HX_STACK_LINE(61)
		Source->maxVelocity->set_y(MaxYSpeed);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVelocity_obj,accelerateTowardsObject,(void))

Void FlxVelocity_obj::moveTowardsMouse( ::flixel::FlxSprite Source,hx::Null< int >  __o_Speed,hx::Null< int >  __o_MaxTime){
int Speed = __o_Speed.Default(60);
int MaxTime = __o_MaxTime.Default(0);
	HX_STACK_PUSH("FlxVelocity::moveTowardsMouse","flixel/util/FlxVelocity.hx",76);
	HX_STACK_ARG(Source,"Source");
	HX_STACK_ARG(Speed,"Speed");
	HX_STACK_ARG(MaxTime,"MaxTime");
{
		HX_STACK_LINE(77)
		Float a = ::flixel::util::FlxAngle_obj::angleBetweenMouse(Source,null());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(79)
		if (((MaxTime > (int)0))){
			struct _Function_2_1{
				inline static int Block( ::flixel::FlxSprite &Source){
					HX_STACK_PUSH("*::closure","flixel/util/FlxVelocity.hx",81);
					{
						HX_STACK_LINE(81)
						Float dx = ((Source->x + Source->origin->x) - ::flixel::FlxG_obj::mouse->screenX);		HX_STACK_VAR(dx,"dx");
						HX_STACK_LINE(81)
						Float dy = ((Source->y + Source->origin->y) - ::flixel::FlxG_obj::mouse->screenY);		HX_STACK_VAR(dy,"dy");
						HX_STACK_LINE(81)
						return ::Std_obj::_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
					}
					return null();
				}
			};
			HX_STACK_LINE(81)
			int d = _Function_2_1::Block(Source);		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(84)
			Speed = ::Std_obj::_int((Float(d) / Float(((Float(MaxTime) / Float((int)1000))))));
		}
		HX_STACK_LINE(87)
		Source->velocity->set_x((::Math_obj::cos(a) * Speed));
		HX_STACK_LINE(88)
		Source->velocity->set_y((::Math_obj::sin(a) * Speed));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVelocity_obj,moveTowardsMouse,(void))

Void FlxVelocity_obj::moveTowardsTouch( ::flixel::FlxSprite Source,::flixel::input::touch::FlxTouch Touch,hx::Null< int >  __o_Speed,hx::Null< int >  __o_MaxTime){
int Speed = __o_Speed.Default(60);
int MaxTime = __o_MaxTime.Default(0);
	HX_STACK_PUSH("FlxVelocity::moveTowardsTouch","flixel/util/FlxVelocity.hx",104);
	HX_STACK_ARG(Source,"Source");
	HX_STACK_ARG(Touch,"Touch");
	HX_STACK_ARG(Speed,"Speed");
	HX_STACK_ARG(MaxTime,"MaxTime");
{
		struct _Function_1_1{
			inline static Float Block( ::flixel::input::touch::FlxTouch &Touch,::flixel::FlxSprite &Source){
				HX_STACK_PUSH("*::closure","flixel/util/FlxVelocity.hx",105);
				{
					HX_STACK_LINE(105)
					bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
					HX_STACK_LINE(105)
					::flixel::util::FlxPoint p = Source->getScreenXY(null(),null());		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(105)
					Float dx = (Touch->screenX - p->x);		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(105)
					Float dy = (Touch->screenY - p->y);		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(105)
					return (  ((AsDegrees)) ? Float((::Math_obj::atan2(dy,dx) * ::flixel::util::FlxAngle_obj::TO_DEG)) : Float(::Math_obj::atan2(dy,dx)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(105)
		Float a = _Function_1_1::Block(Touch,Source);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(107)
		if (((MaxTime > (int)0))){
			struct _Function_2_1{
				inline static int Block( ::flixel::input::touch::FlxTouch &Touch,::flixel::FlxSprite &Source){
					HX_STACK_PUSH("*::closure","flixel/util/FlxVelocity.hx",109);
					{
						HX_STACK_LINE(109)
						Float dx = ((Source->x + Source->origin->x) - Touch->screenX);		HX_STACK_VAR(dx,"dx");
						HX_STACK_LINE(109)
						Float dy = ((Source->y + Source->origin->y) - Touch->screenY);		HX_STACK_VAR(dy,"dy");
						HX_STACK_LINE(109)
						return ::Std_obj::_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
					}
					return null();
				}
			};
			HX_STACK_LINE(109)
			int d = _Function_2_1::Block(Touch,Source);		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(112)
			Speed = ::Std_obj::_int((Float(d) / Float(((Float(MaxTime) / Float((int)1000))))));
		}
		HX_STACK_LINE(115)
		Source->velocity->set_x((::Math_obj::cos(a) * Speed));
		HX_STACK_LINE(116)
		Source->velocity->set_y((::Math_obj::sin(a) * Speed));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsTouch,(void))

Void FlxVelocity_obj::accelerateTowardsMouse( ::flixel::FlxSprite Source,int Speed,int MaxXSpeed,int MaxYSpeed){
{
		HX_STACK_PUSH("FlxVelocity::accelerateTowardsMouse","flixel/util/FlxVelocity.hx",132);
		HX_STACK_ARG(Source,"Source");
		HX_STACK_ARG(Speed,"Speed");
		HX_STACK_ARG(MaxXSpeed,"MaxXSpeed");
		HX_STACK_ARG(MaxYSpeed,"MaxYSpeed");
		HX_STACK_LINE(133)
		Float a = ::flixel::util::FlxAngle_obj::angleBetweenMouse(Source,null());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(135)
		Source->velocity->set_x((int)0);
		HX_STACK_LINE(136)
		Source->velocity->set_y((int)0);
		HX_STACK_LINE(138)
		Source->acceleration->set_x(::Std_obj::_int((::Math_obj::cos(a) * Speed)));
		HX_STACK_LINE(139)
		Source->acceleration->set_y(::Std_obj::_int((::Math_obj::sin(a) * Speed)));
		HX_STACK_LINE(141)
		Source->maxVelocity->set_x(MaxXSpeed);
		HX_STACK_LINE(142)
		Source->maxVelocity->set_y(MaxYSpeed);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,accelerateTowardsMouse,(void))

Void FlxVelocity_obj::accelerateTowardsTouch( ::flixel::FlxSprite Source,::flixel::input::touch::FlxTouch Touch,int Speed,int MaxXSpeed,int MaxYSpeed){
{
		HX_STACK_PUSH("FlxVelocity::accelerateTowardsTouch","flixel/util/FlxVelocity.hx",159);
		HX_STACK_ARG(Source,"Source");
		HX_STACK_ARG(Touch,"Touch");
		HX_STACK_ARG(Speed,"Speed");
		HX_STACK_ARG(MaxXSpeed,"MaxXSpeed");
		HX_STACK_ARG(MaxYSpeed,"MaxYSpeed");
		struct _Function_1_1{
			inline static Float Block( ::flixel::input::touch::FlxTouch &Touch,::flixel::FlxSprite &Source){
				HX_STACK_PUSH("*::closure","flixel/util/FlxVelocity.hx",160);
				{
					HX_STACK_LINE(160)
					bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
					HX_STACK_LINE(160)
					::flixel::util::FlxPoint p = Source->getScreenXY(null(),null());		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(160)
					Float dx = (Touch->screenX - p->x);		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(160)
					Float dy = (Touch->screenY - p->y);		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(160)
					return (  ((AsDegrees)) ? Float((::Math_obj::atan2(dy,dx) * ::flixel::util::FlxAngle_obj::TO_DEG)) : Float(::Math_obj::atan2(dy,dx)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(160)
		Float a = _Function_1_1::Block(Touch,Source);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(162)
		Source->velocity->set_x((int)0);
		HX_STACK_LINE(163)
		Source->velocity->set_y((int)0);
		HX_STACK_LINE(165)
		Source->acceleration->set_x(::Std_obj::_int((::Math_obj::cos(a) * Speed)));
		HX_STACK_LINE(166)
		Source->acceleration->set_y(::Std_obj::_int((::Math_obj::sin(a) * Speed)));
		HX_STACK_LINE(168)
		Source->maxVelocity->set_x(MaxXSpeed);
		HX_STACK_LINE(169)
		Source->maxVelocity->set_y(MaxYSpeed);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVelocity_obj,accelerateTowardsTouch,(void))

Void FlxVelocity_obj::moveTowardsPoint( ::flixel::FlxSprite Source,::flixel::util::FlxPoint Target,hx::Null< int >  __o_Speed,hx::Null< int >  __o_MaxTime){
int Speed = __o_Speed.Default(60);
int MaxTime = __o_MaxTime.Default(0);
	HX_STACK_PUSH("FlxVelocity::moveTowardsPoint","flixel/util/FlxVelocity.hx",185);
	HX_STACK_ARG(Source,"Source");
	HX_STACK_ARG(Target,"Target");
	HX_STACK_ARG(Speed,"Speed");
	HX_STACK_ARG(MaxTime,"MaxTime");
{
		HX_STACK_LINE(186)
		Float a = ::flixel::util::FlxAngle_obj::angleBetweenPoint(Source,Target,null());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(188)
		if (((MaxTime > (int)0))){
			struct _Function_2_1{
				inline static int Block( ::flixel::util::FlxPoint &Target,::flixel::FlxSprite &Source){
					HX_STACK_PUSH("*::closure","flixel/util/FlxVelocity.hx",190);
					{
						HX_STACK_LINE(190)
						Float dx = ((Source->x + Source->origin->x) - Target->x);		HX_STACK_VAR(dx,"dx");
						HX_STACK_LINE(190)
						Float dy = ((Source->y + Source->origin->y) - Target->y);		HX_STACK_VAR(dy,"dy");
						HX_STACK_LINE(190)
						return ::Std_obj::_int(::Math_obj::sqrt(((dx * dx) + (dy * dy))));
					}
					return null();
				}
			};
			HX_STACK_LINE(190)
			int d = _Function_2_1::Block(Target,Source);		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(193)
			Speed = ::Std_obj::_int((Float(d) / Float(((Float(MaxTime) / Float((int)1000))))));
		}
		HX_STACK_LINE(196)
		Source->velocity->set_x((::Math_obj::cos(a) * Speed));
		HX_STACK_LINE(197)
		Source->velocity->set_y((::Math_obj::sin(a) * Speed));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsPoint,(void))

Void FlxVelocity_obj::accelerateTowardsPoint( ::flixel::FlxSprite Source,::flixel::util::FlxPoint Target,int Speed,int MaxXSpeed,int MaxYSpeed){
{
		HX_STACK_PUSH("FlxVelocity::accelerateTowardsPoint","flixel/util/FlxVelocity.hx",212);
		HX_STACK_ARG(Source,"Source");
		HX_STACK_ARG(Target,"Target");
		HX_STACK_ARG(Speed,"Speed");
		HX_STACK_ARG(MaxXSpeed,"MaxXSpeed");
		HX_STACK_ARG(MaxYSpeed,"MaxYSpeed");
		HX_STACK_LINE(213)
		Float a = ::flixel::util::FlxAngle_obj::angleBetweenPoint(Source,Target,null());		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(215)
		Source->velocity->set_x((int)0);
		HX_STACK_LINE(216)
		Source->velocity->set_y((int)0);
		HX_STACK_LINE(218)
		Source->acceleration->set_x(::Std_obj::_int((::Math_obj::cos(a) * Speed)));
		HX_STACK_LINE(219)
		Source->acceleration->set_y(::Std_obj::_int((::Math_obj::sin(a) * Speed)));
		HX_STACK_LINE(221)
		Source->maxVelocity->set_x(MaxXSpeed);
		HX_STACK_LINE(222)
		Source->maxVelocity->set_y(MaxYSpeed);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVelocity_obj,accelerateTowardsPoint,(void))

::flixel::util::FlxPoint FlxVelocity_obj::velocityFromAngle( int Angle,int Speed){
	HX_STACK_PUSH("FlxVelocity::velocityFromAngle","flixel/util/FlxVelocity.hx",233);
	HX_STACK_ARG(Angle,"Angle");
	HX_STACK_ARG(Speed,"Speed");
	HX_STACK_LINE(234)
	Float a = (Angle * ::flixel::util::FlxAngle_obj::TO_RAD);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(236)
	::flixel::util::FlxPoint result = ::flixel::util::FlxPoint_obj::__new(null(),null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(238)
	result->set_x(::Std_obj::_int((::Math_obj::cos(a) * Speed)));
	HX_STACK_LINE(239)
	result->set_y(::Std_obj::_int((::Math_obj::sin(a) * Speed)));
	HX_STACK_LINE(241)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVelocity_obj,velocityFromAngle,return )

::flixel::util::FlxPoint FlxVelocity_obj::velocityFromFacing( ::flixel::FlxSprite Parent,int Speed){
	HX_STACK_PUSH("FlxVelocity::velocityFromFacing","flixel/util/FlxVelocity.hx",252);
	HX_STACK_ARG(Parent,"Parent");
	HX_STACK_ARG(Speed,"Speed");
	HX_STACK_LINE(253)
	Float a = (int)0;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(255)
	if (((Parent->facing == (int)1))){
		HX_STACK_LINE(256)
		a = ((int)180 * ::flixel::util::FlxAngle_obj::TO_RAD);
	}
	else{
		HX_STACK_LINE(259)
		if (((Parent->facing == (int)16))){
			HX_STACK_LINE(260)
			a = ((int)0 * ::flixel::util::FlxAngle_obj::TO_RAD);
		}
		else{
			HX_STACK_LINE(263)
			if (((Parent->facing == (int)256))){
				HX_STACK_LINE(264)
				a = ((int)-90 * ::flixel::util::FlxAngle_obj::TO_RAD);
			}
			else{
				HX_STACK_LINE(267)
				if (((Parent->facing == (int)4096))){
					HX_STACK_LINE(268)
					a = ((int)90 * ::flixel::util::FlxAngle_obj::TO_RAD);
				}
			}
		}
	}
	HX_STACK_LINE(272)
	::flixel::util::FlxPoint result = ::flixel::util::FlxPoint_obj::__new(null(),null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(274)
	result->set_x(::Std_obj::_int((::Math_obj::cos(a) * Speed)));
	HX_STACK_LINE(275)
	result->set_y(::Std_obj::_int((::Math_obj::sin(a) * Speed)));
	HX_STACK_LINE(277)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVelocity_obj,velocityFromFacing,return )

Float FlxVelocity_obj::computeVelocity( Float Velocity,Float Acceleration,Float Drag,Float Max){
	HX_STACK_PUSH("FlxVelocity::computeVelocity","flixel/util/FlxVelocity.hx",290);
	HX_STACK_ARG(Velocity,"Velocity");
	HX_STACK_ARG(Acceleration,"Acceleration");
	HX_STACK_ARG(Drag,"Drag");
	HX_STACK_ARG(Max,"Max");
	HX_STACK_LINE(291)
	if (((Acceleration != (int)0))){
		HX_STACK_LINE(292)
		hx::AddEq(Velocity,(Acceleration * ::flixel::FlxG_obj::elapsed));
	}
	else{
		HX_STACK_LINE(295)
		if (((Drag != (int)0))){
			HX_STACK_LINE(297)
			Float drag = (Drag * ::flixel::FlxG_obj::elapsed);		HX_STACK_VAR(drag,"drag");
			HX_STACK_LINE(298)
			if ((((Velocity - drag) > (int)0))){
				HX_STACK_LINE(299)
				Velocity = (Velocity - drag);
			}
			else{
				HX_STACK_LINE(302)
				if ((((Velocity + drag) < (int)0))){
					HX_STACK_LINE(303)
					hx::AddEq(Velocity,drag);
				}
				else{
					HX_STACK_LINE(307)
					Velocity = (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(311)
	if (((bool((Velocity != (int)0)) && bool((Max != (int)0))))){
		HX_STACK_LINE(312)
		if (((Velocity > Max))){
			HX_STACK_LINE(314)
			Velocity = Max;
		}
		else{
			HX_STACK_LINE(317)
			if (((Velocity < -(Max)))){
				HX_STACK_LINE(318)
				Velocity = -(Max);
			}
		}
	}
	HX_STACK_LINE(322)
	return Velocity;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,computeVelocity,return )


FlxVelocity_obj::FlxVelocity_obj()
{
}

void FlxVelocity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxVelocity);
	HX_MARK_END_CLASS();
}

void FlxVelocity_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxVelocity_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"computeVelocity") ) { return computeVelocity_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"moveTowardsMouse") ) { return moveTowardsMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTowardsTouch") ) { return moveTowardsTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTowardsPoint") ) { return moveTowardsPoint_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"moveTowardsObject") ) { return moveTowardsObject_dyn(); }
		if (HX_FIELD_EQ(inName,"velocityFromAngle") ) { return velocityFromAngle_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"velocityFromFacing") ) { return velocityFromFacing_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"accelerateTowardsMouse") ) { return accelerateTowardsMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"accelerateTowardsTouch") ) { return accelerateTowardsTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"accelerateTowardsPoint") ) { return accelerateTowardsPoint_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"accelerateTowardsObject") ) { return accelerateTowardsObject_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxVelocity_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxVelocity_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("moveTowardsObject"),
	HX_CSTRING("accelerateTowardsObject"),
	HX_CSTRING("moveTowardsMouse"),
	HX_CSTRING("moveTowardsTouch"),
	HX_CSTRING("accelerateTowardsMouse"),
	HX_CSTRING("accelerateTowardsTouch"),
	HX_CSTRING("moveTowardsPoint"),
	HX_CSTRING("accelerateTowardsPoint"),
	HX_CSTRING("velocityFromAngle"),
	HX_CSTRING("velocityFromFacing"),
	HX_CSTRING("computeVelocity"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxVelocity_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxVelocity_obj::__mClass,"__mClass");
};

Class FlxVelocity_obj::__mClass;

void FlxVelocity_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxVelocity"), hx::TCanCast< FlxVelocity_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxVelocity_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
