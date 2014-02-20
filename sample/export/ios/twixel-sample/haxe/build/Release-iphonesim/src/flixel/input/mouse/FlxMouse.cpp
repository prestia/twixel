#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
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
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
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
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_ui_Mouse
#include <flash/ui/Mouse.h>
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
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_input_mouse__FlxMouse_GraphicCursor
#include <flixel/input/mouse/_FlxMouse/GraphicCursor.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_replay_MouseRecord
#include <flixel/system/replay/MouseRecord.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace input{
namespace mouse{

Void FlxMouse_obj::__construct(::flash::display::Sprite CursorContainer)
{
HX_STACK_PUSH("FlxMouse::new","flixel/input/mouse/FlxMouse.hx",30);
{
	HX_STACK_LINE(129)
	this->_lastWheel = (int)0;
	HX_STACK_LINE(128)
	this->_lastY = (int)0;
	HX_STACK_LINE(127)
	this->_lastX = (int)0;
	HX_STACK_LINE(122)
	this->_visibleWhenFocusLost = true;
	HX_STACK_LINE(121)
	this->_wheelUsed = false;
	HX_STACK_LINE(119)
	this->_cursor = null();
	HX_STACK_LINE(58)
	this->useSystemCursor = false;
	HX_STACK_LINE(54)
	this->visible = false;
	HX_STACK_LINE(44)
	this->screenY = (int)0;
	HX_STACK_LINE(40)
	this->screenX = (int)0;
	HX_STACK_LINE(36)
	this->wheel = (int)0;
	HX_STACK_LINE(391)
	super::__construct(null(),null());
	HX_STACK_LINE(393)
	this->cursorContainer = CursorContainer;
	HX_STACK_LINE(394)
	this->cursorContainer->set_mouseChildren(false);
	HX_STACK_LINE(395)
	this->cursorContainer->set_mouseEnabled(false);
	HX_STACK_LINE(397)
	this->_point = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(398)
	this->_globalScreenPosition = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(400)
	this->_leftButton = ::flixel::input::mouse::FlxMouseButton_obj::__new((int)-1);
	HX_STACK_LINE(402)
	::flash::display::Stage stage = ::flash::Lib_obj::get_current()->get_stage();		HX_STACK_VAR(stage,"stage");
	HX_STACK_LINE(403)
	stage->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->_leftButton->onDown_dyn(),null(),null(),null());
	HX_STACK_LINE(404)
	stage->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->_leftButton->onUp_dyn(),null(),null(),null());
	HX_STACK_LINE(407)
	this->_middleButton = ::flixel::input::mouse::FlxMouseButton_obj::__new((int)-2);
	HX_STACK_LINE(408)
	this->_rightButton = ::flixel::input::mouse::FlxMouseButton_obj::__new((int)-3);
	HX_STACK_LINE(410)
	stage->addEventListener(::flash::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN,this->_middleButton->onDown_dyn(),null(),null(),null());
	HX_STACK_LINE(411)
	stage->addEventListener(::flash::events::MouseEvent_obj::MIDDLE_MOUSE_UP,this->_middleButton->onUp_dyn(),null(),null(),null());
	HX_STACK_LINE(412)
	stage->addEventListener(::flash::events::MouseEvent_obj::RIGHT_MOUSE_DOWN,this->_rightButton->onDown_dyn(),null(),null(),null());
	HX_STACK_LINE(413)
	stage->addEventListener(::flash::events::MouseEvent_obj::RIGHT_MOUSE_UP,this->_rightButton->onUp_dyn(),null(),null(),null());
	HX_STACK_LINE(415)
	stage->addEventListener(::flash::events::Event_obj::MOUSE_LEAVE,this->onMouseLeave_dyn(),null(),null(),null());
	HX_STACK_LINE(418)
	stage->addEventListener(::flash::events::MouseEvent_obj::MOUSE_WHEEL,this->onMouseWheel_dyn(),null(),null(),null());
	HX_STACK_LINE(420)
	::flash::ui::Mouse_obj::hide();
}
;
	return null();
}

FlxMouse_obj::~FlxMouse_obj() { }

Dynamic FlxMouse_obj::__CreateEmpty() { return  new FlxMouse_obj; }
hx::ObjectPtr< FlxMouse_obj > FlxMouse_obj::__new(::flash::display::Sprite CursorContainer)
{  hx::ObjectPtr< FlxMouse_obj > result = new FlxMouse_obj();
	result->__construct(CursorContainer);
	return result;}

Dynamic FlxMouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMouse_obj > result = new FlxMouse_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *FlxMouse_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxInput_obj)) return operator ::flixel::interfaces::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

Void FlxMouse_obj::playback( ::flixel::system::replay::MouseRecord Record){
{
		HX_STACK_PUSH("FlxMouse::playback","flixel/input/mouse/FlxMouse.hx",660);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Record,"Record");
		HX_STACK_LINE(661)
		this->_leftButton->current = Record->button;
		HX_STACK_LINE(662)
		this->wheel = Record->wheel;
		HX_STACK_LINE(663)
		this->_globalScreenPosition->copyFrom(Record);
		HX_STACK_LINE(664)
		this->updateCursor();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,playback,(void))

::flixel::system::replay::MouseRecord FlxMouse_obj::record( ){
	HX_STACK_PUSH("FlxMouse::record","flixel/input/mouse/FlxMouse.hx",647);
	HX_STACK_THIS(this);
	HX_STACK_LINE(648)
	if (((bool((bool((bool((this->_lastX == this->_globalScreenPosition->x)) && bool((this->_lastY == this->_globalScreenPosition->y)))) && bool((this->_leftButton->current == (int)0)))) && bool((this->_lastWheel == this->wheel))))){
		HX_STACK_LINE(650)
		return null();
	}
	HX_STACK_LINE(653)
	this->_lastX = ::Math_obj::floor(this->_globalScreenPosition->x);
	HX_STACK_LINE(654)
	this->_lastY = ::Math_obj::floor(this->_globalScreenPosition->y);
	HX_STACK_LINE(655)
	this->_lastWheel = this->wheel;
	HX_STACK_LINE(656)
	return ::flixel::system::replay::MouseRecord_obj::__new(this->_lastX,this->_lastY,this->_leftButton->current,this->_lastWheel);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,record,return )

bool FlxMouse_obj::set_visible( bool Value){
	HX_STACK_PUSH("FlxMouse::set_visible","flixel/input/mouse/FlxMouse.hx",602);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(603)
	if ((Value)){
		HX_STACK_LINE(604)
		if ((this->useSystemCursor)){
			HX_STACK_LINE(606)
			::flash::ui::Mouse_obj::show();
		}
		else{
			HX_STACK_LINE(611)
			if (((this->_cursor == null()))){
				HX_STACK_LINE(612)
				this->load(null(),null(),null(),null());
			}
			HX_STACK_LINE(616)
			this->cursorContainer->set_visible(true);
			HX_STACK_LINE(617)
			::flash::ui::Mouse_obj::hide();
		}
	}
	else{
		HX_STACK_LINE(630)
		this->cursorContainer->set_visible(false);
		HX_STACK_LINE(631)
		::flash::ui::Mouse_obj::hide();
	}
	HX_STACK_LINE(641)
	return this->visible = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,set_visible,return )

bool FlxMouse_obj::set_useSystemCursor( bool Value){
	HX_STACK_PUSH("FlxMouse::set_useSystemCursor","flixel/input/mouse/FlxMouse.hx",589);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(590)
	if ((Value)){
		HX_STACK_LINE(591)
		this->showSystemCursor();
	}
	else{
		HX_STACK_LINE(595)
		this->hideSystemCursor();
	}
	HX_STACK_LINE(598)
	return this->useSystemCursor = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,set_useSystemCursor,return )

Void FlxMouse_obj::hideSystemCursor( ){
{
		HX_STACK_PUSH("FlxMouse::hideSystemCursor","flixel/input/mouse/FlxMouse.hx",571);
		HX_STACK_THIS(this);
		HX_STACK_LINE(579)
		::flash::ui::Mouse_obj::hide();
		HX_STACK_LINE(581)
		if ((this->visible)){
			HX_STACK_LINE(582)
			this->cursorContainer->set_visible(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,hideSystemCursor,(void))

Void FlxMouse_obj::showSystemCursor( ){
{
		HX_STACK_PUSH("FlxMouse::showSystemCursor","flixel/input/mouse/FlxMouse.hx",558);
		HX_STACK_THIS(this);
		HX_STACK_LINE(562)
		::flash::ui::Mouse_obj::show();
		HX_STACK_LINE(563)
		this->cursorContainer->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,showSystemCursor,(void))

bool FlxMouse_obj::get_justReleasedMiddle( ){
	HX_STACK_PUSH("FlxMouse::get_justReleasedMiddle","flixel/input/mouse/FlxMouse.hx",551);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static bool Block( ::flixel::input::mouse::FlxMouse_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/input/mouse/FlxMouse.hx",551);
			{
				HX_STACK_LINE(551)
				::flixel::input::mouse::FlxMouseButton _this = __this->_middleButton;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(551)
				return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
			}
			return null();
		}
	};
	HX_STACK_LINE(551)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justReleasedMiddle,return )

bool FlxMouse_obj::get_justPressedMiddle( ){
	HX_STACK_PUSH("FlxMouse::get_justPressedMiddle","flixel/input/mouse/FlxMouse.hx",550);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static bool Block( ::flixel::input::mouse::FlxMouse_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/input/mouse/FlxMouse.hx",550);
			{
				HX_STACK_LINE(550)
				::flixel::input::mouse::FlxMouseButton _this = __this->_middleButton;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(550)
				return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
			}
			return null();
		}
	};
	HX_STACK_LINE(550)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justPressedMiddle,return )

bool FlxMouse_obj::get_pressedMiddle( ){
	HX_STACK_PUSH("FlxMouse::get_pressedMiddle","flixel/input/mouse/FlxMouse.hx",549);
	HX_STACK_THIS(this);
	HX_STACK_LINE(549)
	return (this->_middleButton->current > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_pressedMiddle,return )

bool FlxMouse_obj::get_justReleasedRight( ){
	HX_STACK_PUSH("FlxMouse::get_justReleasedRight","flixel/input/mouse/FlxMouse.hx",547);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static bool Block( ::flixel::input::mouse::FlxMouse_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/input/mouse/FlxMouse.hx",547);
			{
				HX_STACK_LINE(547)
				::flixel::input::mouse::FlxMouseButton _this = __this->_rightButton;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(547)
				return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
			}
			return null();
		}
	};
	HX_STACK_LINE(547)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justReleasedRight,return )

bool FlxMouse_obj::get_justPressedRight( ){
	HX_STACK_PUSH("FlxMouse::get_justPressedRight","flixel/input/mouse/FlxMouse.hx",546);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static bool Block( ::flixel::input::mouse::FlxMouse_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/input/mouse/FlxMouse.hx",546);
			{
				HX_STACK_LINE(546)
				::flixel::input::mouse::FlxMouseButton _this = __this->_rightButton;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(546)
				return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
			}
			return null();
		}
	};
	HX_STACK_LINE(546)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justPressedRight,return )

bool FlxMouse_obj::get_pressedRight( ){
	HX_STACK_PUSH("FlxMouse::get_pressedRight","flixel/input/mouse/FlxMouse.hx",545);
	HX_STACK_THIS(this);
	HX_STACK_LINE(545)
	return (this->_rightButton->current > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_pressedRight,return )

bool FlxMouse_obj::get_justReleased( ){
	HX_STACK_PUSH("FlxMouse::get_justReleased","flixel/input/mouse/FlxMouse.hx",542);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static bool Block( ::flixel::input::mouse::FlxMouse_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/input/mouse/FlxMouse.hx",542);
			{
				HX_STACK_LINE(542)
				::flixel::input::mouse::FlxMouseButton _this = __this->_leftButton;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(542)
				return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
			}
			return null();
		}
	};
	HX_STACK_LINE(542)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justReleased,return )

bool FlxMouse_obj::get_justPressed( ){
	HX_STACK_PUSH("FlxMouse::get_justPressed","flixel/input/mouse/FlxMouse.hx",541);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static bool Block( ::flixel::input::mouse::FlxMouse_obj *__this){
			HX_STACK_PUSH("*::closure","flixel/input/mouse/FlxMouse.hx",541);
			{
				HX_STACK_LINE(541)
				::flixel::input::mouse::FlxMouseButton _this = __this->_leftButton;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(541)
				return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
			}
			return null();
		}
	};
	HX_STACK_LINE(541)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_justPressed,return )

bool FlxMouse_obj::get_pressed( ){
	HX_STACK_PUSH("FlxMouse::get_pressed","flixel/input/mouse/FlxMouse.hx",540);
	HX_STACK_THIS(this);
	HX_STACK_LINE(540)
	return (this->_leftButton->current > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,get_pressed,return )

Void FlxMouse_obj::onMouseLeave( ::flash::events::Event E){
{
		HX_STACK_PUSH("FlxMouse::onMouseLeave","flixel/input/mouse/FlxMouse.hx",534);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(535)
		this->_rightButton->onUp(null());
		HX_STACK_LINE(536)
		this->_middleButton->onUp(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,onMouseLeave,(void))

Void FlxMouse_obj::onMouseWheel( ::flash::events::MouseEvent FlashEvent){
{
		HX_STACK_PUSH("FlxMouse::onMouseWheel","flixel/input/mouse/FlxMouse.hx",513);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(522)
		this->_wheelUsed = true;
		HX_STACK_LINE(523)
		this->wheel = FlashEvent->delta;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouse_obj,onMouseWheel,(void))

Void FlxMouse_obj::updateCursor( ){
{
		HX_STACK_PUSH("FlxMouse::updateCursor","flixel/input/mouse/FlxMouse.hx",499);
		HX_STACK_THIS(this);
		HX_STACK_LINE(500)
		this->getScreenPosition(null(),this->_point);
		HX_STACK_LINE(501)
		this->screenX = ::Std_obj::_int(this->_point->x);
		HX_STACK_LINE(502)
		this->screenY = ::Std_obj::_int(this->_point->y);
		HX_STACK_LINE(504)
		this->getWorldPosition(null(),hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,updateCursor,(void))

Void FlxMouse_obj::onGameStart( ){
{
		HX_STACK_PUSH("FlxMouse::onGameStart","flixel/input/mouse/FlxMouse.hx",488);
		HX_STACK_THIS(this);
		HX_STACK_LINE(488)
		this->set_visible(this->visible);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,onGameStart,(void))

Void FlxMouse_obj::onFocusLost( ){
{
		HX_STACK_PUSH("FlxMouse::onFocusLost","flixel/input/mouse/FlxMouse.hx",473);
		HX_STACK_THIS(this);
		HX_STACK_LINE(475)
		this->_visibleWhenFocusLost = this->visible;
		HX_STACK_LINE(477)
		if ((this->visible)){
			HX_STACK_LINE(478)
			this->set_visible(false);
		}
		HX_STACK_LINE(482)
		::flash::ui::Mouse_obj::show();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,onFocusLost,(void))

Void FlxMouse_obj::onFocus( ){
{
		HX_STACK_PUSH("FlxMouse::onFocus","flixel/input/mouse/FlxMouse.hx",459);
		HX_STACK_THIS(this);
		HX_STACK_LINE(460)
		this->reset();
		HX_STACK_LINE(463)
		this->set_useSystemCursor(this->useSystemCursor);
		HX_STACK_LINE(465)
		this->set_visible(this->_visibleWhenFocusLost);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,onFocus,(void))

Void FlxMouse_obj::update( ){
{
		HX_STACK_PUSH("FlxMouse::update","flixel/input/mouse/FlxMouse.hx",428);
		HX_STACK_THIS(this);
		HX_STACK_LINE(429)
		this->_globalScreenPosition->set_x(::Math_obj::floor(::flixel::FlxG_obj::game->get_mouseX()));
		HX_STACK_LINE(430)
		this->_globalScreenPosition->set_y(::Math_obj::floor(::flixel::FlxG_obj::game->get_mouseY()));
		HX_STACK_LINE(433)
		if ((this->visible)){
			HX_STACK_LINE(435)
			this->cursorContainer->set_x(this->_globalScreenPosition->x);
			HX_STACK_LINE(436)
			this->cursorContainer->set_y(this->_globalScreenPosition->y);
		}
		HX_STACK_LINE(438)
		this->updateCursor();
		HX_STACK_LINE(441)
		this->_leftButton->update();
		HX_STACK_LINE(443)
		this->_middleButton->update();
		HX_STACK_LINE(444)
		this->_rightButton->update();
		HX_STACK_LINE(448)
		if ((!(this->_wheelUsed))){
			HX_STACK_LINE(449)
			this->wheel = (int)0;
		}
		HX_STACK_LINE(452)
		this->_wheelUsed = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,update,(void))

Void FlxMouse_obj::reset( ){
{
		HX_STACK_PUSH("FlxMouse::reset","flixel/input/mouse/FlxMouse.hx",376);
		HX_STACK_THIS(this);
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			::flixel::input::mouse::FlxMouseButton _this = this->_leftButton;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(377)
			_this->current = (int)0;
			HX_STACK_LINE(377)
			_this->last = (int)0;
		}
		HX_STACK_LINE(380)
		{
			HX_STACK_LINE(380)
			::flixel::input::mouse::FlxMouseButton _this = this->_middleButton;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(380)
			_this->current = (int)0;
			HX_STACK_LINE(380)
			_this->last = (int)0;
		}
		HX_STACK_LINE(381)
		{
			HX_STACK_LINE(381)
			::flixel::input::mouse::FlxMouseButton _this = this->_rightButton;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(381)
			_this->current = (int)0;
			HX_STACK_LINE(381)
			_this->last = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,reset,(void))

Void FlxMouse_obj::destroy( ){
{
		HX_STACK_PUSH("FlxMouse::destroy","flixel/input/mouse/FlxMouse.hx",349);
		HX_STACK_THIS(this);
		HX_STACK_LINE(350)
		this->cursorContainer = null();
		HX_STACK_LINE(351)
		this->_cursor = null();
		HX_STACK_LINE(352)
		this->_point = null();
		HX_STACK_LINE(353)
		this->_globalScreenPosition = null();
		HX_STACK_LINE(359)
		this->_leftButton = ::flixel::FlxG_obj::safeDestroy(this->_leftButton);
		HX_STACK_LINE(361)
		this->_middleButton = ::flixel::FlxG_obj::safeDestroy(this->_middleButton);
		HX_STACK_LINE(362)
		this->_rightButton = ::flixel::FlxG_obj::safeDestroy(this->_rightButton);
		HX_STACK_LINE(365)
		if (((this->_cursorBitmapData != null()))){
			HX_STACK_LINE(367)
			this->_cursorBitmapData->dispose();
			HX_STACK_LINE(368)
			this->_cursorBitmapData = null();
		}
	}
return null();
}


::flixel::util::FlxPoint FlxMouse_obj::getScreenPosition( ::flixel::FlxCamera Camera,::flixel::util::FlxPoint point){
	HX_STACK_PUSH("FlxMouse::getScreenPosition","flixel/input/mouse/FlxMouse.hx",331);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(332)
	if (((Camera == null()))){
		HX_STACK_LINE(333)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(336)
	if (((point == null()))){
		HX_STACK_LINE(337)
		point = ::flixel::util::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(340)
	point->set_x((Float(((this->_globalScreenPosition->x - Camera->x))) / Float(Camera->zoom)));
	HX_STACK_LINE(341)
	point->set_y((Float(((this->_globalScreenPosition->y - Camera->y))) / Float(Camera->zoom)));
	HX_STACK_LINE(342)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouse_obj,getScreenPosition,return )

::flixel::util::FlxPoint FlxMouse_obj::getWorldPosition( ::flixel::FlxCamera Camera,::flixel::util::FlxPoint point){
	HX_STACK_PUSH("FlxMouse::getWorldPosition","flixel/input/mouse/FlxMouse.hx",308);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(309)
	if (((Camera == null()))){
		HX_STACK_LINE(310)
		Camera = ::flixel::FlxG_obj::camera;
	}
	HX_STACK_LINE(313)
	if (((point == null()))){
		HX_STACK_LINE(314)
		point = ::flixel::util::FlxPoint_obj::__new(null(),null());
	}
	HX_STACK_LINE(317)
	this->getScreenPosition(Camera,this->_point);
	HX_STACK_LINE(318)
	point->set((this->_point->x + Camera->scroll->x),(this->_point->y + Camera->scroll->y));
	HX_STACK_LINE(319)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouse_obj,getWorldPosition,return )

Void FlxMouse_obj::unload( ){
{
		HX_STACK_PUSH("FlxMouse::unload","flixel/input/mouse/FlxMouse.hx",224);
		HX_STACK_THIS(this);
		HX_STACK_LINE(224)
		if (((this->_cursor != null()))){
			HX_STACK_LINE(226)
			if ((this->cursorContainer->get_visible())){
				HX_STACK_LINE(228)
				this->load(null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(233)
				this->cursorContainer->removeChild(this->_cursor);
				HX_STACK_LINE(234)
				this->_cursor = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouse_obj,unload,(void))

Void FlxMouse_obj::load( Dynamic Graphic,hx::Null< Float >  __o_Scale,hx::Null< int >  __o_XOffset,hx::Null< int >  __o_YOffset){
Float Scale = __o_Scale.Default(1);
int XOffset = __o_XOffset.Default(0);
int YOffset = __o_YOffset.Default(0);
	HX_STACK_PUSH("FlxMouse::load","flixel/input/mouse/FlxMouse.hx",153);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Graphic,"Graphic");
	HX_STACK_ARG(Scale,"Scale");
	HX_STACK_ARG(XOffset,"XOffset");
	HX_STACK_ARG(YOffset,"YOffset");
{
		HX_STACK_LINE(155)
		if (((this->_cursor != null()))){
			HX_STACK_LINE(156)
			this->cursorContainer->removeChild(this->_cursor);
		}
		HX_STACK_LINE(161)
		if (((Graphic == null()))){
			HX_STACK_LINE(162)
			Graphic = ::flixel::input::mouse::_FlxMouse::GraphicCursor_obj::__new((int)0,(int)0,null(),null());
		}
		HX_STACK_LINE(166)
		if ((::Std_obj::is(Graphic,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(167)
			this->_cursor = ::Type_obj::createInstance(Graphic,Dynamic( Array_obj<Dynamic>::__new()));
		}
		else{
			HX_STACK_LINE(170)
			if ((::Std_obj::is(Graphic,hx::ClassOf< ::flash::display::BitmapData >()))){
				HX_STACK_LINE(171)
				this->_cursor = ::flash::display::Bitmap_obj::__new(hx::TCast< flash::display::BitmapData >::cast(Graphic),null(),null());
			}
			else{
				HX_STACK_LINE(174)
				if ((::Std_obj::is(Graphic,hx::ClassOf< ::String >()))){
					struct _Function_4_1{
						inline static ::flash::display::BitmapData Block( Dynamic &Graphic){
							HX_STACK_PUSH("*::closure","flixel/input/mouse/FlxMouse.hx",176);
							{
								HX_STACK_LINE(176)
								::String id = Graphic;		HX_STACK_VAR(id,"id");
								HX_STACK_LINE(176)
								return ::openfl::Assets_obj::getBitmapData(id,false);
							}
							return null();
						}
					};
					HX_STACK_LINE(175)
					this->_cursor = ::flash::display::Bitmap_obj::__new(_Function_4_1::Block(Graphic),null(),null());
				}
				else{
					HX_STACK_LINE(179)
					this->_cursor = ::flash::display::Bitmap_obj::__new(::flixel::input::mouse::_FlxMouse::GraphicCursor_obj::__new((int)0,(int)0,null(),null()),null(),null());
				}
			}
		}
		HX_STACK_LINE(183)
		this->_cursor->set_x(XOffset);
		HX_STACK_LINE(184)
		this->_cursor->set_y(YOffset);
		HX_STACK_LINE(185)
		this->_cursor->set_scaleX(Scale);
		HX_STACK_LINE(186)
		this->_cursor->set_scaleY(Scale);
		HX_STACK_LINE(215)
		this->cursorContainer->addChild(this->_cursor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxMouse_obj,load,(void))


FlxMouse_obj::FlxMouse_obj()
{
}

void FlxMouse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMouse);
	HX_MARK_MEMBER_NAME(_globalScreenPosition,"_globalScreenPosition");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_lastWheel,"_lastWheel");
	HX_MARK_MEMBER_NAME(_lastY,"_lastY");
	HX_MARK_MEMBER_NAME(_lastX,"_lastX");
	HX_MARK_MEMBER_NAME(_visibleWhenFocusLost,"_visibleWhenFocusLost");
	HX_MARK_MEMBER_NAME(_wheelUsed,"_wheelUsed");
	HX_MARK_MEMBER_NAME(_cursorBitmapData,"_cursorBitmapData");
	HX_MARK_MEMBER_NAME(_cursor,"_cursor");
	HX_MARK_MEMBER_NAME(_rightButton,"_rightButton");
	HX_MARK_MEMBER_NAME(_middleButton,"_middleButton");
	HX_MARK_MEMBER_NAME(_leftButton,"_leftButton");
	HX_MARK_MEMBER_NAME(useSystemCursor,"useSystemCursor");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(cursorContainer,"cursorContainer");
	HX_MARK_MEMBER_NAME(screenY,"screenY");
	HX_MARK_MEMBER_NAME(screenX,"screenX");
	HX_MARK_MEMBER_NAME(wheel,"wheel");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxMouse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_globalScreenPosition,"_globalScreenPosition");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_lastWheel,"_lastWheel");
	HX_VISIT_MEMBER_NAME(_lastY,"_lastY");
	HX_VISIT_MEMBER_NAME(_lastX,"_lastX");
	HX_VISIT_MEMBER_NAME(_visibleWhenFocusLost,"_visibleWhenFocusLost");
	HX_VISIT_MEMBER_NAME(_wheelUsed,"_wheelUsed");
	HX_VISIT_MEMBER_NAME(_cursorBitmapData,"_cursorBitmapData");
	HX_VISIT_MEMBER_NAME(_cursor,"_cursor");
	HX_VISIT_MEMBER_NAME(_rightButton,"_rightButton");
	HX_VISIT_MEMBER_NAME(_middleButton,"_middleButton");
	HX_VISIT_MEMBER_NAME(_leftButton,"_leftButton");
	HX_VISIT_MEMBER_NAME(useSystemCursor,"useSystemCursor");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(cursorContainer,"cursorContainer");
	HX_VISIT_MEMBER_NAME(screenY,"screenY");
	HX_VISIT_MEMBER_NAME(screenX,"screenX");
	HX_VISIT_MEMBER_NAME(wheel,"wheel");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxMouse_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"wheel") ) { return wheel; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"record") ) { return record_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"_lastY") ) { return _lastY; }
		if (HX_FIELD_EQ(inName,"_lastX") ) { return _lastX; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_cursor") ) { return _cursor; }
		if (HX_FIELD_EQ(inName,"pressed") ) { return get_pressed(); }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"screenY") ) { return screenY; }
		if (HX_FIELD_EQ(inName,"screenX") ) { return screenX; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"playback") ) { return playback_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_lastWheel") ) { return _lastWheel; }
		if (HX_FIELD_EQ(inName,"_wheelUsed") ) { return _wheelUsed; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return get_pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"onGameStart") ) { return onGameStart_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"_leftButton") ) { return _leftButton; }
		if (HX_FIELD_EQ(inName,"justPressed") ) { return get_justPressed(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseLeave") ) { return onMouseLeave_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"updateCursor") ) { return updateCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"_rightButton") ) { return _rightButton; }
		if (HX_FIELD_EQ(inName,"pressedRight") ) { return get_pressedRight(); }
		if (HX_FIELD_EQ(inName,"justReleased") ) { return get_justReleased(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_middleButton") ) { return _middleButton; }
		if (HX_FIELD_EQ(inName,"pressedMiddle") ) { return get_pressedMiddle(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return get_justPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"useSystemCursor") ) { return useSystemCursor; }
		if (HX_FIELD_EQ(inName,"cursorContainer") ) { return cursorContainer; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hideSystemCursor") ) { return hideSystemCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"showSystemCursor") ) { return showSystemCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pressedRight") ) { return get_pressedRight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return get_justReleased_dyn(); }
		if (HX_FIELD_EQ(inName,"getWorldPosition") ) { return getWorldPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"justPressedRight") ) { return get_justPressedRight(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_pressedMiddle") ) { return get_pressedMiddle_dyn(); }
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return getScreenPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"_cursorBitmapData") ) { return _cursorBitmapData; }
		if (HX_FIELD_EQ(inName,"justPressedMiddle") ) { return get_justPressedMiddle(); }
		if (HX_FIELD_EQ(inName,"justReleasedRight") ) { return get_justReleasedRight(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"justReleasedMiddle") ) { return get_justReleasedMiddle(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_useSystemCursor") ) { return set_useSystemCursor_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_justPressedRight") ) { return get_justPressedRight_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_justPressedMiddle") ) { return get_justPressedMiddle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_justReleasedRight") ) { return get_justReleasedRight_dyn(); }
		if (HX_FIELD_EQ(inName,"_globalScreenPosition") ) { return _globalScreenPosition; }
		if (HX_FIELD_EQ(inName,"_visibleWhenFocusLost") ) { return _visibleWhenFocusLost; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_justReleasedMiddle") ) { return get_justReleasedMiddle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMouse_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"wheel") ) { wheel=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastY") ) { _lastY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastX") ) { _lastX=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_cursor") ) { _cursor=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenY") ) { screenY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenX") ) { screenX=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_lastWheel") ) { _lastWheel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_wheelUsed") ) { _wheelUsed=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_leftButton") ) { _leftButton=inValue.Cast< ::flixel::input::mouse::FlxMouseButton >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_rightButton") ) { _rightButton=inValue.Cast< ::flixel::input::mouse::FlxMouseButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_middleButton") ) { _middleButton=inValue.Cast< ::flixel::input::mouse::FlxMouseButton >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"useSystemCursor") ) { if (inCallProp) return set_useSystemCursor(inValue);useSystemCursor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cursorContainer") ) { cursorContainer=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_cursorBitmapData") ) { _cursorBitmapData=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_globalScreenPosition") ) { _globalScreenPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_visibleWhenFocusLost") ) { _visibleWhenFocusLost=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMouse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_globalScreenPosition"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_lastWheel"));
	outFields->push(HX_CSTRING("_lastY"));
	outFields->push(HX_CSTRING("_lastX"));
	outFields->push(HX_CSTRING("_visibleWhenFocusLost"));
	outFields->push(HX_CSTRING("_wheelUsed"));
	outFields->push(HX_CSTRING("_cursorBitmapData"));
	outFields->push(HX_CSTRING("_cursor"));
	outFields->push(HX_CSTRING("_rightButton"));
	outFields->push(HX_CSTRING("_middleButton"));
	outFields->push(HX_CSTRING("_leftButton"));
	outFields->push(HX_CSTRING("justReleasedMiddle"));
	outFields->push(HX_CSTRING("justPressedMiddle"));
	outFields->push(HX_CSTRING("pressedMiddle"));
	outFields->push(HX_CSTRING("justReleasedRight"));
	outFields->push(HX_CSTRING("justPressedRight"));
	outFields->push(HX_CSTRING("pressedRight"));
	outFields->push(HX_CSTRING("justReleased"));
	outFields->push(HX_CSTRING("justPressed"));
	outFields->push(HX_CSTRING("pressed"));
	outFields->push(HX_CSTRING("useSystemCursor"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("cursorContainer"));
	outFields->push(HX_CSTRING("screenY"));
	outFields->push(HX_CSTRING("screenX"));
	outFields->push(HX_CSTRING("wheel"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("playback"),
	HX_CSTRING("record"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("set_useSystemCursor"),
	HX_CSTRING("hideSystemCursor"),
	HX_CSTRING("showSystemCursor"),
	HX_CSTRING("get_justReleasedMiddle"),
	HX_CSTRING("get_justPressedMiddle"),
	HX_CSTRING("get_pressedMiddle"),
	HX_CSTRING("get_justReleasedRight"),
	HX_CSTRING("get_justPressedRight"),
	HX_CSTRING("get_pressedRight"),
	HX_CSTRING("get_justReleased"),
	HX_CSTRING("get_justPressed"),
	HX_CSTRING("get_pressed"),
	HX_CSTRING("onMouseLeave"),
	HX_CSTRING("onMouseWheel"),
	HX_CSTRING("updateCursor"),
	HX_CSTRING("onGameStart"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("update"),
	HX_CSTRING("reset"),
	HX_CSTRING("destroy"),
	HX_CSTRING("getScreenPosition"),
	HX_CSTRING("getWorldPosition"),
	HX_CSTRING("unload"),
	HX_CSTRING("load"),
	HX_CSTRING("_globalScreenPosition"),
	HX_CSTRING("_point"),
	HX_CSTRING("_lastWheel"),
	HX_CSTRING("_lastY"),
	HX_CSTRING("_lastX"),
	HX_CSTRING("_visibleWhenFocusLost"),
	HX_CSTRING("_wheelUsed"),
	HX_CSTRING("_cursorBitmapData"),
	HX_CSTRING("_cursor"),
	HX_CSTRING("_rightButton"),
	HX_CSTRING("_middleButton"),
	HX_CSTRING("_leftButton"),
	HX_CSTRING("useSystemCursor"),
	HX_CSTRING("visible"),
	HX_CSTRING("cursorContainer"),
	HX_CSTRING("screenY"),
	HX_CSTRING("screenX"),
	HX_CSTRING("wheel"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMouse_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMouse_obj::__mClass,"__mClass");
};

Class FlxMouse_obj::__mClass;

void FlxMouse_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.mouse.FlxMouse"), hx::TCanCast< FlxMouse_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxMouse_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
} // end namespace mouse
