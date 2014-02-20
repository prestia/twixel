#include <hxcpp.h>

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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_debug_ButtonAlignment
#include <flixel/system/debug/ButtonAlignment.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerLayout
#include <flixel/system/debug/DebuggerLayout.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void DebuggerFrontEnd_obj::__construct()
{
HX_STACK_PUSH("DebuggerFrontEnd::new","flixel/system/frontEnds/DebuggerFrontEnd.hx",9);
{
	HX_STACK_LINE(30)
	this->visible = false;
	HX_STACK_LINE(19)
	this->precision = (int)3;
	HX_STACK_LINE(14)
	this->drawDebug = false;
	HX_STACK_LINE(88)
	this->toggleKeys = Array_obj< ::String >::__new().Add(HX_CSTRING("GRAVEACCENT")).Add(HX_CSTRING("BACKSLASH"));
}
;
	return null();
}

DebuggerFrontEnd_obj::~DebuggerFrontEnd_obj() { }

Dynamic DebuggerFrontEnd_obj::__CreateEmpty() { return  new DebuggerFrontEnd_obj; }
hx::ObjectPtr< DebuggerFrontEnd_obj > DebuggerFrontEnd_obj::__new()
{  hx::ObjectPtr< DebuggerFrontEnd_obj > result = new DebuggerFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic DebuggerFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DebuggerFrontEnd_obj > result = new DebuggerFrontEnd_obj();
	result->__construct();
	return result;}

bool DebuggerFrontEnd_obj::set_visible( bool Visible){
	HX_STACK_PUSH("DebuggerFrontEnd::set_visible","flixel/system/frontEnds/DebuggerFrontEnd.hx",95);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Visible,"Visible");
	HX_STACK_LINE(95)
	return this->visible = Visible;
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerFrontEnd_obj,set_visible,return )

Void DebuggerFrontEnd_obj::removeButton( ::flixel::system::ui::FlxSystemButton Button,hx::Null< bool >  __o_UpdateLayout){
bool UpdateLayout = __o_UpdateLayout.Default(true);
	HX_STACK_PUSH("DebuggerFrontEnd::removeButton","flixel/system/frontEnds/DebuggerFrontEnd.hx",80);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Button,"Button");
	HX_STACK_ARG(UpdateLayout,"UpdateLayout");
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerFrontEnd_obj,removeButton,(void))

::flixel::system::ui::FlxSystemButton DebuggerFrontEnd_obj::addButton( ::flixel::system::debug::ButtonAlignment Alignment,::flash::display::BitmapData Icon,Dynamic UpHandler,hx::Null< bool >  __o_ToggleMode,hx::Null< bool >  __o_UpdateLayout){
bool ToggleMode = __o_ToggleMode.Default(false);
bool UpdateLayout = __o_UpdateLayout.Default(true);
	HX_STACK_PUSH("DebuggerFrontEnd::addButton","flixel/system/frontEnds/DebuggerFrontEnd.hx",65);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Alignment,"Alignment");
	HX_STACK_ARG(Icon,"Icon");
	HX_STACK_ARG(UpHandler,"UpHandler");
	HX_STACK_ARG(ToggleMode,"ToggleMode");
	HX_STACK_ARG(UpdateLayout,"UpdateLayout");
{
		HX_STACK_LINE(65)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC5(DebuggerFrontEnd_obj,addButton,return )

Void DebuggerFrontEnd_obj::resetLayout( ){
{
		HX_STACK_PUSH("DebuggerFrontEnd::resetLayout","flixel/system/frontEnds/DebuggerFrontEnd.hx",48);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DebuggerFrontEnd_obj,resetLayout,(void))

Void DebuggerFrontEnd_obj::setLayout( ::flixel::system::debug::DebuggerLayout Layout){
{
		HX_STACK_PUSH("DebuggerFrontEnd::setLayout","flixel/system/frontEnds/DebuggerFrontEnd.hx",38);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Layout,"Layout");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerFrontEnd_obj,setLayout,(void))


DebuggerFrontEnd_obj::DebuggerFrontEnd_obj()
{
}

void DebuggerFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DebuggerFrontEnd);
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(toggleKeys,"toggleKeys");
	HX_MARK_MEMBER_NAME(precision,"precision");
	HX_MARK_MEMBER_NAME(drawDebug,"drawDebug");
	HX_MARK_END_CLASS();
}

void DebuggerFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(toggleKeys,"toggleKeys");
	HX_VISIT_MEMBER_NAME(precision,"precision");
	HX_VISIT_MEMBER_NAME(drawDebug,"drawDebug");
}

Dynamic DebuggerFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addButton") ) { return addButton_dyn(); }
		if (HX_FIELD_EQ(inName,"setLayout") ) { return setLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"precision") ) { return precision; }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return drawDebug; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleKeys") ) { return toggleKeys; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"resetLayout") ) { return resetLayout_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeButton") ) { return removeButton_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DebuggerFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"precision") ) { precision=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { drawDebug=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleKeys") ) { toggleKeys=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DebuggerFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("toggleKeys"));
	outFields->push(HX_CSTRING("precision"));
	outFields->push(HX_CSTRING("drawDebug"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_visible"),
	HX_CSTRING("removeButton"),
	HX_CSTRING("addButton"),
	HX_CSTRING("resetLayout"),
	HX_CSTRING("setLayout"),
	HX_CSTRING("visible"),
	HX_CSTRING("toggleKeys"),
	HX_CSTRING("precision"),
	HX_CSTRING("drawDebug"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DebuggerFrontEnd_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DebuggerFrontEnd_obj::__mClass,"__mClass");
};

Class DebuggerFrontEnd_obj::__mClass;

void DebuggerFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.DebuggerFrontEnd"), hx::TCanCast< DebuggerFrontEnd_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DebuggerFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
