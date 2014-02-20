#include <hxcpp.h>

#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
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
#ifndef INCLUDED_flixel_system_FlxBGSprite
#include <flixel/system/FlxBGSprite.h>
#endif
namespace flixel{

Void FlxSubState_obj::__construct(hx::Null< int >  __o_BGColor)
{
HX_STACK_PUSH("FlxSubState::new","flixel/FlxSubState.hx",10);
int BGColor = __o_BGColor.Default(0);
{
	HX_STACK_LINE(31)
	this->_initialized = false;
	HX_STACK_LINE(57)
	super::__construct(null());
	HX_STACK_LINE(58)
	this->closeCallback = null();
	HX_STACK_LINE(61)
	this->_bgSprite = ::flixel::system::FlxBGSprite_obj::__new();
	HX_STACK_LINE(63)
	this->set_bgColor(BGColor);
}
;
	return null();
}

FlxSubState_obj::~FlxSubState_obj() { }

Dynamic FlxSubState_obj::__CreateEmpty() { return  new FlxSubState_obj; }
hx::ObjectPtr< FlxSubState_obj > FlxSubState_obj::__new(hx::Null< int >  __o_BGColor)
{  hx::ObjectPtr< FlxSubState_obj > result = new FlxSubState_obj();
	result->__construct(__o_BGColor);
	return result;}

Dynamic FlxSubState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSubState_obj > result = new FlxSubState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void FlxSubState_obj::destroy( ){
{
		HX_STACK_PUSH("FlxSubState::destroy","flixel/FlxSubState.hx",123);
		HX_STACK_THIS(this);
		HX_STACK_LINE(124)
		this->super::destroy();
		HX_STACK_LINE(125)
		this->_initialized = false;
		HX_STACK_LINE(126)
		this->_parentState = null();
		HX_STACK_LINE(127)
		this->closeCallback = null();
	}
return null();
}


Void FlxSubState_obj::close( ){
{
		HX_STACK_PUSH("FlxSubState::close","flixel/FlxSubState.hx",108);
		HX_STACK_THIS(this);
		HX_STACK_LINE(108)
		if (((this->_parentState != null()))){
			HX_STACK_LINE(111)
			::flixel::FlxState _this = this->_parentState;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(111)
			{
				HX_STACK_LINE(111)
				_this->requestedSubState = null();
				HX_STACK_LINE(111)
				_this->requestSubStateReset = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSubState_obj,close,(void))

Void FlxSubState_obj::draw( ){
{
		HX_STACK_PUSH("FlxSubState::draw","flixel/FlxSubState.hx",84);
		HX_STACK_THIS(this);
		HX_STACK_LINE(96)
		this->_bgSprite->draw();
		HX_STACK_LINE(100)
		this->super::draw();
	}
return null();
}


int FlxSubState_obj::set_bgColor( int Value){
	HX_STACK_PUSH("FlxSubState::set_bgColor","flixel/FlxSubState.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(74)
	if (((this->_bgSprite != null()))){
		HX_STACK_LINE(75)
		this->_bgSprite->get_pixels()->setPixel32((int)0,(int)0,Value);
	}
	HX_STACK_LINE(80)
	return this->_bgColor = Value;
}


int FlxSubState_obj::get_bgColor( ){
	HX_STACK_PUSH("FlxSubState::get_bgColor","flixel/FlxSubState.hx",67);
	HX_STACK_THIS(this);
	HX_STACK_LINE(67)
	return this->_bgColor;
}


Void FlxSubState_obj::initialize( ){
{
		HX_STACK_PUSH("FlxSubState::initialize","flixel/FlxSubState.hx",46);
		HX_STACK_THIS(this);
		HX_STACK_LINE(46)
		this->_initialized = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSubState_obj,initialize,(void))

bool FlxSubState_obj::get_initialized( ){
	HX_STACK_PUSH("FlxSubState::get_initialized","flixel/FlxSubState.hx",38);
	HX_STACK_THIS(this);
	HX_STACK_LINE(38)
	return this->_initialized;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSubState_obj,get_initialized,return )


FlxSubState_obj::FlxSubState_obj()
{
}

void FlxSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSubState);
	HX_MARK_MEMBER_NAME(initialized,"initialized");
	HX_MARK_MEMBER_NAME(_bgColor,"_bgColor");
	HX_MARK_MEMBER_NAME(_initialized,"_initialized");
	HX_MARK_MEMBER_NAME(_bgSprite,"_bgSprite");
	HX_MARK_MEMBER_NAME(closeCallback,"closeCallback");
	HX_MARK_MEMBER_NAME(_parentState,"_parentState");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(initialized,"initialized");
	HX_VISIT_MEMBER_NAME(_bgColor,"_bgColor");
	HX_VISIT_MEMBER_NAME(_initialized,"_initialized");
	HX_VISIT_MEMBER_NAME(_bgSprite,"_bgSprite");
	HX_VISIT_MEMBER_NAME(closeCallback,"closeCallback");
	HX_VISIT_MEMBER_NAME(_parentState,"_parentState");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSubState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_bgColor") ) { return _bgColor; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bgSprite") ) { return _bgSprite; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return set_bgColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return get_bgColor_dyn(); }
		if (HX_FIELD_EQ(inName,"initialized") ) { return inCallProp ? get_initialized() : initialized; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_initialized") ) { return _initialized; }
		if (HX_FIELD_EQ(inName,"_parentState") ) { return _parentState; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"closeCallback") ) { return closeCallback; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_initialized") ) { return get_initialized_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSubState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_bgColor") ) { _bgColor=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bgSprite") ) { _bgSprite=inValue.Cast< ::flixel::system::FlxBGSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_initialized") ) { _initialized=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parentState") ) { _parentState=inValue.Cast< ::flixel::FlxState >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"closeCallback") ) { closeCallback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("initialized"));
	outFields->push(HX_CSTRING("_bgColor"));
	outFields->push(HX_CSTRING("_initialized"));
	outFields->push(HX_CSTRING("_bgSprite"));
	outFields->push(HX_CSTRING("_parentState"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("close"),
	HX_CSTRING("draw"),
	HX_CSTRING("set_bgColor"),
	HX_CSTRING("get_bgColor"),
	HX_CSTRING("initialize"),
	HX_CSTRING("get_initialized"),
	HX_CSTRING("initialized"),
	HX_CSTRING("_bgColor"),
	HX_CSTRING("_initialized"),
	HX_CSTRING("_bgSprite"),
	HX_CSTRING("closeCallback"),
	HX_CSTRING("_parentState"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSubState_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSubState_obj::__mClass,"__mClass");
};

Class FlxSubState_obj::__mClass;

void FlxSubState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxSubState"), hx::TCanCast< FlxSubState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxSubState_obj::__boot()
{
}

} // end namespace flixel
