#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearMotion
#include <flixel/tweens/motion/LinearMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace tweens{
namespace motion{

Void LinearMotion_obj::__construct(Dynamic complete,hx::Null< int >  __o_type)
{
HX_STACK_PUSH("LinearMotion::new","flixel/tweens/motion/LinearMotion.hx",28);
int type = __o_type.Default(0);
{
	HX_STACK_LINE(29)
	super::__construct((int)0,complete,type,null());
	HX_STACK_LINE(30)
	this->_fromX = this->_fromY = this->_moveX = this->_moveY = (int)0;
	HX_STACK_LINE(31)
	this->_distance = (int)-1;
}
;
	return null();
}

LinearMotion_obj::~LinearMotion_obj() { }

Dynamic LinearMotion_obj::__CreateEmpty() { return  new LinearMotion_obj; }
hx::ObjectPtr< LinearMotion_obj > LinearMotion_obj::__new(Dynamic complete,hx::Null< int >  __o_type)
{  hx::ObjectPtr< LinearMotion_obj > result = new LinearMotion_obj();
	result->__construct(complete,__o_type);
	return result;}

Dynamic LinearMotion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LinearMotion_obj > result = new LinearMotion_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Float LinearMotion_obj::get_distance( ){
	HX_STACK_PUSH("LinearMotion::get_distance","flixel/tweens/motion/LinearMotion.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_LINE(87)
	if (((this->_distance >= (int)0))){
		HX_STACK_LINE(87)
		return this->_distance;
	}
	HX_STACK_LINE(88)
	return this->_distance = ::Math_obj::sqrt(((this->_moveX * this->_moveX) + (this->_moveY * this->_moveY)));
}


HX_DEFINE_DYNAMIC_FUNC0(LinearMotion_obj,get_distance,return )

Void LinearMotion_obj::update( ){
{
		HX_STACK_PUSH("LinearMotion::update","flixel/tweens/motion/LinearMotion.hx",69);
		HX_STACK_THIS(this);
		HX_STACK_LINE(70)
		this->super::update();
		HX_STACK_LINE(71)
		this->x = (this->_fromX + (this->_moveX * this->scale));
		HX_STACK_LINE(72)
		this->y = (this->_fromY + (this->_moveY * this->scale));
		HX_STACK_LINE(74)
		if (((bool((bool((bool((this->x == (this->_fromX + this->_moveX))) && bool((this->y == (this->_fromY + this->_moveY))))) && bool(this->active))) && bool((this->_secondsSinceStart >= this->duration))))){
			HX_STACK_LINE(76)
			this->finished = true;
		}
		HX_STACK_LINE(79)
		if ((this->finished)){
			HX_STACK_LINE(80)
			this->postUpdate();
		}
	}
return null();
}


::flixel::tweens::motion::LinearMotion LinearMotion_obj::setMotion( Float FromX,Float FromY,Float ToX,Float ToY,Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Ease){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_PUSH("LinearMotion::setMotion","flixel/tweens/motion/LinearMotion.hx",46);
	HX_STACK_THIS(this);
	HX_STACK_ARG(FromX,"FromX");
	HX_STACK_ARG(FromY,"FromY");
	HX_STACK_ARG(ToX,"ToX");
	HX_STACK_ARG(ToY,"ToY");
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed");
	HX_STACK_ARG(UseDuration,"UseDuration");
	HX_STACK_ARG(Ease,"Ease");
{
		HX_STACK_LINE(47)
		this->_distance = (int)-1;
		HX_STACK_LINE(48)
		this->x = this->_fromX = FromX;
		HX_STACK_LINE(49)
		this->y = this->_fromY = FromY;
		HX_STACK_LINE(50)
		this->_moveX = (ToX - FromX);
		HX_STACK_LINE(51)
		this->_moveY = (ToY - FromY);
		HX_STACK_LINE(53)
		if ((UseDuration)){
			HX_STACK_LINE(54)
			this->duration = DurationOrSpeed;
		}
		else{
			HX_STACK_LINE(58)
			this->duration = (Float(this->get_distance()) / Float(DurationOrSpeed));
		}
		HX_STACK_LINE(62)
		this->ease = Ease;
		HX_STACK_LINE(63)
		this->start();
		HX_STACK_LINE(65)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(LinearMotion_obj,setMotion,return )


LinearMotion_obj::LinearMotion_obj()
{
}

void LinearMotion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LinearMotion);
	HX_MARK_MEMBER_NAME(_distance,"_distance");
	HX_MARK_MEMBER_NAME(_moveY,"_moveY");
	HX_MARK_MEMBER_NAME(_moveX,"_moveX");
	HX_MARK_MEMBER_NAME(_fromY,"_fromY");
	HX_MARK_MEMBER_NAME(_fromX,"_fromX");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LinearMotion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_distance,"_distance");
	HX_VISIT_MEMBER_NAME(_moveY,"_moveY");
	HX_VISIT_MEMBER_NAME(_moveX,"_moveX");
	HX_VISIT_MEMBER_NAME(_fromY,"_fromY");
	HX_VISIT_MEMBER_NAME(_fromX,"_fromX");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic LinearMotion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_moveY") ) { return _moveY; }
		if (HX_FIELD_EQ(inName,"_moveX") ) { return _moveX; }
		if (HX_FIELD_EQ(inName,"_fromY") ) { return _fromY; }
		if (HX_FIELD_EQ(inName,"_fromX") ) { return _fromX; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return get_distance(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"_distance") ) { return _distance; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_distance") ) { return get_distance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LinearMotion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_moveY") ) { _moveY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveX") ) { _moveX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fromY") ) { _fromY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fromX") ) { _fromX=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { _distance=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LinearMotion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_distance"));
	outFields->push(HX_CSTRING("_moveY"));
	outFields->push(HX_CSTRING("_moveX"));
	outFields->push(HX_CSTRING("_fromY"));
	outFields->push(HX_CSTRING("_fromX"));
	outFields->push(HX_CSTRING("distance"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_distance"),
	HX_CSTRING("update"),
	HX_CSTRING("setMotion"),
	HX_CSTRING("_distance"),
	HX_CSTRING("_moveY"),
	HX_CSTRING("_moveX"),
	HX_CSTRING("_fromY"),
	HX_CSTRING("_fromX"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LinearMotion_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LinearMotion_obj::__mClass,"__mClass");
};

Class LinearMotion_obj::__mClass;

void LinearMotion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.motion.LinearMotion"), hx::TCanCast< LinearMotion_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void LinearMotion_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion
