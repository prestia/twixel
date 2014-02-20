#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_plugin_FlxPlugin
#include <flixel/plugin/FlxPlugin.h>
#endif
#ifndef INCLUDED_flixel_plugin_TweenManager
#include <flixel/plugin/TweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
namespace flixel{
namespace plugin{

Void TweenManager_obj::__construct()
{
HX_STACK_PUSH("TweenManager::new","flixel/plugin/TweenManager.hx",17);
{
	HX_STACK_LINE(18)
	super::__construct();
	HX_STACK_LINE(19)
	this->list = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(20)
	this->set_visible(false);
}
;
	return null();
}

TweenManager_obj::~TweenManager_obj() { }

Dynamic TweenManager_obj::__CreateEmpty() { return  new TweenManager_obj; }
hx::ObjectPtr< TweenManager_obj > TweenManager_obj::__new()
{  hx::ObjectPtr< TweenManager_obj > result = new TweenManager_obj();
	result->__construct();
	return result;}

Dynamic TweenManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TweenManager_obj > result = new TweenManager_obj();
	result->__construct();
	return result;}

Void TweenManager_obj::onStateSwitch( ){
{
		HX_STACK_PUSH("TweenManager::onStateSwitch","flixel/plugin/TweenManager.hx",121);
		HX_STACK_THIS(this);
		HX_STACK_LINE(121)
		this->clear(true);
	}
return null();
}


Void TweenManager_obj::clear( hx::Null< bool >  __o_Destroy){
bool Destroy = __o_Destroy.Default(false);
	HX_STACK_PUSH("TweenManager::clear","flixel/plugin/TweenManager.hx",112);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Destroy,"Destroy");
{
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(113)
			while(((_g < _g1->length))){
				HX_STACK_LINE(113)
				::flixel::tweens::FlxTween tween = _g1->__get(_g).StaticCast< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(tween,"tween");
				HX_STACK_LINE(113)
				++(_g);
				HX_STACK_LINE(115)
				this->remove(tween,Destroy);
			}
		}
		HX_STACK_LINE(117)
		this->list = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TweenManager_obj,clear,(void))

::flixel::tweens::FlxTween TweenManager_obj::remove( ::flixel::tweens::FlxTween Tween,hx::Null< bool >  __o_Destroy){
bool Destroy = __o_Destroy.Default(false);
	HX_STACK_PUSH("TweenManager::remove","flixel/plugin/TweenManager.hx",89);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Tween,"Tween");
	HX_STACK_ARG(Destroy,"Destroy");
{
		HX_STACK_LINE(90)
		if (((Tween == null()))){
			HX_STACK_LINE(91)
			return null();
		}
		HX_STACK_LINE(95)
		if ((Destroy)){
			HX_STACK_LINE(96)
			Tween->destroy();
		}
		HX_STACK_LINE(100)
		Tween->active = false;
		HX_STACK_LINE(102)
		::flixel::util::FlxArrayUtil_obj::fastSplice_flixel_tweens_FlxTween(this->list,Tween);
		HX_STACK_LINE(104)
		return Tween;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenManager_obj,remove,return )

::flixel::tweens::FlxTween TweenManager_obj::add( ::flixel::tweens::FlxTween Tween,hx::Null< bool >  __o_Start){
bool Start = __o_Start.Default(false);
	HX_STACK_PUSH("TweenManager::add","flixel/plugin/TweenManager.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Tween,"Tween");
	HX_STACK_ARG(Start,"Start");
{
		HX_STACK_LINE(62)
		if (((Tween == null()))){
			HX_STACK_LINE(63)
			return null();
		}
		HX_STACK_LINE(68)
		if (((::flixel::util::FlxArrayUtil_obj::indexOf_flixel_tweens_FlxTween(this->list,Tween,null()) > (int)0))){
			HX_STACK_LINE(69)
			return Tween;
		}
		HX_STACK_LINE(73)
		this->list->push(Tween);
		HX_STACK_LINE(75)
		if ((Start)){
			HX_STACK_LINE(76)
			Tween->start();
		}
		HX_STACK_LINE(79)
		return Tween;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenManager_obj,add,return )

Void TweenManager_obj::update( ){
{
		HX_STACK_PUSH("TweenManager::update","flixel/plugin/TweenManager.hx",24);
		HX_STACK_THIS(this);
		HX_STACK_LINE(26)
		Array< ::Dynamic > finishedTweens = null();		HX_STACK_VAR(finishedTweens,"finishedTweens");
		HX_STACK_LINE(28)
		{
			HX_STACK_LINE(28)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(28)
			while(((_g < _g1->length))){
				HX_STACK_LINE(28)
				::flixel::tweens::FlxTween tween = _g1->__get(_g).StaticCast< ::flixel::tweens::FlxTween >();		HX_STACK_VAR(tween,"tween");
				HX_STACK_LINE(28)
				++(_g);
				HX_STACK_LINE(30)
				if ((tween->active)){
					HX_STACK_LINE(32)
					tween->update();
					HX_STACK_LINE(33)
					if ((tween->finished)){
						HX_STACK_LINE(35)
						if (((finishedTweens == null()))){
							HX_STACK_LINE(36)
							finishedTweens = Array_obj< ::Dynamic >::__new();
						}
						HX_STACK_LINE(39)
						finishedTweens->push(tween);
					}
				}
			}
		}
		HX_STACK_LINE(44)
		if (((finishedTweens != null()))){
			HX_STACK_LINE(45)
			while(((finishedTweens->length > (int)0))){
				HX_STACK_LINE(47)
				finishedTweens->shift().StaticCast< ::flixel::tweens::FlxTween >()->finish();
			}
		}
	}
return null();
}



TweenManager_obj::TweenManager_obj()
{
}

void TweenManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TweenManager);
	HX_MARK_MEMBER_NAME(list,"list");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TweenManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TweenManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { return onStateSwitch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TweenManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TweenManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("list"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onStateSwitch"),
	HX_CSTRING("clear"),
	HX_CSTRING("remove"),
	HX_CSTRING("add"),
	HX_CSTRING("update"),
	HX_CSTRING("list"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TweenManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TweenManager_obj::__mClass,"__mClass");
};

Class TweenManager_obj::__mClass;

void TweenManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.plugin.TweenManager"), hx::TCanCast< TweenManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TweenManager_obj::__boot()
{
}

} // end namespace flixel
} // end namespace plugin
