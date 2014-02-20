#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_replay_CodeValuePair
#include <flixel/system/replay/CodeValuePair.h>
#endif
namespace flixel{
namespace system{
namespace replay{

Void CodeValuePair_obj::__construct(hx::Null< int >  __o_Code,hx::Null< int >  __o_Value)
{
HX_STACK_PUSH("CodeValuePair::new","flixel/system/replay/CodeValuePair.hx",13);
int Code = __o_Code.Default(0);
int Value = __o_Value.Default(0);
{
	HX_STACK_LINE(14)
	this->code = Code;
	HX_STACK_LINE(15)
	this->value = Value;
}
;
	return null();
}

CodeValuePair_obj::~CodeValuePair_obj() { }

Dynamic CodeValuePair_obj::__CreateEmpty() { return  new CodeValuePair_obj; }
hx::ObjectPtr< CodeValuePair_obj > CodeValuePair_obj::__new(hx::Null< int >  __o_Code,hx::Null< int >  __o_Value)
{  hx::ObjectPtr< CodeValuePair_obj > result = new CodeValuePair_obj();
	result->__construct(__o_Code,__o_Value);
	return result;}

Dynamic CodeValuePair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CodeValuePair_obj > result = new CodeValuePair_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


CodeValuePair_obj::CodeValuePair_obj()
{
}

void CodeValuePair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CodeValuePair);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(code,"code");
	HX_MARK_END_CLASS();
}

void CodeValuePair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(code,"code");
}

Dynamic CodeValuePair_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { return code; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CodeValuePair_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { code=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CodeValuePair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("value"));
	outFields->push(HX_CSTRING("code"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("value"),
	HX_CSTRING("code"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CodeValuePair_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CodeValuePair_obj::__mClass,"__mClass");
};

Class CodeValuePair_obj::__mClass;

void CodeValuePair_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.replay.CodeValuePair"), hx::TCanCast< CodeValuePair_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CodeValuePair_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace replay
