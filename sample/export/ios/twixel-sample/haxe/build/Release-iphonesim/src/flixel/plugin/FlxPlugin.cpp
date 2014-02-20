#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_plugin_FlxPlugin
#include <flixel/plugin/FlxPlugin.h>
#endif
namespace flixel{
namespace plugin{

Void FlxPlugin_obj::__construct()
{
HX_STACK_PUSH("FlxPlugin::new","flixel/plugin/FlxPlugin.hx",10);
{
	HX_STACK_LINE(10)
	super::__construct();
}
;
	return null();
}

FlxPlugin_obj::~FlxPlugin_obj() { }

Dynamic FlxPlugin_obj::__CreateEmpty() { return  new FlxPlugin_obj; }
hx::ObjectPtr< FlxPlugin_obj > FlxPlugin_obj::__new()
{  hx::ObjectPtr< FlxPlugin_obj > result = new FlxPlugin_obj();
	result->__construct();
	return result;}

Dynamic FlxPlugin_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPlugin_obj > result = new FlxPlugin_obj();
	result->__construct();
	return result;}

Void FlxPlugin_obj::onResize( int Width,int Height){
{
		HX_STACK_PUSH("FlxPlugin::onResize","flixel/plugin/FlxPlugin.hx",23);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Width,"Width");
		HX_STACK_ARG(Height,"Height");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPlugin_obj,onResize,(void))

Void FlxPlugin_obj::onStateSwitch( ){
{
		HX_STACK_PUSH("FlxPlugin::onStateSwitch","flixel/plugin/FlxPlugin.hx",16);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPlugin_obj,onStateSwitch,(void))


FlxPlugin_obj::FlxPlugin_obj()
{
}

void FlxPlugin_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPlugin);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxPlugin_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxPlugin_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { return onStateSwitch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxPlugin_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPlugin_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onResize"),
	HX_CSTRING("onStateSwitch"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPlugin_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPlugin_obj::__mClass,"__mClass");
};

Class FlxPlugin_obj::__mClass;

void FlxPlugin_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.plugin.FlxPlugin"), hx::TCanCast< FlxPlugin_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxPlugin_obj::__boot()
{
}

} // end namespace flixel
} // end namespace plugin
