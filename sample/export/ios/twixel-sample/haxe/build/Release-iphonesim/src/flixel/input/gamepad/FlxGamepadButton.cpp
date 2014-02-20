#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

Void FlxGamepadButton_obj::__construct(int ID,hx::Null< int >  __o_Current,hx::Null< int >  __o_Last)
{
HX_STACK_PUSH("FlxGamepadButton::new","flixel/input/gamepad/FlxGamepadButton.hx",10);
int Current = __o_Current.Default(0);
int Last = __o_Last.Default(0);
{
	HX_STACK_LINE(11)
	this->id = ID;
	HX_STACK_LINE(12)
	this->current = Current;
	HX_STACK_LINE(13)
	this->last = Last;
}
;
	return null();
}

FlxGamepadButton_obj::~FlxGamepadButton_obj() { }

Dynamic FlxGamepadButton_obj::__CreateEmpty() { return  new FlxGamepadButton_obj; }
hx::ObjectPtr< FlxGamepadButton_obj > FlxGamepadButton_obj::__new(int ID,hx::Null< int >  __o_Current,hx::Null< int >  __o_Last)
{  hx::ObjectPtr< FlxGamepadButton_obj > result = new FlxGamepadButton_obj();
	result->__construct(ID,__o_Current,__o_Last);
	return result;}

Dynamic FlxGamepadButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepadButton_obj > result = new FlxGamepadButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void FlxGamepadButton_obj::reset( ){
{
		HX_STACK_PUSH("FlxGamepadButton::reset","flixel/input/gamepad/FlxGamepadButton.hx",17);
		HX_STACK_THIS(this);
		HX_STACK_LINE(18)
		this->current = (int)0;
		HX_STACK_LINE(19)
		this->last = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButton_obj,reset,(void))


FlxGamepadButton_obj::FlxGamepadButton_obj()
{
}

void FlxGamepadButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadButton);
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void FlxGamepadButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(id,"id");
}

Dynamic FlxGamepadButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepadButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("last"));
	outFields->push(HX_CSTRING("current"));
	outFields->push(HX_CSTRING("id"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("reset"),
	HX_CSTRING("last"),
	HX_CSTRING("current"),
	HX_CSTRING("id"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadButton_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadButton_obj::__mClass,"__mClass");
};

Class FlxGamepadButton_obj::__mClass;

void FlxGamepadButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.gamepad.FlxGamepadButton"), hx::TCanCast< FlxGamepadButton_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxGamepadButton_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
