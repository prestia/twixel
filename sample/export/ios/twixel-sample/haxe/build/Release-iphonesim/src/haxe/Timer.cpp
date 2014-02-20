#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_lime_utils_Libs
#include <lime/utils/Libs.h>
#endif
namespace haxe{

Void Timer_obj::__construct(Float _time)
{
HX_STACK_PUSH("Timer::new","haxe/Timer.hx",13);
{
	HX_STACK_LINE(15)
	this->time = _time;
	HX_STACK_LINE(16)
	::haxe::Timer_obj::sRunningTimers->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(17)
	this->fire_at = (::haxe::Timer_obj::GetMS() + this->time);
	HX_STACK_LINE(18)
	this->running = true;
}
;
	return null();
}

Timer_obj::~Timer_obj() { }

Dynamic Timer_obj::__CreateEmpty() { return  new Timer_obj; }
hx::ObjectPtr< Timer_obj > Timer_obj::__new(Float _time)
{  hx::ObjectPtr< Timer_obj > result = new Timer_obj();
	result->__construct(_time);
	return result;}

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Timer_obj > result = new Timer_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Timer_obj::stop( ){
{
		HX_STACK_PUSH("Timer::stop","haxe/Timer.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_LINE(32)
		if ((this->running)){
			HX_STACK_LINE(35)
			this->running = false;
			HX_STACK_LINE(36)
			::haxe::Timer_obj::sRunningTimers->remove(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stop,(void))

HX_BEGIN_DEFAULT_FUNC(__default_run,Timer_obj)
Void run(){
{
		HX_STACK_PUSH("Timer::run","haxe/Timer.hx",30);
		HX_STACK_THIS(this);
	}
return null();
}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

Array< ::Dynamic > Timer_obj::sRunningTimers;

Dynamic Timer_obj::measure( Dynamic f,Dynamic pos){
	HX_STACK_PUSH("Timer::measure","haxe/Timer.hx",22);
	HX_STACK_ARG(f,"f");
	HX_STACK_ARG(pos,"pos");
	HX_STACK_LINE(23)
	Float t0 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(t0,"t0");
	HX_STACK_LINE(24)
	Dynamic r = f();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(25)
	::haxe::Log_obj::trace(((::haxe::Timer_obj::stamp() - t0) + HX_CSTRING("s")),pos);
	HX_STACK_LINE(26)
	return r;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,measure,return )

Float Timer_obj::__nextWake( Float limit){
	HX_STACK_PUSH("Timer::__nextWake","haxe/Timer.hx",45);
	HX_STACK_ARG(limit,"limit");
	HX_STACK_LINE(47)
	Float now = (::haxe::Timer_obj::lime_time_stamp() * 1000.0);		HX_STACK_VAR(now,"now");
	HX_STACK_LINE(48)
	Float sleep;		HX_STACK_VAR(sleep,"sleep");
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = ::haxe::Timer_obj::sRunningTimers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(50)
		while(((_g < _g1->length))){
			HX_STACK_LINE(50)
			::haxe::Timer timer = _g1->__get(_g).StaticCast< ::haxe::Timer >();		HX_STACK_VAR(timer,"timer");
			HX_STACK_LINE(50)
			++(_g);
			HX_STACK_LINE(52)
			sleep = (timer->fire_at - now);
			HX_STACK_LINE(54)
			if (((sleep < limit))){
				HX_STACK_LINE(55)
				limit = sleep;
				HX_STACK_LINE(56)
				if (((limit < (int)0))){
					HX_STACK_LINE(56)
					return (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(63)
	return (limit * 0.001);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Timer_obj,__nextWake,return )

Void Timer_obj::__checkTimers( ){
{
		HX_STACK_PUSH("Timer::__checkTimers","haxe/Timer.hx",70);
		HX_STACK_LINE(72)
		Float now = ::haxe::Timer_obj::GetMS();		HX_STACK_VAR(now,"now");
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::haxe::Timer_obj::sRunningTimers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(74)
			while(((_g < _g1->length))){
				HX_STACK_LINE(74)
				::haxe::Timer timer = _g1->__get(_g).StaticCast< ::haxe::Timer >();		HX_STACK_VAR(timer,"timer");
				HX_STACK_LINE(74)
				++(_g);
				HX_STACK_LINE(75)
				if ((timer->running)){
					HX_STACK_LINE(75)
					if (((now >= timer->fire_at))){
						HX_STACK_LINE(77)
						hx::AddEq(timer->fire_at,timer->time);
						HX_STACK_LINE(78)
						timer->run();
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,__checkTimers,(void))

Float Timer_obj::GetMS( ){
	HX_STACK_PUSH("Timer::GetMS","haxe/Timer.hx",86);
	HX_STACK_LINE(86)
	return (::haxe::Timer_obj::stamp() * 1000.0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,GetMS,return )

::haxe::Timer Timer_obj::delay( Dynamic _f,int _time){
	HX_STACK_PUSH("Timer::delay","haxe/Timer.hx",92);
	HX_STACK_ARG(_f,"_f");
	HX_STACK_ARG(_time,"_time");
	HX_STACK_LINE(92)
	Dynamic _f1 = Dynamic( Array_obj<Dynamic>::__new().Add(_f));		HX_STACK_VAR(_f1,"_f1");
	HX_STACK_LINE(94)
	Array< ::Dynamic > t = Array_obj< ::Dynamic >::__new().Add(::haxe::Timer_obj::__new(_time));		HX_STACK_VAR(t,"t");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,t,Dynamic,_f1)
	Void run(){
		HX_STACK_PUSH("*::_Function_1_1","haxe/Timer.hx",95);
		{
			HX_STACK_LINE(96)
			t->__get((int)0).StaticCast< ::haxe::Timer >()->stop();
			HX_STACK_LINE(97)
			_f1->__GetItem((int)0)().Cast< Void >();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(95)
	t->__get((int)0).StaticCast< ::haxe::Timer >()->run =  Dynamic(new _Function_1_1(t,_f1));
	HX_STACK_LINE(100)
	return t->__get((int)0).StaticCast< ::haxe::Timer >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,delay,return )

Float Timer_obj::stamp( ){
	HX_STACK_PUSH("Timer::stamp","haxe/Timer.hx",105);
	HX_STACK_LINE(105)
	return ::haxe::Timer_obj::lime_time_stamp();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stamp,return )

Dynamic Timer_obj::lime_time_stamp;


Timer_obj::Timer_obj()
{
	run = new __default_run(this);
}

void Timer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timer);
	HX_MARK_MEMBER_NAME(run,"run");
	HX_MARK_MEMBER_NAME(running,"running");
	HX_MARK_MEMBER_NAME(fire_at,"fire_at");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_END_CLASS();
}

void Timer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(run,"run");
	HX_VISIT_MEMBER_NAME(running,"running");
	HX_VISIT_MEMBER_NAME(fire_at,"fire_at");
	HX_VISIT_MEMBER_NAME(time,"time");
}

Dynamic Timer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"GetMS") ) { return GetMS_dyn(); }
		if (HX_FIELD_EQ(inName,"delay") ) { return delay_dyn(); }
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"measure") ) { return measure_dyn(); }
		if (HX_FIELD_EQ(inName,"running") ) { return running; }
		if (HX_FIELD_EQ(inName,"fire_at") ) { return fire_at; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__nextWake") ) { return __nextWake_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__checkTimers") ) { return __checkTimers_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sRunningTimers") ) { return sRunningTimers; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_time_stamp") ) { return lime_time_stamp; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Timer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { run=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"running") ) { running=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fire_at") ) { fire_at=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sRunningTimers") ) { sRunningTimers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_time_stamp") ) { lime_time_stamp=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("running"));
	outFields->push(HX_CSTRING("fire_at"));
	outFields->push(HX_CSTRING("time"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("sRunningTimers"),
	HX_CSTRING("measure"),
	HX_CSTRING("__nextWake"),
	HX_CSTRING("__checkTimers"),
	HX_CSTRING("GetMS"),
	HX_CSTRING("delay"),
	HX_CSTRING("stamp"),
	HX_CSTRING("lime_time_stamp"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("stop"),
	HX_CSTRING("run"),
	HX_CSTRING("running"),
	HX_CSTRING("fire_at"),
	HX_CSTRING("time"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Timer_obj::sRunningTimers,"sRunningTimers");
	HX_MARK_MEMBER_NAME(Timer_obj::lime_time_stamp,"lime_time_stamp");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Timer_obj::sRunningTimers,"sRunningTimers");
	HX_VISIT_MEMBER_NAME(Timer_obj::lime_time_stamp,"lime_time_stamp");
};

Class Timer_obj::__mClass;

void Timer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.Timer"), hx::TCanCast< Timer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Timer_obj::__boot()
{
	sRunningTimers= Array_obj< ::Dynamic >::__new();
	lime_time_stamp= ::lime::utils::Libs_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_time_stamp"),(int)0);
}

} // end namespace haxe
