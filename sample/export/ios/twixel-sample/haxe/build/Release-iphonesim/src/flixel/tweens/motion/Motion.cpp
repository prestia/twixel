#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
namespace flixel{
namespace tweens{
namespace motion{

Void Motion_obj::__construct(Float duration,Dynamic complete,hx::Null< int >  __o_type,Dynamic ease)
{
HX_STACK_PUSH("Motion::new","flixel/tweens/motion/Motion.hx",10);
int type = __o_type.Default(0);
{
	HX_STACK_LINE(19)
	this->y = (int)0;
	HX_STACK_LINE(15)
	this->x = (int)0;
	HX_STACK_LINE(31)
	super::__construct(duration,type,complete,ease);
}
;
	return null();
}

Motion_obj::~Motion_obj() { }

Dynamic Motion_obj::__CreateEmpty() { return  new Motion_obj; }
hx::ObjectPtr< Motion_obj > Motion_obj::__new(Float duration,Dynamic complete,hx::Null< int >  __o_type,Dynamic ease)
{  hx::ObjectPtr< Motion_obj > result = new Motion_obj();
	result->__construct(duration,complete,__o_type,ease);
	return result;}

Dynamic Motion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Motion_obj > result = new Motion_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Motion_obj::postUpdate( ){
{
		HX_STACK_PUSH("Motion::postUpdate","flixel/tweens/motion/Motion.hx",55);
		HX_STACK_THIS(this);
		HX_STACK_LINE(55)
		if (((this->_object != null()))){
			HX_STACK_LINE(57)
			this->_object->setPosition(this->x,this->y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Motion_obj,postUpdate,(void))

Void Motion_obj::update( ){
{
		HX_STACK_PUSH("Motion::update","flixel/tweens/motion/Motion.hx",49);
		HX_STACK_THIS(this);
		HX_STACK_LINE(50)
		this->super::update();
		HX_STACK_LINE(51)
		this->postUpdate();
	}
return null();
}


::flixel::tweens::motion::Motion Motion_obj::setObject( ::flixel::FlxObject object){
	HX_STACK_PUSH("Motion::setObject","flixel/tweens/motion/Motion.hx",42);
	HX_STACK_THIS(this);
	HX_STACK_ARG(object,"object");
	HX_STACK_LINE(43)
	this->_object = object;
	HX_STACK_LINE(44)
	this->_object->set_immovable(true);
	HX_STACK_LINE(45)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Motion_obj,setObject,return )

Void Motion_obj::destroy( ){
{
		HX_STACK_PUSH("Motion::destroy","flixel/tweens/motion/Motion.hx",36);
		HX_STACK_THIS(this);
		HX_STACK_LINE(37)
		this->super::destroy();
		HX_STACK_LINE(38)
		this->_object = null();
	}
return null();
}



Motion_obj::Motion_obj()
{
}

void Motion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Motion);
	HX_MARK_MEMBER_NAME(_object,"_object");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Motion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_object,"_object");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Motion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_object") ) { return _object; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setObject") ) { return setObject_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"postUpdate") ) { return postUpdate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Motion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Motion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_object"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("postUpdate"),
	HX_CSTRING("update"),
	HX_CSTRING("setObject"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_object"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Motion_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Motion_obj::__mClass,"__mClass");
};

Class Motion_obj::__mClass;

void Motion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.motion.Motion"), hx::TCanCast< Motion_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Motion_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion
