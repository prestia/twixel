#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#include <flixel/tweens/motion/CubicMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
namespace flixel{
namespace tweens{
namespace motion{

Void CubicMotion_obj::__construct(Dynamic complete,hx::Null< int >  __o_type)
{
HX_STACK_PUSH("CubicMotion::new","flixel/tweens/motion/CubicMotion.hx",28);
int type = __o_type.Default(0);
{
	HX_STACK_LINE(29)
	this->_fromX = this->_fromY = this->_toX = this->_toY = (int)0;
	HX_STACK_LINE(30)
	this->_aX = this->_aY = this->_bX = this->_bY = (int)0;
	HX_STACK_LINE(31)
	super::__construct((int)0,complete,type,null());
}
;
	return null();
}

CubicMotion_obj::~CubicMotion_obj() { }

Dynamic CubicMotion_obj::__CreateEmpty() { return  new CubicMotion_obj; }
hx::ObjectPtr< CubicMotion_obj > CubicMotion_obj::__new(Dynamic complete,hx::Null< int >  __o_type)
{  hx::ObjectPtr< CubicMotion_obj > result = new CubicMotion_obj();
	result->__construct(complete,__o_type);
	return result;}

Dynamic CubicMotion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CubicMotion_obj > result = new CubicMotion_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void CubicMotion_obj::update( ){
{
		HX_STACK_PUSH("CubicMotion::update","flixel/tweens/motion/CubicMotion.hx",65);
		HX_STACK_THIS(this);
		HX_STACK_LINE(66)
		this->super::update();
		HX_STACK_LINE(67)
		this->x = ((((((this->scale * this->scale) * this->scale) * (((this->_toX + ((int)3 * ((this->_aX - this->_bX)))) - this->_fromX))) + ((((int)3 * this->scale) * this->scale) * (((this->_fromX - ((int)2 * this->_aX)) + this->_bX)))) + (((int)3 * this->scale) * ((this->_aX - this->_fromX)))) + this->_fromX);
		HX_STACK_LINE(68)
		this->y = ((((((this->scale * this->scale) * this->scale) * (((this->_toY + ((int)3 * ((this->_aY - this->_bY)))) - this->_fromY))) + ((((int)3 * this->scale) * this->scale) * (((this->_fromY - ((int)2 * this->_aY)) + this->_bY)))) + (((int)3 * this->scale) * ((this->_aY - this->_fromY)))) + this->_fromY);
		HX_STACK_LINE(69)
		if ((this->finished)){
			HX_STACK_LINE(70)
			this->postUpdate();
		}
	}
return null();
}


::flixel::tweens::motion::CubicMotion CubicMotion_obj::setMotion( Float fromX,Float fromY,Float aX,Float aY,Float bX,Float bY,Float toX,Float toY,Float duration,Dynamic ease){
	HX_STACK_PUSH("CubicMotion::setMotion","flixel/tweens/motion/CubicMotion.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_ARG(fromX,"fromX");
	HX_STACK_ARG(fromY,"fromY");
	HX_STACK_ARG(aX,"aX");
	HX_STACK_ARG(aY,"aY");
	HX_STACK_ARG(bX,"bX");
	HX_STACK_ARG(bY,"bY");
	HX_STACK_ARG(toX,"toX");
	HX_STACK_ARG(toY,"toY");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(ease,"ease");
	HX_STACK_LINE(50)
	this->x = this->_fromX = fromX;
	HX_STACK_LINE(51)
	this->y = this->_fromY = fromY;
	HX_STACK_LINE(52)
	this->_aX = aX;
	HX_STACK_LINE(53)
	this->_aY = aY;
	HX_STACK_LINE(54)
	this->_bX = bX;
	HX_STACK_LINE(55)
	this->_bY = bY;
	HX_STACK_LINE(56)
	this->_toX = toX;
	HX_STACK_LINE(57)
	this->_toY = toY;
	HX_STACK_LINE(58)
	this->duration = duration;
	HX_STACK_LINE(59)
	this->ease = ease;
	HX_STACK_LINE(60)
	this->start();
	HX_STACK_LINE(61)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC10(CubicMotion_obj,setMotion,return )


CubicMotion_obj::CubicMotion_obj()
{
}

void CubicMotion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CubicMotion);
	HX_MARK_MEMBER_NAME(_tt,"_tt");
	HX_MARK_MEMBER_NAME(_ttt,"_ttt");
	HX_MARK_MEMBER_NAME(_bY,"_bY");
	HX_MARK_MEMBER_NAME(_bX,"_bX");
	HX_MARK_MEMBER_NAME(_aY,"_aY");
	HX_MARK_MEMBER_NAME(_aX,"_aX");
	HX_MARK_MEMBER_NAME(_toY,"_toY");
	HX_MARK_MEMBER_NAME(_toX,"_toX");
	HX_MARK_MEMBER_NAME(_fromY,"_fromY");
	HX_MARK_MEMBER_NAME(_fromX,"_fromX");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CubicMotion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tt,"_tt");
	HX_VISIT_MEMBER_NAME(_ttt,"_ttt");
	HX_VISIT_MEMBER_NAME(_bY,"_bY");
	HX_VISIT_MEMBER_NAME(_bX,"_bX");
	HX_VISIT_MEMBER_NAME(_aY,"_aY");
	HX_VISIT_MEMBER_NAME(_aX,"_aX");
	HX_VISIT_MEMBER_NAME(_toY,"_toY");
	HX_VISIT_MEMBER_NAME(_toX,"_toX");
	HX_VISIT_MEMBER_NAME(_fromY,"_fromY");
	HX_VISIT_MEMBER_NAME(_fromX,"_fromX");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic CubicMotion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_tt") ) { return _tt; }
		if (HX_FIELD_EQ(inName,"_bY") ) { return _bY; }
		if (HX_FIELD_EQ(inName,"_bX") ) { return _bX; }
		if (HX_FIELD_EQ(inName,"_aY") ) { return _aY; }
		if (HX_FIELD_EQ(inName,"_aX") ) { return _aX; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_ttt") ) { return _ttt; }
		if (HX_FIELD_EQ(inName,"_toY") ) { return _toY; }
		if (HX_FIELD_EQ(inName,"_toX") ) { return _toX; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_fromY") ) { return _fromY; }
		if (HX_FIELD_EQ(inName,"_fromX") ) { return _fromX; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CubicMotion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_tt") ) { _tt=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bY") ) { _bY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bX") ) { _bX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_aY") ) { _aY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_aX") ) { _aX=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_ttt") ) { _ttt=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toY") ) { _toY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toX") ) { _toX=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_fromY") ) { _fromY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fromX") ) { _fromX=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CubicMotion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_tt"));
	outFields->push(HX_CSTRING("_ttt"));
	outFields->push(HX_CSTRING("_bY"));
	outFields->push(HX_CSTRING("_bX"));
	outFields->push(HX_CSTRING("_aY"));
	outFields->push(HX_CSTRING("_aX"));
	outFields->push(HX_CSTRING("_toY"));
	outFields->push(HX_CSTRING("_toX"));
	outFields->push(HX_CSTRING("_fromY"));
	outFields->push(HX_CSTRING("_fromX"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("setMotion"),
	HX_CSTRING("_tt"),
	HX_CSTRING("_ttt"),
	HX_CSTRING("_bY"),
	HX_CSTRING("_bX"),
	HX_CSTRING("_aY"),
	HX_CSTRING("_aX"),
	HX_CSTRING("_toY"),
	HX_CSTRING("_toX"),
	HX_CSTRING("_fromY"),
	HX_CSTRING("_fromX"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubicMotion_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubicMotion_obj::__mClass,"__mClass");
};

Class CubicMotion_obj::__mClass;

void CubicMotion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.motion.CubicMotion"), hx::TCanCast< CubicMotion_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CubicMotion_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion
