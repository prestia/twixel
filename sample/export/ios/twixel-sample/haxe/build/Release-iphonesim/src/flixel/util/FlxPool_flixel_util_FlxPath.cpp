#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPath
#include <flixel/util/FlxPool_flixel_util_FlxPath.h>
#endif
namespace flixel{
namespace util{

Void FlxPool_flixel_util_FlxPath_obj::__construct()
{
HX_STACK_PUSH("FlxPool_flixel_util_FlxPath::new","flixel/util/FlxPool.hx",13);
{
	HX_STACK_LINE(13)
	this->_pool = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

FlxPool_flixel_util_FlxPath_obj::~FlxPool_flixel_util_FlxPath_obj() { }

Dynamic FlxPool_flixel_util_FlxPath_obj::__CreateEmpty() { return  new FlxPool_flixel_util_FlxPath_obj; }
hx::ObjectPtr< FlxPool_flixel_util_FlxPath_obj > FlxPool_flixel_util_FlxPath_obj::__new()
{  hx::ObjectPtr< FlxPool_flixel_util_FlxPath_obj > result = new FlxPool_flixel_util_FlxPath_obj();
	result->__construct();
	return result;}

Dynamic FlxPool_flixel_util_FlxPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPool_flixel_util_FlxPath_obj > result = new FlxPool_flixel_util_FlxPath_obj();
	result->__construct();
	return result;}

int FlxPool_flixel_util_FlxPath_obj::get_length( ){
	HX_STACK_PUSH("FlxPool_flixel_util_FlxPath::get_length","flixel/util/FlxPool.hx",51);
	HX_STACK_THIS(this);
	HX_STACK_LINE(51)
	return this->_pool->length;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_flixel_util_FlxPath_obj,get_length,return )

Array< ::Dynamic > FlxPool_flixel_util_FlxPath_obj::clear( ){
	HX_STACK_PUSH("FlxPool_flixel_util_FlxPath::clear","flixel/util/FlxPool.hx",44);
	HX_STACK_THIS(this);
	HX_STACK_LINE(45)
	Array< ::Dynamic > oldPool = this->_pool;		HX_STACK_VAR(oldPool,"oldPool");
	HX_STACK_LINE(46)
	this->_pool = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(47)
	return oldPool;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_flixel_util_FlxPath_obj,clear,return )

Void FlxPool_flixel_util_FlxPath_obj::putUnsafe( ::flixel::util::FlxPath obj){
{
		HX_STACK_PUSH("FlxPool_flixel_util_FlxPath::putUnsafe","flixel/util/FlxPool.hx",35);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(35)
		if (((obj != null()))){
			HX_STACK_LINE(38)
			obj->destroy();
			HX_STACK_LINE(39)
			this->_pool->push(obj);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_flixel_util_FlxPath_obj,putUnsafe,(void))

Void FlxPool_flixel_util_FlxPath_obj::put( ::flixel::util::FlxPath obj){
{
		HX_STACK_PUSH("FlxPool_flixel_util_FlxPath::put","flixel/util/FlxPool.hx",25);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(25)
		if (((bool((obj != null())) && bool((::flixel::util::FlxArrayUtil_obj::indexOf_flixel_util_FlxPool_T(this->_pool,obj,null()) < (int)0))))){
			HX_STACK_LINE(29)
			obj->destroy();
			HX_STACK_LINE(30)
			this->_pool->push(obj);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPool_flixel_util_FlxPath_obj,put,(void))

::flixel::util::FlxPath FlxPool_flixel_util_FlxPath_obj::get( ){
	HX_STACK_PUSH("FlxPool_flixel_util_FlxPath::get","flixel/util/FlxPool.hx",18);
	HX_STACK_THIS(this);
	HX_STACK_LINE(19)
	::flixel::util::FlxPath obj = this->_pool->pop().StaticCast< ::flixel::util::FlxPath >();		HX_STACK_VAR(obj,"obj");
	HX_STACK_LINE(20)
	if (((obj == null()))){
		HX_STACK_LINE(20)
		obj = ::flixel::util::FlxPath_obj::__new();
	}
	HX_STACK_LINE(21)
	return obj;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPool_flixel_util_FlxPath_obj,get,return )


FlxPool_flixel_util_FlxPath_obj::FlxPool_flixel_util_FlxPath_obj()
{
}

void FlxPool_flixel_util_FlxPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPool_flixel_util_FlxPath);
	HX_MARK_MEMBER_NAME(_pool,"_pool");
	HX_MARK_END_CLASS();
}

void FlxPool_flixel_util_FlxPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pool,"_pool");
}

Dynamic FlxPool_flixel_util_FlxPath_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"_pool") ) { return _pool; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return get_length(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"putUnsafe") ) { return putUnsafe_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxPool_flixel_util_FlxPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPool_flixel_util_FlxPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("_pool"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_length"),
	HX_CSTRING("clear"),
	HX_CSTRING("putUnsafe"),
	HX_CSTRING("put"),
	HX_CSTRING("get"),
	HX_CSTRING("_pool"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPool_flixel_util_FlxPath_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPool_flixel_util_FlxPath_obj::__mClass,"__mClass");
};

Class FlxPool_flixel_util_FlxPath_obj::__mClass;

void FlxPool_flixel_util_FlxPath_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxPool_flixel_util_FlxPath"), hx::TCanCast< FlxPool_flixel_util_FlxPath_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxPool_flixel_util_FlxPath_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
