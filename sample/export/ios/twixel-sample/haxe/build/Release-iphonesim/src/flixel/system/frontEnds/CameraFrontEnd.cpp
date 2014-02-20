#include <hxcpp.h>

#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void CameraFrontEnd_obj::__construct()
{
HX_STACK_PUSH("CameraFrontEnd::new","flixel/system/frontEnds/CameraFrontEnd.hx",10);
{
	HX_STACK_LINE(28)
	this->useBufferLocking = false;
	HX_STACK_LINE(163)
	this->_cameraRect = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(164)
	this->list = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

CameraFrontEnd_obj::~CameraFrontEnd_obj() { }

Dynamic CameraFrontEnd_obj::__CreateEmpty() { return  new CameraFrontEnd_obj; }
hx::ObjectPtr< CameraFrontEnd_obj > CameraFrontEnd_obj::__new()
{  hx::ObjectPtr< CameraFrontEnd_obj > result = new CameraFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic CameraFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CameraFrontEnd_obj > result = new CameraFrontEnd_obj();
	result->__construct();
	return result;}

int CameraFrontEnd_obj::set_bgColor( int Color){
	HX_STACK_PUSH("CameraFrontEnd::set_bgColor","flixel/system/frontEnds/CameraFrontEnd.hx",275);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(276)
	{
		HX_STACK_LINE(276)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(276)
		while(((_g < _g1->length))){
			HX_STACK_LINE(276)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(276)
			++(_g);
			HX_STACK_LINE(278)
			camera->bgColor = Color;
		}
	}
	HX_STACK_LINE(281)
	return Color;
}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,set_bgColor,return )

int CameraFrontEnd_obj::get_bgColor( ){
	HX_STACK_PUSH("CameraFrontEnd::get_bgColor","flixel/system/frontEnds/CameraFrontEnd.hx",270);
	HX_STACK_THIS(this);
	HX_STACK_LINE(270)
	return (  (((::flixel::FlxG_obj::camera == null()))) ? int((int)-16777216) : int(::flixel::FlxG_obj::camera->bgColor) );
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,get_bgColor,return )

Void CameraFrontEnd_obj::update( ){
{
		HX_STACK_PUSH("CameraFrontEnd::update","flixel/system/frontEnds/CameraFrontEnd.hx",248);
		HX_STACK_THIS(this);
		HX_STACK_LINE(249)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(249)
		while(((_g < _g1->length))){
			HX_STACK_LINE(249)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(249)
			++(_g);
			HX_STACK_LINE(251)
			if (((bool((camera != null())) && bool(camera->exists)))){
				HX_STACK_LINE(253)
				if ((camera->active)){
					HX_STACK_LINE(254)
					camera->update();
				}
				HX_STACK_LINE(258)
				if (((camera->target == null()))){
					HX_STACK_LINE(260)
					camera->flashSprite->set_x((camera->x + camera->_flashOffset->x));
					HX_STACK_LINE(261)
					camera->flashSprite->set_y((camera->y + camera->_flashOffset->y));
				}
				HX_STACK_LINE(264)
				camera->flashSprite->set_visible(camera->visible);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,update,(void))

Void CameraFrontEnd_obj::unlock( ){
{
		HX_STACK_PUSH("CameraFrontEnd::unlock","flixel/system/frontEnds/CameraFrontEnd.hx",223);
		HX_STACK_THIS(this);
		HX_STACK_LINE(224)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(224)
		while(((_g < _g1->length))){
			HX_STACK_LINE(224)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(224)
			++(_g);
			HX_STACK_LINE(226)
			if (((bool((bool((camera == null())) || bool(!(camera->exists)))) || bool(!(camera->visible))))){
				HX_STACK_LINE(227)
				continue;
			}
			HX_STACK_LINE(231)
			camera->drawFX();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,unlock,(void))

Void CameraFrontEnd_obj::render( ){
{
		HX_STACK_PUSH("CameraFrontEnd::render","flixel/system/frontEnds/CameraFrontEnd.hx",208);
		HX_STACK_THIS(this);
		HX_STACK_LINE(209)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(209)
		while(((_g < _g1->length))){
			HX_STACK_LINE(209)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(209)
			++(_g);
			HX_STACK_LINE(211)
			if (((bool((bool((camera != null())) && bool(camera->exists))) && bool(camera->visible)))){
				HX_STACK_LINE(212)
				camera->render();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,render,(void))

Void CameraFrontEnd_obj::lock( ){
{
		HX_STACK_PUSH("CameraFrontEnd::lock","flixel/system/frontEnds/CameraFrontEnd.hx",171);
		HX_STACK_THIS(this);
		HX_STACK_LINE(172)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(172)
		while(((_g < _g1->length))){
			HX_STACK_LINE(172)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(172)
			++(_g);
			HX_STACK_LINE(174)
			if (((bool((bool((camera == null())) || bool(!(camera->exists)))) || bool(!(camera->visible))))){
				HX_STACK_LINE(175)
				continue;
			}
			HX_STACK_LINE(189)
			camera->clearDrawStack();
			HX_STACK_LINE(190)
			camera->canvas->get_graphics()->clear();
			HX_STACK_LINE(201)
			camera->fill((int(camera->bgColor) & int((int)16777215)),camera->useBgAlphaBlending,(Float(((int((int(camera->bgColor) >> int((int)24))) & int((int)255)))) / Float((int)255)),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CameraFrontEnd_obj,lock,(void))

Void CameraFrontEnd_obj::shake( hx::Null< Float >  __o_Intensity,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force,hx::Null< int >  __o_Direction){
Float Intensity = __o_Intensity.Default(0.05);
Float Duration = __o_Duration.Default(0.5);
bool Force = __o_Force.Default(true);
int Direction = __o_Direction.Default(0);
	HX_STACK_PUSH("CameraFrontEnd::shake","flixel/system/frontEnds/CameraFrontEnd.hx",153);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Intensity,"Intensity");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
	HX_STACK_ARG(Direction,"Direction");
{
		HX_STACK_LINE(154)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(154)
		while(((_g < _g1->length))){
			HX_STACK_LINE(154)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(154)
			++(_g);
			HX_STACK_LINE(156)
			camera->shake(Intensity,Duration,OnComplete,Force,Direction);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(CameraFrontEnd_obj,shake,(void))

Void CameraFrontEnd_obj::fade( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,hx::Null< bool >  __o_FadeIn,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-16777216);
Float Duration = __o_Duration.Default(1);
bool FadeIn = __o_FadeIn.Default(false);
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("CameraFrontEnd::fade","flixel/system/frontEnds/CameraFrontEnd.hx",136);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(FadeIn,"FadeIn");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(137)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(137)
		while(((_g < _g1->length))){
			HX_STACK_LINE(137)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(137)
			++(_g);
			HX_STACK_LINE(139)
			camera->fade(Color,Duration,FadeIn,OnComplete,Force);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(CameraFrontEnd_obj,fade,(void))

Void CameraFrontEnd_obj::flash( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-1);
Float Duration = __o_Duration.Default(1);
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("CameraFrontEnd::flash","flixel/system/frontEnds/CameraFrontEnd.hx",119);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(120)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(120)
		while(((_g < _g1->length))){
			HX_STACK_LINE(120)
			::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(120)
			++(_g);
			HX_STACK_LINE(122)
			camera->flash(Color,Duration,OnComplete,Force);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CameraFrontEnd_obj,flash,(void))

Void CameraFrontEnd_obj::reset( ::flixel::FlxCamera NewCamera){
{
		HX_STACK_PUSH("CameraFrontEnd::reset","flixel/system/frontEnds/CameraFrontEnd.hx",92);
		HX_STACK_THIS(this);
		HX_STACK_ARG(NewCamera,"NewCamera");
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(93)
			while(((_g < _g1->length))){
				HX_STACK_LINE(93)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(93)
				++(_g);
				HX_STACK_LINE(95)
				::flixel::FlxG_obj::game->removeChild(camera->flashSprite);
				HX_STACK_LINE(96)
				camera->destroy();
			}
		}
		HX_STACK_LINE(99)
		this->list->splice((int)0,this->list->length);
		HX_STACK_LINE(101)
		if (((NewCamera == null()))){
			HX_STACK_LINE(102)
			NewCamera = ::flixel::FlxCamera_obj::__new((int)0,(int)0,::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,null());
		}
		struct _Function_1_1{
			inline static ::flixel::FlxCamera Block( ::flixel::FlxCamera &NewCamera){
				HX_STACK_PUSH("*::closure","flixel/system/frontEnds/CameraFrontEnd.hx",106);
				{
					HX_STACK_LINE(106)
					::flixel::FlxG_obj::game->addChildAt(NewCamera->flashSprite,::flixel::FlxG_obj::game->getChildIndex(::flixel::FlxG_obj::game->_inputContainer));
					HX_STACK_LINE(106)
					::flixel::FlxG_obj::cameras->list->push(NewCamera);
					HX_STACK_LINE(106)
					NewCamera->ID = (::flixel::FlxG_obj::cameras->list->length - (int)1);
					HX_STACK_LINE(106)
					return NewCamera;
				}
				return null();
			}
		};
		HX_STACK_LINE(106)
		::flixel::FlxG_obj::camera = _Function_1_1::Block(NewCamera);
		HX_STACK_LINE(107)
		NewCamera->ID = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CameraFrontEnd_obj,reset,(void))

Void CameraFrontEnd_obj::remove( ::flixel::FlxCamera Camera,hx::Null< bool >  __o_Destroy){
bool Destroy = __o_Destroy.Default(true);
	HX_STACK_PUSH("CameraFrontEnd::remove","flixel/system/frontEnds/CameraFrontEnd.hx",56);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(Destroy,"Destroy");
{
		HX_STACK_LINE(57)
		if (((bool((Camera != null())) && bool(::flixel::FlxG_obj::game->contains(Camera->flashSprite))))){
			HX_STACK_LINE(59)
			::flixel::FlxG_obj::game->removeChild(Camera->flashSprite);
			HX_STACK_LINE(60)
			int index = ::flixel::util::FlxArrayUtil_obj::indexOf_flixel_FlxCamera(::flixel::FlxG_obj::cameras->list,Camera,null());		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(62)
			if (((index >= (int)0))){
				HX_STACK_LINE(63)
				::flixel::FlxG_obj::cameras->list->splice(index,(int)1);
			}
		}
		else{
			HX_STACK_LINE(68)
			Dynamic();
		}
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->list->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(73)
			while(((_g1 < _g))){
				HX_STACK_LINE(73)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(75)
				this->list->__get(i).StaticCast< ::flixel::FlxCamera >()->ID = i;
			}
		}
		HX_STACK_LINE(79)
		if ((Destroy)){
			HX_STACK_LINE(80)
			Camera->destroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CameraFrontEnd_obj,remove,(void))


CameraFrontEnd_obj::CameraFrontEnd_obj()
{
}

void CameraFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CameraFrontEnd);
	HX_MARK_MEMBER_NAME(_cameraRect,"_cameraRect");
	HX_MARK_MEMBER_NAME(useBufferLocking,"useBufferLocking");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void CameraFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_cameraRect,"_cameraRect");
	HX_VISIT_MEMBER_NAME(useBufferLocking,"useBufferLocking");
	HX_VISIT_MEMBER_NAME(list,"list");
}

Dynamic CameraFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		if (HX_FIELD_EQ(inName,"fade") ) { return fade_dyn(); }
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		if (HX_FIELD_EQ(inName,"flash") ) { return flash_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { return get_bgColor(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_bgColor") ) { return set_bgColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bgColor") ) { return get_bgColor_dyn(); }
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { return _cameraRect; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { return useBufferLocking; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CameraFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { return set_bgColor(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_cameraRect") ) { _cameraRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"useBufferLocking") ) { useBufferLocking=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CameraFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_cameraRect"));
	outFields->push(HX_CSTRING("useBufferLocking"));
	outFields->push(HX_CSTRING("bgColor"));
	outFields->push(HX_CSTRING("list"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_bgColor"),
	HX_CSTRING("get_bgColor"),
	HX_CSTRING("update"),
	HX_CSTRING("unlock"),
	HX_CSTRING("render"),
	HX_CSTRING("lock"),
	HX_CSTRING("shake"),
	HX_CSTRING("fade"),
	HX_CSTRING("flash"),
	HX_CSTRING("reset"),
	HX_CSTRING("remove"),
	HX_CSTRING("_cameraRect"),
	HX_CSTRING("useBufferLocking"),
	HX_CSTRING("list"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CameraFrontEnd_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CameraFrontEnd_obj::__mClass,"__mClass");
};

Class CameraFrontEnd_obj::__mClass;

void CameraFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.CameraFrontEnd"), hx::TCanCast< CameraFrontEnd_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CameraFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
