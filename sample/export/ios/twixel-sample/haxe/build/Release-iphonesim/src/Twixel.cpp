#include <hxcpp.h>

#ifndef INCLUDED_Twixel
#include <Twixel.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif

Void Twixel_obj::__construct()
{
	return null();
}

Twixel_obj::~Twixel_obj() { }

Dynamic Twixel_obj::__CreateEmpty() { return  new Twixel_obj; }
hx::ObjectPtr< Twixel_obj > Twixel_obj::__new()
{  hx::ObjectPtr< Twixel_obj > result = new Twixel_obj();
	result->__construct();
	return result;}

Dynamic Twixel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Twixel_obj > result = new Twixel_obj();
	result->__construct();
	return result;}

bool Twixel_obj::tweet( ::String message){
	HX_STACK_PUSH("Twixel::tweet","Twixel.hx",16);
	HX_STACK_ARG(message,"message");
	HX_STACK_LINE(16)
	return ::Twixel_obj::twixel_tweet(message);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Twixel_obj,tweet,return )

Dynamic Twixel_obj::twixel_tweet;


Twixel_obj::Twixel_obj()
{
}

void Twixel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Twixel);
	HX_MARK_END_CLASS();
}

void Twixel_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Twixel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tweet") ) { return tweet_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"twixel_tweet") ) { return twixel_tweet; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Twixel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"twixel_tweet") ) { twixel_tweet=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Twixel_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("tweet"),
	HX_CSTRING("twixel_tweet"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Twixel_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Twixel_obj::twixel_tweet,"twixel_tweet");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Twixel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Twixel_obj::twixel_tweet,"twixel_tweet");
};

Class Twixel_obj::__mClass;

void Twixel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Twixel"), hx::TCanCast< Twixel_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Twixel_obj::__boot()
{
	twixel_tweet= ::cpp::Lib_obj::load(HX_CSTRING("twixel"),HX_CSTRING("twixel_tweet"),(int)1);
}

