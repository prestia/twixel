#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Mutex
#include <cpp/vm/Mutex.h>
#endif
namespace cpp{
namespace vm{

Void Mutex_obj::__construct()
{
HX_STACK_PUSH("Mutex::new","/usr/lib/haxe/std/cpp/vm/Mutex.hx",27);
{
	HX_STACK_LINE(27)
	this->m = ::__hxcpp_mutex_create();
}
;
	return null();
}

Mutex_obj::~Mutex_obj() { }

Dynamic Mutex_obj::__CreateEmpty() { return  new Mutex_obj; }
hx::ObjectPtr< Mutex_obj > Mutex_obj::__new()
{  hx::ObjectPtr< Mutex_obj > result = new Mutex_obj();
	result->__construct();
	return result;}

Dynamic Mutex_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mutex_obj > result = new Mutex_obj();
	result->__construct();
	return result;}

Void Mutex_obj::release( ){
{
		HX_STACK_PUSH("Mutex::release","/usr/lib/haxe/std/cpp/vm/Mutex.hx",36);
		HX_STACK_THIS(this);
		HX_STACK_LINE(36)
		::__hxcpp_mutex_release(this->m);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mutex_obj,release,(void))

Void Mutex_obj::acquire( ){
{
		HX_STACK_PUSH("Mutex::acquire","/usr/lib/haxe/std/cpp/vm/Mutex.hx",30);
		HX_STACK_THIS(this);
		HX_STACK_LINE(30)
		::__hxcpp_mutex_acquire(this->m);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mutex_obj,acquire,(void))


Mutex_obj::Mutex_obj()
{
}

void Mutex_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mutex);
	HX_MARK_MEMBER_NAME(m,"m");
	HX_MARK_END_CLASS();
}

void Mutex_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m,"m");
}

Dynamic Mutex_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { return m; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"release") ) { return release_dyn(); }
		if (HX_FIELD_EQ(inName,"acquire") ) { return acquire_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mutex_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mutex_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("release"),
	HX_CSTRING("acquire"),
	HX_CSTRING("m"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mutex_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mutex_obj::__mClass,"__mClass");
};

Class Mutex_obj::__mClass;

void Mutex_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("cpp.vm.Mutex"), hx::TCanCast< Mutex_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Mutex_obj::__boot()
{
}

} // end namespace cpp
} // end namespace vm
