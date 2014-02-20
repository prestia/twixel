#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_MultiVarTween
#include <flixel/tweens/misc/MultiVarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace tweens{
namespace misc{

Void MultiVarTween_obj::__construct(Dynamic complete,hx::Null< int >  __o_type)
{
HX_STACK_PUSH("MultiVarTween::new","flixel/tweens/misc/MultiVarTween.hx",25);
int type = __o_type.Default(0);
{
	HX_STACK_LINE(26)
	this->_vars = Array_obj< ::String >::__new();
	HX_STACK_LINE(27)
	this->_start = Array_obj< Float >::__new();
	HX_STACK_LINE(28)
	this->_range = Array_obj< Float >::__new();
	HX_STACK_LINE(30)
	super::__construct((int)0,type,complete,null());
}
;
	return null();
}

MultiVarTween_obj::~MultiVarTween_obj() { }

Dynamic MultiVarTween_obj::__CreateEmpty() { return  new MultiVarTween_obj; }
hx::ObjectPtr< MultiVarTween_obj > MultiVarTween_obj::__new(Dynamic complete,hx::Null< int >  __o_type)
{  hx::ObjectPtr< MultiVarTween_obj > result = new MultiVarTween_obj();
	result->__construct(complete,__o_type);
	return result;}

Dynamic MultiVarTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MultiVarTween_obj > result = new MultiVarTween_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void MultiVarTween_obj::initialize( ){
{
		HX_STACK_PUSH("MultiVarTween::initialize","flixel/tweens/misc/MultiVarTween.hx",87);
		HX_STACK_THIS(this);
		HX_STACK_LINE(88)
		::String p;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(89)
		Array< ::String > fields;		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(91)
		if ((::Reflect_obj::isObject(this->_properties))){
			HX_STACK_LINE(92)
			fields = ::Reflect_obj::fields(this->_properties);
		}
		else{
			HX_STACK_LINE(96)
			hx::Throw (HX_CSTRING("Unsupported MultiVar properties container - use Object containing key/value pairs."));
		}
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(100)
			while(((_g < fields->length))){
				HX_STACK_LINE(100)
				::String p1 = fields->__get(_g);		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(100)
				++(_g);
				struct _Function_3_1{
					inline static Dynamic Block( ::flixel::tweens::misc::MultiVarTween_obj *__this,::String &p1){
						HX_STACK_PUSH("*::closure","flixel/tweens/misc/MultiVarTween.hx",102);
						{
							HX_STACK_LINE(102)
							Dynamic o = __this->_object;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(102)
							return (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(p1,true)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(102)
				if (((_Function_3_1::Block(this,p1) == null()))){
					HX_STACK_LINE(103)
					hx::Throw (((HX_CSTRING("The Object does not have the property \"") + p1) + HX_CSTRING("\", or it is not accessible.")));
				}
				struct _Function_3_2{
					inline static Dynamic Block( ::flixel::tweens::misc::MultiVarTween_obj *__this,::String &p1){
						HX_STACK_PUSH("*::closure","flixel/tweens/misc/MultiVarTween.hx",107);
						{
							HX_STACK_LINE(107)
							Dynamic o = __this->_object;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(107)
							return (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(p1,true)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(107)
				Dynamic a = _Function_3_2::Block(this,p1);		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(109)
				if ((::Math_obj::isNaN(a))){
					HX_STACK_LINE(110)
					hx::Throw (((HX_CSTRING("The property \"") + p1) + HX_CSTRING("\" is not numeric.")));
				}
				HX_STACK_LINE(113)
				this->_vars->push(p1);
				HX_STACK_LINE(114)
				this->_start->push(a);
				struct _Function_3_3{
					inline static Dynamic Block( ::flixel::tweens::misc::MultiVarTween_obj *__this,::String &p1){
						HX_STACK_PUSH("*::closure","flixel/tweens/misc/MultiVarTween.hx",115);
						{
							HX_STACK_LINE(115)
							Dynamic o = __this->_properties;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(115)
							return (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(p1,true)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(115)
				this->_range->push((_Function_3_3::Block(this,p1) - a));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MultiVarTween_obj,initialize,(void))

Void MultiVarTween_obj::update( ){
{
		HX_STACK_PUSH("MultiVarTween::update","flixel/tweens/misc/MultiVarTween.hx",67);
		HX_STACK_THIS(this);
		HX_STACK_LINE(68)
		if (((this->_vars->length < (int)1))){
			HX_STACK_LINE(69)
			this->initialize();
		}
		HX_STACK_LINE(75)
		this->super::update();
		HX_STACK_LINE(76)
		int i = this->_vars->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(77)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(78)
			if (((this->_object != null()))){
				HX_STACK_LINE(81)
				Dynamic o = this->_object;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(81)
				if (((o != null()))){
					HX_STACK_LINE(81)
					o->__SetField(this->_vars->__get(i),(this->_start->__get(i) + (this->_range->__get(i) * this->scale)),true);
				}
			}
		}
	}
return null();
}


::flixel::tweens::misc::MultiVarTween MultiVarTween_obj::tween( Dynamic object,Dynamic properties,Float duration,Dynamic ease){
	HX_STACK_PUSH("MultiVarTween::tween","flixel/tweens/misc/MultiVarTween.hx",52);
	HX_STACK_THIS(this);
	HX_STACK_ARG(object,"object");
	HX_STACK_ARG(properties,"properties");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(ease,"ease");
	HX_STACK_LINE(53)
	this->_object = object;
	HX_STACK_LINE(54)
	this->_properties = properties;
	HX_STACK_LINE(55)
	this->duration = duration;
	HX_STACK_LINE(56)
	this->ease = ease;
	HX_STACK_LINE(58)
	::flixel::util::FlxArrayUtil_obj::setLength_String(this->_vars,(int)0);
	HX_STACK_LINE(59)
	::flixel::util::FlxArrayUtil_obj::setLength_Float(this->_start,(int)0);
	HX_STACK_LINE(60)
	::flixel::util::FlxArrayUtil_obj::setLength_Float(this->_range,(int)0);
	HX_STACK_LINE(62)
	this->start();
	HX_STACK_LINE(63)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(MultiVarTween_obj,tween,return )

Void MultiVarTween_obj::destroy( ){
{
		HX_STACK_PUSH("MultiVarTween::destroy","flixel/tweens/misc/MultiVarTween.hx",34);
		HX_STACK_THIS(this);
		HX_STACK_LINE(35)
		this->super::destroy();
		HX_STACK_LINE(36)
		this->_object = null();
		HX_STACK_LINE(37)
		this->_properties = null();
		HX_STACK_LINE(38)
		this->_vars = null();
		HX_STACK_LINE(39)
		this->_start = null();
		HX_STACK_LINE(40)
		this->_range = null();
	}
return null();
}



MultiVarTween_obj::MultiVarTween_obj()
{
}

void MultiVarTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MultiVarTween);
	HX_MARK_MEMBER_NAME(_range,"_range");
	HX_MARK_MEMBER_NAME(_start,"_start");
	HX_MARK_MEMBER_NAME(_vars,"_vars");
	HX_MARK_MEMBER_NAME(_properties,"_properties");
	HX_MARK_MEMBER_NAME(_object,"_object");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MultiVarTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_range,"_range");
	HX_VISIT_MEMBER_NAME(_start,"_start");
	HX_VISIT_MEMBER_NAME(_vars,"_vars");
	HX_VISIT_MEMBER_NAME(_properties,"_properties");
	HX_VISIT_MEMBER_NAME(_object,"_object");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic MultiVarTween_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		if (HX_FIELD_EQ(inName,"_vars") ) { return _vars; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_range") ) { return _range; }
		if (HX_FIELD_EQ(inName,"_start") ) { return _start; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_object") ) { return _object; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_properties") ) { return _properties; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MultiVarTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_vars") ) { _vars=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_range") ) { _range=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_start") ) { _start=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_properties") ) { _properties=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MultiVarTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_range"));
	outFields->push(HX_CSTRING("_start"));
	outFields->push(HX_CSTRING("_vars"));
	outFields->push(HX_CSTRING("_properties"));
	outFields->push(HX_CSTRING("_object"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("initialize"),
	HX_CSTRING("update"),
	HX_CSTRING("tween"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_range"),
	HX_CSTRING("_start"),
	HX_CSTRING("_vars"),
	HX_CSTRING("_properties"),
	HX_CSTRING("_object"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MultiVarTween_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MultiVarTween_obj::__mClass,"__mClass");
};

Class MultiVarTween_obj::__mClass;

void MultiVarTween_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.misc.MultiVarTween"), hx::TCanCast< MultiVarTween_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MultiVarTween_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
} // end namespace misc
