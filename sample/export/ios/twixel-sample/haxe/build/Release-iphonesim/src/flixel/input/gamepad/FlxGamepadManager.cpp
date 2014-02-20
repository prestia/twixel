#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
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
#ifndef INCLUDED_openfl_events_JoystickEvent
#include <openfl/events/JoystickEvent.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

Void FlxGamepadManager_obj::__construct()
{
HX_STACK_PUSH("FlxGamepadManager::new","flixel/input/gamepad/FlxGamepadManager.hx",301);
{
	HX_STACK_LINE(302)
	this->firstActive = null();
	HX_STACK_LINE(303)
	this->lastActive = null();
	HX_STACK_LINE(304)
	this->_gamepads = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(307)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("axisMove"),this->handleAxisMove_dyn(),null(),null(),null());
	HX_STACK_LINE(308)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("ballMove"),this->handleBallMove_dyn(),null(),null(),null());
	HX_STACK_LINE(309)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("buttonDown"),this->handleButtonDown_dyn(),null(),null(),null());
	HX_STACK_LINE(310)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("buttonUp"),this->handleButtonUp_dyn(),null(),null(),null());
	HX_STACK_LINE(311)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(HX_CSTRING("hatMove"),this->handleHatMove_dyn(),null(),null(),null());
}
;
	return null();
}

FlxGamepadManager_obj::~FlxGamepadManager_obj() { }

Dynamic FlxGamepadManager_obj::__CreateEmpty() { return  new FlxGamepadManager_obj; }
hx::ObjectPtr< FlxGamepadManager_obj > FlxGamepadManager_obj::__new()
{  hx::ObjectPtr< FlxGamepadManager_obj > result = new FlxGamepadManager_obj();
	result->__construct();
	return result;}

Dynamic FlxGamepadManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepadManager_obj > result = new FlxGamepadManager_obj();
	result->__construct();
	return result;}

hx::Object *FlxGamepadManager_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxInput_obj)) return operator ::flixel::interfaces::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

Float FlxGamepadManager_obj::set_globalDeadZone( Float DeadZone){
	HX_STACK_PUSH("FlxGamepadManager::set_globalDeadZone","flixel/input/gamepad/FlxGamepadManager.hx",414);
	HX_STACK_THIS(this);
	HX_STACK_ARG(DeadZone,"DeadZone");
	HX_STACK_LINE(415)
	this->globalDeadZone = DeadZone;
	struct _Function_1_1{
		inline static Dynamic Block( ::flixel::input::gamepad::FlxGamepadManager_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/input/gamepad/FlxGamepadManager.hx",417);
			{
				HX_STACK_LINE(417)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->_gamepads);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","flixel/input/gamepad/FlxGamepadManager.hx",417);
					{
						HX_STACK_LINE(417)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(417)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(417)
	for(::cpp::FastIterator_obj< ::flixel::input::gamepad::FlxGamepad > *__it = ::cpp::CreateFastIterator< ::flixel::input::gamepad::FlxGamepad >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::flixel::input::gamepad::FlxGamepad gamepad = __it->next();
		gamepad->deadZone = DeadZone;
	}
	HX_STACK_LINE(422)
	return this->globalDeadZone;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,set_globalDeadZone,return )

int FlxGamepadManager_obj::get_numActiveGamepads( ){
	HX_STACK_PUSH("FlxGamepadManager::get_numActiveGamepads","flixel/input/gamepad/FlxGamepadManager.hx",396);
	HX_STACK_THIS(this);
	HX_STACK_LINE(397)
	int count = (int)0;		HX_STACK_VAR(count,"count");
	struct _Function_1_1{
		inline static Dynamic Block( ::flixel::input::gamepad::FlxGamepadManager_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/input/gamepad/FlxGamepadManager.hx",399);
			{
				HX_STACK_LINE(399)
				Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->_gamepads);		HX_STACK_VAR(_e,"_e");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
				Dynamic run(){
					HX_STACK_PUSH("*::_Function_2_1","flixel/input/gamepad/FlxGamepadManager.hx",399);
					{
						HX_STACK_LINE(399)
						return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(399)
				return  Dynamic(new _Function_2_1(_e));
			}
			return null();
		}
	};
	HX_STACK_LINE(399)
	for(::cpp::FastIterator_obj< ::flixel::input::gamepad::FlxGamepad > *__it = ::cpp::CreateFastIterator< ::flixel::input::gamepad::FlxGamepad >((_Function_1_1::Block(this))());  __it->hasNext(); ){
		::flixel::input::gamepad::FlxGamepad gamepad = __it->next();
		(count)++;
	}
	HX_STACK_LINE(404)
	return count;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,get_numActiveGamepads,return )

Void FlxGamepadManager_obj::onFocusLost( ){
{
		HX_STACK_PUSH("FlxGamepadManager::onFocusLost","flixel/input/gamepad/FlxGamepadManager.hx",391);
		HX_STACK_THIS(this);
		HX_STACK_LINE(391)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,onFocusLost,(void))

Void FlxGamepadManager_obj::onFocus( ){
{
		HX_STACK_PUSH("FlxGamepadManager::onFocus","flixel/input/gamepad/FlxGamepadManager.hx",388);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,onFocus,(void))

Void FlxGamepadManager_obj::update( ){
{
		HX_STACK_PUSH("FlxGamepadManager::update","flixel/input/gamepad/FlxGamepadManager.hx",381);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::flixel::input::gamepad::FlxGamepadManager_obj *__this){
				HX_STACK_PUSH("*::closure","flixel/input/gamepad/FlxGamepadManager.hx",382);
				{
					HX_STACK_LINE(382)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->_gamepads);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","flixel/input/gamepad/FlxGamepadManager.hx",382);
						{
							HX_STACK_LINE(382)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(382)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(381)
		for(::cpp::FastIterator_obj< ::flixel::input::gamepad::FlxGamepad > *__it = ::cpp::CreateFastIterator< ::flixel::input::gamepad::FlxGamepad >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::flixel::input::gamepad::FlxGamepad gamepad = __it->next();
			gamepad->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,update,(void))

Void FlxGamepadManager_obj::handleHatMove( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGamepadManager::handleHatMove","flixel/input/gamepad/FlxGamepadManager.hx",370);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(371)
		::flixel::input::gamepad::FlxGamepad gamepad = this->getByID(FlashEvent->device);		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(372)
		gamepad->hat->set_x((  (((::Math_obj::abs(FlashEvent->x) < gamepad->deadZone))) ? Float((int)0) : Float(FlashEvent->x) ));
		HX_STACK_LINE(373)
		gamepad->hat->set_y((  (((::Math_obj::abs(FlashEvent->y) < gamepad->deadZone))) ? Float((int)0) : Float(FlashEvent->y) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleHatMove,(void))

Void FlxGamepadManager_obj::handleBallMove( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGamepadManager::handleBallMove","flixel/input/gamepad/FlxGamepadManager.hx",363);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(364)
		::flixel::input::gamepad::FlxGamepad gamepad = this->getByID(FlashEvent->device);		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(365)
		gamepad->ball->set_x((  (((::Math_obj::abs(FlashEvent->x) < gamepad->deadZone))) ? Float((int)0) : Float(FlashEvent->x) ));
		HX_STACK_LINE(366)
		gamepad->ball->set_y((  (((::Math_obj::abs(FlashEvent->y) < gamepad->deadZone))) ? Float((int)0) : Float(FlashEvent->y) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleBallMove,(void))

Void FlxGamepadManager_obj::handleAxisMove( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGamepadManager::handleAxisMove","flixel/input/gamepad/FlxGamepadManager.hx",357);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(358)
		::flixel::input::gamepad::FlxGamepad gamepad = this->getByID(FlashEvent->device);		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(359)
		gamepad->axis = FlashEvent->axis;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleAxisMove,(void))

Void FlxGamepadManager_obj::handleButtonUp( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGamepadManager::handleButtonUp","flixel/input/gamepad/FlxGamepadManager.hx",337);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(338)
		::flixel::input::gamepad::FlxGamepad gamepad = this->getByID(FlashEvent->device);		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(339)
		::flixel::input::gamepad::FlxGamepadButton object = gamepad->getButton(FlashEvent->id);		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(341)
		if (((object == null()))){
			HX_STACK_LINE(342)
			return null();
		}
		HX_STACK_LINE(346)
		if (((object->current > (int)0))){
			HX_STACK_LINE(347)
			object->current = (int)-1;
		}
		else{
			HX_STACK_LINE(351)
			object->current = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleButtonUp,(void))

Void FlxGamepadManager_obj::handleButtonDown( ::openfl::events::JoystickEvent FlashEvent){
{
		HX_STACK_PUSH("FlxGamepadManager::handleButtonDown","flixel/input/gamepad/FlxGamepadManager.hx",317);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(318)
		::flixel::input::gamepad::FlxGamepad gamepad = this->getByID(FlashEvent->device);		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(319)
		::flixel::input::gamepad::FlxGamepadButton o = gamepad->getButton(FlashEvent->id);		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(321)
		if (((o == null()))){
			HX_STACK_LINE(322)
			return null();
		}
		HX_STACK_LINE(326)
		if (((o->current > (int)0))){
			HX_STACK_LINE(327)
			o->current = (int)1;
		}
		else{
			HX_STACK_LINE(331)
			o->current = (int)2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleButtonDown,(void))

Void FlxGamepadManager_obj::reset( ){
{
		HX_STACK_PUSH("FlxGamepadManager::reset","flixel/input/gamepad/FlxGamepadManager.hx",292);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::flixel::input::gamepad::FlxGamepadManager_obj *__this){
				HX_STACK_PUSH("*::closure","flixel/input/gamepad/FlxGamepadManager.hx",293);
				{
					HX_STACK_LINE(293)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->_gamepads);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","flixel/input/gamepad/FlxGamepadManager.hx",293);
						{
							HX_STACK_LINE(293)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(293)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(292)
		for(::cpp::FastIterator_obj< ::flixel::input::gamepad::FlxGamepad > *__it = ::cpp::CreateFastIterator< ::flixel::input::gamepad::FlxGamepad >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::flixel::input::gamepad::FlxGamepad gamepad = __it->next();
			gamepad->reset();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,reset,(void))

Void FlxGamepadManager_obj::destroy( ){
{
		HX_STACK_PUSH("FlxGamepadManager::destroy","flixel/input/gamepad/FlxGamepadManager.hx",276);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static Dynamic Block( ::flixel::input::gamepad::FlxGamepadManager_obj *__this){
				HX_STACK_PUSH("*::closure","flixel/input/gamepad/FlxGamepadManager.hx",277);
				{
					HX_STACK_LINE(277)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->_gamepads);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","flixel/input/gamepad/FlxGamepadManager.hx",277);
						{
							HX_STACK_LINE(277)
							return _e->__get((int)0).StaticCast< ::haxe::ds::IntMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(277)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(277)
		for(::cpp::FastIterator_obj< ::flixel::input::gamepad::FlxGamepad > *__it = ::cpp::CreateFastIterator< ::flixel::input::gamepad::FlxGamepad >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::flixel::input::gamepad::FlxGamepad gamepad = __it->next();
			gamepad->destroy();
		}
		HX_STACK_LINE(282)
		this->firstActive = ::flixel::FlxG_obj::safeDestroy(this->firstActive);
		HX_STACK_LINE(283)
		this->lastActive = ::flixel::FlxG_obj::safeDestroy(this->lastActive);
		HX_STACK_LINE(284)
		this->_gamepads = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(285)
		this->numActiveGamepads = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,destroy,(void))

bool FlxGamepadManager_obj::anyJustReleased( int ButtonID){
	HX_STACK_PUSH("FlxGamepadManager::anyJustReleased","flixel/input/gamepad/FlxGamepadManager.hx",256);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ButtonID,"ButtonID");
	HX_STACK_LINE(257)
	Dynamic it = this->_gamepads->iterator();		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(258)
	::flixel::input::gamepad::FlxGamepad gamepad = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(gamepad,"gamepad");
	HX_STACK_LINE(260)
	while(((gamepad != null()))){
		HX_STACK_LINE(262)
		if ((gamepad->justReleased(ButtonID))){
			HX_STACK_LINE(263)
			return true;
		}
		HX_STACK_LINE(267)
		gamepad = it->__Field(HX_CSTRING("next"),true)();
	}
	HX_STACK_LINE(269)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyJustReleased,return )

bool FlxGamepadManager_obj::anyJustPressed( int ButtonID){
	HX_STACK_PUSH("FlxGamepadManager::anyJustPressed","flixel/input/gamepad/FlxGamepadManager.hx",233);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ButtonID,"ButtonID");
	HX_STACK_LINE(234)
	Dynamic it = this->_gamepads->iterator();		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(235)
	::flixel::input::gamepad::FlxGamepad gamepad = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(gamepad,"gamepad");
	HX_STACK_LINE(237)
	while(((gamepad != null()))){
		HX_STACK_LINE(239)
		if ((gamepad->justPressed(ButtonID))){
			HX_STACK_LINE(240)
			return true;
		}
		HX_STACK_LINE(244)
		gamepad = it->__Field(HX_CSTRING("next"),true)();
	}
	HX_STACK_LINE(246)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyJustPressed,return )

bool FlxGamepadManager_obj::anyPressed( int ButtonID){
	HX_STACK_PUSH("FlxGamepadManager::anyPressed","flixel/input/gamepad/FlxGamepadManager.hx",209);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ButtonID,"ButtonID");
	HX_STACK_LINE(210)
	Dynamic it = this->_gamepads->iterator();		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(211)
	::flixel::input::gamepad::FlxGamepad gamepad = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(gamepad,"gamepad");
	HX_STACK_LINE(213)
	while(((gamepad != null()))){
		HX_STACK_LINE(215)
		if ((gamepad->pressed(ButtonID))){
			HX_STACK_LINE(216)
			return true;
		}
		HX_STACK_LINE(220)
		gamepad = it->__Field(HX_CSTRING("next"),true)();
	}
	HX_STACK_LINE(223)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyPressed,return )

bool FlxGamepadManager_obj::anyInput( ){
	HX_STACK_PUSH("FlxGamepadManager::anyInput","flixel/input/gamepad/FlxGamepadManager.hx",185);
	HX_STACK_THIS(this);
	HX_STACK_LINE(186)
	Dynamic it = this->_gamepads->iterator();		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(187)
	::flixel::input::gamepad::FlxGamepad gamepad = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(gamepad,"gamepad");
	HX_STACK_LINE(189)
	while(((gamepad != null()))){
		HX_STACK_LINE(191)
		if ((gamepad->anyInput())){
			HX_STACK_LINE(192)
			return true;
		}
		HX_STACK_LINE(196)
		gamepad = it->__Field(HX_CSTRING("next"),true)();
	}
	HX_STACK_LINE(199)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,anyInput,return )

bool FlxGamepadManager_obj::anyButton( ){
	HX_STACK_PUSH("FlxGamepadManager::anyButton","flixel/input/gamepad/FlxGamepadManager.hx",164);
	HX_STACK_THIS(this);
	HX_STACK_LINE(165)
	Dynamic it = this->_gamepads->iterator();		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(166)
	::flixel::input::gamepad::FlxGamepad gamepad = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(gamepad,"gamepad");
	HX_STACK_LINE(168)
	while(((gamepad != null()))){
		HX_STACK_LINE(170)
		if ((gamepad->anyButton())){
			HX_STACK_LINE(171)
			return true;
		}
		HX_STACK_LINE(175)
		gamepad = it->__Field(HX_CSTRING("next"),true)();
	}
	HX_STACK_LINE(178)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,anyButton,return )

::flixel::input::gamepad::FlxGamepad FlxGamepadManager_obj::getFirstActiveGamepad( ){
	HX_STACK_PUSH("FlxGamepadManager::getFirstActiveGamepad","flixel/input/gamepad/FlxGamepadManager.hx",143);
	HX_STACK_THIS(this);
	HX_STACK_LINE(144)
	Dynamic it = this->_gamepads->iterator();		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(145)
	::flixel::input::gamepad::FlxGamepad gamepad = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(gamepad,"gamepad");
	HX_STACK_LINE(147)
	while(((gamepad != null()))){
		HX_STACK_LINE(149)
		if ((gamepad->anyInput())){
			HX_STACK_LINE(150)
			return gamepad;
		}
		HX_STACK_LINE(154)
		gamepad = it->__Field(HX_CSTRING("next"),true)();
	}
	HX_STACK_LINE(157)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,getFirstActiveGamepad,return )

int FlxGamepadManager_obj::getFirstActiveGamepadID( ){
	HX_STACK_PUSH("FlxGamepadManager::getFirstActiveGamepadID","flixel/input/gamepad/FlxGamepadManager.hx",121);
	HX_STACK_THIS(this);
	HX_STACK_LINE(122)
	Dynamic it = this->_gamepads->iterator();		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(123)
	::flixel::input::gamepad::FlxGamepad gamepad = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(gamepad,"gamepad");
	HX_STACK_LINE(125)
	while(((gamepad != null()))){
		HX_STACK_LINE(127)
		if ((gamepad->anyInput())){
			HX_STACK_LINE(128)
			return gamepad->id;
		}
		HX_STACK_LINE(132)
		gamepad = it->__Field(HX_CSTRING("next"),true)();
	}
	HX_STACK_LINE(135)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,getFirstActiveGamepadID,return )

Array< ::Dynamic > FlxGamepadManager_obj::getActiveGamepads( Array< ::Dynamic > GamepadArray){
	HX_STACK_PUSH("FlxGamepadManager::getActiveGamepads","flixel/input/gamepad/FlxGamepadManager.hx",94);
	HX_STACK_THIS(this);
	HX_STACK_ARG(GamepadArray,"GamepadArray");
	HX_STACK_LINE(95)
	if (((GamepadArray == null()))){
		HX_STACK_LINE(96)
		GamepadArray = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(100)
	Dynamic it = this->_gamepads->iterator();		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(101)
	::flixel::input::gamepad::FlxGamepad gamepad = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(gamepad,"gamepad");
	HX_STACK_LINE(103)
	while(((gamepad != null()))){
		HX_STACK_LINE(105)
		if ((gamepad->anyInput())){
			HX_STACK_LINE(106)
			GamepadArray->push(gamepad);
		}
		HX_STACK_LINE(110)
		gamepad = it->__Field(HX_CSTRING("next"),true)();
	}
	HX_STACK_LINE(113)
	return GamepadArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getActiveGamepads,return )

Array< int > FlxGamepadManager_obj::getActiveGamepadIDs( Array< int > IDsArray){
	HX_STACK_PUSH("FlxGamepadManager::getActiveGamepadIDs","flixel/input/gamepad/FlxGamepadManager.hx",66);
	HX_STACK_THIS(this);
	HX_STACK_ARG(IDsArray,"IDsArray");
	HX_STACK_LINE(67)
	if (((IDsArray == null()))){
		HX_STACK_LINE(68)
		IDsArray = Array_obj< int >::__new();
	}
	HX_STACK_LINE(72)
	Dynamic it = this->_gamepads->iterator();		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(73)
	::flixel::input::gamepad::FlxGamepad gamepad = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(gamepad,"gamepad");
	HX_STACK_LINE(75)
	while(((gamepad != null()))){
		HX_STACK_LINE(77)
		if ((gamepad->anyInput())){
			HX_STACK_LINE(78)
			IDsArray->push(gamepad->id);
		}
		HX_STACK_LINE(82)
		gamepad = it->__Field(HX_CSTRING("next"),true)();
	}
	HX_STACK_LINE(85)
	return IDsArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getActiveGamepadIDs,return )

::flixel::input::gamepad::FlxGamepad FlxGamepadManager_obj::getByID( int GamepadID){
	HX_STACK_PUSH("FlxGamepadManager::getByID","flixel/input/gamepad/FlxGamepadManager.hx",44);
	HX_STACK_THIS(this);
	HX_STACK_ARG(GamepadID,"GamepadID");
	HX_STACK_LINE(45)
	::flixel::input::gamepad::FlxGamepad gamepad = this->_gamepads->get(GamepadID);		HX_STACK_VAR(gamepad,"gamepad");
	HX_STACK_LINE(47)
	if (((gamepad == null()))){
		HX_STACK_LINE(49)
		gamepad = ::flixel::input::gamepad::FlxGamepad_obj::__new(GamepadID,this->globalDeadZone);
		HX_STACK_LINE(50)
		this->_gamepads->set(GamepadID,gamepad);
		HX_STACK_LINE(52)
		this->lastActive = gamepad;
		HX_STACK_LINE(53)
		if (((this->firstActive == null()))){
			HX_STACK_LINE(54)
			this->firstActive = gamepad;
		}
	}
	HX_STACK_LINE(57)
	return gamepad;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getByID,return )


FlxGamepadManager_obj::FlxGamepadManager_obj()
{
}

void FlxGamepadManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadManager);
	HX_MARK_MEMBER_NAME(_gamepads,"_gamepads");
	HX_MARK_MEMBER_NAME(globalDeadZone,"globalDeadZone");
	HX_MARK_MEMBER_NAME(numActiveGamepads,"numActiveGamepads");
	HX_MARK_MEMBER_NAME(lastActive,"lastActive");
	HX_MARK_MEMBER_NAME(firstActive,"firstActive");
	HX_MARK_END_CLASS();
}

void FlxGamepadManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_gamepads,"_gamepads");
	HX_VISIT_MEMBER_NAME(globalDeadZone,"globalDeadZone");
	HX_VISIT_MEMBER_NAME(numActiveGamepads,"numActiveGamepads");
	HX_VISIT_MEMBER_NAME(lastActive,"lastActive");
	HX_VISIT_MEMBER_NAME(firstActive,"firstActive");
}

Dynamic FlxGamepadManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"getByID") ) { return getByID_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"anyInput") ) { return anyInput_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"anyButton") ) { return anyButton_dyn(); }
		if (HX_FIELD_EQ(inName,"_gamepads") ) { return _gamepads; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"anyPressed") ) { return anyPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"lastActive") ) { return lastActive; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"firstActive") ) { return firstActive; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handleHatMove") ) { return handleHatMove_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"handleBallMove") ) { return handleBallMove_dyn(); }
		if (HX_FIELD_EQ(inName,"handleAxisMove") ) { return handleAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"handleButtonUp") ) { return handleButtonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"anyJustPressed") ) { return anyJustPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"globalDeadZone") ) { return globalDeadZone; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"anyJustReleased") ) { return anyJustReleased_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handleButtonDown") ) { return handleButtonDown_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getActiveGamepads") ) { return getActiveGamepads_dyn(); }
		if (HX_FIELD_EQ(inName,"numActiveGamepads") ) { return inCallProp ? get_numActiveGamepads() : numActiveGamepads; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_globalDeadZone") ) { return set_globalDeadZone_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getActiveGamepadIDs") ) { return getActiveGamepadIDs_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_numActiveGamepads") ) { return get_numActiveGamepads_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstActiveGamepad") ) { return getFirstActiveGamepad_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFirstActiveGamepadID") ) { return getFirstActiveGamepadID_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepadManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_gamepads") ) { _gamepads=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lastActive") ) { lastActive=inValue.Cast< ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstActive") ) { firstActive=inValue.Cast< ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"globalDeadZone") ) { if (inCallProp) return set_globalDeadZone(inValue);globalDeadZone=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numActiveGamepads") ) { numActiveGamepads=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_gamepads"));
	outFields->push(HX_CSTRING("globalDeadZone"));
	outFields->push(HX_CSTRING("numActiveGamepads"));
	outFields->push(HX_CSTRING("lastActive"));
	outFields->push(HX_CSTRING("firstActive"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_globalDeadZone"),
	HX_CSTRING("get_numActiveGamepads"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("update"),
	HX_CSTRING("handleHatMove"),
	HX_CSTRING("handleBallMove"),
	HX_CSTRING("handleAxisMove"),
	HX_CSTRING("handleButtonUp"),
	HX_CSTRING("handleButtonDown"),
	HX_CSTRING("reset"),
	HX_CSTRING("destroy"),
	HX_CSTRING("anyJustReleased"),
	HX_CSTRING("anyJustPressed"),
	HX_CSTRING("anyPressed"),
	HX_CSTRING("anyInput"),
	HX_CSTRING("anyButton"),
	HX_CSTRING("getFirstActiveGamepad"),
	HX_CSTRING("getFirstActiveGamepadID"),
	HX_CSTRING("getActiveGamepads"),
	HX_CSTRING("getActiveGamepadIDs"),
	HX_CSTRING("getByID"),
	HX_CSTRING("_gamepads"),
	HX_CSTRING("globalDeadZone"),
	HX_CSTRING("numActiveGamepads"),
	HX_CSTRING("lastActive"),
	HX_CSTRING("firstActive"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadManager_obj::__mClass,"__mClass");
};

Class FlxGamepadManager_obj::__mClass;

void FlxGamepadManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.gamepad.FlxGamepadManager"), hx::TCanCast< FlxGamepadManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxGamepadManager_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
