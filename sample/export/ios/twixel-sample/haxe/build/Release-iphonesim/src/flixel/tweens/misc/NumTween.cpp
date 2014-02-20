#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
namespace flixel{
namespace tweens{
namespace misc{

Void NumTween_obj::__construct(Dynamic complete,hx::Null< int >  __o_type)
{
HX_STACK_PUSH("NumTween::new","flixel/tweens/misc/NumTween.hx",25);
int type = __o_type.Default(0);
{
	HX_STACK_LINE(26)
	this->value = (int)0;
	HX_STACK_LINE(27)
	super::__construct((int)0,type,complete,null());
}
;
	return null();
}

NumTween_obj::~NumTween_obj() { }

Dynamic NumTween_obj::__CreateEmpty() { return  new NumTween_obj; }
hx::ObjectPtr< NumTween_obj > NumTween_obj::__new(Dynamic complete,hx::Null< int >  __o_type)
{  hx::ObjectPtr< NumTween_obj > result = new NumTween_obj();
	result->__construct(complete,__o_type);
	return result;}

Dynamic NumTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NumTween_obj > result = new NumTween_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void NumTween_obj::update( ){
{
		HX_STACK_PUSH("NumTween::update","flixel/tweens/misc/NumTween.hx",49);
		HX_STACK_THIS(this);
		HX_STACK_LINE(50)
		this->super::update();
		HX_STACK_LINE(51)
		this->value = (this->_start + (this->_range * this->scale));
	}
return null();
}


::flixel::tweens::misc::NumTween NumTween_obj::tween( Float fromValue,Float toValue,Float duration,Dynamic ease){
	HX_STACK_PUSH("NumTween::tween","flixel/tweens/misc/NumTween.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_ARG(fromValue,"fromValue");
	HX_STACK_ARG(toValue,"toValue");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(ease,"ease");
	HX_STACK_LINE(40)
	this->_start = this->value = fromValue;
	HX_STACK_LINE(41)
	this->_range = (toValue - this->value);
	HX_STACK_LINE(42)
	this->duration = duration;
	HX_STACK_LINE(43)
	this->ease = ease;
	HX_STACK_LINE(44)
	this->start();
	HX_STACK_LINE(45)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(NumTween_obj,tween,return )


NumTween_obj::NumTween_obj()
{
}

void NumTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NumTween);
	HX_MARK_MEMBER_NAME(_range,"_range");
	HX_MARK_MEMBER_NAME(_start,"_start");
	HX_MARK_MEMBER_NAME(value,"value");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NumTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_range,"_range");
	HX_VISIT_MEMBER_NAME(_start,"_start");
	HX_VISIT_MEMBER_NAME(value,"value");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic NumTween_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_range") ) { return _range; }
		if (HX_FIELD_EQ(inName,"_start") ) { return _start; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NumTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_range") ) { _range=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_start") ) { _start=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NumTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_range"));
	outFields->push(HX_CSTRING("_start"));
	outFields->push(HX_CSTRING("value"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("tween"),
	HX_CSTRING("_range"),
	HX_CSTRING("_start"),
	HX_CSTRING("value"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NumTween_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NumTween_obj::__mClass,"__mClass");
};

Class NumTween_obj::__mClass;

void NumTween_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.misc.NumTween"), hx::TCanCast< NumTween_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void NumTween_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
} // end namespace misc
