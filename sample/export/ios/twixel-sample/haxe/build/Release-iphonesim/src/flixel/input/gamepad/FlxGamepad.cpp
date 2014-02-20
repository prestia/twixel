#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

Void FlxGamepad_obj::__construct(int ID,hx::Null< Float >  __o_GlobalDeadZone)
{
HX_STACK_PUSH("FlxGamepad::new","flixel/input/gamepad/FlxGamepad.hx",6);
Float GlobalDeadZone = __o_GlobalDeadZone.Default(0);
{
	HX_STACK_LINE(32)
	this->dpadRight = false;
	HX_STACK_LINE(31)
	this->dpadLeft = false;
	HX_STACK_LINE(30)
	this->dpadDown = false;
	HX_STACK_LINE(29)
	this->dpadUp = false;
	HX_STACK_LINE(21)
	this->deadZone = 0.15;
	HX_STACK_LINE(42)
	this->buttons = ::haxe::ds::IntMap_obj::__new();
	struct _Function_1_1{
		inline static Array< Float > Block( ){
			HX_STACK_PUSH("*::closure","flixel/input/gamepad/FlxGamepad.hx",43);
			{
				HX_STACK_LINE(43)
				Array< Float > _g = Array_obj< Float >::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(43)
				{
					HX_STACK_LINE(43)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(43)
					while(((_g1 < (int)6))){
						HX_STACK_LINE(43)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(43)
						_g->push((int)0);
					}
				}
				HX_STACK_LINE(43)
				return _g;
			}
			return null();
		}
	};
	HX_STACK_LINE(43)
	this->axis = _Function_1_1::Block();
	HX_STACK_LINE(44)
	this->ball = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(45)
	this->hat = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(46)
	this->id = ID;
	HX_STACK_LINE(48)
	if (((GlobalDeadZone != (int)0))){
		HX_STACK_LINE(49)
		this->deadZone = GlobalDeadZone;
	}
}
;
	return null();
}

FlxGamepad_obj::~FlxGamepad_obj() { }

Dynamic FlxGamepad_obj::__CreateEmpty() { return  new FlxGamepad_obj; }
hx::ObjectPtr< FlxGamepad_obj > FlxGamepad_obj::__new(int ID,hx::Null< Float >  __o_GlobalDeadZone)
{  hx::ObjectPtr< FlxGamepad_obj > result = new FlxGamepad_obj();
	result->__construct(ID,__o_GlobalDeadZone);
	return result;}

Dynamic FlxGamepad_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepad_obj > result = new FlxGamepad_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *FlxGamepad_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

bool FlxGamepad_obj::get_dpadRight( ){
	HX_STACK_PUSH("FlxGamepad::get_dpadRight","flixel/input/gamepad/FlxGamepad.hx",309);
	HX_STACK_THIS(this);
	HX_STACK_LINE(309)
	return (this->hat->x > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,get_dpadRight,return )

bool FlxGamepad_obj::get_dpadLeft( ){
	HX_STACK_PUSH("FlxGamepad::get_dpadLeft","flixel/input/gamepad/FlxGamepad.hx",308);
	HX_STACK_THIS(this);
	HX_STACK_LINE(308)
	return (this->hat->x < (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,get_dpadLeft,return )

bool FlxGamepad_obj::get_dpadDown( ){
	HX_STACK_PUSH("FlxGamepad::get_dpadDown","flixel/input/gamepad/FlxGamepad.hx",307);
	HX_STACK_THIS(this);
	HX_STACK_LINE(307)
	return (this->hat->y > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,get_dpadDown,return )

bool FlxGamepad_obj::get_dpadUp( ){
	HX_STACK_PUSH("FlxGamepad::get_dpadUp","flixel/input/gamepad/FlxGamepad.hx",306);
	HX_STACK_THIS(this);
	HX_STACK_LINE(306)
	return (this->hat->y < (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,get_dpadUp,return )

bool FlxGamepad_obj::anyInput( ){
	HX_STACK_PUSH("FlxGamepad::anyInput","flixel/input/gamepad/FlxGamepad.hx",276);
	HX_STACK_THIS(this);
	HX_STACK_LINE(277)
	if ((this->anyButton())){
		HX_STACK_LINE(278)
		return true;
	}
	HX_STACK_LINE(280)
	int numAxis = this->axis->length;		HX_STACK_VAR(numAxis,"numAxis");
	HX_STACK_LINE(282)
	{
		HX_STACK_LINE(282)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(282)
		while(((_g < numAxis))){
			HX_STACK_LINE(282)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(284)
			if (((this->axis->__get((int)0) != (int)0))){
				HX_STACK_LINE(285)
				return true;
			}
		}
	}
	HX_STACK_LINE(290)
	if (((bool((this->ball->x != (int)0)) || bool((this->ball->y != (int)0))))){
		HX_STACK_LINE(291)
		return true;
	}
	HX_STACK_LINE(295)
	if (((bool((this->hat->x != (int)0)) || bool((this->hat->y != (int)0))))){
		HX_STACK_LINE(296)
		return true;
	}
	HX_STACK_LINE(300)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,anyInput,return )

bool FlxGamepad_obj::anyButton( ){
	HX_STACK_PUSH("FlxGamepad::anyButton","flixel/input/gamepad/FlxGamepad.hx",260);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static Dynamic Block( ::flixel::input::gamepad::FlxGamepad_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/input/gamepad/FlxGamepad.hx",261);
			{
				HX_STACK_LINE(261)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->buttons);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","flixel/input/gamepad/FlxGamepad.hx",261);
					{
						HX_STACK_LINE(261)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(261)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(261)
	for(::cpp::FastIterator_obj< ::flixel::input::gamepad::FlxGamepadButton > *__it = ::cpp::CreateFastIterator< ::flixel::input::gamepad::FlxGamepadButton >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::flixel::input::gamepad::FlxGamepadButton button = __it->next();
		if (((button->current > (int)0))){
			HX_STACK_LINE(264)
			return true;
		}
;
	}
	HX_STACK_LINE(269)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,anyButton,return )

Float FlxGamepad_obj::getAxis( int AxisID){
	HX_STACK_PUSH("FlxGamepad::getAxis","flixel/input/gamepad/FlxGamepad.hx",235);
	HX_STACK_THIS(this);
	HX_STACK_ARG(AxisID,"AxisID");
	HX_STACK_LINE(236)
	if (((bool((AxisID < (int)0)) || bool((AxisID >= this->axis->length))))){
		HX_STACK_LINE(237)
		return (int)0;
	}
	HX_STACK_LINE(242)
	if (((::Math_obj::abs(this->axis->__get(AxisID)) > this->deadZone))){
		HX_STACK_LINE(243)
		return this->axis->__get(AxisID);
	}
	HX_STACK_LINE(253)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAxis,return )

int FlxGamepad_obj::firstJustReleasedButtonID( ){
	HX_STACK_PUSH("FlxGamepad::firstJustReleasedButtonID","flixel/input/gamepad/FlxGamepad.hx",222);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static Dynamic Block( ::flixel::input::gamepad::FlxGamepad_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/input/gamepad/FlxGamepad.hx",223);
			{
				HX_STACK_LINE(223)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->buttons);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","flixel/input/gamepad/FlxGamepad.hx",223);
					{
						HX_STACK_LINE(223)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(223)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(223)
	for(::cpp::FastIterator_obj< ::flixel::input::gamepad::FlxGamepadButton > *__it = ::cpp::CreateFastIterator< ::flixel::input::gamepad::FlxGamepadButton >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::flixel::input::gamepad::FlxGamepadButton button = __it->next();
		if (((button->current == (int)-1))){
			HX_STACK_LINE(226)
			return button->id;
		}
;
	}
	HX_STACK_LINE(231)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstJustReleasedButtonID,return )

int FlxGamepad_obj::firstJustPressedButtonID( ){
	HX_STACK_PUSH("FlxGamepad::firstJustPressedButtonID","flixel/input/gamepad/FlxGamepad.hx",205);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static Dynamic Block( ::flixel::input::gamepad::FlxGamepad_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/input/gamepad/FlxGamepad.hx",206);
			{
				HX_STACK_LINE(206)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->buttons);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","flixel/input/gamepad/FlxGamepad.hx",206);
					{
						HX_STACK_LINE(206)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(206)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(206)
	for(::cpp::FastIterator_obj< ::flixel::input::gamepad::FlxGamepadButton > *__it = ::cpp::CreateFastIterator< ::flixel::input::gamepad::FlxGamepadButton >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::flixel::input::gamepad::FlxGamepadButton button = __it->next();
		if (((button->current == (int)2))){
			HX_STACK_LINE(209)
			return button->id;
		}
;
	}
	HX_STACK_LINE(214)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstJustPressedButtonID,return )

int FlxGamepad_obj::firstPressedButtonID( ){
	HX_STACK_PUSH("FlxGamepad::firstPressedButtonID","flixel/input/gamepad/FlxGamepad.hx",188);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static Dynamic Block( ::flixel::input::gamepad::FlxGamepad_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/input/gamepad/FlxGamepad.hx",189);
			{
				HX_STACK_LINE(189)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->buttons);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","flixel/input/gamepad/FlxGamepad.hx",189);
					{
						HX_STACK_LINE(189)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(189)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(189)
	for(::cpp::FastIterator_obj< ::flixel::input::gamepad::FlxGamepadButton > *__it = ::cpp::CreateFastIterator< ::flixel::input::gamepad::FlxGamepadButton >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::flixel::input::gamepad::FlxGamepadButton button = __it->next();
		if (((button->current > (int)0))){
			HX_STACK_LINE(192)
			return button->id;
		}
;
	}
	HX_STACK_LINE(197)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstPressedButtonID,return )

bool FlxGamepad_obj::justReleased( int ButtonID){
	HX_STACK_PUSH("FlxGamepad::justReleased","flixel/input/gamepad/FlxGamepad.hx",174);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ButtonID,"ButtonID");
	HX_STACK_LINE(175)
	if ((this->buttons->exists(ButtonID))){
		HX_STACK_LINE(176)
		return (this->buttons->get(ButtonID)->__Field(HX_CSTRING("current"),true) == (int)-1);
	}
	HX_STACK_LINE(180)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,justReleased,return )

bool FlxGamepad_obj::justPressed( int ButtonID){
	HX_STACK_PUSH("FlxGamepad::justPressed","flixel/input/gamepad/FlxGamepad.hx",158);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ButtonID,"ButtonID");
	HX_STACK_LINE(159)
	if ((this->buttons->exists(ButtonID))){
		HX_STACK_LINE(160)
		return (this->buttons->get(ButtonID)->__Field(HX_CSTRING("current"),true) == (int)2);
	}
	HX_STACK_LINE(164)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,justPressed,return )

bool FlxGamepad_obj::pressed( int ButtonID){
	HX_STACK_PUSH("FlxGamepad::pressed","flixel/input/gamepad/FlxGamepad.hx",137);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ButtonID,"ButtonID");
	HX_STACK_LINE(139)
	if ((this->buttons->exists(ButtonID))){
		HX_STACK_LINE(140)
		return (this->buttons->get(ButtonID)->__Field(HX_CSTRING("current"),true) > (int)0);
	}
	HX_STACK_LINE(148)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,pressed,return )

bool FlxGamepad_obj::checkStatus( int ButtonID,int Status){
	HX_STACK_PUSH("FlxGamepad::checkStatus","flixel/input/gamepad/FlxGamepad.hx",122);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ButtonID,"ButtonID");
	HX_STACK_ARG(Status,"Status");
	HX_STACK_LINE(123)
	if ((this->buttons->exists(ButtonID))){
		HX_STACK_LINE(124)
		return (this->buttons->get(ButtonID)->__Field(HX_CSTRING("current"),true) == Status);
	}
	HX_STACK_LINE(127)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepad_obj,checkStatus,return )

Void FlxGamepad_obj::destroy( ){
{
		HX_STACK_PUSH("FlxGamepad::destroy","flixel/input/gamepad/FlxGamepad.hx",107);
		HX_STACK_THIS(this);
		HX_STACK_LINE(108)
		this->buttons = null();
		HX_STACK_LINE(109)
		this->axis = null();
		HX_STACK_LINE(110)
		this->hat = null();
		HX_STACK_LINE(111)
		this->ball = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,destroy,(void))

Void FlxGamepad_obj::reset( ){
{
		HX_STACK_PUSH("FlxGamepad::reset","flixel/input/gamepad/FlxGamepad.hx",88);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::flixel::input::gamepad::FlxGamepad_obj *__this){
				HX_STACK_PUSH("*::closure","flixel/input/gamepad/FlxGamepad.hx",89);
				{
					HX_STACK_LINE(89)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->buttons);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","flixel/input/gamepad/FlxGamepad.hx",89);
						{
							HX_STACK_LINE(89)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(89)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(89)
		for(::cpp::FastIterator_obj< ::flixel::input::gamepad::FlxGamepadButton > *__it = ::cpp::CreateFastIterator< ::flixel::input::gamepad::FlxGamepadButton >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::flixel::input::gamepad::FlxGamepadButton button = __it->next();
			{
				HX_STACK_LINE(91)
				button->current = (int)0;
				HX_STACK_LINE(92)
				button->last = (int)0;
			}
;
		}
		HX_STACK_LINE(95)
		int numAxis = this->axis->length;		HX_STACK_VAR(numAxis,"numAxis");
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(97)
			while(((_g < numAxis))){
				HX_STACK_LINE(97)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(99)
				this->axis[i] = (int)0;
			}
		}
		HX_STACK_LINE(102)
		this->hat->set(null(),null());
		HX_STACK_LINE(103)
		this->ball->set(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,reset,(void))

Void FlxGamepad_obj::update( ){
{
		HX_STACK_PUSH("FlxGamepad::update","flixel/input/gamepad/FlxGamepad.hx",71);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::flixel::input::gamepad::FlxGamepad_obj *__this){
				HX_STACK_PUSH("*::closure","flixel/input/gamepad/FlxGamepad.hx",72);
				{
					HX_STACK_LINE(72)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->buttons);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","flixel/input/gamepad/FlxGamepad.hx",72);
						{
							HX_STACK_LINE(72)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(72)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(71)
		for(::cpp::FastIterator_obj< ::flixel::input::gamepad::FlxGamepadButton > *__it = ::cpp::CreateFastIterator< ::flixel::input::gamepad::FlxGamepadButton >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::flixel::input::gamepad::FlxGamepadButton button = __it->next();
			{
				HX_STACK_LINE(74)
				if (((bool((button->last == (int)-1)) && bool((button->current == (int)-1))))){
					HX_STACK_LINE(75)
					button->current = (int)0;
				}
				else{
					HX_STACK_LINE(78)
					if (((bool((button->last == (int)2)) && bool((button->current == (int)2))))){
						HX_STACK_LINE(79)
						button->current = (int)1;
					}
				}
				HX_STACK_LINE(83)
				button->last = button->current;
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,update,(void))

::flixel::input::gamepad::FlxGamepadButton FlxGamepad_obj::getButton( int ButtonID){
	HX_STACK_PUSH("FlxGamepad::getButton","flixel/input/gamepad/FlxGamepad.hx",55);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ButtonID,"ButtonID");
	HX_STACK_LINE(56)
	::flixel::input::gamepad::FlxGamepadButton gamepadButton = this->buttons->get(ButtonID);		HX_STACK_VAR(gamepadButton,"gamepadButton");
	HX_STACK_LINE(58)
	if (((gamepadButton == null()))){
		HX_STACK_LINE(60)
		gamepadButton = ::flixel::input::gamepad::FlxGamepadButton_obj::__new(ButtonID,null(),null());
		HX_STACK_LINE(61)
		this->buttons->set(ButtonID,gamepadButton);
	}
	HX_STACK_LINE(64)
	return gamepadButton;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getButton,return )

int FlxGamepad_obj::JUST_RELEASED;

int FlxGamepad_obj::RELEASED;

int FlxGamepad_obj::PRESSED;

int FlxGamepad_obj::JUST_PRESSED;


FlxGamepad_obj::FlxGamepad_obj()
{
}

void FlxGamepad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepad);
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_MEMBER_NAME(dpadRight,"dpadRight");
	HX_MARK_MEMBER_NAME(dpadLeft,"dpadLeft");
	HX_MARK_MEMBER_NAME(dpadDown,"dpadDown");
	HX_MARK_MEMBER_NAME(dpadUp,"dpadUp");
	HX_MARK_MEMBER_NAME(ball,"ball");
	HX_MARK_MEMBER_NAME(hat,"hat");
	HX_MARK_MEMBER_NAME(deadZone,"deadZone");
	HX_MARK_MEMBER_NAME(buttons,"buttons");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void FlxGamepad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(axis,"axis");
	HX_VISIT_MEMBER_NAME(dpadRight,"dpadRight");
	HX_VISIT_MEMBER_NAME(dpadLeft,"dpadLeft");
	HX_VISIT_MEMBER_NAME(dpadDown,"dpadDown");
	HX_VISIT_MEMBER_NAME(dpadUp,"dpadUp");
	HX_VISIT_MEMBER_NAME(ball,"ball");
	HX_VISIT_MEMBER_NAME(hat,"hat");
	HX_VISIT_MEMBER_NAME(deadZone,"deadZone");
	HX_VISIT_MEMBER_NAME(buttons,"buttons");
	HX_VISIT_MEMBER_NAME(id,"id");
}

Dynamic FlxGamepad_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hat") ) { return hat; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { return axis; }
		if (HX_FIELD_EQ(inName,"ball") ) { return ball; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"dpadUp") ) { return inCallProp ? get_dpadUp() : dpadUp; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getAxis") ) { return getAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"buttons") ) { return buttons; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"anyInput") ) { return anyInput_dyn(); }
		if (HX_FIELD_EQ(inName,"dpadLeft") ) { return inCallProp ? get_dpadLeft() : dpadLeft; }
		if (HX_FIELD_EQ(inName,"dpadDown") ) { return inCallProp ? get_dpadDown() : dpadDown; }
		if (HX_FIELD_EQ(inName,"deadZone") ) { return deadZone; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"anyButton") ) { return anyButton_dyn(); }
		if (HX_FIELD_EQ(inName,"getButton") ) { return getButton_dyn(); }
		if (HX_FIELD_EQ(inName,"dpadRight") ) { return inCallProp ? get_dpadRight() : dpadRight; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_dpadUp") ) { return get_dpadUp_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"checkStatus") ) { return checkStatus_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_dpadLeft") ) { return get_dpadLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dpadDown") ) { return get_dpadDown_dyn(); }
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_dpadRight") ) { return get_dpadRight_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"firstPressedButtonID") ) { return firstPressedButtonID_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"firstJustPressedButtonID") ) { return firstJustPressedButtonID_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"firstJustReleasedButtonID") ) { return firstJustReleasedButtonID_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepad_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hat") ) { hat=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ball") ) { ball=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"dpadUp") ) { dpadUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { buttons=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dpadLeft") ) { dpadLeft=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dpadDown") ) { dpadDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"deadZone") ) { deadZone=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dpadRight") ) { dpadRight=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("axis"));
	outFields->push(HX_CSTRING("dpadRight"));
	outFields->push(HX_CSTRING("dpadLeft"));
	outFields->push(HX_CSTRING("dpadDown"));
	outFields->push(HX_CSTRING("dpadUp"));
	outFields->push(HX_CSTRING("ball"));
	outFields->push(HX_CSTRING("hat"));
	outFields->push(HX_CSTRING("deadZone"));
	outFields->push(HX_CSTRING("buttons"));
	outFields->push(HX_CSTRING("id"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("JUST_RELEASED"),
	HX_CSTRING("RELEASED"),
	HX_CSTRING("PRESSED"),
	HX_CSTRING("JUST_PRESSED"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_dpadRight"),
	HX_CSTRING("get_dpadLeft"),
	HX_CSTRING("get_dpadDown"),
	HX_CSTRING("get_dpadUp"),
	HX_CSTRING("anyInput"),
	HX_CSTRING("anyButton"),
	HX_CSTRING("getAxis"),
	HX_CSTRING("firstJustReleasedButtonID"),
	HX_CSTRING("firstJustPressedButtonID"),
	HX_CSTRING("firstPressedButtonID"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("justPressed"),
	HX_CSTRING("pressed"),
	HX_CSTRING("checkStatus"),
	HX_CSTRING("destroy"),
	HX_CSTRING("reset"),
	HX_CSTRING("update"),
	HX_CSTRING("getButton"),
	HX_CSTRING("axis"),
	HX_CSTRING("dpadRight"),
	HX_CSTRING("dpadLeft"),
	HX_CSTRING("dpadDown"),
	HX_CSTRING("dpadUp"),
	HX_CSTRING("ball"),
	HX_CSTRING("hat"),
	HX_CSTRING("deadZone"),
	HX_CSTRING("buttons"),
	HX_CSTRING("id"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepad_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxGamepad_obj::JUST_RELEASED,"JUST_RELEASED");
	HX_MARK_MEMBER_NAME(FlxGamepad_obj::RELEASED,"RELEASED");
	HX_MARK_MEMBER_NAME(FlxGamepad_obj::PRESSED,"PRESSED");
	HX_MARK_MEMBER_NAME(FlxGamepad_obj::JUST_PRESSED,"JUST_PRESSED");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepad_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxGamepad_obj::JUST_RELEASED,"JUST_RELEASED");
	HX_VISIT_MEMBER_NAME(FlxGamepad_obj::RELEASED,"RELEASED");
	HX_VISIT_MEMBER_NAME(FlxGamepad_obj::PRESSED,"PRESSED");
	HX_VISIT_MEMBER_NAME(FlxGamepad_obj::JUST_PRESSED,"JUST_PRESSED");
};

Class FlxGamepad_obj::__mClass;

void FlxGamepad_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.gamepad.FlxGamepad"), hx::TCanCast< FlxGamepad_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxGamepad_obj::__boot()
{
	JUST_RELEASED= (int)-1;
	RELEASED= (int)0;
	PRESSED= (int)1;
	JUST_PRESSED= (int)2;
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
