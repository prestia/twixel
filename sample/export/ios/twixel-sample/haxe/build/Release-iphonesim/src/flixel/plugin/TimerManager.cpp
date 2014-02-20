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
#ifndef INCLUDED_flixel_plugin_TimerManager
#include <flixel/plugin/TimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
namespace flixel{
namespace plugin{

Void TimerManager_obj::__construct()
{
HX_STACK_PUSH("TimerManager::new","flixel/plugin/TimerManager.hx",18);
{
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(21)
	this->_timers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(24)
	this->set_visible(false);
}
;
	return null();
}

TimerManager_obj::~TimerManager_obj() { }

Dynamic TimerManager_obj::__CreateEmpty() { return  new TimerManager_obj; }
hx::ObjectPtr< TimerManager_obj > TimerManager_obj::__new()
{  hx::ObjectPtr< TimerManager_obj > result = new TimerManager_obj();
	result->__construct();
	return result;}

Dynamic TimerManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TimerManager_obj > result = new TimerManager_obj();
	result->__construct();
	return result;}

Void TimerManager_obj::onStateSwitch( ){
{
		HX_STACK_PUSH("TimerManager::onStateSwitch","flixel/plugin/TimerManager.hx",97);
		HX_STACK_THIS(this);
		HX_STACK_LINE(97)
		this->clear();
	}
return null();
}


Void TimerManager_obj::clear( ){
{
		HX_STACK_PUSH("TimerManager::clear","flixel/plugin/TimerManager.hx",88);
		HX_STACK_THIS(this);
		HX_STACK_LINE(88)
		while(((this->_timers->length > (int)0))){
			HX_STACK_LINE(91)
			::flixel::util::FlxTimer timer = this->_timers->pop().StaticCast< ::flixel::util::FlxTimer >();		HX_STACK_VAR(timer,"timer");
			HX_STACK_LINE(92)
			::flixel::util::FlxTimer_obj::put(timer);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TimerManager_obj,clear,(void))

Void TimerManager_obj::remove( ::flixel::util::FlxTimer Timer,hx::Null< bool >  __o_ReturnInPool){
bool ReturnInPool = __o_ReturnInPool.Default(true);
	HX_STACK_PUSH("TimerManager::remove","flixel/plugin/TimerManager.hx",75);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Timer,"Timer");
	HX_STACK_ARG(ReturnInPool,"ReturnInPool");
{
		HX_STACK_LINE(76)
		::flixel::util::FlxArrayUtil_obj::fastSplice_flixel_util_FlxTimer(this->_timers,Timer);
		HX_STACK_LINE(78)
		if ((ReturnInPool)){
			HX_STACK_LINE(79)
			::flixel::util::FlxTimer_obj::put(Timer);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TimerManager_obj,remove,(void))

Void TimerManager_obj::add( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_PUSH("TimerManager::add","flixel/plugin/TimerManager.hx",60);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Timer,"Timer");
		HX_STACK_LINE(60)
		if (((::flixel::util::FlxArrayUtil_obj::indexOf_flixel_util_FlxTimer(this->_timers,Timer,null()) < (int)0))){
			HX_STACK_LINE(62)
			this->_timers->push(Timer);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TimerManager_obj,add,(void))

Void TimerManager_obj::update( ){
{
		HX_STACK_PUSH("TimerManager::update","flixel/plugin/TimerManager.hx",43);
		HX_STACK_THIS(this);
		HX_STACK_LINE(44)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->_timers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(44)
		while(((_g < _g1->length))){
			HX_STACK_LINE(44)
			::flixel::util::FlxTimer timer = _g1->__get(_g).StaticCast< ::flixel::util::FlxTimer >();		HX_STACK_VAR(timer,"timer");
			HX_STACK_LINE(44)
			++(_g);
			HX_STACK_LINE(46)
			if (((bool((bool(!(timer->paused)) && bool(!(timer->finished)))) && bool((timer->time > (int)0))))){
				HX_STACK_LINE(47)
				timer->update();
			}
		}
	}
return null();
}


Void TimerManager_obj::destroy( ){
{
		HX_STACK_PUSH("TimerManager::destroy","flixel/plugin/TimerManager.hx",31);
		HX_STACK_THIS(this);
		HX_STACK_LINE(32)
		this->clear();
		HX_STACK_LINE(33)
		this->_timers = null();
		HX_STACK_LINE(35)
		this->super::destroy();
	}
return null();
}



TimerManager_obj::TimerManager_obj()
{
}

void TimerManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TimerManager);
	HX_MARK_MEMBER_NAME(_timers,"_timers");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TimerManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_timers,"_timers");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TimerManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_timers") ) { return _timers; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { return onStateSwitch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TimerManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_timers") ) { _timers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TimerManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_timers"));
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
	HX_CSTRING("destroy"),
	HX_CSTRING("_timers"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimerManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimerManager_obj::__mClass,"__mClass");
};

Class TimerManager_obj::__mClass;

void TimerManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.plugin.TimerManager"), hx::TCanCast< TimerManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TimerManager_obj::__boot()
{
}

} // end namespace flixel
} // end namespace plugin
