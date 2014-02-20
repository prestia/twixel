#include <hxcpp.h>

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
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
namespace flixel{
namespace system{
namespace ui{

Void FlxSystemButton_obj::__construct(::flash::display::BitmapData Icon,Dynamic UpHandler,hx::Null< bool >  __o_ToggleMode)
{
HX_STACK_PUSH("FlxSystemButton::new","flixel/system/ui/FlxSystemButton.hx",14);
bool ToggleMode = __o_ToggleMode.Default(false);
{
	HX_STACK_LINE(42)
	this->_mouseDown = false;
	HX_STACK_LINE(33)
	this->toggled = false;
	HX_STACK_LINE(29)
	this->toggleMode = false;
	HX_STACK_LINE(24)
	this->enabled = true;
	HX_STACK_LINE(53)
	super::__construct();
	HX_STACK_LINE(55)
	if (((Icon != null()))){
		HX_STACK_LINE(57)
		this->_icon = ::flash::display::Bitmap_obj::__new(Icon,null(),null());
		HX_STACK_LINE(58)
		this->addChild(this->_icon);
	}
	HX_STACK_LINE(65)
	this->upHandler = UpHandler;
	HX_STACK_LINE(66)
	this->toggleMode = ToggleMode;
	HX_STACK_LINE(68)
	this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
	HX_STACK_LINE(69)
	this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null(),null(),null());
	HX_STACK_LINE(70)
	this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_OUT,this->onMouseOut_dyn(),null(),null(),null());
	HX_STACK_LINE(71)
	this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_OVER,this->onMouseOver_dyn(),null(),null(),null());
}
;
	return null();
}

FlxSystemButton_obj::~FlxSystemButton_obj() { }

Dynamic FlxSystemButton_obj::__CreateEmpty() { return  new FlxSystemButton_obj; }
hx::ObjectPtr< FlxSystemButton_obj > FlxSystemButton_obj::__new(::flash::display::BitmapData Icon,Dynamic UpHandler,hx::Null< bool >  __o_ToggleMode)
{  hx::ObjectPtr< FlxSystemButton_obj > result = new FlxSystemButton_obj();
	result->__construct(Icon,UpHandler,__o_ToggleMode);
	return result;}

Dynamic FlxSystemButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSystemButton_obj > result = new FlxSystemButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *FlxSystemButton_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

bool FlxSystemButton_obj::set_toggled( bool Value){
	HX_STACK_PUSH("FlxSystemButton::set_toggled","flixel/system/ui/FlxSystemButton.hx",130);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(131)
	if ((this->toggleMode)){
		HX_STACK_LINE(132)
		this->set_alpha((  ((Value)) ? Float(0.3) : Float((int)1) ));
	}
	HX_STACK_LINE(135)
	return this->toggled = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,set_toggled,return )

Void FlxSystemButton_obj::onMouseOut( ::flash::events::MouseEvent E){
{
		HX_STACK_PUSH("FlxSystemButton::onMouseOut","flixel/system/ui/FlxSystemButton.hx",125);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(126)
		::flixel::system::ui::FlxSystemButton _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(126)
		_g->set_alpha((_g->get_alpha() + 0.2));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,onMouseOut,(void))

Void FlxSystemButton_obj::onMouseOver( ::flash::events::MouseEvent E){
{
		HX_STACK_PUSH("FlxSystemButton::onMouseOver","flixel/system/ui/FlxSystemButton.hx",120);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(121)
		::flixel::system::ui::FlxSystemButton _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(121)
		_g->set_alpha((_g->get_alpha() - 0.2));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,onMouseOver,(void))

Void FlxSystemButton_obj::onMouseDown( ::flash::events::MouseEvent E){
{
		HX_STACK_PUSH("FlxSystemButton::onMouseDown","flixel/system/ui/FlxSystemButton.hx",115);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(115)
		this->_mouseDown = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,onMouseDown,(void))

Void FlxSystemButton_obj::onMouseUp( ::flash::events::MouseEvent E){
{
		HX_STACK_PUSH("FlxSystemButton::onMouseUp","flixel/system/ui/FlxSystemButton.hx",101);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(101)
		if (((bool(this->enabled) && bool(this->_mouseDown)))){
			HX_STACK_LINE(104)
			this->set_toggled(!(this->toggled));
			HX_STACK_LINE(105)
			this->_mouseDown = false;
			HX_STACK_LINE(107)
			if (((this->upHandler_dyn() != null()))){
				HX_STACK_LINE(108)
				this->upHandler();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,onMouseUp,(void))

Void FlxSystemButton_obj::destroy( ){
{
		HX_STACK_PUSH("FlxSystemButton::destroy","flixel/system/ui/FlxSystemButton.hx",91);
		HX_STACK_THIS(this);
		HX_STACK_LINE(92)
		this->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null());
		HX_STACK_LINE(93)
		this->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null());
		HX_STACK_LINE(94)
		this->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_OUT,this->onMouseOut_dyn(),null());
		HX_STACK_LINE(95)
		this->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_OVER,this->onMouseOver_dyn(),null());
		HX_STACK_LINE(96)
		this->_icon = null();
		HX_STACK_LINE(97)
		this->upHandler = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSystemButton_obj,destroy,(void))

Void FlxSystemButton_obj::changeIcon( ::flash::display::BitmapData Icon){
{
		HX_STACK_PUSH("FlxSystemButton::changeIcon","flixel/system/ui/FlxSystemButton.hx",80);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Icon,"Icon");
		HX_STACK_LINE(81)
		if (((this->_icon != null()))){
			HX_STACK_LINE(82)
			this->removeChild(this->_icon);
		}
		HX_STACK_LINE(86)
		this->_icon = ::flash::display::Bitmap_obj::__new(Icon,null(),null());
		HX_STACK_LINE(87)
		this->addChild(this->_icon);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,changeIcon,(void))


FlxSystemButton_obj::FlxSystemButton_obj()
{
}

void FlxSystemButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSystemButton);
	HX_MARK_MEMBER_NAME(_mouseDown,"_mouseDown");
	HX_MARK_MEMBER_NAME(_icon,"_icon");
	HX_MARK_MEMBER_NAME(toggled,"toggled");
	HX_MARK_MEMBER_NAME(toggleMode,"toggleMode");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(upHandler,"upHandler");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSystemButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_mouseDown,"_mouseDown");
	HX_VISIT_MEMBER_NAME(_icon,"_icon");
	HX_VISIT_MEMBER_NAME(toggled,"toggled");
	HX_VISIT_MEMBER_NAME(toggleMode,"toggleMode");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(upHandler,"upHandler");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSystemButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { return _icon; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"toggled") ) { return toggled; }
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"upHandler") ) { return upHandler; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return onMouseOut_dyn(); }
		if (HX_FIELD_EQ(inName,"changeIcon") ) { return changeIcon_dyn(); }
		if (HX_FIELD_EQ(inName,"_mouseDown") ) { return _mouseDown; }
		if (HX_FIELD_EQ(inName,"toggleMode") ) { return toggleMode; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_toggled") ) { return set_toggled_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return onMouseOver_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSystemButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { _icon=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toggled") ) { if (inCallProp) return set_toggled(inValue);toggled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"upHandler") ) { upHandler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_mouseDown") ) { _mouseDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toggleMode") ) { toggleMode=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSystemButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_mouseDown"));
	outFields->push(HX_CSTRING("_icon"));
	outFields->push(HX_CSTRING("toggled"));
	outFields->push(HX_CSTRING("toggleMode"));
	outFields->push(HX_CSTRING("enabled"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_toggled"),
	HX_CSTRING("onMouseOut"),
	HX_CSTRING("onMouseOver"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("destroy"),
	HX_CSTRING("changeIcon"),
	HX_CSTRING("_mouseDown"),
	HX_CSTRING("_icon"),
	HX_CSTRING("toggled"),
	HX_CSTRING("toggleMode"),
	HX_CSTRING("enabled"),
	HX_CSTRING("upHandler"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSystemButton_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSystemButton_obj::__mClass,"__mClass");
};

Class FlxSystemButton_obj::__mClass;

void FlxSystemButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.ui.FlxSystemButton"), hx::TCanCast< FlxSystemButton_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxSystemButton_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace ui
