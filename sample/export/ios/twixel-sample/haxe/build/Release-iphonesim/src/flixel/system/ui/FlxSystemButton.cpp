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
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
namespace flixel{
namespace system{
namespace ui{

Void FlxSystemButton_obj::__construct(::flash::display::BitmapData Icon,Dynamic DownHandler,hx::Null< bool >  __o_ToggleMode)
{
HX_STACK_PUSH("FlxSystemButton::new","flixel/system/ui/FlxSystemButton.hx",13);
bool ToggleMode = __o_ToggleMode.Default(false);
{
	HX_STACK_LINE(36)
	this->toggled = false;
	HX_STACK_LINE(32)
	this->toggleMode = false;
	HX_STACK_LINE(23)
	this->enabled = true;
	HX_STACK_LINE(63)
	super::__construct();
	HX_STACK_LINE(65)
	if (((Icon != null()))){
		HX_STACK_LINE(67)
		this->icon = ::flash::display::Bitmap_obj::__new(Icon,null(),null());
		HX_STACK_LINE(68)
		this->addChild(this->icon);
	}
	HX_STACK_LINE(75)
	this->downHandler = DownHandler;
	HX_STACK_LINE(76)
	this->toggleMode = ToggleMode;
	HX_STACK_LINE(78)
	this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
	HX_STACK_LINE(79)
	this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_OUT,this->onMouseOut_dyn(),null(),null(),null());
	HX_STACK_LINE(80)
	this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_OVER,this->onMouseOver_dyn(),null(),null(),null());
}
;
	return null();
}

FlxSystemButton_obj::~FlxSystemButton_obj() { }

Dynamic FlxSystemButton_obj::__CreateEmpty() { return  new FlxSystemButton_obj; }
hx::ObjectPtr< FlxSystemButton_obj > FlxSystemButton_obj::__new(::flash::display::BitmapData Icon,Dynamic DownHandler,hx::Null< bool >  __o_ToggleMode)
{  hx::ObjectPtr< FlxSystemButton_obj > result = new FlxSystemButton_obj();
	result->__construct(Icon,DownHandler,__o_ToggleMode);
	return result;}

Dynamic FlxSystemButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSystemButton_obj > result = new FlxSystemButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void FlxSystemButton_obj::destroy( ){
{
		HX_STACK_PUSH("FlxSystemButton::destroy","flixel/system/ui/FlxSystemButton.hx",119);
		HX_STACK_THIS(this);
		HX_STACK_LINE(120)
		this->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_OUT,this->onMouseOut_dyn(),null());
		HX_STACK_LINE(121)
		this->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_OVER,this->onMouseOver_dyn(),null());
		HX_STACK_LINE(122)
		this->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null());
		HX_STACK_LINE(123)
		this->icon = null();
		HX_STACK_LINE(124)
		this->downHandler = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSystemButton_obj,destroy,(void))

Void FlxSystemButton_obj::onMouseOut( ::flash::events::MouseEvent E){
{
		HX_STACK_PUSH("FlxSystemButton::onMouseOut","flixel/system/ui/FlxSystemButton.hx",114);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(115)
		::flixel::system::ui::FlxSystemButton _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(115)
		_g->set_alpha((_g->get_alpha() + 0.2));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,onMouseOut,(void))

Void FlxSystemButton_obj::onMouseOver( ::flash::events::MouseEvent E){
{
		HX_STACK_PUSH("FlxSystemButton::onMouseOver","flixel/system/ui/FlxSystemButton.hx",109);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(110)
		::flixel::system::ui::FlxSystemButton _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(110)
		_g->set_alpha((_g->get_alpha() - 0.2));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,onMouseOver,(void))

Void FlxSystemButton_obj::onMouseUp( ::flash::events::MouseEvent E){
{
		HX_STACK_PUSH("FlxSystemButton::onMouseUp","flixel/system/ui/FlxSystemButton.hx",100);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(100)
		if (((bool((this->downHandler_dyn() != null())) && bool(this->enabled)))){
			HX_STACK_LINE(103)
			this->set_toggled(!(this->toggled));
			HX_STACK_LINE(104)
			this->downHandler();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,onMouseUp,(void))

Void FlxSystemButton_obj::changeIcon( ::flash::display::BitmapData Icon){
{
		HX_STACK_PUSH("FlxSystemButton::changeIcon","flixel/system/ui/FlxSystemButton.hx",89);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Icon,"Icon");
		HX_STACK_LINE(90)
		if (((this->icon != null()))){
			HX_STACK_LINE(91)
			this->removeChild(this->icon);
		}
		HX_STACK_LINE(95)
		this->icon = ::flash::display::Bitmap_obj::__new(Icon,null(),null());
		HX_STACK_LINE(96)
		this->addChild(this->icon);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,changeIcon,(void))

bool FlxSystemButton_obj::set_toggled( bool Value){
	HX_STACK_PUSH("FlxSystemButton::set_toggled","flixel/system/ui/FlxSystemButton.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(40)
	if ((this->toggleMode)){
		HX_STACK_LINE(41)
		if ((Value)){
			HX_STACK_LINE(43)
			this->set_alpha(0.3);
		}
		else{
			HX_STACK_LINE(47)
			this->set_alpha((int)1);
		}
	}
	HX_STACK_LINE(51)
	return this->toggled = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,set_toggled,return )


FlxSystemButton_obj::FlxSystemButton_obj()
{
}

void FlxSystemButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSystemButton);
	HX_MARK_MEMBER_NAME(toggled,"toggled");
	HX_MARK_MEMBER_NAME(toggleMode,"toggleMode");
	HX_MARK_MEMBER_NAME(icon,"icon");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(downHandler,"downHandler");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSystemButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(toggled,"toggled");
	HX_VISIT_MEMBER_NAME(toggleMode,"toggleMode");
	HX_VISIT_MEMBER_NAME(icon,"icon");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(downHandler,"downHandler");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSystemButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { return icon; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"toggled") ) { return toggled; }
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return onMouseOut_dyn(); }
		if (HX_FIELD_EQ(inName,"changeIcon") ) { return changeIcon_dyn(); }
		if (HX_FIELD_EQ(inName,"toggleMode") ) { return toggleMode; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return onMouseOver_dyn(); }
		if (HX_FIELD_EQ(inName,"set_toggled") ) { return set_toggled_dyn(); }
		if (HX_FIELD_EQ(inName,"downHandler") ) { return downHandler; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSystemButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { icon=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toggled") ) { if (inCallProp) return set_toggled(inValue);toggled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleMode") ) { toggleMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"downHandler") ) { downHandler=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSystemButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("toggled"));
	outFields->push(HX_CSTRING("toggleMode"));
	outFields->push(HX_CSTRING("icon"));
	outFields->push(HX_CSTRING("enabled"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("onMouseOut"),
	HX_CSTRING("onMouseOver"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("changeIcon"),
	HX_CSTRING("set_toggled"),
	HX_CSTRING("toggled"),
	HX_CSTRING("toggleMode"),
	HX_CSTRING("icon"),
	HX_CSTRING("enabled"),
	HX_CSTRING("downHandler"),
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
