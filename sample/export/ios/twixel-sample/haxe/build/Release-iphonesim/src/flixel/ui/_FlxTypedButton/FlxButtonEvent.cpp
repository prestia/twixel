#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxTypedButton_FlxButtonEvent
#include <flixel/ui/_FlxTypedButton/FlxButtonEvent.h>
#endif
namespace flixel{
namespace ui{
namespace _FlxTypedButton{

Void FlxButtonEvent_obj::__construct(Dynamic Callback,::flixel::system::FlxSound sound)
{
HX_STACK_PUSH("FlxButtonEvent::new","flixel/ui/FlxTypedButton.hx",357);
{
	HX_STACK_LINE(358)
	this->callback = Callback;
	HX_STACK_LINE(361)
	this->sound = sound;
}
;
	return null();
}

FlxButtonEvent_obj::~FlxButtonEvent_obj() { }

Dynamic FlxButtonEvent_obj::__CreateEmpty() { return  new FlxButtonEvent_obj; }
hx::ObjectPtr< FlxButtonEvent_obj > FlxButtonEvent_obj::__new(Dynamic Callback,::flixel::system::FlxSound sound)
{  hx::ObjectPtr< FlxButtonEvent_obj > result = new FlxButtonEvent_obj();
	result->__construct(Callback,sound);
	return result;}

Dynamic FlxButtonEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxButtonEvent_obj > result = new FlxButtonEvent_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *FlxButtonEvent_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void FlxButtonEvent_obj::fire( ){
{
		HX_STACK_PUSH("FlxButtonEvent::fire","flixel/ui/FlxTypedButton.hx",381);
		HX_STACK_THIS(this);
		HX_STACK_LINE(382)
		if (((this->callback_dyn() != null()))){
			HX_STACK_LINE(383)
			this->callback();
		}
		HX_STACK_LINE(388)
		if (((this->sound != null()))){
			HX_STACK_LINE(389)
			this->sound->play(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxButtonEvent_obj,fire,(void))

Void FlxButtonEvent_obj::destroy( ){
{
		HX_STACK_PUSH("FlxButtonEvent::destroy","flixel/ui/FlxTypedButton.hx",369);
		HX_STACK_THIS(this);
		HX_STACK_LINE(370)
		this->callback = null();
		HX_STACK_LINE(373)
		this->sound = ::flixel::FlxG_obj::safeDestroy(this->sound);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxButtonEvent_obj,destroy,(void))


FlxButtonEvent_obj::FlxButtonEvent_obj()
{
}

void FlxButtonEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxButtonEvent);
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_END_CLASS();
}

void FlxButtonEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sound,"sound");
	HX_VISIT_MEMBER_NAME(callback,"callback");
}

Dynamic FlxButtonEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fire") ) { return fire_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { return sound; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return callback; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxButtonEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxButtonEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sound"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("fire"),
	HX_CSTRING("destroy"),
	HX_CSTRING("sound"),
	HX_CSTRING("callback"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxButtonEvent_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxButtonEvent_obj::__mClass,"__mClass");
};

Class FlxButtonEvent_obj::__mClass;

void FlxButtonEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.ui._FlxTypedButton.FlxButtonEvent"), hx::TCanCast< FlxButtonEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxButtonEvent_obj::__boot()
{
}

} // end namespace flixel
} // end namespace ui
} // end namespace _FlxTypedButton
