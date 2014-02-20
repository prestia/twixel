#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CircularMotion
#include <flixel/tweens/motion/CircularMotion.h>
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

Void CircularMotion_obj::__construct(Dynamic complete,hx::Null< int >  __o_type)
{
HX_STACK_PUSH("CircularMotion::new","flixel/tweens/motion/CircularMotion.hx",33);
int type = __o_type.Default(0);
{
	HX_STACK_LINE(34)
	this->_centerX = this->_centerY = (int)0;
	HX_STACK_LINE(35)
	this->_radius = this->angle = (int)0;
	HX_STACK_LINE(36)
	this->_angleStart = this->_angleFinish = (int)0;
	HX_STACK_LINE(37)
	super::__construct((int)0,complete,type,null());
}
;
	return null();
}

CircularMotion_obj::~CircularMotion_obj() { }

Dynamic CircularMotion_obj::__CreateEmpty() { return  new CircularMotion_obj; }
hx::ObjectPtr< CircularMotion_obj > CircularMotion_obj::__new(Dynamic complete,hx::Null< int >  __o_type)
{  hx::ObjectPtr< CircularMotion_obj > result = new CircularMotion_obj();
	result->__construct(complete,__o_type);
	return result;}

Dynamic CircularMotion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CircularMotion_obj > result = new CircularMotion_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Float CircularMotion_obj::get_circumference( ){
	HX_STACK_PUSH("CircularMotion::get_circumference","flixel/tweens/motion/CircularMotion.hx",87);
	HX_STACK_THIS(this);
	HX_STACK_LINE(87)
	return (this->_radius * ((::Math_obj::PI * (int)2)));
}


HX_DEFINE_DYNAMIC_FUNC0(CircularMotion_obj,get_circumference,return )

Void CircularMotion_obj::update( ){
{
		HX_STACK_PUSH("CircularMotion::update","flixel/tweens/motion/CircularMotion.hx",75);
		HX_STACK_THIS(this);
		HX_STACK_LINE(76)
		this->super::update();
		HX_STACK_LINE(77)
		this->angle = (this->_angleStart + (this->_angleFinish * this->scale));
		HX_STACK_LINE(78)
		this->x = (this->_centerX + (::Math_obj::cos(this->angle) * this->_radius));
		HX_STACK_LINE(79)
		this->y = (this->_centerY + (::Math_obj::sin(this->angle) * this->_radius));
		HX_STACK_LINE(80)
		if ((this->finished)){
			HX_STACK_LINE(81)
			this->postUpdate();
		}
	}
return null();
}


::flixel::tweens::motion::CircularMotion CircularMotion_obj::setMotion( Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration,Dynamic Ease){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_PUSH("CircularMotion::setMotion","flixel/tweens/motion/CircularMotion.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_ARG(CenterX,"CenterX");
	HX_STACK_ARG(CenterY,"CenterY");
	HX_STACK_ARG(Radius,"Radius");
	HX_STACK_ARG(Angle,"Angle");
	HX_STACK_ARG(Clockwise,"Clockwise");
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed");
	HX_STACK_ARG(UseDuration,"UseDuration");
	HX_STACK_ARG(Ease,"Ease");
{
		HX_STACK_LINE(54)
		this->_centerX = CenterX;
		HX_STACK_LINE(55)
		this->_centerY = CenterY;
		HX_STACK_LINE(56)
		this->_radius = Radius;
		HX_STACK_LINE(57)
		this->angle = this->_angleStart = (Float((Angle * ::Math_obj::PI)) / Float((int)-180));
		HX_STACK_LINE(58)
		this->_angleFinish = ((::Math_obj::PI * (int)2) * ((  ((Clockwise)) ? int((int)1) : int((int)-1) )));
		HX_STACK_LINE(60)
		if ((UseDuration)){
			HX_STACK_LINE(61)
			this->duration = DurationOrSpeed;
		}
		else{
			HX_STACK_LINE(65)
			this->duration = (Float((this->_radius * ((::Math_obj::PI * (int)2)))) / Float(DurationOrSpeed));
		}
		HX_STACK_LINE(69)
		this->ease = Ease;
		HX_STACK_LINE(70)
		this->start();
		HX_STACK_LINE(71)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC8(CircularMotion_obj,setMotion,return )


CircularMotion_obj::CircularMotion_obj()
{
}

void CircularMotion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CircularMotion);
	HX_MARK_MEMBER_NAME(_angleFinish,"_angleFinish");
	HX_MARK_MEMBER_NAME(_angleStart,"_angleStart");
	HX_MARK_MEMBER_NAME(_radius,"_radius");
	HX_MARK_MEMBER_NAME(_centerY,"_centerY");
	HX_MARK_MEMBER_NAME(_centerX,"_centerX");
	HX_MARK_MEMBER_NAME(angle,"angle");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CircularMotion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_angleFinish,"_angleFinish");
	HX_VISIT_MEMBER_NAME(_angleStart,"_angleStart");
	HX_VISIT_MEMBER_NAME(_radius,"_radius");
	HX_VISIT_MEMBER_NAME(_centerY,"_centerY");
	HX_VISIT_MEMBER_NAME(_centerX,"_centerX");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic CircularMotion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { return _radius; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_centerY") ) { return _centerY; }
		if (HX_FIELD_EQ(inName,"_centerX") ) { return _centerX; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_angleStart") ) { return _angleStart; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_angleFinish") ) { return _angleFinish; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"circumference") ) { return get_circumference(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_circumference") ) { return get_circumference_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CircularMotion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_centerY") ) { _centerY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_centerX") ) { _centerX=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_angleStart") ) { _angleStart=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_angleFinish") ) { _angleFinish=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CircularMotion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_angleFinish"));
	outFields->push(HX_CSTRING("_angleStart"));
	outFields->push(HX_CSTRING("_radius"));
	outFields->push(HX_CSTRING("_centerY"));
	outFields->push(HX_CSTRING("_centerX"));
	outFields->push(HX_CSTRING("circumference"));
	outFields->push(HX_CSTRING("angle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_circumference"),
	HX_CSTRING("update"),
	HX_CSTRING("setMotion"),
	HX_CSTRING("_angleFinish"),
	HX_CSTRING("_angleStart"),
	HX_CSTRING("_radius"),
	HX_CSTRING("_centerY"),
	HX_CSTRING("_centerX"),
	HX_CSTRING("angle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CircularMotion_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CircularMotion_obj::__mClass,"__mClass");
};

Class CircularMotion_obj::__mClass;

void CircularMotion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.motion.CircularMotion"), hx::TCanCast< CircularMotion_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CircularMotion_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion
