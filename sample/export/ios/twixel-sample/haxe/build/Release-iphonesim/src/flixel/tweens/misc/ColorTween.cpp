#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
namespace flixel{
namespace tweens{
namespace misc{

Void ColorTween_obj::__construct(Dynamic Complete,hx::Null< int >  __o_type)
{
HX_STACK_PUSH("ColorTween::new","flixel/tweens/misc/ColorTween.hx",11);
int type = __o_type.Default(0);
{
	HX_STACK_LINE(14)
	this->alpha = (int)1;
	HX_STACK_LINE(49)
	super::__construct((int)0,type,Complete,null());
}
;
	return null();
}

ColorTween_obj::~ColorTween_obj() { }

Dynamic ColorTween_obj::__CreateEmpty() { return  new ColorTween_obj; }
hx::ObjectPtr< ColorTween_obj > ColorTween_obj::__new(Dynamic Complete,hx::Null< int >  __o_type)
{  hx::ObjectPtr< ColorTween_obj > result = new ColorTween_obj();
	result->__construct(Complete,__o_type);
	return result;}

Dynamic ColorTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorTween_obj > result = new ColorTween_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void ColorTween_obj::update( ){
{
		HX_STACK_PUSH("ColorTween::update","flixel/tweens/misc/ColorTween.hx",95);
		HX_STACK_THIS(this);
		HX_STACK_LINE(96)
		this->super::update();
		HX_STACK_LINE(97)
		this->alpha = (this->_startA + (this->_rangeA * this->scale));
		HX_STACK_LINE(98)
		this->red = ::Std_obj::_int((((this->_startR + (this->_rangeR * this->scale))) * (int)255));
		HX_STACK_LINE(99)
		this->green = ::Std_obj::_int((((this->_startG + (this->_rangeG * this->scale))) * (int)255));
		HX_STACK_LINE(100)
		this->blue = ::Std_obj::_int((((this->_startB + (this->_rangeB * this->scale))) * (int)255));
		HX_STACK_LINE(101)
		this->color = (int((int((int(this->red) << int((int)16))) | int((int(this->green) << int((int)8))))) | int(this->blue));
		HX_STACK_LINE(103)
		if (((this->sprite != null()))){
			HX_STACK_LINE(105)
			this->sprite->set_color(this->color);
			HX_STACK_LINE(106)
			this->sprite->set_alpha(this->alpha);
		}
	}
return null();
}


::flixel::tweens::misc::ColorTween ColorTween_obj::tween( Float Duration,int FromColor,int ToColor,hx::Null< Float >  __o_FromAlpha,hx::Null< Float >  __o_ToAlpha,Dynamic Ease,::flixel::FlxSprite Sprite){
Float FromAlpha = __o_FromAlpha.Default(1);
Float ToAlpha = __o_ToAlpha.Default(1);
	HX_STACK_PUSH("ColorTween::tween","flixel/tweens/misc/ColorTween.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(FromColor,"FromColor");
	HX_STACK_ARG(ToColor,"ToColor");
	HX_STACK_ARG(FromAlpha,"FromAlpha");
	HX_STACK_ARG(ToAlpha,"ToAlpha");
	HX_STACK_ARG(Ease,"Ease");
	HX_STACK_ARG(Sprite,"Sprite");
{
		HX_STACK_LINE(73)
		hx::AndEq(FromColor,(int)16777215);
		HX_STACK_LINE(74)
		hx::AndEq(ToColor,(int)16777215);
		HX_STACK_LINE(75)
		this->color = FromColor;
		HX_STACK_LINE(76)
		this->red = (int((int(FromColor) >> int((int)16))) & int((int)255));
		HX_STACK_LINE(77)
		this->green = (int((int(FromColor) >> int((int)8))) & int((int)255));
		HX_STACK_LINE(78)
		this->blue = (int(FromColor) & int((int)255));
		HX_STACK_LINE(79)
		this->_startR = (Float(this->red) / Float((int)255));
		HX_STACK_LINE(80)
		this->_startG = (Float(this->green) / Float((int)255));
		HX_STACK_LINE(81)
		this->_startB = (Float(this->blue) / Float((int)255));
		HX_STACK_LINE(82)
		this->_rangeR = ((Float(((int((int(ToColor) >> int((int)16))) & int((int)255)))) / Float((int)255)) - this->_startR);
		HX_STACK_LINE(83)
		this->_rangeG = ((Float(((int((int(ToColor) >> int((int)8))) & int((int)255)))) / Float((int)255)) - this->_startG);
		HX_STACK_LINE(84)
		this->_rangeB = ((Float(((int(ToColor) & int((int)255)))) / Float((int)255)) - this->_startB);
		HX_STACK_LINE(85)
		this->_startA = this->alpha = FromAlpha;
		HX_STACK_LINE(86)
		this->_rangeA = (ToAlpha - this->alpha);
		HX_STACK_LINE(87)
		this->duration = Duration;
		HX_STACK_LINE(88)
		this->ease = Ease;
		HX_STACK_LINE(89)
		this->sprite = Sprite;
		HX_STACK_LINE(90)
		this->start();
		HX_STACK_LINE(91)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(ColorTween_obj,tween,return )

Void ColorTween_obj::destroy( ){
{
		HX_STACK_PUSH("ColorTween::destroy","flixel/tweens/misc/ColorTween.hx",54);
		HX_STACK_THIS(this);
		HX_STACK_LINE(55)
		this->super::destroy();
		HX_STACK_LINE(56)
		this->sprite = null();
	}
return null();
}



ColorTween_obj::ColorTween_obj()
{
}

void ColorTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorTween);
	HX_MARK_MEMBER_NAME(_rangeB,"_rangeB");
	HX_MARK_MEMBER_NAME(_rangeG,"_rangeG");
	HX_MARK_MEMBER_NAME(_rangeR,"_rangeR");
	HX_MARK_MEMBER_NAME(_rangeA,"_rangeA");
	HX_MARK_MEMBER_NAME(_startB,"_startB");
	HX_MARK_MEMBER_NAME(_startG,"_startG");
	HX_MARK_MEMBER_NAME(_startR,"_startR");
	HX_MARK_MEMBER_NAME(_startA,"_startA");
	HX_MARK_MEMBER_NAME(blue,"blue");
	HX_MARK_MEMBER_NAME(green,"green");
	HX_MARK_MEMBER_NAME(red,"red");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(color,"color");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_rangeB,"_rangeB");
	HX_VISIT_MEMBER_NAME(_rangeG,"_rangeG");
	HX_VISIT_MEMBER_NAME(_rangeR,"_rangeR");
	HX_VISIT_MEMBER_NAME(_rangeA,"_rangeA");
	HX_VISIT_MEMBER_NAME(_startB,"_startB");
	HX_VISIT_MEMBER_NAME(_startG,"_startG");
	HX_VISIT_MEMBER_NAME(_startR,"_startR");
	HX_VISIT_MEMBER_NAME(_startA,"_startA");
	HX_VISIT_MEMBER_NAME(blue,"blue");
	HX_VISIT_MEMBER_NAME(green,"green");
	HX_VISIT_MEMBER_NAME(red,"red");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(color,"color");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ColorTween_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"red") ) { return red; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blue") ) { return blue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		if (HX_FIELD_EQ(inName,"green") ) { return green; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_rangeB") ) { return _rangeB; }
		if (HX_FIELD_EQ(inName,"_rangeG") ) { return _rangeG; }
		if (HX_FIELD_EQ(inName,"_rangeR") ) { return _rangeR; }
		if (HX_FIELD_EQ(inName,"_rangeA") ) { return _rangeA; }
		if (HX_FIELD_EQ(inName,"_startB") ) { return _startB; }
		if (HX_FIELD_EQ(inName,"_startG") ) { return _startG; }
		if (HX_FIELD_EQ(inName,"_startR") ) { return _startR; }
		if (HX_FIELD_EQ(inName,"_startA") ) { return _startA; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"red") ) { red=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blue") ) { blue=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"green") ) { green=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_rangeB") ) { _rangeB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rangeG") ) { _rangeG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rangeR") ) { _rangeR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rangeA") ) { _rangeA=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startB") ) { _startB=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startG") ) { _startG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startR") ) { _startR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startA") ) { _startA=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_rangeB"));
	outFields->push(HX_CSTRING("_rangeG"));
	outFields->push(HX_CSTRING("_rangeR"));
	outFields->push(HX_CSTRING("_rangeA"));
	outFields->push(HX_CSTRING("_startB"));
	outFields->push(HX_CSTRING("_startG"));
	outFields->push(HX_CSTRING("_startR"));
	outFields->push(HX_CSTRING("_startA"));
	outFields->push(HX_CSTRING("blue"));
	outFields->push(HX_CSTRING("green"));
	outFields->push(HX_CSTRING("red"));
	outFields->push(HX_CSTRING("sprite"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("color"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("tween"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_rangeB"),
	HX_CSTRING("_rangeG"),
	HX_CSTRING("_rangeR"),
	HX_CSTRING("_rangeA"),
	HX_CSTRING("_startB"),
	HX_CSTRING("_startG"),
	HX_CSTRING("_startR"),
	HX_CSTRING("_startA"),
	HX_CSTRING("blue"),
	HX_CSTRING("green"),
	HX_CSTRING("red"),
	HX_CSTRING("sprite"),
	HX_CSTRING("alpha"),
	HX_CSTRING("color"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorTween_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorTween_obj::__mClass,"__mClass");
};

Class ColorTween_obj::__mClass;

void ColorTween_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tweens.misc.ColorTween"), hx::TCanCast< ColorTween_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ColorTween_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tweens
} // end namespace misc
