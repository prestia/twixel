#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_geom_Transform
#include <flash/geom/Transform.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#include <flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace flixel{

Void FlxCamera_obj::__construct(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_Zoom)
{
HX_STACK_PUSH("FlxCamera::new","flixel/FlxCamera.hx",24);
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
Float Zoom = __o_Zoom.Default(0);
{
	HX_STACK_LINE(279)
	this->canvas = null();
	HX_STACK_LINE(258)
	this->_fxShakeDirection = (int)0;
	HX_STACK_LINE(250)
	this->_fxShakeComplete = null();
	HX_STACK_LINE(246)
	this->_fxShakeDuration = (int)0;
	HX_STACK_LINE(242)
	this->_fxShakeIntensity = (int)0;
	HX_STACK_LINE(238)
	this->_fxFadeAlpha = (int)0;
	HX_STACK_LINE(234)
	this->_fxFadeComplete = null();
	HX_STACK_LINE(230)
	this->_fxFadeIn = false;
	HX_STACK_LINE(226)
	this->_fxFadeDuration = (int)0;
	HX_STACK_LINE(214)
	this->_fxFadeColor = (int)0;
	HX_STACK_LINE(210)
	this->_fxFlashAlpha = (int)0;
	HX_STACK_LINE(206)
	this->_fxFlashComplete = null();
	HX_STACK_LINE(202)
	this->_fxFlashDuration = (int)0;
	HX_STACK_LINE(198)
	this->_fxFlashColor = (int)0;
	HX_STACK_LINE(185)
	this->antialiasing = false;
	HX_STACK_LINE(180)
	this->color = (int)-1;
	HX_STACK_LINE(175)
	this->angle = (int)0;
	HX_STACK_LINE(170)
	this->alpha = (int)1;
	HX_STACK_LINE(138)
	this->useBgAlphaBlending = true;
	HX_STACK_LINE(103)
	this->bounds = null();
	HX_STACK_LINE(98)
	this->deadzone = null();
	HX_STACK_LINE(85)
	this->target = null();
	HX_STACK_LINE(440)
	super::__construct();
	HX_STACK_LINE(442)
	this->_scrollTarget = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(444)
	this->x = X;
	HX_STACK_LINE(445)
	this->y = Y;
	HX_STACK_LINE(447)
	this->set_width((  (((Width <= (int)0))) ? int(::flixel::FlxG_obj::width) : int(Width) ));
	HX_STACK_LINE(448)
	this->set_height((  (((Height <= (int)0))) ? int(::flixel::FlxG_obj::height) : int(Height) ));
	HX_STACK_LINE(450)
	this->scroll = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(451)
	this->_point = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(464)
	this->canvas = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(465)
	this->canvas->set_x((-(this->width) * 0.5));
	HX_STACK_LINE(466)
	this->canvas->set_y((-(this->height) * 0.5));
	HX_STACK_LINE(473)
	this->flashSprite = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(474)
	this->set_zoom(Zoom);
	HX_STACK_LINE(476)
	this->flashOffsetX = ((this->width * 0.5) * this->zoom);
	HX_STACK_LINE(477)
	this->flashOffsetY = ((this->height * 0.5) * this->zoom);
	HX_STACK_LINE(479)
	this->flashSprite->set_x((this->x + this->flashOffsetX));
	HX_STACK_LINE(480)
	this->flashSprite->set_y((this->y + this->flashOffsetY));
	HX_STACK_LINE(485)
	this->flashSprite->addChild(this->canvas);
	HX_STACK_LINE(487)
	this->_flashRect = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,this->width,this->height);
	HX_STACK_LINE(488)
	this->_flashPoint = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(490)
	this->_fxShakeOffset = ::flixel::util::FlxPoint_obj::__new(null(),null());
	HX_STACK_LINE(497)
	this->canvas->set_scrollRect(::flash::geom::Rectangle_obj::__new((int)0,(int)0,this->width,this->height));
	HX_STACK_LINE(510)
	this->_currentStackItem = ::flixel::system::layer::DrawStackItem_obj::__new();
	HX_STACK_LINE(511)
	this->_headOfDrawStack = this->_currentStackItem;
	HX_STACK_LINE(514)
	this->bgColor = ::flixel::FlxG_obj::cameras->get_bgColor();
}
;
	return null();
}

FlxCamera_obj::~FlxCamera_obj() { }

Dynamic FlxCamera_obj::__CreateEmpty() { return  new FlxCamera_obj; }
hx::ObjectPtr< FlxCamera_obj > FlxCamera_obj::__new(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_Zoom)
{  hx::ObjectPtr< FlxCamera_obj > result = new FlxCamera_obj();
	result->__construct(__o_X,__o_Y,__o_Width,__o_Height,__o_Zoom);
	return result;}

Dynamic FlxCamera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCamera_obj > result = new FlxCamera_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

bool FlxCamera_obj::set_antialiasing( bool Antialiasing){
	HX_STACK_PUSH("FlxCamera::set_antialiasing","flixel/FlxCamera.hx",1241);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Antialiasing,"Antialiasing");
	HX_STACK_LINE(1242)
	this->antialiasing = Antialiasing;
	HX_STACK_LINE(1246)
	return Antialiasing;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_antialiasing,return )

int FlxCamera_obj::set_color( int Color){
	HX_STACK_PUSH("FlxCamera::set_color","flixel/FlxCamera.hx",1218);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(1219)
	this->color = (int(Color) & int((int)16777215));
	HX_STACK_LINE(1230)
	::flash::geom::ColorTransform colorTransform = this->canvas->get_transform()->get_colorTransform();		HX_STACK_VAR(colorTransform,"colorTransform");
	HX_STACK_LINE(1231)
	colorTransform->redMultiplier = (Float(((int(this->color) >> int((int)16)))) / Float((int)255));
	HX_STACK_LINE(1232)
	colorTransform->greenMultiplier = (Float(((int((int(this->color) >> int((int)8))) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1233)
	colorTransform->blueMultiplier = (Float(((int(this->color) & int((int)255)))) / Float((int)255));
	HX_STACK_LINE(1234)
	this->canvas->get_transform()->set_colorTransform(colorTransform);
	HX_STACK_LINE(1237)
	return Color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_color,return )

Float FlxCamera_obj::set_angle( Float Angle){
	HX_STACK_PUSH("FlxCamera::set_angle","flixel/FlxCamera.hx",1211);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Angle,"Angle");
	HX_STACK_LINE(1212)
	this->angle = Angle;
	HX_STACK_LINE(1213)
	this->flashSprite->set_rotation(Angle);
	HX_STACK_LINE(1214)
	return Angle;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_angle,return )

Float FlxCamera_obj::set_alpha( Float Alpha){
	HX_STACK_PUSH("FlxCamera::set_alpha","flixel/FlxCamera.hx",1200);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Alpha,"Alpha");
	struct _Function_1_1{
		inline static Float Block( Float &Alpha){
			HX_STACK_PUSH("*::closure","flixel/FlxCamera.hx",1201);
			{
				HX_STACK_LINE(1201)
				Float lowerBound = (  (((Alpha < (int)0))) ? Float((int)0) : Float(Alpha) );		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(1201)
				return (  (((lowerBound > (int)1))) ? Float((int)1) : Float(lowerBound) );
			}
			return null();
		}
	};
	HX_STACK_LINE(1201)
	this->alpha = _Function_1_1::Block(Alpha);
	HX_STACK_LINE(1205)
	this->canvas->set_alpha(Alpha);
	HX_STACK_LINE(1207)
	return Alpha;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_alpha,return )

Float FlxCamera_obj::set_zoom( Float Zoom){
	HX_STACK_PUSH("FlxCamera::set_zoom","flixel/FlxCamera.hx",1186);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Zoom,"Zoom");
	HX_STACK_LINE(1187)
	if (((Zoom == (int)0))){
		HX_STACK_LINE(1188)
		this->zoom = ::flixel::FlxCamera_obj::defaultZoom;
	}
	else{
		HX_STACK_LINE(1192)
		this->zoom = Zoom;
	}
	HX_STACK_LINE(1195)
	this->setScale(this->zoom,this->zoom);
	HX_STACK_LINE(1196)
	return this->zoom;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_zoom,return )

int FlxCamera_obj::set_height( int Value){
	HX_STACK_PUSH("FlxCamera::set_height","flixel/FlxCamera.hx",1152);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(1153)
	if (((Value > (int)0))){
		HX_STACK_LINE(1155)
		this->height = Value;
		HX_STACK_LINE(1164)
		if (((this->canvas != null()))){
			HX_STACK_LINE(1166)
			::flash::geom::Rectangle rect = this->canvas->get_scrollRect();		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(1168)
			rect->height = Value;
			HX_STACK_LINE(1172)
			this->canvas->set_scrollRect(rect);
			HX_STACK_LINE(1174)
			this->flashOffsetY = ((this->height * 0.5) * this->zoom);
			HX_STACK_LINE(1175)
			this->canvas->set_y((-(this->height) * 0.5));
		}
	}
	HX_STACK_LINE(1182)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_height,return )

int FlxCamera_obj::set_width( int Value){
	HX_STACK_PUSH("FlxCamera::set_width","flixel/FlxCamera.hx",1118);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(1119)
	if (((Value > (int)0))){
		HX_STACK_LINE(1121)
		this->width = Value;
		HX_STACK_LINE(1130)
		if (((this->canvas != null()))){
			HX_STACK_LINE(1132)
			::flash::geom::Rectangle rect = this->canvas->get_scrollRect();		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(1134)
			rect->width = Value;
			HX_STACK_LINE(1138)
			this->canvas->set_scrollRect(rect);
			HX_STACK_LINE(1140)
			this->flashOffsetX = ((this->width * 0.5) * this->zoom);
			HX_STACK_LINE(1141)
			this->canvas->set_x((-(this->width) * 0.5));
		}
	}
	HX_STACK_LINE(1148)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_width,return )

::flixel::util::FlxPoint FlxCamera_obj::getScale( ){
	HX_STACK_PUSH("FlxCamera::getScale","flixel/FlxCamera.hx",1113);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1113)
	return this->_point->set(this->flashSprite->get_scaleX(),this->flashSprite->get_scaleY());
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,getScale,return )

Void FlxCamera_obj::setScale( Float X,Float Y){
{
		HX_STACK_PUSH("FlxCamera::setScale","flixel/FlxCamera.hx",1099);
		HX_STACK_THIS(this);
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_LINE(1100)
		this->flashSprite->set_scaleX(X);
		HX_STACK_LINE(1101)
		this->flashSprite->set_scaleY(Y);
		HX_STACK_LINE(1104)
		this->flashOffsetX = ((this->width * 0.5) * X);
		HX_STACK_LINE(1105)
		this->flashOffsetY = ((this->height * 0.5) * Y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setScale,(void))

Void FlxCamera_obj::setBounds( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_UpdateWorld){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
bool UpdateWorld = __o_UpdateWorld.Default(false);
	HX_STACK_PUSH("FlxCamera::setBounds","flixel/FlxCamera.hx",1085);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(UpdateWorld,"UpdateWorld");
{
		HX_STACK_LINE(1086)
		if (((this->bounds == null()))){
			HX_STACK_LINE(1087)
			this->bounds = ::flixel::util::FlxRect_obj::__new(null(),null(),null(),null());
		}
		HX_STACK_LINE(1090)
		{
			HX_STACK_LINE(1090)
			::flixel::util::FlxRect _this = this->bounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1090)
			_this->x = X;
			HX_STACK_LINE(1090)
			_this->y = Y;
			HX_STACK_LINE(1090)
			_this->width = Width;
			HX_STACK_LINE(1090)
			_this->height = Height;
			HX_STACK_LINE(1090)
			_this;
		}
		HX_STACK_LINE(1091)
		if ((UpdateWorld)){
			HX_STACK_LINE(1093)
			::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
			::flixel::util::FlxRect Rect = this->bounds;		HX_STACK_VAR(Rect,"Rect");
			HX_STACK_LINE(1093)
			_this->x = Rect->x;
			HX_STACK_LINE(1093)
			_this->y = Rect->y;
			HX_STACK_LINE(1093)
			_this->width = Rect->width;
			HX_STACK_LINE(1093)
			_this->height = Rect->height;
			HX_STACK_LINE(1093)
			_this;
		}
		HX_STACK_LINE(1095)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,setBounds,(void))

Void FlxCamera_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_PUSH("FlxCamera::setPosition","flixel/FlxCamera.hx",1070);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
{
		HX_STACK_LINE(1071)
		this->x = X;
		HX_STACK_LINE(1072)
		this->y = Y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setPosition,(void))

Void FlxCamera_obj::setSize( int Width,int Height){
{
		HX_STACK_PUSH("FlxCamera::setSize","flixel/FlxCamera.hx",1057);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Width,"Width");
		HX_STACK_ARG(Height,"Height");
		HX_STACK_LINE(1058)
		this->set_width(Width);
		HX_STACK_LINE(1059)
		this->set_height(Height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setSize,(void))

Void FlxCamera_obj::drawFX( ){
{
		HX_STACK_PUSH("FlxCamera::drawFX","flixel/FlxCamera.hx",993);
		HX_STACK_THIS(this);
		HX_STACK_LINE(994)
		Float alphaComponent;		HX_STACK_VAR(alphaComponent,"alphaComponent");
		HX_STACK_LINE(997)
		if (((this->_fxFlashAlpha > 0.0))){
			HX_STACK_LINE(999)
			alphaComponent = (int((int(this->_fxFlashColor) >> int((int)24))) & int((int)255));
			HX_STACK_LINE(1004)
			this->fill((int(this->_fxFlashColor) & int((int)16777215)),true,(Float((((  (((alphaComponent <= (int)0))) ? Float((int)255) : Float(alphaComponent) )) * this->_fxFlashAlpha)) / Float((int)255)),this->canvas->get_graphics());
		}
		HX_STACK_LINE(1009)
		if (((this->_fxFadeAlpha > 0.0))){
			HX_STACK_LINE(1011)
			alphaComponent = (int((int(this->_fxFadeColor) >> int((int)24))) & int((int)255));
			HX_STACK_LINE(1016)
			this->fill((int(this->_fxFadeColor) & int((int)16777215)),true,(Float((((  (((alphaComponent <= (int)0))) ? Float((int)255) : Float(alphaComponent) )) * this->_fxFadeAlpha)) / Float((int)255)),this->canvas->get_graphics());
		}
		HX_STACK_LINE(1020)
		if (((bool((this->_fxShakeOffset->x != (int)0)) || bool((this->_fxShakeOffset->y != (int)0))))){
			HX_STACK_LINE(1022)
			{
				HX_STACK_LINE(1022)
				::flash::display::Sprite _g = this->flashSprite;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1022)
				_g->set_x((_g->get_x() + this->_fxShakeOffset->x));
			}
			HX_STACK_LINE(1023)
			{
				HX_STACK_LINE(1023)
				::flash::display::Sprite _g = this->flashSprite;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1023)
				_g->set_y((_g->get_y() + this->_fxShakeOffset->y));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,drawFX,(void))

Void FlxCamera_obj::fill( int Color,hx::Null< bool >  __o_BlendAlpha,hx::Null< Float >  __o_FxAlpha,::flash::display::Graphics graphics){
bool BlendAlpha = __o_BlendAlpha.Default(true);
Float FxAlpha = __o_FxAlpha.Default(1.0);
	HX_STACK_PUSH("FlxCamera::fill","flixel/FlxCamera.hx",961);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(BlendAlpha,"BlendAlpha");
	HX_STACK_ARG(FxAlpha,"FxAlpha");
	HX_STACK_ARG(graphics,"graphics");
{
		HX_STACK_LINE(974)
		if (((FxAlpha == (int)0))){
			HX_STACK_LINE(975)
			return null();
		}
		HX_STACK_LINE(979)
		::flash::display::Graphics targetGraphics = (  (((graphics == null()))) ? ::flash::display::Graphics(this->canvas->get_graphics()) : ::flash::display::Graphics(graphics) );		HX_STACK_VAR(targetGraphics,"targetGraphics");
		HX_STACK_LINE(980)
		Color = (int(Color) & int((int)16777215));
		HX_STACK_LINE(983)
		targetGraphics->beginFill(Color,FxAlpha);
		HX_STACK_LINE(984)
		targetGraphics->drawRect((int)0,(int)0,this->width,this->height);
		HX_STACK_LINE(985)
		targetGraphics->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,fill,(void))

::flixel::FlxCamera FlxCamera_obj::copyFrom( ::flixel::FlxCamera Camera){
	HX_STACK_PUSH("FlxCamera::copyFrom","flixel/FlxCamera.hx",922);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_LINE(923)
	if (((Camera->bounds == null()))){
		HX_STACK_LINE(924)
		this->bounds = null();
	}
	else{
		HX_STACK_LINE(929)
		if (((this->bounds == null()))){
			HX_STACK_LINE(930)
			this->bounds = ::flixel::util::FlxRect_obj::__new(null(),null(),null(),null());
		}
		HX_STACK_LINE(933)
		{
			HX_STACK_LINE(933)
			::flixel::util::FlxRect _this = this->bounds;		HX_STACK_VAR(_this,"_this");
			::flixel::util::FlxRect Rect = Camera->bounds;		HX_STACK_VAR(Rect,"Rect");
			HX_STACK_LINE(933)
			_this->x = Rect->x;
			HX_STACK_LINE(933)
			_this->y = Rect->y;
			HX_STACK_LINE(933)
			_this->width = Rect->width;
			HX_STACK_LINE(933)
			_this->height = Rect->height;
			HX_STACK_LINE(933)
			_this;
		}
	}
	HX_STACK_LINE(935)
	this->target = Camera->target;
	HX_STACK_LINE(936)
	if (((this->target != null()))){
		HX_STACK_LINE(937)
		if (((Camera->deadzone == null()))){
			HX_STACK_LINE(939)
			this->deadzone = null();
		}
		else{
			HX_STACK_LINE(944)
			if (((this->deadzone == null()))){
				HX_STACK_LINE(945)
				this->deadzone = ::flixel::util::FlxRect_obj::__new(null(),null(),null(),null());
			}
			HX_STACK_LINE(948)
			{
				HX_STACK_LINE(948)
				::flixel::util::FlxRect _this = this->deadzone;		HX_STACK_VAR(_this,"_this");
				::flixel::util::FlxRect Rect = Camera->deadzone;		HX_STACK_VAR(Rect,"Rect");
				HX_STACK_LINE(948)
				_this->x = Rect->x;
				HX_STACK_LINE(948)
				_this->y = Rect->y;
				HX_STACK_LINE(948)
				_this->width = Rect->width;
				HX_STACK_LINE(948)
				_this->height = Rect->height;
				HX_STACK_LINE(948)
				_this;
			}
		}
	}
	HX_STACK_LINE(951)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,copyFrom,return )

Void FlxCamera_obj::stopFX( ){
{
		HX_STACK_PUSH("FlxCamera::stopFX","flixel/FlxCamera.hx",908);
		HX_STACK_THIS(this);
		HX_STACK_LINE(909)
		this->_fxFlashAlpha = 0.0;
		HX_STACK_LINE(910)
		this->_fxFadeAlpha = 0.0;
		HX_STACK_LINE(911)
		this->_fxShakeDuration = (int)0;
		HX_STACK_LINE(912)
		this->flashSprite->set_x((this->x + this->flashOffsetX));
		HX_STACK_LINE(913)
		this->flashSprite->set_y((this->y + this->flashOffsetY));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,stopFX,(void))

Void FlxCamera_obj::shake( hx::Null< Float >  __o_Intensity,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force,hx::Null< int >  __o_Direction){
Float Intensity = __o_Intensity.Default(0.05);
Float Duration = __o_Duration.Default(0.5);
bool Force = __o_Force.Default(true);
int Direction = __o_Direction.Default(0);
	HX_STACK_PUSH("FlxCamera::shake","flixel/FlxCamera.hx",892);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Intensity,"Intensity");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
	HX_STACK_ARG(Direction,"Direction");
{
		HX_STACK_LINE(893)
		if (((bool(!(Force)) && bool(((bool((this->_fxShakeOffset->x != (int)0)) || bool((this->_fxShakeOffset->y != (int)0)))))))){
			HX_STACK_LINE(894)
			return null();
		}
		HX_STACK_LINE(897)
		this->_fxShakeIntensity = Intensity;
		HX_STACK_LINE(898)
		this->_fxShakeDuration = Duration;
		HX_STACK_LINE(899)
		this->_fxShakeComplete = OnComplete;
		HX_STACK_LINE(900)
		this->_fxShakeDirection = Direction;
		HX_STACK_LINE(901)
		this->_fxShakeOffset->set(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,shake,(void))

Void FlxCamera_obj::fade( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,hx::Null< bool >  __o_FadeIn,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-16777216);
Float Duration = __o_Duration.Default(1);
bool FadeIn = __o_FadeIn.Default(false);
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("FlxCamera::fade","flixel/FlxCamera.hx",858);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(FadeIn,"FadeIn");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(859)
		if (((bool(!(Force)) && bool((this->_fxFadeAlpha > 0.0))))){
			HX_STACK_LINE(860)
			return null();
		}
		HX_STACK_LINE(863)
		this->_fxFadeColor = Color;
		HX_STACK_LINE(864)
		if (((Duration <= (int)0))){
			HX_STACK_LINE(865)
			Duration = 0.0000000000000001;
		}
		HX_STACK_LINE(869)
		this->_fxFadeIn = FadeIn;
		HX_STACK_LINE(870)
		this->_fxFadeDuration = Duration;
		HX_STACK_LINE(871)
		this->_fxFadeComplete = OnComplete;
		HX_STACK_LINE(873)
		if ((this->_fxFadeIn)){
			HX_STACK_LINE(874)
			this->_fxFadeAlpha = 0.999999;
		}
		else{
			HX_STACK_LINE(878)
			this->_fxFadeAlpha = 0.0000000000000001;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,fade,(void))

Void FlxCamera_obj::flash( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-1);
Float Duration = __o_Duration.Default(1);
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("FlxCamera::flash","flixel/FlxCamera.hx",833);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(834)
		if (((bool(!(Force)) && bool((this->_fxFlashAlpha > 0.0))))){
			HX_STACK_LINE(835)
			return null();
		}
		HX_STACK_LINE(838)
		this->_fxFlashColor = Color;
		HX_STACK_LINE(839)
		if (((Duration <= (int)0))){
			HX_STACK_LINE(840)
			Duration = 0.0000000000000001;
		}
		HX_STACK_LINE(843)
		this->_fxFlashDuration = Duration;
		HX_STACK_LINE(844)
		this->_fxFlashComplete = OnComplete;
		HX_STACK_LINE(845)
		this->_fxFlashAlpha = 1.0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,flash,(void))

Void FlxCamera_obj::focusOn( ::flixel::util::FlxPoint point){
{
		HX_STACK_PUSH("FlxCamera::focusOn","flixel/FlxCamera.hx",820);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_LINE(820)
		this->scroll->set((point->x - (this->width * 0.5)),(point->y - (this->height * 0.5)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,focusOn,(void))

Void FlxCamera_obj::followAdjust( hx::Null< Float >  __o_LeadX,hx::Null< Float >  __o_LeadY){
Float LeadX = __o_LeadX.Default(0);
Float LeadY = __o_LeadY.Default(0);
	HX_STACK_PUSH("FlxCamera::followAdjust","flixel/FlxCamera.hx",811);
	HX_STACK_THIS(this);
	HX_STACK_ARG(LeadX,"LeadX");
	HX_STACK_ARG(LeadY,"LeadY");
{
		HX_STACK_LINE(811)
		this->followLead = ::flash::geom::Point_obj::__new(LeadX,LeadY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,followAdjust,(void))

Void FlxCamera_obj::follow( ::flixel::FlxObject Target,hx::Null< int >  __o_Style,::flixel::util::FlxPoint Offset,hx::Null< Float >  __o_Lerp){
int Style = __o_Style.Default(0);
Float Lerp = __o_Lerp.Default(0);
	HX_STACK_PUSH("FlxCamera::follow","flixel/FlxCamera.hx",768);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Target,"Target");
	HX_STACK_ARG(Style,"Style");
	HX_STACK_ARG(Offset,"Offset");
	HX_STACK_ARG(Lerp,"Lerp");
{
		HX_STACK_LINE(769)
		this->style = Style;
		HX_STACK_LINE(770)
		this->target = Target;
		HX_STACK_LINE(771)
		this->followLerp = Lerp;
		HX_STACK_LINE(772)
		Float helper;		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(773)
		Float w = (int)0;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(774)
		Float h = (int)0;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(775)
		this->_lastTargetPosition = null();
		HX_STACK_LINE(776)
		switch( (int)(Style)){
			case (int)1: {
				HX_STACK_LINE(779)
				Float w1 = ((Float(this->width) / Float((int)8)) + ((  (((Offset != null()))) ? Float(Offset->x) : Float((int)0) )));		HX_STACK_VAR(w1,"w1");
				HX_STACK_LINE(780)
				Float h1 = ((Float(this->height) / Float((int)3)) + ((  (((Offset != null()))) ? Float(Offset->y) : Float((int)0) )));		HX_STACK_VAR(h1,"h1");
				HX_STACK_LINE(781)
				this->deadzone = ::flixel::util::FlxRect_obj::__new((Float(((this->width - w1))) / Float((int)2)),((Float(((this->height - h1))) / Float((int)2)) - (h1 * 0.25)),w1,h1);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(783)
				helper = (Float(::Math_obj::max(this->width,this->height)) / Float((int)4));
				HX_STACK_LINE(784)
				this->deadzone = ::flixel::util::FlxRect_obj::__new((Float(((this->width - helper))) / Float((int)2)),(Float(((this->height - helper))) / Float((int)2)),helper,helper);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(786)
				helper = (Float(::Math_obj::max(this->width,this->height)) / Float((int)8));
				HX_STACK_LINE(787)
				this->deadzone = ::flixel::util::FlxRect_obj::__new((Float(((this->width - helper))) / Float((int)2)),(Float(((this->height - helper))) / Float((int)2)),helper,helper);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(789)
				if (((this->target != null()))){
					HX_STACK_LINE(791)
					w = (this->target->get_width() + ((  (((Offset != null()))) ? Float(Offset->x) : Float((int)0) )));
					HX_STACK_LINE(792)
					h = (this->target->get_height() + ((  (((Offset != null()))) ? Float(Offset->y) : Float((int)0) )));
				}
				HX_STACK_LINE(794)
				this->deadzone = ::flixel::util::FlxRect_obj::__new((Float(((this->width - w))) / Float((int)2)),((Float(((this->height - h))) / Float((int)2)) - (h * 0.25)),w,h);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(795)
				this->deadzone = ::flixel::util::FlxRect_obj::__new((int)0,(int)0,this->width,this->height);
			}
			;break;
			default: {
				HX_STACK_LINE(797)
				this->deadzone = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,follow,(void))

Void FlxCamera_obj::update( ){
{
		HX_STACK_PUSH("FlxCamera::update","flixel/FlxCamera.hx",578);
		HX_STACK_THIS(this);
		HX_STACK_LINE(581)
		if (((this->target != null()))){
			HX_STACK_LINE(582)
			if (((this->deadzone == null()))){
				HX_STACK_LINE(585)
				::flixel::util::FlxPoint point = this->target->getMidpoint(this->_point);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(585)
				this->scroll->set((point->x - (this->width * 0.5)),(point->y - (this->height * 0.5)));
			}
			else{
				HX_STACK_LINE(589)
				Float edge;		HX_STACK_VAR(edge,"edge");
				HX_STACK_LINE(590)
				Float targetX = this->target->x;		HX_STACK_VAR(targetX,"targetX");
				HX_STACK_LINE(591)
				Float targetY = this->target->y;		HX_STACK_VAR(targetY,"targetY");
				HX_STACK_LINE(593)
				if (((this->style == (int)4))){
					HX_STACK_LINE(595)
					if (((targetX > (this->scroll->x + this->width)))){
						HX_STACK_LINE(597)
						::flixel::util::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(597)
						_g->set_x((_g->x + this->width));
					}
					else{
						HX_STACK_LINE(599)
						if (((targetX < this->scroll->x))){
							HX_STACK_LINE(601)
							::flixel::util::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(601)
							_g->set_x((_g->x - this->width));
						}
					}
					HX_STACK_LINE(604)
					if (((targetY > (this->scroll->y + this->height)))){
						HX_STACK_LINE(606)
						::flixel::util::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(606)
						_g->set_y((_g->y + this->height));
					}
					else{
						HX_STACK_LINE(608)
						if (((targetY < this->scroll->y))){
							HX_STACK_LINE(610)
							::flixel::util::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(610)
							_g->set_y((_g->y - this->height));
						}
					}
				}
				else{
					HX_STACK_LINE(615)
					edge = (targetX - this->deadzone->x);
					HX_STACK_LINE(616)
					if (((this->_scrollTarget->x > edge))){
						HX_STACK_LINE(617)
						this->_scrollTarget->set_x(edge);
					}
					HX_STACK_LINE(620)
					edge = (((targetX + this->target->get_width()) - this->deadzone->x) - this->deadzone->width);
					HX_STACK_LINE(621)
					if (((this->_scrollTarget->x < edge))){
						HX_STACK_LINE(622)
						this->_scrollTarget->set_x(edge);
					}
					HX_STACK_LINE(626)
					edge = (targetY - this->deadzone->y);
					HX_STACK_LINE(627)
					if (((this->_scrollTarget->y > edge))){
						HX_STACK_LINE(628)
						this->_scrollTarget->set_y(edge);
					}
					HX_STACK_LINE(631)
					edge = (((targetY + this->target->get_height()) - this->deadzone->y) - this->deadzone->height);
					HX_STACK_LINE(632)
					if (((this->_scrollTarget->y < edge))){
						HX_STACK_LINE(633)
						this->_scrollTarget->set_y(edge);
					}
				}
				HX_STACK_LINE(638)
				if (((bool((this->followLead != null())) && bool(::Std_obj::is(this->target,hx::ClassOf< ::flixel::FlxSprite >()))))){
					HX_STACK_LINE(640)
					if (((this->_lastTargetPosition == null()))){
						HX_STACK_LINE(641)
						this->_lastTargetPosition = ::flixel::util::FlxPoint_obj::__new(this->target->x,this->target->y);
					}
					HX_STACK_LINE(644)
					{
						HX_STACK_LINE(644)
						::flixel::util::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(644)
						_g->set_x((_g->x + (((this->target->x - this->_lastTargetPosition->x)) * this->followLead->x)));
					}
					HX_STACK_LINE(645)
					{
						HX_STACK_LINE(645)
						::flixel::util::FlxPoint _g = this->_scrollTarget;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(645)
						_g->set_y((_g->y + (((this->target->y - this->_lastTargetPosition->y)) * this->followLead->y)));
					}
					HX_STACK_LINE(647)
					this->_lastTargetPosition->set_x(this->target->x);
					HX_STACK_LINE(648)
					this->_lastTargetPosition->set_y(this->target->y);
				}
				HX_STACK_LINE(652)
				if (((this->followLerp == (int)0))){
					HX_STACK_LINE(654)
					this->scroll->set_x(this->_scrollTarget->x);
					HX_STACK_LINE(655)
					this->scroll->set_y(this->_scrollTarget->y);
				}
				else{
					HX_STACK_LINE(658)
					{
						HX_STACK_LINE(658)
						::flixel::util::FlxPoint _g = this->scroll;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(658)
						_g->set_x((_g->x + (Float((((this->_scrollTarget->x - this->scroll->x)) * ::flixel::FlxG_obj::elapsed)) / Float(((::flixel::FlxG_obj::elapsed + (this->followLerp * ::flixel::FlxG_obj::elapsed)))))));
					}
					HX_STACK_LINE(659)
					{
						HX_STACK_LINE(659)
						::flixel::util::FlxPoint _g = this->scroll;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(659)
						_g->set_y((_g->y + (Float((((this->_scrollTarget->y - this->scroll->y)) * ::flixel::FlxG_obj::elapsed)) / Float(((::flixel::FlxG_obj::elapsed + (this->followLerp * ::flixel::FlxG_obj::elapsed)))))));
					}
				}
			}
		}
		HX_STACK_LINE(666)
		if (((this->bounds != null()))){
			HX_STACK_LINE(668)
			if (((this->scroll->x < this->bounds->get_left()))){
				HX_STACK_LINE(669)
				this->scroll->set_x(this->bounds->get_left());
			}
			HX_STACK_LINE(672)
			if (((this->scroll->x > (this->bounds->get_right() - this->width)))){
				HX_STACK_LINE(673)
				this->scroll->set_x((this->bounds->get_right() - this->width));
			}
			HX_STACK_LINE(676)
			if (((this->scroll->y < this->bounds->get_top()))){
				HX_STACK_LINE(677)
				this->scroll->set_y(this->bounds->get_top());
			}
			HX_STACK_LINE(680)
			if (((this->scroll->y > (this->bounds->get_bottom() - this->height)))){
				HX_STACK_LINE(681)
				this->scroll->set_y((this->bounds->get_bottom() - this->height));
			}
		}
		HX_STACK_LINE(687)
		if (((this->_fxFlashAlpha > 0.0))){
			HX_STACK_LINE(689)
			hx::SubEq(this->_fxFlashAlpha,(Float(::flixel::FlxG_obj::elapsed) / Float(this->_fxFlashDuration)));
			HX_STACK_LINE(690)
			if (((bool((this->_fxFlashAlpha <= (int)0)) && bool((this->_fxFlashComplete_dyn() != null()))))){
				HX_STACK_LINE(691)
				this->_fxFlashComplete();
			}
		}
		HX_STACK_LINE(697)
		if (((bool((this->_fxFadeAlpha > 0.0)) && bool((this->_fxFadeAlpha < 1.0))))){
			HX_STACK_LINE(698)
			if ((this->_fxFadeIn)){
				HX_STACK_LINE(701)
				hx::SubEq(this->_fxFadeAlpha,(Float(::flixel::FlxG_obj::elapsed) / Float(this->_fxFadeDuration)));
				HX_STACK_LINE(702)
				if (((this->_fxFadeAlpha <= 0.0))){
					HX_STACK_LINE(704)
					this->_fxFadeAlpha = 0.0;
					HX_STACK_LINE(705)
					if (((this->_fxFadeComplete_dyn() != null()))){
						HX_STACK_LINE(706)
						this->_fxFadeComplete();
					}
				}
			}
			else{
				HX_STACK_LINE(713)
				hx::AddEq(this->_fxFadeAlpha,(Float(::flixel::FlxG_obj::elapsed) / Float(this->_fxFadeDuration)));
				HX_STACK_LINE(714)
				if (((this->_fxFadeAlpha >= 1.0))){
					HX_STACK_LINE(716)
					this->_fxFadeAlpha = 1.0;
					HX_STACK_LINE(717)
					if (((this->_fxFadeComplete_dyn() != null()))){
						HX_STACK_LINE(718)
						this->_fxFadeComplete();
					}
				}
			}
		}
		HX_STACK_LINE(726)
		if (((this->_fxShakeDuration > (int)0))){
			HX_STACK_LINE(728)
			hx::SubEq(this->_fxShakeDuration,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(729)
			if (((this->_fxShakeDuration <= (int)0))){
				HX_STACK_LINE(731)
				this->_fxShakeOffset->set(null(),null());
				HX_STACK_LINE(732)
				if (((this->_fxShakeComplete_dyn() != null()))){
					HX_STACK_LINE(733)
					this->_fxShakeComplete();
				}
			}
			else{
				HX_STACK_LINE(740)
				if (((bool((this->_fxShakeDirection == (int)0)) || bool((this->_fxShakeDirection == (int)1))))){
					HX_STACK_LINE(741)
					this->_fxShakeOffset->set_x((((((((Float((::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647)))) / Float((int)2147483647)) * this->_fxShakeIntensity) * this->width) * (int)2) - (this->_fxShakeIntensity * this->width))) * this->zoom));
				}
				HX_STACK_LINE(744)
				if (((bool((this->_fxShakeDirection == (int)0)) || bool((this->_fxShakeDirection == (int)2))))){
					HX_STACK_LINE(745)
					this->_fxShakeOffset->set_y((((((((Float((::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647)))) / Float((int)2147483647)) * this->_fxShakeIntensity) * this->height) * (int)2) - (this->_fxShakeIntensity * this->height))) * this->zoom));
				}
			}
			HX_STACK_LINE(751)
			if (((this->target != null()))){
				HX_STACK_LINE(753)
				this->flashSprite->set_x((this->x + this->flashOffsetX));
				HX_STACK_LINE(754)
				this->flashSprite->set_y((this->y + this->flashOffsetY));
			}
		}
	}
return null();
}


Void FlxCamera_obj::destroy( ){
{
		HX_STACK_PUSH("FlxCamera::destroy","flixel/FlxCamera.hx",521);
		HX_STACK_THIS(this);
		HX_STACK_LINE(529)
		this->target = null();
		HX_STACK_LINE(530)
		this->scroll = null();
		HX_STACK_LINE(531)
		this->deadzone = null();
		HX_STACK_LINE(532)
		this->bounds = null();
		HX_STACK_LINE(537)
		this->_flashRect = null();
		HX_STACK_LINE(538)
		this->_flashPoint = null();
		HX_STACK_LINE(539)
		this->_fxFlashComplete = null();
		HX_STACK_LINE(540)
		this->_fxFadeComplete = null();
		HX_STACK_LINE(541)
		this->_fxShakeComplete = null();
		HX_STACK_LINE(542)
		this->_fxShakeOffset = null();
		HX_STACK_LINE(555)
		this->flashSprite->removeChild(this->canvas);
		HX_STACK_LINE(556)
		int canvasNumChildren = this->canvas->get_numChildren();		HX_STACK_VAR(canvasNumChildren,"canvasNumChildren");
		HX_STACK_LINE(557)
		{
			HX_STACK_LINE(557)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = canvasNumChildren;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(557)
			while(((_g1 < _g))){
				HX_STACK_LINE(557)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(559)
				this->canvas->removeChildAt((int)0);
			}
		}
		HX_STACK_LINE(561)
		this->canvas = null();
		HX_STACK_LINE(563)
		this->clearDrawStack();
		HX_STACK_LINE(565)
		this->_headOfDrawStack->dispose();
		HX_STACK_LINE(566)
		this->_headOfDrawStack = null();
		HX_STACK_LINE(567)
		this->_currentStackItem = null();
		HX_STACK_LINE(569)
		this->flashSprite = null();
		HX_STACK_LINE(571)
		this->super::destroy();
	}
return null();
}


Void FlxCamera_obj::render( ){
{
		HX_STACK_PUSH("FlxCamera::render","flixel/FlxCamera.hx",394);
		HX_STACK_THIS(this);
		HX_STACK_LINE(395)
		::flixel::system::layer::DrawStackItem currItem = this->_headOfDrawStack;		HX_STACK_VAR(currItem,"currItem");
		HX_STACK_LINE(396)
		while(((currItem != null()))){
			HX_STACK_LINE(398)
			Array< Float > data = currItem->drawData;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(399)
			int dataLen = data->length;		HX_STACK_VAR(dataLen,"dataLen");
			HX_STACK_LINE(400)
			int position = currItem->position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(401)
			if (((position > (int)0))){
				HX_STACK_LINE(403)
				if (((dataLen != position))){
					HX_STACK_LINE(404)
					data->length = position;
				}
				HX_STACK_LINE(407)
				int tempFlags = (int)16;		HX_STACK_VAR(tempFlags,"tempFlags");
				HX_STACK_LINE(409)
				hx::OrEq(tempFlags,(int)8);
				HX_STACK_LINE(410)
				if ((currItem->colored)){
					HX_STACK_LINE(411)
					hx::OrEq(tempFlags,(int)4);
				}
				HX_STACK_LINE(414)
				hx::OrEq(tempFlags,currItem->blending);
				HX_STACK_LINE(421)
				currItem->graphics->get_tilesheet()->tileSheet->drawTiles(this->canvas->get_graphics(),data,(bool(this->antialiasing) || bool(currItem->antialiasing)),tempFlags);
				HX_STACK_LINE(422)
				(::flixel::system::layer::TileSheetExt_obj::_DRAWCALLS)++;
			}
			HX_STACK_LINE(424)
			currItem = currItem->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,render,(void))

Void FlxCamera_obj::clearDrawStack( ){
{
		HX_STACK_PUSH("FlxCamera::clearDrawStack","flixel/FlxCamera.hx",368);
		HX_STACK_THIS(this);
		HX_STACK_LINE(369)
		::flixel::system::layer::DrawStackItem currItem = this->_headOfDrawStack->next;		HX_STACK_VAR(currItem,"currItem");
		HX_STACK_LINE(370)
		while(((currItem != null()))){
			HX_STACK_LINE(372)
			{
				HX_STACK_LINE(372)
				currItem->graphics = null();
				HX_STACK_LINE(372)
				currItem->initialized = false;
				HX_STACK_LINE(372)
				currItem->antialiasing = false;
				HX_STACK_LINE(372)
				currItem->position = (int)0;
			}
			HX_STACK_LINE(373)
			::flixel::system::layer::DrawStackItem newStorageHead = currItem;		HX_STACK_VAR(newStorageHead,"newStorageHead");
			HX_STACK_LINE(374)
			currItem = currItem->next;
			HX_STACK_LINE(375)
			if (((::flixel::FlxCamera_obj::_storageHead == null()))){
				HX_STACK_LINE(377)
				::flixel::FlxCamera_obj::_storageHead = newStorageHead;
				HX_STACK_LINE(378)
				newStorageHead->next = null();
			}
			else{
				HX_STACK_LINE(382)
				newStorageHead->next = ::flixel::FlxCamera_obj::_storageHead;
				HX_STACK_LINE(383)
				::flixel::FlxCamera_obj::_storageHead = newStorageHead;
			}
		}
		HX_STACK_LINE(387)
		{
			HX_STACK_LINE(387)
			::flixel::system::layer::DrawStackItem _this = this->_headOfDrawStack;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(387)
			_this->graphics = null();
			HX_STACK_LINE(387)
			_this->initialized = false;
			HX_STACK_LINE(387)
			_this->antialiasing = false;
			HX_STACK_LINE(387)
			_this->position = (int)0;
		}
		HX_STACK_LINE(388)
		this->_headOfDrawStack->next = null();
		HX_STACK_LINE(389)
		this->_currentStackItem = this->_headOfDrawStack;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,clearDrawStack,(void))

::flixel::system::layer::DrawStackItem FlxCamera_obj::getDrawStackItem( ::flixel::util::loaders::CachedGraphics ObjGraphics,bool ObjColored,int ObjBlending,hx::Null< bool >  __o_ObjAntialiasing){
bool ObjAntialiasing = __o_ObjAntialiasing.Default(false);
	HX_STACK_PUSH("FlxCamera::getDrawStackItem","flixel/FlxCamera.hx",306);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjGraphics,"ObjGraphics");
	HX_STACK_ARG(ObjColored,"ObjColored");
	HX_STACK_ARG(ObjBlending,"ObjBlending");
	HX_STACK_ARG(ObjAntialiasing,"ObjAntialiasing");
{
		HX_STACK_LINE(307)
		::flixel::system::layer::DrawStackItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
		HX_STACK_LINE(308)
		if (((this->_currentStackItem->initialized == false))){
			HX_STACK_LINE(310)
			this->_headOfDrawStack = this->_currentStackItem;
			HX_STACK_LINE(311)
			this->_currentStackItem->graphics = ObjGraphics;
			HX_STACK_LINE(312)
			this->_currentStackItem->antialiasing = ObjAntialiasing;
			HX_STACK_LINE(314)
			this->_currentStackItem->colored = ObjColored;
			HX_STACK_LINE(315)
			this->_currentStackItem->blending = ObjBlending;
			HX_STACK_LINE(319)
			itemToReturn = this->_currentStackItem;
		}
		else{
			HX_STACK_LINE(322)
			if (((bool((bool((bool((this->_currentStackItem->graphics == ObjGraphics)) && bool((this->_currentStackItem->colored == ObjColored)))) && bool((this->_currentStackItem->blending == ObjBlending)))) && bool((this->_currentStackItem->antialiasing == ObjAntialiasing))))){
				HX_STACK_LINE(330)
				itemToReturn = this->_currentStackItem;
			}
		}
		HX_STACK_LINE(334)
		if (((itemToReturn == null()))){
			HX_STACK_LINE(336)
			::flixel::system::layer::DrawStackItem newItem = null();		HX_STACK_VAR(newItem,"newItem");
			HX_STACK_LINE(337)
			if (((::flixel::FlxCamera_obj::_storageHead != null()))){
				HX_STACK_LINE(339)
				newItem = ::flixel::FlxCamera_obj::_storageHead;
				HX_STACK_LINE(340)
				::flixel::system::layer::DrawStackItem newHead = ::flixel::FlxCamera_obj::_storageHead->next;		HX_STACK_VAR(newHead,"newHead");
				HX_STACK_LINE(341)
				newItem->next = null();
				HX_STACK_LINE(342)
				::flixel::FlxCamera_obj::_storageHead = newHead;
			}
			else{
				HX_STACK_LINE(345)
				newItem = ::flixel::system::layer::DrawStackItem_obj::__new();
			}
			HX_STACK_LINE(349)
			newItem->graphics = ObjGraphics;
			HX_STACK_LINE(350)
			newItem->antialiasing = ObjAntialiasing;
			HX_STACK_LINE(352)
			newItem->colored = ObjColored;
			HX_STACK_LINE(353)
			newItem->blending = ObjBlending;
			HX_STACK_LINE(357)
			this->_currentStackItem->next = newItem;
			HX_STACK_LINE(358)
			this->_currentStackItem = newItem;
			HX_STACK_LINE(359)
			itemToReturn = this->_currentStackItem;
		}
		HX_STACK_LINE(362)
		itemToReturn->initialized = true;
		HX_STACK_LINE(363)
		return itemToReturn;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,getDrawStackItem,return )

int FlxCamera_obj::STYLE_LOCKON;

int FlxCamera_obj::STYLE_PLATFORMER;

int FlxCamera_obj::STYLE_TOPDOWN;

int FlxCamera_obj::STYLE_TOPDOWN_TIGHT;

int FlxCamera_obj::STYLE_SCREEN_BY_SCREEN;

int FlxCamera_obj::STYLE_NO_DEAD_ZONE;

int FlxCamera_obj::SHAKE_BOTH_AXES;

int FlxCamera_obj::SHAKE_HORIZONTAL_ONLY;

int FlxCamera_obj::SHAKE_VERTICAL_ONLY;

Float FlxCamera_obj::defaultZoom;

::flixel::system::layer::DrawStackItem FlxCamera_obj::_storageHead;


FlxCamera_obj::FlxCamera_obj()
{
}

void FlxCamera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxCamera);
	HX_MARK_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
	HX_MARK_MEMBER_NAME(_currentStackItem,"_currentStackItem");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_fxShakeDirection,"_fxShakeDirection");
	HX_MARK_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_MARK_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_MARK_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_MARK_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_MARK_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_MARK_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_MARK_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_MARK_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_MARK_MEMBER_NAME(_scrollTarget,"_scrollTarget");
	HX_MARK_MEMBER_NAME(_lastTargetPosition,"_lastTargetPosition");
	HX_MARK_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_MARK_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_MARK_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_MARK_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_MARK_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(flashOffsetY,"flashOffsetY");
	HX_MARK_MEMBER_NAME(flashOffsetX,"flashOffsetX");
	HX_MARK_MEMBER_NAME(flashSprite,"flashSprite");
	HX_MARK_MEMBER_NAME(useBgAlphaBlending,"useBgAlphaBlending");
	HX_MARK_MEMBER_NAME(bgColor,"bgColor");
	HX_MARK_MEMBER_NAME(scroll,"scroll");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(deadzone,"deadzone");
	HX_MARK_MEMBER_NAME(followLerp,"followLerp");
	HX_MARK_MEMBER_NAME(followLead,"followLead");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxCamera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
	HX_VISIT_MEMBER_NAME(_currentStackItem,"_currentStackItem");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_fxShakeDirection,"_fxShakeDirection");
	HX_VISIT_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_VISIT_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_VISIT_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_VISIT_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_VISIT_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_VISIT_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_VISIT_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_VISIT_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_VISIT_MEMBER_NAME(_scrollTarget,"_scrollTarget");
	HX_VISIT_MEMBER_NAME(_lastTargetPosition,"_lastTargetPosition");
	HX_VISIT_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_VISIT_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_VISIT_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_VISIT_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_VISIT_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(flashOffsetY,"flashOffsetY");
	HX_VISIT_MEMBER_NAME(flashOffsetX,"flashOffsetX");
	HX_VISIT_MEMBER_NAME(flashSprite,"flashSprite");
	HX_VISIT_MEMBER_NAME(useBgAlphaBlending,"useBgAlphaBlending");
	HX_VISIT_MEMBER_NAME(bgColor,"bgColor");
	HX_VISIT_MEMBER_NAME(scroll,"scroll");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(deadzone,"deadzone");
	HX_VISIT_MEMBER_NAME(followLerp,"followLerp");
	HX_VISIT_MEMBER_NAME(followLead,"followLead");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(style,"style");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxCamera_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		if (HX_FIELD_EQ(inName,"fade") ) { return fade_dyn(); }
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		if (HX_FIELD_EQ(inName,"flash") ) { return flash_dyn(); }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"style") ) { return style; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"drawFX") ) { return drawFX_dyn(); }
		if (HX_FIELD_EQ(inName,"stopFX") ) { return stopFX_dyn(); }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		if (HX_FIELD_EQ(inName,"focusOn") ) { return focusOn_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"bgColor") ) { return bgColor; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_zoom") ) { return set_zoom_dyn(); }
		if (HX_FIELD_EQ(inName,"getScale") ) { return getScale_dyn(); }
		if (HX_FIELD_EQ(inName,"setScale") ) { return setScale_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"deadzone") ) { return deadzone; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"setBounds") ) { return setBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { return _fxFadeIn; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"followLerp") ) { return followLerp; }
		if (HX_FIELD_EQ(inName,"followLead") ) { return followLead; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { return defaultZoom; }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"flashSprite") ) { return flashSprite; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storageHead") ) { return _storageHead; }
		if (HX_FIELD_EQ(inName,"followAdjust") ) { return followAdjust_dyn(); }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { return _fxFadeAlpha; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { return _fxFadeColor; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"flashOffsetY") ) { return flashOffsetY; }
		if (HX_FIELD_EQ(inName,"flashOffsetX") ) { return flashOffsetX; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_scrollTarget") ) { return _scrollTarget; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { return _fxFlashAlpha; }
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { return _fxFlashColor; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"clearDrawStack") ) { return clearDrawStack_dyn(); }
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { return _fxShakeOffset; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { return _fxFadeComplete; }
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { return _fxFadeDuration; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_antialiasing") ) { return set_antialiasing_dyn(); }
		if (HX_FIELD_EQ(inName,"getDrawStackItem") ) { return getDrawStackItem_dyn(); }
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { return _headOfDrawStack; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { return _fxShakeComplete; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { return _fxShakeDuration; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { return _fxFlashComplete; }
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { return _fxFlashDuration; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentStackItem") ) { return _currentStackItem; }
		if (HX_FIELD_EQ(inName,"_fxShakeDirection") ) { return _fxShakeDirection; }
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { return _fxShakeIntensity; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useBgAlphaBlending") ) { return useBgAlphaBlending; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastTargetPosition") ) { return _lastTargetPosition; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxCamera_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp) return set_zoom(inValue);zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp) return set_color(inValue);color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp) return set_angle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp) return set_alpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp) return set_width(inValue);width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp) return set_height(inValue);height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scroll") ) { scroll=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { bgColor=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { deadzone=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { _fxFadeIn=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"followLerp") ) { followLerp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"followLead") ) { followLead=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { defaultZoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flashSprite") ) { flashSprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storageHead") ) { _storageHead=inValue.Cast< ::flixel::system::layer::DrawStackItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { _fxFadeAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { _fxFadeColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp) return set_antialiasing(inValue);antialiasing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flashOffsetY") ) { flashOffsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flashOffsetX") ) { flashOffsetX=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_scrollTarget") ) { _scrollTarget=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { _fxFlashAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { _fxFlashColor=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { _fxShakeOffset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { _fxFadeComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { _fxFadeDuration=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { _headOfDrawStack=inValue.Cast< ::flixel::system::layer::DrawStackItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { _fxShakeComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { _fxShakeDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { _fxFlashComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { _fxFlashDuration=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentStackItem") ) { _currentStackItem=inValue.Cast< ::flixel::system::layer::DrawStackItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeDirection") ) { _fxShakeDirection=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { _fxShakeIntensity=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useBgAlphaBlending") ) { useBgAlphaBlending=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastTargetPosition") ) { _lastTargetPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxCamera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_headOfDrawStack"));
	outFields->push(HX_CSTRING("_currentStackItem"));
	outFields->push(HX_CSTRING("canvas"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_fxShakeDirection"));
	outFields->push(HX_CSTRING("_fxShakeOffset"));
	outFields->push(HX_CSTRING("_fxShakeDuration"));
	outFields->push(HX_CSTRING("_fxShakeIntensity"));
	outFields->push(HX_CSTRING("_fxFadeAlpha"));
	outFields->push(HX_CSTRING("_fxFadeIn"));
	outFields->push(HX_CSTRING("_fxFadeDuration"));
	outFields->push(HX_CSTRING("_scrollTarget"));
	outFields->push(HX_CSTRING("_lastTargetPosition"));
	outFields->push(HX_CSTRING("_fxFadeColor"));
	outFields->push(HX_CSTRING("_fxFlashAlpha"));
	outFields->push(HX_CSTRING("_fxFlashDuration"));
	outFields->push(HX_CSTRING("_fxFlashColor"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_flashRect"));
	outFields->push(HX_CSTRING("antialiasing"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("zoom"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("flashOffsetY"));
	outFields->push(HX_CSTRING("flashOffsetX"));
	outFields->push(HX_CSTRING("flashSprite"));
	outFields->push(HX_CSTRING("useBgAlphaBlending"));
	outFields->push(HX_CSTRING("bgColor"));
	outFields->push(HX_CSTRING("scroll"));
	outFields->push(HX_CSTRING("bounds"));
	outFields->push(HX_CSTRING("deadzone"));
	outFields->push(HX_CSTRING("followLerp"));
	outFields->push(HX_CSTRING("followLead"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("style"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("STYLE_LOCKON"),
	HX_CSTRING("STYLE_PLATFORMER"),
	HX_CSTRING("STYLE_TOPDOWN"),
	HX_CSTRING("STYLE_TOPDOWN_TIGHT"),
	HX_CSTRING("STYLE_SCREEN_BY_SCREEN"),
	HX_CSTRING("STYLE_NO_DEAD_ZONE"),
	HX_CSTRING("SHAKE_BOTH_AXES"),
	HX_CSTRING("SHAKE_HORIZONTAL_ONLY"),
	HX_CSTRING("SHAKE_VERTICAL_ONLY"),
	HX_CSTRING("defaultZoom"),
	HX_CSTRING("_storageHead"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_antialiasing"),
	HX_CSTRING("set_color"),
	HX_CSTRING("set_angle"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("set_zoom"),
	HX_CSTRING("set_height"),
	HX_CSTRING("set_width"),
	HX_CSTRING("getScale"),
	HX_CSTRING("setScale"),
	HX_CSTRING("setBounds"),
	HX_CSTRING("setPosition"),
	HX_CSTRING("setSize"),
	HX_CSTRING("drawFX"),
	HX_CSTRING("fill"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("stopFX"),
	HX_CSTRING("shake"),
	HX_CSTRING("fade"),
	HX_CSTRING("flash"),
	HX_CSTRING("focusOn"),
	HX_CSTRING("followAdjust"),
	HX_CSTRING("follow"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("render"),
	HX_CSTRING("clearDrawStack"),
	HX_CSTRING("getDrawStackItem"),
	HX_CSTRING("_headOfDrawStack"),
	HX_CSTRING("_currentStackItem"),
	HX_CSTRING("canvas"),
	HX_CSTRING("_point"),
	HX_CSTRING("_fxShakeDirection"),
	HX_CSTRING("_fxShakeOffset"),
	HX_CSTRING("_fxShakeComplete"),
	HX_CSTRING("_fxShakeDuration"),
	HX_CSTRING("_fxShakeIntensity"),
	HX_CSTRING("_fxFadeAlpha"),
	HX_CSTRING("_fxFadeComplete"),
	HX_CSTRING("_fxFadeIn"),
	HX_CSTRING("_fxFadeDuration"),
	HX_CSTRING("_scrollTarget"),
	HX_CSTRING("_lastTargetPosition"),
	HX_CSTRING("_fxFadeColor"),
	HX_CSTRING("_fxFlashAlpha"),
	HX_CSTRING("_fxFlashComplete"),
	HX_CSTRING("_fxFlashDuration"),
	HX_CSTRING("_fxFlashColor"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_flashRect"),
	HX_CSTRING("antialiasing"),
	HX_CSTRING("color"),
	HX_CSTRING("angle"),
	HX_CSTRING("alpha"),
	HX_CSTRING("zoom"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("flashOffsetY"),
	HX_CSTRING("flashOffsetX"),
	HX_CSTRING("flashSprite"),
	HX_CSTRING("useBgAlphaBlending"),
	HX_CSTRING("bgColor"),
	HX_CSTRING("scroll"),
	HX_CSTRING("bounds"),
	HX_CSTRING("deadzone"),
	HX_CSTRING("followLerp"),
	HX_CSTRING("followLead"),
	HX_CSTRING("target"),
	HX_CSTRING("style"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_LOCKON,"STYLE_LOCKON");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_PLATFORMER,"STYLE_PLATFORMER");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN,"STYLE_TOPDOWN");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN_TIGHT,"STYLE_TOPDOWN_TIGHT");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_SCREEN_BY_SCREEN,"STYLE_SCREEN_BY_SCREEN");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::STYLE_NO_DEAD_ZONE,"STYLE_NO_DEAD_ZONE");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::SHAKE_BOTH_AXES,"SHAKE_BOTH_AXES");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::SHAKE_HORIZONTAL_ONLY,"SHAKE_HORIZONTAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::SHAKE_VERTICAL_ONLY,"SHAKE_VERTICAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::_storageHead,"_storageHead");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_LOCKON,"STYLE_LOCKON");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_PLATFORMER,"STYLE_PLATFORMER");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN,"STYLE_TOPDOWN");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_TOPDOWN_TIGHT,"STYLE_TOPDOWN_TIGHT");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_SCREEN_BY_SCREEN,"STYLE_SCREEN_BY_SCREEN");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::STYLE_NO_DEAD_ZONE,"STYLE_NO_DEAD_ZONE");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::SHAKE_BOTH_AXES,"SHAKE_BOTH_AXES");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::SHAKE_HORIZONTAL_ONLY,"SHAKE_HORIZONTAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::SHAKE_VERTICAL_ONLY,"SHAKE_VERTICAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::_storageHead,"_storageHead");
};

Class FlxCamera_obj::__mClass;

void FlxCamera_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxCamera"), hx::TCanCast< FlxCamera_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxCamera_obj::__boot()
{
	STYLE_LOCKON= (int)0;
	STYLE_PLATFORMER= (int)1;
	STYLE_TOPDOWN= (int)2;
	STYLE_TOPDOWN_TIGHT= (int)3;
	STYLE_SCREEN_BY_SCREEN= (int)4;
	STYLE_NO_DEAD_ZONE= (int)5;
	SHAKE_BOTH_AXES= (int)0;
	SHAKE_HORIZONTAL_ONLY= (int)1;
	SHAKE_VERTICAL_ONLY= (int)2;
}

} // end namespace flixel
