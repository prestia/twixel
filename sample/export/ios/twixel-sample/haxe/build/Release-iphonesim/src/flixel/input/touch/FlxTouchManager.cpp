#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_events_TouchEvent
#include <flash/events/TouchEvent.h>
#endif
#ifndef INCLUDED_flash_ui_Multitouch
#include <flash/ui/Multitouch.h>
#endif
#ifndef INCLUDED_flash_ui_MultitouchInputMode
#include <flash/ui/MultitouchInputMode.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
namespace flixel{
namespace input{
namespace touch{

Void FlxTouchManager_obj::__construct()
{
HX_STACK_PUSH("FlxTouchManager::new","flixel/input/touch/FlxTouchManager.hx",160);
{
	HX_STACK_LINE(161)
	this->list = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(162)
	this->_inactiveTouches = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(163)
	this->_touchesCache = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(164)
	::flixel::input::touch::FlxTouchManager_obj::maxTouchPoints = ::flash::ui::Multitouch_obj::maxTouchPoints;
	HX_STACK_LINE(165)
	::flash::ui::Multitouch_obj::set_inputMode(::flash::ui::MultitouchInputMode_obj::TOUCH_POINT);
	HX_STACK_LINE(167)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::TouchEvent_obj::TOUCH_BEGIN,this->handleTouchBegin_dyn(),null(),null(),null());
	HX_STACK_LINE(168)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::TouchEvent_obj::TOUCH_END,this->handleTouchEnd_dyn(),null(),null(),null());
	HX_STACK_LINE(169)
	::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::TouchEvent_obj::TOUCH_MOVE,this->handleTouchMove_dyn(),null(),null(),null());
}
;
	return null();
}

FlxTouchManager_obj::~FlxTouchManager_obj() { }

Dynamic FlxTouchManager_obj::__CreateEmpty() { return  new FlxTouchManager_obj; }
hx::ObjectPtr< FlxTouchManager_obj > FlxTouchManager_obj::__new()
{  hx::ObjectPtr< FlxTouchManager_obj > result = new FlxTouchManager_obj();
	result->__construct();
	return result;}

Dynamic FlxTouchManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTouchManager_obj > result = new FlxTouchManager_obj();
	result->__construct();
	return result;}

hx::Object *FlxTouchManager_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxInput_obj)) return operator ::flixel::interfaces::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

Void FlxTouchManager_obj::onFocusLost( ){
{
		HX_STACK_PUSH("FlxTouchManager::onFocusLost","flixel/input/touch/FlxTouchManager.hx",303);
		HX_STACK_THIS(this);
		HX_STACK_LINE(303)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,onFocusLost,(void))

Void FlxTouchManager_obj::onFocus( ){
{
		HX_STACK_PUSH("FlxTouchManager::onFocus","flixel/input/touch/FlxTouchManager.hx",300);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,onFocus,(void))

Void FlxTouchManager_obj::update( ){
{
		HX_STACK_PUSH("FlxTouchManager::update","flixel/input/touch/FlxTouchManager.hx",275);
		HX_STACK_THIS(this);
		HX_STACK_LINE(276)
		int i = (this->list->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(277)
		::flixel::input::touch::FlxTouch touch;		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(279)
		while(((i >= (int)0))){
			HX_STACK_LINE(281)
			touch = this->list->__get(i).StaticCast< ::flixel::input::touch::FlxTouch >();
			HX_STACK_LINE(284)
			if (((touch->_current == (int)0))){
				HX_STACK_LINE(286)
				touch->deactivate();
				HX_STACK_LINE(287)
				this->_touchesCache->remove(touch->touchPointID);
				HX_STACK_LINE(288)
				this->list->splice(i,(int)1);
				HX_STACK_LINE(289)
				this->_inactiveTouches->push(touch);
			}
			else{
				HX_STACK_LINE(292)
				touch->update();
			}
			HX_STACK_LINE(296)
			(i)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,update,(void))

::flixel::input::touch::FlxTouch FlxTouchManager_obj::recycle( Float X,Float Y,int PointID){
	HX_STACK_PUSH("FlxTouchManager::recycle","flixel/input/touch/FlxTouchManager.hx",259);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(PointID,"PointID");
	HX_STACK_LINE(260)
	if (((this->_inactiveTouches->length > (int)0))){
		HX_STACK_LINE(262)
		::flixel::input::touch::FlxTouch touch = this->_inactiveTouches->pop().StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(263)
		touch->reset(X,Y,PointID);
		HX_STACK_LINE(264)
		return this->add(touch);
	}
	HX_STACK_LINE(267)
	return this->add(::flixel::input::touch::FlxTouch_obj::__new(X,Y,PointID));
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTouchManager_obj,recycle,return )

::flixel::input::touch::FlxTouch FlxTouchManager_obj::add( ::flixel::input::touch::FlxTouch Touch){
	HX_STACK_PUSH("FlxTouchManager::add","flixel/input/touch/FlxTouchManager.hx",244);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Touch,"Touch");
	HX_STACK_LINE(245)
	this->list->push(Touch);
	HX_STACK_LINE(246)
	this->_touchesCache->set(Touch->touchPointID,Touch);
	HX_STACK_LINE(247)
	return Touch;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,add,return )

Void FlxTouchManager_obj::handleTouchMove( ::flash::events::TouchEvent FlashEvent){
{
		HX_STACK_PUSH("FlxTouchManager::handleTouchMove","flixel/input/touch/FlxTouchManager.hx",228);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(229)
		::flixel::input::touch::FlxTouch touch = this->_touchesCache->get(FlashEvent->touchPointID);		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(231)
		if (((touch != null()))){
			HX_STACK_LINE(232)
			touch->updatePosition(FlashEvent->stageX,FlashEvent->stageY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchMove,(void))

Void FlxTouchManager_obj::handleTouchEnd( ::flash::events::TouchEvent FlashEvent){
{
		HX_STACK_PUSH("FlxTouchManager::handleTouchEnd","flixel/input/touch/FlxTouchManager.hx",206);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(207)
		::flixel::input::touch::FlxTouch touch = this->_touchesCache->get(FlashEvent->touchPointID);		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(209)
		if (((touch != null()))){
			HX_STACK_LINE(210)
			if (((touch->_current > (int)0))){
				HX_STACK_LINE(212)
				touch->_current = (int)-1;
			}
			else{
				HX_STACK_LINE(216)
				touch->_current = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchEnd,(void))

Void FlxTouchManager_obj::handleTouchBegin( ::flash::events::TouchEvent FlashEvent){
{
		HX_STACK_PUSH("FlxTouchManager::handleTouchBegin","flixel/input/touch/FlxTouchManager.hx",178);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(179)
		::flixel::input::touch::FlxTouch touch = this->_touchesCache->get(FlashEvent->touchPointID);		HX_STACK_VAR(touch,"touch");
		HX_STACK_LINE(180)
		if (((touch != null()))){
			HX_STACK_LINE(182)
			touch->updatePosition(FlashEvent->stageX,FlashEvent->stageY);
			HX_STACK_LINE(184)
			if (((touch->_current > (int)0))){
				HX_STACK_LINE(185)
				touch->_current = (int)1;
			}
			else{
				HX_STACK_LINE(189)
				touch->_current = (int)2;
			}
		}
		else{
			HX_STACK_LINE(195)
			touch = this->recycle(FlashEvent->stageX,FlashEvent->stageY,FlashEvent->touchPointID);
			HX_STACK_LINE(196)
			touch->_current = (int)2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,handleTouchBegin,(void))

Void FlxTouchManager_obj::reset( ){
{
		HX_STACK_PUSH("FlxTouchManager::reset","flixel/input/touch/FlxTouchManager.hx",143);
		HX_STACK_THIS(this);
		HX_STACK_LINE(144)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(this->_touchesCache->keys());  __it->hasNext(); ){
			int key = __it->next();
			this->_touchesCache->remove(key);
		}
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(149)
			while(((_g < _g1->length))){
				HX_STACK_LINE(149)
				::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(149)
				++(_g);
				HX_STACK_LINE(151)
				touch->deactivate();
				HX_STACK_LINE(152)
				this->_inactiveTouches->push(touch);
			}
		}
		HX_STACK_LINE(155)
		this->list->splice((int)0,this->list->length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,reset,(void))

Array< ::Dynamic > FlxTouchManager_obj::justReleased( Array< ::Dynamic > TouchArray){
	HX_STACK_PUSH("FlxTouchManager::justReleased","flixel/input/touch/FlxTouchManager.hx",116);
	HX_STACK_THIS(this);
	HX_STACK_ARG(TouchArray,"TouchArray");
	HX_STACK_LINE(117)
	if (((TouchArray == null()))){
		HX_STACK_LINE(118)
		TouchArray = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(122)
	int touchLen = TouchArray->length;		HX_STACK_VAR(touchLen,"touchLen");
	HX_STACK_LINE(123)
	if (((touchLen > (int)0))){
		HX_STACK_LINE(124)
		TouchArray->splice((int)0,touchLen);
	}
	HX_STACK_LINE(128)
	{
		HX_STACK_LINE(128)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(128)
		while(((_g < _g1->length))){
			HX_STACK_LINE(128)
			::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(128)
			++(_g);
			HX_STACK_LINE(130)
			if (((touch->_current == (int)-1))){
				HX_STACK_LINE(131)
				TouchArray->push(touch);
			}
		}
	}
	HX_STACK_LINE(136)
	return TouchArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,justReleased,return )

Array< ::Dynamic > FlxTouchManager_obj::justStarted( Array< ::Dynamic > TouchArray){
	HX_STACK_PUSH("FlxTouchManager::justStarted","flixel/input/touch/FlxTouchManager.hx",85);
	HX_STACK_THIS(this);
	HX_STACK_ARG(TouchArray,"TouchArray");
	HX_STACK_LINE(86)
	if (((TouchArray == null()))){
		HX_STACK_LINE(87)
		TouchArray = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(91)
	int touchLen = TouchArray->length;		HX_STACK_VAR(touchLen,"touchLen");
	HX_STACK_LINE(93)
	if (((touchLen > (int)0))){
		HX_STACK_LINE(94)
		TouchArray->splice((int)0,touchLen);
	}
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(98)
		while(((_g < _g1->length))){
			HX_STACK_LINE(98)
			::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
			HX_STACK_LINE(98)
			++(_g);
			HX_STACK_LINE(100)
			if (((touch->_current == (int)2))){
				HX_STACK_LINE(101)
				TouchArray->push(touch);
			}
		}
	}
	HX_STACK_LINE(106)
	return TouchArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,justStarted,return )

Void FlxTouchManager_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTouchManager::destroy","flixel/input/touch/FlxTouchManager.hx",62);
		HX_STACK_THIS(this);
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(63)
			while(((_g < _g1->length))){
				HX_STACK_LINE(63)
				::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(63)
				++(_g);
				HX_STACK_LINE(65)
				touch->destroy();
			}
		}
		HX_STACK_LINE(67)
		this->list = null();
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_inactiveTouches;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(69)
			while(((_g < _g1->length))){
				HX_STACK_LINE(69)
				::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(69)
				++(_g);
				HX_STACK_LINE(71)
				touch->destroy();
			}
		}
		HX_STACK_LINE(73)
		this->_inactiveTouches = null();
		HX_STACK_LINE(75)
		this->_touchesCache = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,destroy,(void))

::flixel::input::touch::FlxTouch FlxTouchManager_obj::getFirst( ){
	HX_STACK_PUSH("FlxTouchManager::getFirst","flixel/input/touch/FlxTouchManager.hx",47);
	HX_STACK_THIS(this);
	HX_STACK_LINE(47)
	if (((this->list->__get((int)0).StaticCast< ::flixel::input::touch::FlxTouch >() != null()))){
		HX_STACK_LINE(49)
		return this->list->__get((int)0).StaticCast< ::flixel::input::touch::FlxTouch >();
	}
	else{
		HX_STACK_LINE(53)
		return null();
	}
	HX_STACK_LINE(47)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTouchManager_obj,getFirst,return )

::flixel::input::touch::FlxTouch FlxTouchManager_obj::getByID( int TouchPointID){
	HX_STACK_PUSH("FlxTouchManager::getByID","flixel/input/touch/FlxTouchManager.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_ARG(TouchPointID,"TouchPointID");
	HX_STACK_LINE(39)
	return this->_touchesCache->get(TouchPointID);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTouchManager_obj,getByID,return )

int FlxTouchManager_obj::maxTouchPoints;


FlxTouchManager_obj::FlxTouchManager_obj()
{
}

void FlxTouchManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTouchManager);
	HX_MARK_MEMBER_NAME(_touchesCache,"_touchesCache");
	HX_MARK_MEMBER_NAME(_inactiveTouches,"_inactiveTouches");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void FlxTouchManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_touchesCache,"_touchesCache");
	HX_VISIT_MEMBER_NAME(_inactiveTouches,"_inactiveTouches");
	HX_VISIT_MEMBER_NAME(list,"list");
}

Dynamic FlxTouchManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"getByID") ) { return getByID_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFirst") ) { return getFirst_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"justStarted") ) { return justStarted_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchesCache") ) { return _touchesCache; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { return maxTouchPoints; }
		if (HX_FIELD_EQ(inName,"handleTouchEnd") ) { return handleTouchEnd_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handleTouchMove") ) { return handleTouchMove_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handleTouchBegin") ) { return handleTouchBegin_dyn(); }
		if (HX_FIELD_EQ(inName,"_inactiveTouches") ) { return _inactiveTouches; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTouchManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_touchesCache") ) { _touchesCache=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxTouchPoints") ) { maxTouchPoints=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_inactiveTouches") ) { _inactiveTouches=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTouchManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_touchesCache"));
	outFields->push(HX_CSTRING("_inactiveTouches"));
	outFields->push(HX_CSTRING("list"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("maxTouchPoints"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("update"),
	HX_CSTRING("recycle"),
	HX_CSTRING("add"),
	HX_CSTRING("handleTouchMove"),
	HX_CSTRING("handleTouchEnd"),
	HX_CSTRING("handleTouchBegin"),
	HX_CSTRING("reset"),
	HX_CSTRING("justReleased"),
	HX_CSTRING("justStarted"),
	HX_CSTRING("destroy"),
	HX_CSTRING("getFirst"),
	HX_CSTRING("getByID"),
	HX_CSTRING("_touchesCache"),
	HX_CSTRING("_inactiveTouches"),
	HX_CSTRING("list"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTouchManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTouchManager_obj::maxTouchPoints,"maxTouchPoints");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTouchManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTouchManager_obj::maxTouchPoints,"maxTouchPoints");
};

Class FlxTouchManager_obj::__mClass;

void FlxTouchManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.touch.FlxTouchManager"), hx::TCanCast< FlxTouchManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTouchManager_obj::__boot()
{
	maxTouchPoints= (int)0;
}

} // end namespace flixel
} // end namespace input
} // end namespace touch
