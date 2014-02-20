#include <hxcpp.h>

#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_net_SharedObject
#include <flash/net/SharedObject.h>
#endif
#ifndef INCLUDED_flash_net_SharedObjectFlushStatus
#include <flash/net/SharedObjectFlushStatus.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
namespace flixel{
namespace util{

Void FlxSave_obj::__construct()
{
HX_STACK_PUSH("FlxSave::new","flixel/util/FlxSave.hx",51);
{
	HX_STACK_LINE(51)
	this->destroy();
}
;
	return null();
}

FlxSave_obj::~FlxSave_obj() { }

Dynamic FlxSave_obj::__CreateEmpty() { return  new FlxSave_obj; }
hx::ObjectPtr< FlxSave_obj > FlxSave_obj::__new()
{  hx::ObjectPtr< FlxSave_obj > result = new FlxSave_obj();
	result->__construct();
	return result;}

Dynamic FlxSave_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSave_obj > result = new FlxSave_obj();
	result->__construct();
	return result;}

bool FlxSave_obj::checkBinding( ){
	HX_STACK_PUSH("FlxSave::checkBinding","flixel/util/FlxSave.hx",208);
	HX_STACK_THIS(this);
	HX_STACK_LINE(209)
	if (((this->_sharedObject == null()))){
		HX_STACK_LINE(210)
		return false;
	}
	HX_STACK_LINE(214)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,checkBinding,return )

bool FlxSave_obj::onDone( int Result){
	HX_STACK_PUSH("FlxSave::onDone","flixel/util/FlxSave.hx",183);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Result,"Result");
	HX_STACK_LINE(184)
	int _switch_1 = (Result);
	if (  ( _switch_1==::flixel::util::FlxSave_obj::PENDING)){
		HX_STACK_LINE(186)
		Dynamic();
	}
	else if (  ( _switch_1==::flixel::util::FlxSave_obj::ERROR)){
		HX_STACK_LINE(188)
		Dynamic();
	}
	HX_STACK_LINE(192)
	if (((this->_onComplete_dyn() != null()))){
		HX_STACK_LINE(193)
		this->_onComplete((Result == ::flixel::util::FlxSave_obj::SUCCESS));
	}
	HX_STACK_LINE(196)
	if ((this->_closeRequested)){
		HX_STACK_LINE(197)
		this->destroy();
	}
	HX_STACK_LINE(200)
	return (Result == ::flixel::util::FlxSave_obj::SUCCESS);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,onDone,return )

bool FlxSave_obj::erase( ){
	HX_STACK_PUSH("FlxSave::erase","flixel/util/FlxSave.hx",155);
	HX_STACK_THIS(this);
	HX_STACK_LINE(156)
	if ((!(this->checkBinding()))){
		HX_STACK_LINE(157)
		return false;
	}
	HX_STACK_LINE(160)
	this->_sharedObject->clear();
	HX_STACK_LINE(161)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,erase,return )

bool FlxSave_obj::flush( hx::Null< int >  __o_MinFileSize,Dynamic OnComplete){
int MinFileSize = __o_MinFileSize.Default(0);
	HX_STACK_PUSH("FlxSave::flush","flixel/util/FlxSave.hx",111);
	HX_STACK_THIS(this);
	HX_STACK_ARG(MinFileSize,"MinFileSize");
	HX_STACK_ARG(OnComplete,"OnComplete");
{
		HX_STACK_LINE(112)
		if ((!(this->checkBinding()))){
			HX_STACK_LINE(113)
			return false;
		}
		HX_STACK_LINE(116)
		this->_onComplete = OnComplete;
		HX_STACK_LINE(120)
		::flash::net::SharedObjectFlushStatus result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(122)
		try{
			HX_STACK_LINE(123)
			result = this->_sharedObject->flush(MinFileSize);
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::flash::errors::Error >() ){
				HX_STACK_BEGIN_CATCH
				::flash::errors::Error e = __e;{
					HX_STACK_LINE(130)
					return this->onDone(::flixel::util::FlxSave_obj::ERROR);
				}
			}
			else throw(__e);
		}
		HX_STACK_LINE(134)
		if (((result == ::flash::net::SharedObjectFlushStatus_obj::PENDING))){
		}
		HX_STACK_LINE(144)
		return this->onDone((  (((result == ::flash::net::SharedObjectFlushStatus_obj::FLUSHED))) ? int(::flixel::util::FlxSave_obj::SUCCESS) : int(::flixel::util::FlxSave_obj::PENDING) ));
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSave_obj,flush,return )

bool FlxSave_obj::close( hx::Null< int >  __o_MinFileSize,Dynamic OnComplete){
int MinFileSize = __o_MinFileSize.Default(0);
	HX_STACK_PUSH("FlxSave::close","flixel/util/FlxSave.hx",99);
	HX_STACK_THIS(this);
	HX_STACK_ARG(MinFileSize,"MinFileSize");
	HX_STACK_ARG(OnComplete,"OnComplete");
{
		HX_STACK_LINE(100)
		this->_closeRequested = true;
		HX_STACK_LINE(101)
		return this->flush(MinFileSize,OnComplete);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSave_obj,close,return )

bool FlxSave_obj::bind( ::String Name){
	HX_STACK_PUSH("FlxSave::bind","flixel/util/FlxSave.hx",73);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Name,"Name");
	HX_STACK_LINE(74)
	this->destroy();
	HX_STACK_LINE(75)
	this->name = Name;
	HX_STACK_LINE(76)
	try{
		HX_STACK_LINE(77)
		this->_sharedObject = ::flash::net::SharedObject_obj::getLocal(this->name,null(),null());
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::flash::errors::Error >() ){
			HX_STACK_BEGIN_CATCH
			::flash::errors::Error e = __e;{
				HX_STACK_LINE(83)
				this->destroy();
				HX_STACK_LINE(84)
				return false;
			}
		}
		else throw(__e);
	}
	HX_STACK_LINE(86)
	this->data = this->_sharedObject->data;
	HX_STACK_LINE(87)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSave_obj,bind,return )

Void FlxSave_obj::destroy( ){
{
		HX_STACK_PUSH("FlxSave::destroy","flixel/util/FlxSave.hx",59);
		HX_STACK_THIS(this);
		HX_STACK_LINE(60)
		this->_sharedObject = null();
		HX_STACK_LINE(61)
		this->name = null();
		HX_STACK_LINE(62)
		this->data = null();
		HX_STACK_LINE(63)
		this->_onComplete = null();
		HX_STACK_LINE(64)
		this->_closeRequested = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSave_obj,destroy,(void))

int FlxSave_obj::SUCCESS;

int FlxSave_obj::PENDING;

int FlxSave_obj::ERROR;


FlxSave_obj::FlxSave_obj()
{
}

void FlxSave_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSave);
	HX_MARK_MEMBER_NAME(_closeRequested,"_closeRequested");
	HX_MARK_MEMBER_NAME(_onComplete,"_onComplete");
	HX_MARK_MEMBER_NAME(_sharedObject,"_sharedObject");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void FlxSave_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_closeRequested,"_closeRequested");
	HX_VISIT_MEMBER_NAME(_onComplete,"_onComplete");
	HX_VISIT_MEMBER_NAME(_sharedObject,"_sharedObject");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(data,"data");
}

Dynamic FlxSave_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ERROR") ) { return ERROR; }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onDone") ) { return onDone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"SUCCESS") ) { return SUCCESS; }
		if (HX_FIELD_EQ(inName,"PENDING") ) { return PENDING; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { return _onComplete; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkBinding") ) { return checkBinding_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sharedObject") ) { return _sharedObject; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_closeRequested") ) { return _closeRequested; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSave_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ERROR") ) { ERROR=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"SUCCESS") ) { SUCCESS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PENDING") ) { PENDING=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { _onComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_sharedObject") ) { _sharedObject=inValue.Cast< ::flash::net::SharedObject >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_closeRequested") ) { _closeRequested=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSave_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_closeRequested"));
	outFields->push(HX_CSTRING("_sharedObject"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("data"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SUCCESS"),
	HX_CSTRING("PENDING"),
	HX_CSTRING("ERROR"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("checkBinding"),
	HX_CSTRING("onDone"),
	HX_CSTRING("erase"),
	HX_CSTRING("flush"),
	HX_CSTRING("close"),
	HX_CSTRING("bind"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_closeRequested"),
	HX_CSTRING("_onComplete"),
	HX_CSTRING("_sharedObject"),
	HX_CSTRING("name"),
	HX_CSTRING("data"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSave_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxSave_obj::SUCCESS,"SUCCESS");
	HX_MARK_MEMBER_NAME(FlxSave_obj::PENDING,"PENDING");
	HX_MARK_MEMBER_NAME(FlxSave_obj::ERROR,"ERROR");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSave_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxSave_obj::SUCCESS,"SUCCESS");
	HX_VISIT_MEMBER_NAME(FlxSave_obj::PENDING,"PENDING");
	HX_VISIT_MEMBER_NAME(FlxSave_obj::ERROR,"ERROR");
};

Class FlxSave_obj::__mClass;

void FlxSave_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxSave"), hx::TCanCast< FlxSave_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxSave_obj::__boot()
{
	SUCCESS= (int)0;
	PENDING= (int)1;
	ERROR= (int)2;
}

} // end namespace flixel
} // end namespace util
