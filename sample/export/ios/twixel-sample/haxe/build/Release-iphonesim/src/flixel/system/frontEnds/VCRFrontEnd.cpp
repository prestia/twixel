#include <hxcpp.h>

#ifndef INCLUDED_flash_ui_Mouse
#include <flash/ui/Mouse.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void VCRFrontEnd_obj::__construct()
{
HX_STACK_PUSH("VCRFrontEnd::new","flixel/system/frontEnds/VCRFrontEnd.hx",15);
{
	HX_STACK_LINE(55)
	this->stepRequested = false;
	HX_STACK_LINE(51)
	this->paused = false;
}
;
	return null();
}

VCRFrontEnd_obj::~VCRFrontEnd_obj() { }

Dynamic VCRFrontEnd_obj::__CreateEmpty() { return  new VCRFrontEnd_obj; }
hx::ObjectPtr< VCRFrontEnd_obj > VCRFrontEnd_obj::__new()
{  hx::ObjectPtr< VCRFrontEnd_obj > result = new VCRFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic VCRFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VCRFrontEnd_obj > result = new VCRFrontEnd_obj();
	result->__construct();
	return result;}

Void VCRFrontEnd_obj::resume( ){
{
		HX_STACK_PUSH("VCRFrontEnd::resume","flixel/system/frontEnds/VCRFrontEnd.hx",81);
		HX_STACK_THIS(this);
		HX_STACK_LINE(81)
		if ((this->paused)){
			HX_STACK_LINE(85)
			if ((!(::flixel::FlxG_obj::mouse->useSystemCursor))){
				HX_STACK_LINE(86)
				::flash::ui::Mouse_obj::hide();
			}
			HX_STACK_LINE(89)
			this->paused = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCRFrontEnd_obj,resume,(void))

Void VCRFrontEnd_obj::pause( ){
{
		HX_STACK_PUSH("VCRFrontEnd::pause","flixel/system/frontEnds/VCRFrontEnd.hx",61);
		HX_STACK_THIS(this);
		HX_STACK_LINE(61)
		if ((!(this->paused))){
			HX_STACK_LINE(65)
			if ((!(::flixel::FlxG_obj::mouse->useSystemCursor))){
				HX_STACK_LINE(66)
				::flash::ui::Mouse_obj::show();
			}
			HX_STACK_LINE(69)
			this->paused = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCRFrontEnd_obj,pause,(void))


VCRFrontEnd_obj::VCRFrontEnd_obj()
{
}

void VCRFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VCRFrontEnd);
	HX_MARK_MEMBER_NAME(stepRequested,"stepRequested");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_END_CLASS();
}

void VCRFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stepRequested,"stepRequested");
	HX_VISIT_MEMBER_NAME(paused,"paused");
}

Dynamic VCRFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stepRequested") ) { return stepRequested; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VCRFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stepRequested") ) { stepRequested=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VCRFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("stepRequested"));
	outFields->push(HX_CSTRING("paused"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("resume"),
	HX_CSTRING("pause"),
	HX_CSTRING("stepRequested"),
	HX_CSTRING("paused"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VCRFrontEnd_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VCRFrontEnd_obj::__mClass,"__mClass");
};

Class VCRFrontEnd_obj::__mClass;

void VCRFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.VCRFrontEnd"), hx::TCanCast< VCRFrontEnd_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void VCRFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
