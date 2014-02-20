#include <hxcpp.h>

#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
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
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_media_Sound
#include <flash/media/Sound.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_text_TextFormatAlign
#include <flash/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_BeepSound
#include <flixel/system/BeepSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#include <flixel/system/ui/FlxSoundTray.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace system{
namespace ui{

Void FlxSoundTray_obj::__construct()
{
HX_STACK_PUSH("FlxSoundTray::new","flixel/system/ui/FlxSoundTray.hx",22);
{
	HX_STACK_LINE(42)
	this->_defaultScale = 2.0;
	HX_STACK_LINE(40)
	this->_width = (int)80;
	HX_STACK_LINE(49)
	super::__construct();
	HX_STACK_LINE(51)
	this->set_visible(false);
	HX_STACK_LINE(52)
	this->set_scaleX(this->_defaultScale);
	HX_STACK_LINE(53)
	this->set_scaleY(this->_defaultScale);
	HX_STACK_LINE(54)
	::flash::display::Bitmap tmp = ::flash::display::Bitmap_obj::__new(::flash::display::BitmapData_obj::__new(this->_width,(int)30,true,(int)2130706432,null()),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	this->screenCenter();
	HX_STACK_LINE(56)
	this->addChild(tmp);
	HX_STACK_LINE(58)
	::flash::text::TextField text = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(text,"text");
	HX_STACK_LINE(59)
	text->set_width(tmp->get_width());
	HX_STACK_LINE(60)
	text->set_height(tmp->get_height());
	HX_STACK_LINE(61)
	text->set_multiline(true);
	HX_STACK_LINE(62)
	text->set_wordWrap(true);
	HX_STACK_LINE(63)
	text->set_selectable(false);
	HX_STACK_LINE(72)
	::flash::text::TextFormat dtf = ::flash::text::TextFormat_obj::__new(::flixel::system::FlxAssets_obj::FONT_DEFAULT,(int)8,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(dtf,"dtf");
	HX_STACK_LINE(73)
	dtf->align = ::flash::text::TextFormatAlign_obj::CENTER;
	HX_STACK_LINE(74)
	text->set_defaultTextFormat(dtf);
	HX_STACK_LINE(75)
	this->addChild(text);
	HX_STACK_LINE(76)
	text->set_text(HX_CSTRING("VOLUME"));
	HX_STACK_LINE(77)
	text->set_y((int)16);
	HX_STACK_LINE(79)
	int bx = (int)10;		HX_STACK_VAR(bx,"bx");
	HX_STACK_LINE(80)
	int by = (int)14;		HX_STACK_VAR(by,"by");
	HX_STACK_LINE(81)
	this->_bars = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(83)
		while(((_g < (int)10))){
			HX_STACK_LINE(83)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(85)
			tmp = ::flash::display::Bitmap_obj::__new(::flash::display::BitmapData_obj::__new((int)4,(i + (int)1),false,(int)-1,null()),null(),null());
			HX_STACK_LINE(86)
			tmp->set_x(bx);
			HX_STACK_LINE(87)
			tmp->set_y(by);
			HX_STACK_LINE(88)
			this->addChild(tmp);
			HX_STACK_LINE(89)
			this->_bars->push(tmp);
			HX_STACK_LINE(90)
			hx::AddEq(bx,(int)6);
			HX_STACK_LINE(91)
			(by)--;
		}
	}
	HX_STACK_LINE(94)
	this->set_y(-(this->get_height()));
	HX_STACK_LINE(95)
	this->set_visible(false);
}
;
	return null();
}

FlxSoundTray_obj::~FlxSoundTray_obj() { }

Dynamic FlxSoundTray_obj::__CreateEmpty() { return  new FlxSoundTray_obj; }
hx::ObjectPtr< FlxSoundTray_obj > FlxSoundTray_obj::__new()
{  hx::ObjectPtr< FlxSoundTray_obj > result = new FlxSoundTray_obj();
	result->__construct();
	return result;}

Dynamic FlxSoundTray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSoundTray_obj > result = new FlxSoundTray_obj();
	result->__construct();
	return result;}

Void FlxSoundTray_obj::screenCenter( ){
{
		HX_STACK_PUSH("FlxSoundTray::screenCenter","flixel/system/ui/FlxSoundTray.hx",162);
		HX_STACK_THIS(this);
		HX_STACK_LINE(163)
		this->set_scaleX((Float(this->_defaultScale) / Float(::flixel::FlxG_obj::game->get_scaleX())));
		HX_STACK_LINE(164)
		this->set_scaleY((Float(this->_defaultScale) / Float(::flixel::FlxG_obj::game->get_scaleY())));
		HX_STACK_LINE(166)
		this->set_x((Float((((0.5 * ((::flash::Lib_obj::get_current()->get_stage()->get_stageWidth() - (this->_width * this->_defaultScale)))) - ::flixel::FlxG_obj::game->get_x()))) / Float(::flixel::FlxG_obj::game->get_scaleX())));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSoundTray_obj,screenCenter,(void))

Void FlxSoundTray_obj::show( hx::Null< bool >  __o_Silent){
bool Silent = __o_Silent.Default(false);
	HX_STACK_PUSH("FlxSoundTray::show","flixel/system/ui/FlxSoundTray.hx",131);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Silent,"Silent");
{
		HX_STACK_LINE(132)
		if ((!(Silent))){
			HX_STACK_LINE(133)
			::flixel::FlxG_obj::sound->load(hx::ClassOf< ::flixel::system::BeepSound >(),null(),null(),null(),null(),null(),null())->play(null());
		}
		HX_STACK_LINE(137)
		this->_timer = (int)1;
		HX_STACK_LINE(138)
		this->set_y((int)0);
		HX_STACK_LINE(139)
		this->set_visible(true);
		HX_STACK_LINE(140)
		this->active = true;
		HX_STACK_LINE(141)
		int globalVolume = ::Math_obj::round((::flixel::FlxG_obj::sound->volume * (int)10));		HX_STACK_VAR(globalVolume,"globalVolume");
		HX_STACK_LINE(143)
		if ((::flixel::FlxG_obj::sound->muted)){
			HX_STACK_LINE(144)
			globalVolume = (int)0;
		}
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_bars->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(148)
			while(((_g1 < _g))){
				HX_STACK_LINE(148)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(150)
				if (((i < globalVolume))){
					HX_STACK_LINE(151)
					this->_bars->__get(i).StaticCast< ::flash::display::Bitmap >()->set_alpha((int)1);
				}
				else{
					HX_STACK_LINE(155)
					this->_bars->__get(i).StaticCast< ::flash::display::Bitmap >()->set_alpha(0.5);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSoundTray_obj,show,(void))

Void FlxSoundTray_obj::update( Float MS){
{
		HX_STACK_PUSH("FlxSoundTray::update","flixel/system/ui/FlxSoundTray.hx",102);
		HX_STACK_THIS(this);
		HX_STACK_ARG(MS,"MS");
		HX_STACK_LINE(102)
		if (((this->_timer > (int)0))){
			HX_STACK_LINE(105)
			hx::SubEq(this->_timer,(Float(MS) / Float((int)1000)));
		}
		else{
			HX_STACK_LINE(108)
			if (((this->get_y() > -(this->get_height())))){
				HX_STACK_LINE(110)
				{
					HX_STACK_LINE(110)
					::flixel::system::ui::FlxSoundTray _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(110)
					_g->set_y((_g->get_y() - (((Float(MS) / Float((int)1000)) * ::flixel::FlxG_obj::height) * (int)2)));
				}
				HX_STACK_LINE(112)
				if (((this->get_y() <= -(this->get_height())))){
					HX_STACK_LINE(114)
					this->set_visible(false);
					HX_STACK_LINE(115)
					this->active = false;
					HX_STACK_LINE(118)
					::flixel::FlxG_obj::save->data->__FieldRef(HX_CSTRING("mute")) = ::flixel::FlxG_obj::sound->muted;
					HX_STACK_LINE(119)
					::flixel::FlxG_obj::save->data->__FieldRef(HX_CSTRING("volume")) = ::flixel::FlxG_obj::sound->volume;
					HX_STACK_LINE(120)
					::flixel::FlxG_obj::save->flush(null(),null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSoundTray_obj,update,(void))


FlxSoundTray_obj::FlxSoundTray_obj()
{
}

void FlxSoundTray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSoundTray);
	HX_MARK_MEMBER_NAME(_defaultScale,"_defaultScale");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_bars,"_bars");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(active,"active");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSoundTray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_defaultScale,"_defaultScale");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_bars,"_bars");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(active,"active");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSoundTray_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_bars") ) { return _bars; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenCenter") ) { return screenCenter_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_defaultScale") ) { return _defaultScale; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSoundTray_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_bars") ) { _bars=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_defaultScale") ) { _defaultScale=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSoundTray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_defaultScale"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_bars"));
	outFields->push(HX_CSTRING("_timer"));
	outFields->push(HX_CSTRING("active"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("screenCenter"),
	HX_CSTRING("show"),
	HX_CSTRING("update"),
	HX_CSTRING("_defaultScale"),
	HX_CSTRING("_width"),
	HX_CSTRING("_bars"),
	HX_CSTRING("_timer"),
	HX_CSTRING("active"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSoundTray_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSoundTray_obj::__mClass,"__mClass");
};

Class FlxSoundTray_obj::__mClass;

void FlxSoundTray_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.ui.FlxSoundTray"), hx::TCanCast< FlxSoundTray_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxSoundTray_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace ui
