#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_replay_CodeValuePair
#include <flixel/system/replay/CodeValuePair.h>
#endif
#ifndef INCLUDED_flixel_system_replay_FlxReplay
#include <flixel/system/replay/FlxReplay.h>
#endif
#ifndef INCLUDED_flixel_system_replay_FrameRecord
#include <flixel/system/replay/FrameRecord.h>
#endif
#ifndef INCLUDED_flixel_system_replay_MouseRecord
#include <flixel/system/replay/MouseRecord.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace system{
namespace replay{

Void FlxReplay_obj::__construct()
{
HX_STACK_PUSH("FlxReplay::new","flixel/system/replay/FlxReplay.hx",52);
{
	HX_STACK_LINE(53)
	this->seed = (int)0;
	HX_STACK_LINE(54)
	this->frame = (int)0;
	HX_STACK_LINE(55)
	this->frameCount = (int)0;
	HX_STACK_LINE(56)
	this->finished = false;
	HX_STACK_LINE(57)
	this->_frames = null();
	HX_STACK_LINE(58)
	this->_capacity = (int)0;
	HX_STACK_LINE(59)
	this->_marker = (int)0;
}
;
	return null();
}

FlxReplay_obj::~FlxReplay_obj() { }

Dynamic FlxReplay_obj::__CreateEmpty() { return  new FlxReplay_obj; }
hx::ObjectPtr< FlxReplay_obj > FlxReplay_obj::__new()
{  hx::ObjectPtr< FlxReplay_obj > result = new FlxReplay_obj();
	result->__construct();
	return result;}

Dynamic FlxReplay_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxReplay_obj > result = new FlxReplay_obj();
	result->__construct();
	return result;}

Void FlxReplay_obj::init( ){
{
		HX_STACK_PUSH("FlxReplay::init","flixel/system/replay/FlxReplay.hx",234);
		HX_STACK_THIS(this);
		HX_STACK_LINE(235)
		this->_capacity = (int)100;
		HX_STACK_LINE(236)
		this->_frames = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(237)
		::flixel::util::FlxArrayUtil_obj::setLength_flixel_system_replay_FrameRecord(this->_frames,this->_capacity);
		HX_STACK_LINE(238)
		this->frameCount = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxReplay_obj,init,(void))

Void FlxReplay_obj::rewind( ){
{
		HX_STACK_PUSH("FlxReplay::rewind","flixel/system/replay/FlxReplay.hx",224);
		HX_STACK_THIS(this);
		HX_STACK_LINE(225)
		this->_marker = (int)0;
		HX_STACK_LINE(226)
		this->frame = (int)0;
		HX_STACK_LINE(227)
		this->finished = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxReplay_obj,rewind,(void))

Void FlxReplay_obj::playNextFrame( ){
{
		HX_STACK_PUSH("FlxReplay::playNextFrame","flixel/system/replay/FlxReplay.hx",190);
		HX_STACK_THIS(this);
		HX_STACK_LINE(191)
		::flixel::FlxG_obj::inputs->reset();
		HX_STACK_LINE(193)
		if (((this->_marker >= this->frameCount))){
			HX_STACK_LINE(195)
			this->finished = true;
			HX_STACK_LINE(196)
			return null();
		}
		HX_STACK_LINE(198)
		if (((this->_frames->__get(this->_marker).StaticCast< ::flixel::system::replay::FrameRecord >()->frame != (this->frame)++))){
			HX_STACK_LINE(199)
			return null();
		}
		HX_STACK_LINE(203)
		::flixel::system::replay::FrameRecord fr = this->_frames->__get((this->_marker)++).StaticCast< ::flixel::system::replay::FrameRecord >();		HX_STACK_VAR(fr,"fr");
		HX_STACK_LINE(206)
		if (((fr->keys != null()))){
			HX_STACK_LINE(207)
			::flixel::FlxG_obj::keys->playback(fr->keys);
		}
		HX_STACK_LINE(213)
		if (((fr->mouse != null()))){
			HX_STACK_LINE(214)
			::flixel::FlxG_obj::mouse->playback(fr->mouse);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxReplay_obj,playNextFrame,(void))

Void FlxReplay_obj::recordFrame( ){
{
		HX_STACK_PUSH("FlxReplay::recordFrame","flixel/system/replay/FlxReplay.hx",150);
		HX_STACK_THIS(this);
		HX_STACK_LINE(151)
		bool continueFrame = true;		HX_STACK_VAR(continueFrame,"continueFrame");
		HX_STACK_LINE(154)
		Array< ::Dynamic > keysRecord = ::flixel::FlxG_obj::keys->record();		HX_STACK_VAR(keysRecord,"keysRecord");
		HX_STACK_LINE(155)
		if (((keysRecord == null()))){
			HX_STACK_LINE(155)
			continueFrame = false;
		}
		HX_STACK_LINE(159)
		::flixel::system::replay::MouseRecord mouseRecord = ::flixel::FlxG_obj::mouse->record();		HX_STACK_VAR(mouseRecord,"mouseRecord");
		HX_STACK_LINE(160)
		if (((mouseRecord == null()))){
			HX_STACK_LINE(160)
			continueFrame = false;
		}
		HX_STACK_LINE(163)
		if ((continueFrame)){
			HX_STACK_LINE(165)
			(this->frame)++;
			HX_STACK_LINE(166)
			return null();
		}
		HX_STACK_LINE(169)
		::flixel::system::replay::FrameRecord frameRecorded = ::flixel::system::replay::FrameRecord_obj::__new()->create((this->frame)++,null(),null());		HX_STACK_VAR(frameRecorded,"frameRecorded");
		HX_STACK_LINE(171)
		frameRecorded->mouse = mouseRecord;
		HX_STACK_LINE(174)
		frameRecorded->keys = keysRecord;
		HX_STACK_LINE(177)
		this->_frames[(this->frameCount)++] = frameRecorded;
		HX_STACK_LINE(179)
		if (((this->frameCount >= this->_capacity))){
			HX_STACK_LINE(181)
			hx::MultEq(this->_capacity,(int)2);
			HX_STACK_LINE(182)
			::flixel::util::FlxArrayUtil_obj::setLength_flixel_system_replay_FrameRecord(this->_frames,this->_capacity);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxReplay_obj,recordFrame,(void))

::String FlxReplay_obj::save( ){
	HX_STACK_PUSH("FlxReplay::save","flixel/system/replay/FlxReplay.hx",132);
	HX_STACK_THIS(this);
	HX_STACK_LINE(133)
	if (((this->frameCount <= (int)0))){
		HX_STACK_LINE(134)
		return null();
	}
	HX_STACK_LINE(137)
	::String output = (this->seed + HX_CSTRING("\n"));		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(138)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(139)
	while(((i < this->frameCount))){
		HX_STACK_LINE(140)
		hx::AddEq(output,(this->_frames->__get((i)++).StaticCast< ::flixel::system::replay::FrameRecord >()->save() + HX_CSTRING("\n")));
	}
	HX_STACK_LINE(143)
	return output;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxReplay_obj,save,return )

Void FlxReplay_obj::load( ::String FileContents){
{
		HX_STACK_PUSH("FlxReplay::load","flixel/system/replay/FlxReplay.hx",99);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FileContents,"FileContents");
		HX_STACK_LINE(100)
		this->init();
		HX_STACK_LINE(102)
		Array< ::String > lines = FileContents.split(HX_CSTRING("\n"));		HX_STACK_VAR(lines,"lines");
		HX_STACK_LINE(104)
		this->seed = ::Std_obj::parseInt(lines->__get((int)0));
		HX_STACK_LINE(106)
		::String line;		HX_STACK_VAR(line,"line");
		HX_STACK_LINE(107)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(108)
		int l = lines->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(109)
		while(((i < l))){
			HX_STACK_LINE(111)
			line = lines->__get((i)++);
			HX_STACK_LINE(112)
			if (((line.length > (int)3))){
				HX_STACK_LINE(114)
				this->_frames[(this->frameCount)++] = ::flixel::system::replay::FrameRecord_obj::__new()->load(line);
				HX_STACK_LINE(115)
				if (((this->frameCount >= this->_capacity))){
					HX_STACK_LINE(117)
					hx::MultEq(this->_capacity,(int)2);
					HX_STACK_LINE(118)
					::flixel::util::FlxArrayUtil_obj::setLength_flixel_system_replay_FrameRecord(this->_frames,this->_capacity);
				}
			}
		}
		HX_STACK_LINE(123)
		this->rewind();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxReplay_obj,load,(void))

Void FlxReplay_obj::create( int Seed){
{
		HX_STACK_PUSH("FlxReplay::create","flixel/system/replay/FlxReplay.hx",85);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Seed,"Seed");
		HX_STACK_LINE(86)
		this->destroy();
		HX_STACK_LINE(87)
		this->init();
		HX_STACK_LINE(88)
		this->seed = Seed;
		HX_STACK_LINE(89)
		this->rewind();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxReplay_obj,create,(void))

Void FlxReplay_obj::destroy( ){
{
		HX_STACK_PUSH("FlxReplay::destroy","flixel/system/replay/FlxReplay.hx",66);
		HX_STACK_THIS(this);
		HX_STACK_LINE(67)
		if (((this->_frames == null()))){
			HX_STACK_LINE(68)
			return null();
		}
		HX_STACK_LINE(71)
		int i = (this->frameCount - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(72)
		while(((i >= (int)0))){
			HX_STACK_LINE(73)
			this->_frames->__get((i)--).StaticCast< ::flixel::system::replay::FrameRecord >()->destroy();
		}
		HX_STACK_LINE(76)
		this->_frames = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxReplay_obj,destroy,(void))


FlxReplay_obj::FlxReplay_obj()
{
}

void FlxReplay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxReplay);
	HX_MARK_MEMBER_NAME(_marker,"_marker");
	HX_MARK_MEMBER_NAME(_capacity,"_capacity");
	HX_MARK_MEMBER_NAME(_frames,"_frames");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(frameCount,"frameCount");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(seed,"seed");
	HX_MARK_END_CLASS();
}

void FlxReplay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_marker,"_marker");
	HX_VISIT_MEMBER_NAME(_capacity,"_capacity");
	HX_VISIT_MEMBER_NAME(_frames,"_frames");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(frameCount,"frameCount");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(seed,"seed");
}

Dynamic FlxReplay_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"save") ) { return save_dyn(); }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"seed") ) { return seed; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rewind") ) { return rewind_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_marker") ) { return _marker; }
		if (HX_FIELD_EQ(inName,"_frames") ) { return _frames; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_capacity") ) { return _capacity; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameCount") ) { return frameCount; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"recordFrame") ) { return recordFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"playNextFrame") ) { return playNextFrame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxReplay_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"seed") ) { seed=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_marker") ) { _marker=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frames") ) { _frames=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_capacity") ) { _capacity=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameCount") ) { frameCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxReplay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_marker"));
	outFields->push(HX_CSTRING("_capacity"));
	outFields->push(HX_CSTRING("_frames"));
	outFields->push(HX_CSTRING("finished"));
	outFields->push(HX_CSTRING("frameCount"));
	outFields->push(HX_CSTRING("frame"));
	outFields->push(HX_CSTRING("seed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("init"),
	HX_CSTRING("rewind"),
	HX_CSTRING("playNextFrame"),
	HX_CSTRING("recordFrame"),
	HX_CSTRING("save"),
	HX_CSTRING("load"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_marker"),
	HX_CSTRING("_capacity"),
	HX_CSTRING("_frames"),
	HX_CSTRING("finished"),
	HX_CSTRING("frameCount"),
	HX_CSTRING("frame"),
	HX_CSTRING("seed"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxReplay_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxReplay_obj::__mClass,"__mClass");
};

Class FlxReplay_obj::__mClass;

void FlxReplay_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.replay.FlxReplay"), hx::TCanCast< FlxReplay_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxReplay_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace replay
