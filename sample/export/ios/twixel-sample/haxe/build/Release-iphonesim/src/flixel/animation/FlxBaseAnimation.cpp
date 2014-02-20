#include <hxcpp.h>

#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
namespace flixel{
namespace animation{

Void FlxBaseAnimation_obj::__construct(::flixel::animation::FlxAnimationController Parent,::String Name)
{
HX_STACK_PUSH("FlxBaseAnimation::new","flixel/animation/FlxBaseAnimation.hx",9);
{
	HX_STACK_LINE(25)
	this->curIndex = (int)0;
	HX_STACK_LINE(41)
	this->parent = Parent;
	HX_STACK_LINE(42)
	this->name = Name;
}
;
	return null();
}

FlxBaseAnimation_obj::~FlxBaseAnimation_obj() { }

Dynamic FlxBaseAnimation_obj::__CreateEmpty() { return  new FlxBaseAnimation_obj; }
hx::ObjectPtr< FlxBaseAnimation_obj > FlxBaseAnimation_obj::__new(::flixel::animation::FlxAnimationController Parent,::String Name)
{  hx::ObjectPtr< FlxBaseAnimation_obj > result = new FlxBaseAnimation_obj();
	result->__construct(Parent,Name);
	return result;}

Dynamic FlxBaseAnimation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBaseAnimation_obj > result = new FlxBaseAnimation_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::flixel::animation::FlxBaseAnimation FlxBaseAnimation_obj::clone( ::flixel::animation::FlxAnimationController Parent){
	HX_STACK_PUSH("FlxBaseAnimation::clone","flixel/animation/FlxBaseAnimation.hx",56);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Parent,"Parent");
	HX_STACK_LINE(56)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseAnimation_obj,clone,return )

Void FlxBaseAnimation_obj::update( ){
{
		HX_STACK_PUSH("FlxBaseAnimation::update","flixel/animation/FlxBaseAnimation.hx",51);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseAnimation_obj,update,(void))

Void FlxBaseAnimation_obj::destroy( ){
{
		HX_STACK_PUSH("FlxBaseAnimation::destroy","flixel/animation/FlxBaseAnimation.hx",46);
		HX_STACK_THIS(this);
		HX_STACK_LINE(46)
		this->parent = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseAnimation_obj,destroy,(void))

int FlxBaseAnimation_obj::set_curIndex( int Value){
	HX_STACK_PUSH("FlxBaseAnimation::set_curIndex","flixel/animation/FlxBaseAnimation.hx",28);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(29)
	this->curIndex = Value;
	HX_STACK_LINE(31)
	if (((bool((this->parent != null())) && bool((this->parent->_curAnim == hx::ObjectPtr<OBJ_>(this)))))){
		HX_STACK_LINE(32)
		this->parent->set_frameIndex(Value);
	}
	HX_STACK_LINE(36)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseAnimation_obj,set_curIndex,return )


FlxBaseAnimation_obj::FlxBaseAnimation_obj()
{
}

void FlxBaseAnimation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseAnimation);
	HX_MARK_MEMBER_NAME(curIndex,"curIndex");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_END_CLASS();
}

void FlxBaseAnimation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curIndex,"curIndex");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(parent,"parent");
}

Dynamic FlxBaseAnimation_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curIndex") ) { return curIndex; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_curIndex") ) { return set_curIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBaseAnimation_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::flixel::animation::FlxAnimationController >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curIndex") ) { if (inCallProp) return set_curIndex(inValue);curIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBaseAnimation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("curIndex"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("parent"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clone"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("set_curIndex"),
	HX_CSTRING("curIndex"),
	HX_CSTRING("name"),
	HX_CSTRING("parent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBaseAnimation_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBaseAnimation_obj::__mClass,"__mClass");
};

Class FlxBaseAnimation_obj::__mClass;

void FlxBaseAnimation_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.animation.FlxBaseAnimation"), hx::TCanCast< FlxBaseAnimation_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxBaseAnimation_obj::__boot()
{
}

} // end namespace flixel
} // end namespace animation
