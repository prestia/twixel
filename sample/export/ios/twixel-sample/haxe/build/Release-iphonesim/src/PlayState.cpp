#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Twixel
#include <Twixel.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_PUSH("PlayState::new","PlayState.hx",13);
{
	HX_STACK_LINE(13)
	super::__construct(MaxSize);
}
;
	return null();
}

PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayState_obj::onTweet( ){
{
		HX_STACK_PUSH("PlayState::onTweet","PlayState.hx",48);
		HX_STACK_THIS(this);
		HX_STACK_LINE(48)
		::Twixel_obj::tweet(HX_CSTRING("Hello, world!"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,onTweet,(void))

Void PlayState_obj::update( ){
{
		HX_STACK_PUSH("PlayState::update","PlayState.hx",42);
		HX_STACK_THIS(this);
		HX_STACK_LINE(42)
		this->super::update();
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_PUSH("PlayState::destroy","PlayState.hx",34);
		HX_STACK_THIS(this);
		HX_STACK_LINE(34)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::create( ){
{
		HX_STACK_PUSH("PlayState::create","PlayState.hx",22);
		HX_STACK_THIS(this);
		HX_STACK_LINE(23)
		this->_btnTweet = ::flixel::ui::FlxButton_obj::__new(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (int)40),((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (int)24),HX_CSTRING("TWEET!"),this->onTweet_dyn());
		HX_STACK_LINE(24)
		this->add(this->_btnTweet);
		HX_STACK_LINE(26)
		this->super::create();
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(_btnTweet,"_btnTweet");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_btnTweet,"_btnTweet");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onTweet") ) { return onTweet_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_btnTweet") ) { return _btnTweet; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_btnTweet") ) { _btnTweet=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_btnTweet"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onTweet"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("create"),
	HX_CSTRING("_btnTweet"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PlayState_obj::__boot()
{
}

