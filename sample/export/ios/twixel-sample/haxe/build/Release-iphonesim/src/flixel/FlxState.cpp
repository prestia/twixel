#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
namespace flixel{

Void FlxState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_PUSH("FlxState::new","flixel/FlxState.hx",9);
{
	HX_STACK_LINE(43)
	this->_requestSubStateReset = false;
	HX_STACK_LINE(26)
	this->destroySubStates = true;
	HX_STACK_LINE(21)
	this->persistentDraw = true;
	HX_STACK_LINE(15)
	this->persistentUpdate = false;
	HX_STACK_LINE(9)
	super::__construct(MaxSize);
}
;
	return null();
}

FlxState_obj::~FlxState_obj() { }

Dynamic FlxState_obj::__CreateEmpty() { return  new FlxState_obj; }
hx::ObjectPtr< FlxState_obj > FlxState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< FlxState_obj > result = new FlxState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic FlxState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxState_obj > result = new FlxState_obj();
	result->__construct(inArgs[0]);
	return result;}

int FlxState_obj::set_bgColor( int Value){
	HX_STACK_PUSH("FlxState::set_bgColor","flixel/FlxState.hx",187);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(187)
	return ::flixel::FlxG_obj::cameras->set_bgColor(Value);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,set_bgColor,return )

int FlxState_obj::get_bgColor( ){
	HX_STACK_PUSH("FlxState::get_bgColor","flixel/FlxState.hx",182);
	HX_STACK_THIS(this);
	HX_STACK_LINE(182)
	return ::flixel::FlxG_obj::cameras->get_bgColor();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,get_bgColor,return )

Void FlxState_obj::tryUpdate( ){
{
		HX_STACK_PUSH("FlxState::tryUpdate","flixel/FlxState.hx",164);
		HX_STACK_THIS(this);
		HX_STACK_LINE(165)
		if (((bool(this->persistentUpdate) || bool((this->subState == null()))))){
			HX_STACK_LINE(166)
			this->update();
		}
		HX_STACK_LINE(170)
		if ((this->_requestSubStateReset)){
			HX_STACK_LINE(172)
			this->resetSubState();
			HX_STACK_LINE(173)
			this->_requestSubStateReset = false;
		}
		else{
			HX_STACK_LINE(175)
			if (((this->subState != null()))){
				HX_STACK_LINE(176)
				this->subState->tryUpdate();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,tryUpdate,(void))

Void FlxState_obj::onResize( int Width,int Height){
{
		HX_STACK_PUSH("FlxState::onResize","flixel/FlxState.hx",160);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Width,"Width");
		HX_STACK_ARG(Height,"Height");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxState_obj,onResize,(void))

Void FlxState_obj::onFocus( ){
{
		HX_STACK_PUSH("FlxState::onFocus","flixel/FlxState.hx",152);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,onFocus,(void))

Void FlxState_obj::onFocusLost( ){
{
		HX_STACK_PUSH("FlxState::onFocusLost","flixel/FlxState.hx",146);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,onFocusLost,(void))

Void FlxState_obj::destroy( ){
{
		HX_STACK_PUSH("FlxState::destroy","flixel/FlxState.hx",133);
		HX_STACK_THIS(this);
		HX_STACK_LINE(134)
		if (((this->subState != null()))){
			HX_STACK_LINE(136)
			this->subState->destroy();
			HX_STACK_LINE(137)
			this->subState = null();
		}
		HX_STACK_LINE(139)
		this->super::destroy();
	}
return null();
}


Void FlxState_obj::resetSubState( ){
{
		HX_STACK_PUSH("FlxState::resetSubState","flixel/FlxState.hx",98);
		HX_STACK_THIS(this);
		HX_STACK_LINE(100)
		if (((this->subState != null()))){
			HX_STACK_LINE(102)
			if (((this->subState->closeCallback != null()))){
				HX_STACK_LINE(103)
				this->subState->closeCallback();
			}
			HX_STACK_LINE(106)
			if ((this->destroySubStates)){
				HX_STACK_LINE(107)
				this->subState->destroy();
			}
		}
		HX_STACK_LINE(113)
		this->subState = this->_requestedSubState;
		HX_STACK_LINE(115)
		if (((this->subState != null()))){
			HX_STACK_LINE(118)
			if ((!(this->persistentUpdate))){
				HX_STACK_LINE(119)
				::flixel::FlxG_obj::inputs->reset();
			}
			HX_STACK_LINE(123)
			if ((!(this->subState->_created))){
				HX_STACK_LINE(125)
				this->subState->_created = true;
				HX_STACK_LINE(126)
				this->subState->_parentState = hx::ObjectPtr<OBJ_>(this);
				HX_STACK_LINE(127)
				this->subState->create();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,resetSubState,(void))

Void FlxState_obj::closeSubState( ){
{
		HX_STACK_PUSH("FlxState::closeSubState","flixel/FlxState.hx",89);
		HX_STACK_THIS(this);
		HX_STACK_LINE(90)
		this->_requestSubStateReset = true;
		HX_STACK_LINE(91)
		this->_requestedSubState = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,closeSubState,(void))

Void FlxState_obj::openSubState( ::flixel::FlxSubState SubState){
{
		HX_STACK_PUSH("FlxState::openSubState","flixel/FlxState.hx",80);
		HX_STACK_THIS(this);
		HX_STACK_ARG(SubState,"SubState");
		HX_STACK_LINE(81)
		this->_requestSubStateReset = true;
		HX_STACK_LINE(82)
		this->_requestedSubState = SubState;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxState_obj,openSubState,(void))

Void FlxState_obj::draw( ){
{
		HX_STACK_PUSH("FlxState::draw","flixel/FlxState.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_LINE(53)
		if (((bool(this->persistentDraw) || bool((this->subState == null()))))){
			HX_STACK_LINE(54)
			this->super::draw();
		}
		HX_STACK_LINE(58)
		if (((this->subState != null()))){
			HX_STACK_LINE(59)
			this->subState->draw();
		}
	}
return null();
}


Void FlxState_obj::create( ){
{
		HX_STACK_PUSH("FlxState::create","flixel/FlxState.hx",49);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxState_obj,create,(void))


FlxState_obj::FlxState_obj()
{
}

void FlxState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxState);
	HX_MARK_MEMBER_NAME(_requestSubStateReset,"_requestSubStateReset");
	HX_MARK_MEMBER_NAME(_requestedSubState,"_requestedSubState");
	HX_MARK_MEMBER_NAME(subState,"subState");
	HX_MARK_MEMBER_NAME(destroySubStates,"destroySubStates");
	HX_MARK_MEMBER_NAME(persistentDraw,"persistentDraw");
	HX_MARK_MEMBER_NAME(persistentUpdate,"persistentUpdate");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_requestSubStateReset,"_requestSubStateReset");
	HX_VISIT_MEMBER_NAME(_requestedSubState,"_requestedSubState");
	HX_VISIT_MEMBER_NAME(subState,"subState");
	HX_VISIT_MEMBER_NAME(destroySubStates,"destroySubStates");
	HX_VISIT_MEMBER_NAME(persistentDraw,"persistentDraw");
	HX_VISIT_MEMBER_NAME(persistentUpdate,"persistentUpdate");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"bgColor") ) { return get_bgColor(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"subState") ) { return subState; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tryUpdate") ) { return tryUpdate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return set_bgColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return get_bgColor_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"openSubState") ) { return openSubState_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resetSubState") ) { return resetSubState_dyn(); }
		if (HX_FIELD_EQ(inName,"closeSubState") ) { return closeSubState_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"persistentDraw") ) { return persistentDraw; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"destroySubStates") ) { return destroySubStates; }
		if (HX_FIELD_EQ(inName,"persistentUpdate") ) { return persistentUpdate; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_requestedSubState") ) { return _requestedSubState; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_requestSubStateReset") ) { return _requestSubStateReset; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { return set_bgColor(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subState") ) { subState=inValue.Cast< ::flixel::FlxSubState >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"persistentDraw") ) { persistentDraw=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"destroySubStates") ) { destroySubStates=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"persistentUpdate") ) { persistentUpdate=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_requestedSubState") ) { _requestedSubState=inValue.Cast< ::flixel::FlxSubState >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_requestSubStateReset") ) { _requestSubStateReset=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_requestSubStateReset"));
	outFields->push(HX_CSTRING("_requestedSubState"));
	outFields->push(HX_CSTRING("subState"));
	outFields->push(HX_CSTRING("bgColor"));
	outFields->push(HX_CSTRING("destroySubStates"));
	outFields->push(HX_CSTRING("persistentDraw"));
	outFields->push(HX_CSTRING("persistentUpdate"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_bgColor"),
	HX_CSTRING("get_bgColor"),
	HX_CSTRING("tryUpdate"),
	HX_CSTRING("onResize"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("destroy"),
	HX_CSTRING("resetSubState"),
	HX_CSTRING("closeSubState"),
	HX_CSTRING("openSubState"),
	HX_CSTRING("draw"),
	HX_CSTRING("create"),
	HX_CSTRING("_requestSubStateReset"),
	HX_CSTRING("_requestedSubState"),
	HX_CSTRING("subState"),
	HX_CSTRING("destroySubStates"),
	HX_CSTRING("persistentDraw"),
	HX_CSTRING("persistentUpdate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxState_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxState_obj::__mClass,"__mClass");
};

Class FlxState_obj::__mClass;

void FlxState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxState"), hx::TCanCast< FlxState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxState_obj::__boot()
{
}

} // end namespace flixel
