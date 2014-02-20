#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadMotion
#include <flixel/tweens/motion/QuadMotion.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace tweens{
namespace motion{

Void QuadMotion_obj::__construct(Dynamic complete,hx::Null< int >  __o_type)
{
HX_STACK_PUSH("QuadMotion::new","flixel/tweens/motion/QuadMotion.hx",34);
int type = __o_type.Default(0);
{
	HX_STACK_LINE(35)
	this->_distance = (int)-1;
	HX_STACK_LINE(36)
	this->_fromX = this->_fromY = this->_toX = this->_toY = (int)0;
	HX_STACK_LINE(37)
	this->_controlX = this->_controlY = (int)0;
	HX_STACK_LINE(38)
	super::__construct((int)0,complete,type,null());
}
;
	return null();
}

QuadMotion_obj::~QuadMotion_obj() { }

Dynamic QuadMotion_obj::__CreateEmpty() { return  new QuadMotion_obj; }
hx::ObjectPtr< QuadMotion_obj > QuadMotion_obj::__new(Dynamic complete,hx::Null< int >  __o_type)
{  hx::ObjectPtr< QuadMotion_obj > result = new QuadMotion_obj();
	result->__construct(complete,__o_type);
	return result;}

Dynamic QuadMotion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuadMotion_obj > result = new QuadMotion_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Float QuadMotion_obj::get_distance( ){
	HX_STACK_PUSH("QuadMotion::get_distance","flixel/tweens/motion/QuadMotion.hx",91);
	HX_STACK_THIS(this);
	HX_STACK_LINE(92)
	if (((this->_distance >= (int)0))){
		HX_STACK_LINE(92)
		return this->_distance;
	}
	HX_STACK_LINE(93)
	::flixel::util::FlxPoint a = ::flixel::tweens::motion::QuadMotion_obj::point;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(94)
	::flixel::util::FlxPoint b = ::flixel::tweens::motion::QuadMotion_obj::point2;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(95)
	a->set_x(((this->x - ((int)2 * this->_controlX)) + this->_toX));
	HX_STACK_LINE(96)
	a->set_y(((this->y - ((int)2 * this->_controlY)) + this->_toY));
	HX_STACK_LINE(97)
	b->set_x((((int)2 * this->_controlX) - ((int)2 * this->x)));
	HX_STACK_LINE(98)
	b->set_y((((int)2 * this->_controlY) - ((int)2 * this->y)));
	HX_STACK_LINE(99)
	Float A = ((int)4 * (((a->x * a->x) + (a->y * a->y))));		HX_STACK_VAR(A,"A");
	Float B = ((int)4 * (((a->x * b->x) + (a->y * b->y))));		HX_STACK_VAR(B,"B");
	Float C = ((b->x * b->x) + (b->y * b->y));		HX_STACK_VAR(C,"C");
	Float ABC = ((int)2 * ::Math_obj::sqrt(((A + B) + C)));		HX_STACK_VAR(ABC,"ABC");
	Float A2 = ::Math_obj::sqrt(A);		HX_STACK_VAR(A2,"A2");
	Float A32 = (((int)2 * A) * A2);		HX_STACK_VAR(A32,"A32");
	Float C2 = ((int)2 * ::Math_obj::sqrt(C));		HX_STACK_VAR(C2,"C2");
	Float BA = (Float(B) / Float(A2));		HX_STACK_VAR(BA,"BA");
	HX_STACK_LINE(107)
	return (Float(((((A32 * ABC) + ((A2 * B) * ((ABC - C2)))) + ((((((int)4 * C) * A) - (B * B))) * ::Math_obj::log((Float((((((int)2 * A2) + BA) + ABC))) / Float(((BA + C2))))))))) / Float((((int)4 * A32))));
}


HX_DEFINE_DYNAMIC_FUNC0(QuadMotion_obj,get_distance,return )

Void QuadMotion_obj::update( ){
{
		HX_STACK_PUSH("QuadMotion::update","flixel/tweens/motion/QuadMotion.hx",80);
		HX_STACK_THIS(this);
		HX_STACK_LINE(81)
		this->super::update();
		HX_STACK_LINE(82)
		this->x = ((((this->_fromX * (((int)1 - this->scale))) * (((int)1 - this->scale))) + (((this->_controlX * (int)2) * (((int)1 - this->scale))) * this->scale)) + ((this->_toX * this->scale) * this->scale));
		HX_STACK_LINE(83)
		this->y = ((((this->_fromY * (((int)1 - this->scale))) * (((int)1 - this->scale))) + (((this->_controlY * (int)2) * (((int)1 - this->scale))) * this->scale)) + ((this->_toY * this->scale) * this->scale));
		HX_STACK_LINE(84)
		if ((this->finished)){
			HX_STACK_LINE(85)
			this->postUpdate();
		}
	}
return null();
}


::flixel::tweens::motion::QuadMotion QuadMotion_obj::setMotion( Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Ease){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_PUSH("QuadMotion::setMotion","flixel/tweens/motion/QuadMotion.hx",55);
	HX_STACK_THIS(this);
	HX_STACK_ARG(FromX,"FromX");
	HX_STACK_ARG(FromY,"FromY");
	HX_STACK_ARG(ControlX,"ControlX");
	HX_STACK_ARG(ControlY,"ControlY");
	HX_STACK_ARG(ToX,"ToX");
	HX_STACK_ARG(ToY,"ToY");
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed");
	HX_STACK_ARG(UseDuration,"UseDuration");
	HX_STACK_ARG(Ease,"Ease");
{
		HX_STACK_LINE(56)
		this->_distance = (int)-1;
		HX_STACK_LINE(57)
		this->x = this->_fromX = FromX;
		HX_STACK_LINE(58)
		this->y = this->_fromY = FromY;
		HX_STACK_LINE(59)
		this->_controlX = ControlX;
		HX_STACK_LINE(60)
		this->_controlY = ControlY;
		HX_STACK_LINE(61)
		this->_toX = ToX;
		HX_STACK_LINE(62)
		this->_toY = ToY;
		HX_STACK_LINE(64)
		if ((UseDuration)){
			HX_STACK_LINE(65)
			this->duration = DurationOrSpeed;
		}
		else{
			HX_STACK_LINE(69)
			this->duration = (Float(this->get_distance()) / Float(DurationOrSpeed));
		}
		HX_STACK_LINE(73)
		this->ease = Ease;
		HX_STACK_LINE(74)
		this->start();
		HX_STACK_LINE(76)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC9(QuadMotion_obj,setMotion,return )

::flixel::util::FlxPoint QuadMotion_obj::point;

::flixel::util::FlxPoint QuadMotion_obj::point2;


QuadMotion_obj::QuadMotion_obj()
{
}

void QuadMotion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QuadMotion);
	HX_MARK_MEMBER_NAME(_controlY,"_controlY");
	HX_MARK_MEMBER_NAME(_controlX,"_controlX");
	HX_MARK_MEMBER_NAME(_toY,"_toY");
	HX_MARK_MEMBER_NAME(_toX,"_toX");
	HX_MARK_MEMBER_NAME(_fromY,"_fromY");
	HX_MARK_MEMBER_NAME(_fromX,"_fromX");
	HX_MARK_MEMBER_NAME(_distance,"_distance");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void QuadMotion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_controlY,"_controlY");
	HX_VISIT_MEMBER_NAME(_controlX,"_controlX");
	HX_VISIT_MEMBER_NAME(_toY,"_toY");
	HX_VISIT_MEMBER_NAME(_toX,"_toX");
	HX_VISIT_MEMBER_NAME(_fromY,"_fromY");
	HX_VISIT_MEMBER_NAME(_fromX,"_fromX");
	HX_VISIT_MEMBER_NAME(_distance,"_distance");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic QuadMotion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_toY") ) { return _toY; }
		if (HX_FIELD_EQ(inName,"_toX") ) { return _toX; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { return point; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"point2") ) { return point2; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_fromY") ) { return _fromY; }
		if (HX_FIELD_EQ(inName,"_fromX") ) { return _fromX; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return get_distance(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"_controlY") ) { return _controlY; }
		if (HX_FIELD_EQ(inName,"_controlX") ) { return _controlX; }
		if (HX_FIELD_EQ(inName,"_distance") ) { return _distance; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_distance") ) { return get_distance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QuadMotion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_toY") ) { _toY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toX") ) { _toX=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"point2") ) { point2=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fromY") ) { _fromY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fromX") ) { _fromX=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_controlY") ) { _controlY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_controlX") ) { _controlX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_distance") ) { _distance=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QuadMotion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_controlY"));
	outFields->push(HX_CSTRING("_controlX"));
	outFields->push(HX_CSTRING("_toY"));
	outFields->push(HX_CSTRING("_toX"));
	outFields->push(HX_CSTRING("_fromY"));
	outFields->push(HX_CSTRING("_fromX"));
	outFields->push(HX_CSTRING("_distance"));
	outFields->push(HX_CSTRING("distance"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("point"),
	HX_CSTRING("point2"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_distance"),
	HX_CSTRING("update"),
	HX_CSTRING("setMotion"),
	HX_CSTRING("_controlY"),
	HX_CSTRING("_controlX"),
	HX_CSTRING("_toY"),
	HX_CSTRING("_toX"),
	HX_CSTRING("_fromY"),
	HX_CSTRING("_fromX"),
	HX_CSTRING("_distance"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuadMotion_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(QuadMotion_obj::point,"point");
	HX_MARK_MEMBER_NAME(QuadMotion_obj::point2,"point2");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadMotion_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(QuadMotion_obj::point,"point");
	HX_VISIT_MEMBER_NAME(QuadMotion_obj::point2,"point2");
};

Class QuadMotion_obj::__mClass;

void QuadMotion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.motion.QuadMotion"), hx::TCanCast< QuadMotion_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void QuadMotion_obj::__boot()
{
	point= ::flixel::util::FlxPoint_obj::__new(null(),null());
	point2= ::flixel::util::FlxPoint_obj::__new(null(),null());
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion
