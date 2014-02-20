#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_CapsStyle
#include <flash/display/CapsStyle.h>
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
#ifndef INCLUDED_flash_display_JointStyle
#include <flash/display/JointStyle.h>
#endif
#ifndef INCLUDED_flash_display_LineScaleMode
#include <flash/display/LineScaleMode.h>
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
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace util{

Void FlxSpriteUtil_obj::__construct()
{
	return null();
}

FlxSpriteUtil_obj::~FlxSpriteUtil_obj() { }

Dynamic FlxSpriteUtil_obj::__CreateEmpty() { return  new FlxSpriteUtil_obj; }
hx::ObjectPtr< FlxSpriteUtil_obj > FlxSpriteUtil_obj::__new()
{  hx::ObjectPtr< FlxSpriteUtil_obj > result = new FlxSpriteUtil_obj();
	result->__construct();
	return result;}

Dynamic FlxSpriteUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSpriteUtil_obj > result = new FlxSpriteUtil_obj();
	result->__construct();
	return result;}

::flash::display::Sprite FlxSpriteUtil_obj::flashGfxSprite;

::flash::display::Graphics FlxSpriteUtil_obj::flashGfx;

::flixel::FlxSprite FlxSpriteUtil_obj::alphaMask( ::flixel::FlxSprite output,Dynamic source,Dynamic mask){
	HX_STACK_PUSH("FlxSpriteUtil::alphaMask","flixel/util/FlxSpriteUtil.hx",52);
	HX_STACK_ARG(output,"output");
	HX_STACK_ARG(source,"source");
	HX_STACK_ARG(mask,"mask");
	HX_STACK_LINE(53)
	::flash::display::BitmapData data = null();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(54)
	if ((::Std_obj::is(source,hx::ClassOf< ::String >()))){
		struct _Function_2_1{
			inline static ::flash::display::BitmapData Block( Dynamic &source){
				HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",56);
				{
					HX_STACK_LINE(56)
					::String id = source;		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(56)
					return ::openfl::Assets_obj::getBitmapData(id,false);
				}
				return null();
			}
		};
		HX_STACK_LINE(55)
		data = _Function_2_1::Block(source);
	}
	else{
		HX_STACK_LINE(58)
		if ((::Std_obj::is(source,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(59)
			data = ::Type_obj::createInstance(source,Dynamic( Array_obj<Dynamic>::__new()))->__Field(HX_CSTRING("bitmapData"),true);
		}
		else{
			HX_STACK_LINE(62)
			if ((::Std_obj::is(source,hx::ClassOf< ::flash::display::BitmapData >()))){
				HX_STACK_LINE(63)
				data = (hx::TCast< flash::display::BitmapData >::cast(source))->clone();
			}
			else{
				HX_STACK_LINE(67)
				return null();
			}
		}
	}
	HX_STACK_LINE(70)
	::flash::display::BitmapData maskData = null();		HX_STACK_VAR(maskData,"maskData");
	HX_STACK_LINE(71)
	if ((::Std_obj::is(mask,hx::ClassOf< ::String >()))){
		struct _Function_2_1{
			inline static ::flash::display::BitmapData Block( Dynamic &mask){
				HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",73);
				{
					HX_STACK_LINE(73)
					::String id = mask;		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(73)
					return ::openfl::Assets_obj::getBitmapData(id,false);
				}
				return null();
			}
		};
		HX_STACK_LINE(72)
		maskData = _Function_2_1::Block(mask);
	}
	else{
		HX_STACK_LINE(75)
		if ((::Std_obj::is(mask,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(76)
			maskData = ::Type_obj::createInstance(mask,Dynamic( Array_obj<Dynamic>::__new()))->__Field(HX_CSTRING("bitmapData"),true);
		}
		else{
			HX_STACK_LINE(79)
			if ((::Std_obj::is(mask,hx::ClassOf< ::flash::display::BitmapData >()))){
				HX_STACK_LINE(80)
				maskData = mask;
			}
			else{
				HX_STACK_LINE(84)
				return null();
			}
		}
	}
	HX_STACK_LINE(88)
	data->copyChannel(maskData,::flash::geom::Rectangle_obj::__new((int)0,(int)0,data->get_width(),data->get_height()),::flash::geom::Point_obj::__new(null(),null()),(int)8,(int)8);
	HX_STACK_LINE(89)
	output->set_pixels(data);
	HX_STACK_LINE(90)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,alphaMask,return )

::flixel::FlxSprite FlxSpriteUtil_obj::alphaMaskFlxSprite( ::flixel::FlxSprite sprite,::flixel::FlxSprite mask,::flixel::FlxSprite output){
	HX_STACK_PUSH("FlxSpriteUtil::alphaMaskFlxSprite","flixel/util/FlxSpriteUtil.hx",106);
	HX_STACK_ARG(sprite,"sprite");
	HX_STACK_ARG(mask,"mask");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(107)
	{
		HX_STACK_LINE(107)
		bool Force = false;		HX_STACK_VAR(Force,"Force");
		HX_STACK_LINE(107)
		sprite->calcFrame(true);
	}
	HX_STACK_LINE(108)
	::flash::display::BitmapData data = sprite->get_pixels()->clone();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(109)
	data->copyChannel(mask->get_pixels(),::flash::geom::Rectangle_obj::__new((int)0,(int)0,sprite->get_width(),sprite->get_height()),::flash::geom::Point_obj::__new(null(),null()),(int)8,(int)8);
	HX_STACK_LINE(110)
	output->set_pixels(data);
	HX_STACK_LINE(111)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,alphaMaskFlxSprite,return )

::flixel::FlxSprite FlxSpriteUtil_obj::screenWrap( ::flixel::FlxSprite sprite,hx::Null< bool >  __o_Left,hx::Null< bool >  __o_Right,hx::Null< bool >  __o_Top,hx::Null< bool >  __o_Bottom){
bool Left = __o_Left.Default(true);
bool Right = __o_Right.Default(true);
bool Top = __o_Top.Default(true);
bool Bottom = __o_Bottom.Default(true);
	HX_STACK_PUSH("FlxSpriteUtil::screenWrap","flixel/util/FlxSpriteUtil.hx",126);
	HX_STACK_ARG(sprite,"sprite");
	HX_STACK_ARG(Left,"Left");
	HX_STACK_ARG(Right,"Right");
	HX_STACK_ARG(Top,"Top");
	HX_STACK_ARG(Bottom,"Bottom");
{
		HX_STACK_LINE(127)
		if (((bool(Left) && bool(((sprite->x + sprite->frameWidth) <= (int)0))))){
			HX_STACK_LINE(127)
			sprite->set_x(::flixel::FlxG_obj::width);
		}
		else{
			HX_STACK_LINE(130)
			if (((bool(Right) && bool((sprite->x >= ::flixel::FlxG_obj::width))))){
				HX_STACK_LINE(130)
				sprite->set_x((int)0);
			}
		}
		HX_STACK_LINE(134)
		if (((bool(Top) && bool(((sprite->y + sprite->frameHeight) <= (int)0))))){
			HX_STACK_LINE(134)
			sprite->set_y(::flixel::FlxG_obj::height);
		}
		else{
			HX_STACK_LINE(137)
			if (((bool(Bottom) && bool((sprite->y >= ::flixel::FlxG_obj::height))))){
				HX_STACK_LINE(137)
				sprite->set_y((int)0);
			}
		}
		HX_STACK_LINE(140)
		return sprite;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxSpriteUtil_obj,screenWrap,return )

Void FlxSpriteUtil_obj::space( Array< ::Dynamic > objects,int startX,int startY,hx::Null< int >  __o_horizontalSpacing,hx::Null< int >  __o_verticalSpacing,hx::Null< bool >  __o_spaceFromBounds){
int horizontalSpacing = __o_horizontalSpacing.Default(0);
int verticalSpacing = __o_verticalSpacing.Default(0);
bool spaceFromBounds = __o_spaceFromBounds.Default(false);
	HX_STACK_PUSH("FlxSpriteUtil::space","flixel/util/FlxSpriteUtil.hx",154);
	HX_STACK_ARG(objects,"objects");
	HX_STACK_ARG(startX,"startX");
	HX_STACK_ARG(startY,"startY");
	HX_STACK_ARG(horizontalSpacing,"horizontalSpacing");
	HX_STACK_ARG(verticalSpacing,"verticalSpacing");
	HX_STACK_ARG(spaceFromBounds,"spaceFromBounds");
{
		HX_STACK_LINE(155)
		int prevWidth = (int)0;		HX_STACK_VAR(prevWidth,"prevWidth");
		HX_STACK_LINE(156)
		int prevHeight = (int)0;		HX_STACK_VAR(prevHeight,"prevHeight");
		HX_STACK_LINE(158)
		{
			HX_STACK_LINE(158)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = objects->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(158)
			while(((_g1 < _g))){
				HX_STACK_LINE(158)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(160)
				::flixel::FlxObject object = objects->__get(i).StaticCast< ::flixel::FlxObject >();		HX_STACK_VAR(object,"object");
				HX_STACK_LINE(162)
				if ((spaceFromBounds)){
					HX_STACK_LINE(164)
					object->set_x(((startX + prevWidth) + (i * horizontalSpacing)));
					HX_STACK_LINE(165)
					object->set_y(((startY + prevHeight) + (i * verticalSpacing)));
				}
				else{
					HX_STACK_LINE(169)
					object->set_x((startX + (i * horizontalSpacing)));
					HX_STACK_LINE(170)
					object->set_y((startY + (i * verticalSpacing)));
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxSpriteUtil_obj,space,(void))

::flixel::FlxObject FlxSpriteUtil_obj::screenCenter( ::flixel::FlxObject object,hx::Null< bool >  __o_xAxis,hx::Null< bool >  __o_yAxis){
bool xAxis = __o_xAxis.Default(true);
bool yAxis = __o_yAxis.Default(true);
	HX_STACK_PUSH("FlxSpriteUtil::screenCenter","flixel/util/FlxSpriteUtil.hx",184);
	HX_STACK_ARG(object,"object");
	HX_STACK_ARG(xAxis,"xAxis");
	HX_STACK_ARG(yAxis,"yAxis");
{
		HX_STACK_LINE(185)
		if ((xAxis)){
			HX_STACK_LINE(186)
			object->set_x(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (Float(object->get_width()) / Float((int)2))));
		}
		HX_STACK_LINE(190)
		if ((yAxis)){
			HX_STACK_LINE(191)
			object->set_y(((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (Float(object->get_height()) / Float((int)2))));
		}
		HX_STACK_LINE(195)
		return object;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,screenCenter,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawLine( ::flixel::FlxSprite sprite,Float StartX,Float StartY,Float EndX,Float EndY,Dynamic lineStyle,Dynamic drawStyle){
	HX_STACK_PUSH("FlxSpriteUtil::drawLine","flixel/util/FlxSpriteUtil.hx",214);
	HX_STACK_ARG(sprite,"sprite");
	HX_STACK_ARG(StartX,"StartX");
	HX_STACK_ARG(StartY,"StartY");
	HX_STACK_ARG(EndX,"EndX");
	HX_STACK_ARG(EndY,"EndY");
	HX_STACK_ARG(lineStyle,"lineStyle");
	HX_STACK_ARG(drawStyle,"drawStyle");
	HX_STACK_LINE(215)
	{
		HX_STACK_LINE(215)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
		HX_STACK_LINE(215)
		if (((lineStyle != null()))){
			HX_STACK_LINE(215)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(215)
			Float alpha;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(215)
			if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
				HX_STACK_LINE(215)
				color = (int)0;
				HX_STACK_LINE(215)
				alpha = (int)1;
			}
			else{
				struct _Function_4_1{
					inline static int Block( Dynamic &lineStyle){
						HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",215);
						{
							HX_STACK_LINE(215)
							int Color = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color,"Color");
							HX_STACK_LINE(215)
							return (int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255))));
						}
						return null();
					}
				};
				HX_STACK_LINE(215)
				color = _Function_4_1::Block(lineStyle);
				struct _Function_4_2{
					inline static Float Block( Dynamic &lineStyle){
						HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",215);
						{
							HX_STACK_LINE(215)
							int Color = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color,"Color");
							HX_STACK_LINE(215)
							int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(215)
							return (Float(f) / Float((int)255));
						}
						return null();
					}
				};
				HX_STACK_LINE(215)
				alpha = _Function_4_2::Block(lineStyle);
			}
			HX_STACK_LINE(215)
			if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
				HX_STACK_LINE(215)
				lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
			}
			HX_STACK_LINE(215)
			if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
				HX_STACK_LINE(215)
				lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
			}
			HX_STACK_LINE(215)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),color,alpha,lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
		}
		struct _Function_2_1{
			inline static Float Block( ){
				HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",215);
				{
					HX_STACK_LINE(215)
					int f = (int)0;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(215)
					return (Float(f) / Float((int)255));
				}
				return null();
			}
		};
		HX_STACK_LINE(215)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int)0,_Function_2_1::Block());
	}
	HX_STACK_LINE(216)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->moveTo(StartX,StartY);
	HX_STACK_LINE(217)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo(EndX,EndY);
	HX_STACK_LINE(218)
	{
		HX_STACK_LINE(218)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
		HX_STACK_LINE(218)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
		HX_STACK_LINE(218)
		sprite;
	}
	HX_STACK_LINE(219)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,drawLine,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawRect( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,int Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle){
	HX_STACK_PUSH("FlxSpriteUtil::drawRect","flixel/util/FlxSpriteUtil.hx",237);
	HX_STACK_ARG(sprite,"sprite");
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(lineStyle,"lineStyle");
	HX_STACK_ARG(fillStyle,"fillStyle");
	HX_STACK_ARG(drawStyle,"drawStyle");
	HX_STACK_LINE(238)
	{
		HX_STACK_LINE(238)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
		HX_STACK_LINE(238)
		if (((lineStyle != null()))){
			HX_STACK_LINE(238)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(238)
			Float alpha;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(238)
			if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
				HX_STACK_LINE(238)
				color = (int)0;
				HX_STACK_LINE(238)
				alpha = (int)1;
			}
			else{
				struct _Function_4_1{
					inline static int Block( Dynamic &lineStyle){
						HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",238);
						{
							HX_STACK_LINE(238)
							int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(238)
							return (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
						}
						return null();
					}
				};
				HX_STACK_LINE(238)
				color = _Function_4_1::Block(lineStyle);
				struct _Function_4_2{
					inline static Float Block( Dynamic &lineStyle){
						HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",238);
						{
							HX_STACK_LINE(238)
							int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(238)
							int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(238)
							return (Float(f) / Float((int)255));
						}
						return null();
					}
				};
				HX_STACK_LINE(238)
				alpha = _Function_4_2::Block(lineStyle);
			}
			HX_STACK_LINE(238)
			if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
				HX_STACK_LINE(238)
				lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
			}
			HX_STACK_LINE(238)
			if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
				HX_STACK_LINE(238)
				lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
			}
			HX_STACK_LINE(238)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),color,alpha,lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
		}
		HX_STACK_LINE(238)
		if (((bool((fillStyle != null())) && bool(fillStyle->__Field(HX_CSTRING("hasFill"),true))))){
			struct _Function_3_1{
				inline static int Block( Dynamic &fillStyle){
					HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",238);
					{
						HX_STACK_LINE(238)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(238)
						return (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static Float Block( Dynamic &fillStyle){
					HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",238);
					{
						HX_STACK_LINE(238)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(238)
						int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(238)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(238)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill(_Function_3_1::Block(fillStyle),_Function_3_2::Block(fillStyle));
		}
		else{
			struct _Function_3_1{
				inline static Float Block( int &Color){
					HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",238);
					{
						HX_STACK_LINE(238)
						int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(238)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(238)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255)))),_Function_3_1::Block(Color));
		}
	}
	HX_STACK_LINE(239)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->drawRect(X,Y,Width,Height);
	HX_STACK_LINE(240)
	{
		HX_STACK_LINE(240)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
		HX_STACK_LINE(240)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
		HX_STACK_LINE(240)
		sprite;
	}
	HX_STACK_LINE(241)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxSpriteUtil_obj,drawRect,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawRoundRect( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,Float EllipseWidth,Float EllipseHeight,int Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle){
	HX_STACK_PUSH("FlxSpriteUtil::drawRoundRect","flixel/util/FlxSpriteUtil.hx",261);
	HX_STACK_ARG(sprite,"sprite");
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(EllipseWidth,"EllipseWidth");
	HX_STACK_ARG(EllipseHeight,"EllipseHeight");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(lineStyle,"lineStyle");
	HX_STACK_ARG(fillStyle,"fillStyle");
	HX_STACK_ARG(drawStyle,"drawStyle");
	HX_STACK_LINE(262)
	{
		HX_STACK_LINE(262)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
		HX_STACK_LINE(262)
		if (((lineStyle != null()))){
			HX_STACK_LINE(262)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(262)
			Float alpha;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(262)
			if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
				HX_STACK_LINE(262)
				color = (int)0;
				HX_STACK_LINE(262)
				alpha = (int)1;
			}
			else{
				struct _Function_4_1{
					inline static int Block( Dynamic &lineStyle){
						HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",262);
						{
							HX_STACK_LINE(262)
							int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(262)
							return (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
						}
						return null();
					}
				};
				HX_STACK_LINE(262)
				color = _Function_4_1::Block(lineStyle);
				struct _Function_4_2{
					inline static Float Block( Dynamic &lineStyle){
						HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",262);
						{
							HX_STACK_LINE(262)
							int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(262)
							int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(262)
							return (Float(f) / Float((int)255));
						}
						return null();
					}
				};
				HX_STACK_LINE(262)
				alpha = _Function_4_2::Block(lineStyle);
			}
			HX_STACK_LINE(262)
			if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
				HX_STACK_LINE(262)
				lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
			}
			HX_STACK_LINE(262)
			if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
				HX_STACK_LINE(262)
				lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
			}
			HX_STACK_LINE(262)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),color,alpha,lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
		}
		HX_STACK_LINE(262)
		if (((bool((fillStyle != null())) && bool(fillStyle->__Field(HX_CSTRING("hasFill"),true))))){
			struct _Function_3_1{
				inline static int Block( Dynamic &fillStyle){
					HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",262);
					{
						HX_STACK_LINE(262)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(262)
						return (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static Float Block( Dynamic &fillStyle){
					HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",262);
					{
						HX_STACK_LINE(262)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(262)
						int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(262)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(262)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill(_Function_3_1::Block(fillStyle),_Function_3_2::Block(fillStyle));
		}
		else{
			struct _Function_3_1{
				inline static Float Block( int &Color){
					HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",262);
					{
						HX_STACK_LINE(262)
						int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(262)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(262)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255)))),_Function_3_1::Block(Color));
		}
	}
	HX_STACK_LINE(263)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->drawRoundRect(X,Y,Width,Height,EllipseWidth,EllipseHeight);
	HX_STACK_LINE(264)
	{
		HX_STACK_LINE(264)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
		HX_STACK_LINE(264)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
		HX_STACK_LINE(264)
		sprite;
	}
	HX_STACK_LINE(265)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(FlxSpriteUtil_obj,drawRoundRect,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawCircle( ::flixel::FlxSprite sprite,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Radius,hx::Null< int >  __o_Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle){
Float X = __o_X.Default(-1);
Float Y = __o_Y.Default(-1);
Float Radius = __o_Radius.Default(-1);
int Color = __o_Color.Default(-1);
	HX_STACK_PUSH("FlxSpriteUtil::drawCircle","flixel/util/FlxSpriteUtil.hx",311);
	HX_STACK_ARG(sprite,"sprite");
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(Radius,"Radius");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(lineStyle,"lineStyle");
	HX_STACK_ARG(fillStyle,"fillStyle");
	HX_STACK_ARG(drawStyle,"drawStyle");
{
		HX_STACK_LINE(312)
		if (((bool((X == (int)-1)) || bool((Y == (int)-1))))){
			HX_STACK_LINE(314)
			::flixel::util::FlxPoint midPoint = sprite->getGraphicMidpoint(null());		HX_STACK_VAR(midPoint,"midPoint");
			HX_STACK_LINE(316)
			if (((X == (int)-1))){
				HX_STACK_LINE(316)
				X = midPoint->x;
			}
			HX_STACK_LINE(319)
			if (((Y == (int)-1))){
				HX_STACK_LINE(319)
				Y = midPoint->y;
			}
		}
		HX_STACK_LINE(324)
		if (((Radius < (int)1))){
			HX_STACK_LINE(326)
			Float minVal = ::Math_obj::min(sprite->frameWidth,sprite->frameHeight);		HX_STACK_VAR(minVal,"minVal");
			HX_STACK_LINE(327)
			Radius = (Float(minVal) / Float((int)2));
		}
		HX_STACK_LINE(330)
		{
			HX_STACK_LINE(330)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
			HX_STACK_LINE(330)
			if (((lineStyle != null()))){
				HX_STACK_LINE(330)
				int color;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(330)
				Float alpha;		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(330)
				if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
					HX_STACK_LINE(330)
					color = (int)0;
					HX_STACK_LINE(330)
					alpha = (int)1;
				}
				else{
					struct _Function_4_1{
						inline static int Block( Dynamic &lineStyle){
							HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",330);
							{
								HX_STACK_LINE(330)
								int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
								HX_STACK_LINE(330)
								return (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
							}
							return null();
						}
					};
					HX_STACK_LINE(330)
					color = _Function_4_1::Block(lineStyle);
					struct _Function_4_2{
						inline static Float Block( Dynamic &lineStyle){
							HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",330);
							{
								HX_STACK_LINE(330)
								int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
								HX_STACK_LINE(330)
								int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(330)
								return (Float(f) / Float((int)255));
							}
							return null();
						}
					};
					HX_STACK_LINE(330)
					alpha = _Function_4_2::Block(lineStyle);
				}
				HX_STACK_LINE(330)
				if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
					HX_STACK_LINE(330)
					lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
				}
				HX_STACK_LINE(330)
				if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
					HX_STACK_LINE(330)
					lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
				}
				HX_STACK_LINE(330)
				::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),color,alpha,lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
			}
			HX_STACK_LINE(330)
			if (((bool((fillStyle != null())) && bool(fillStyle->__Field(HX_CSTRING("hasFill"),true))))){
				struct _Function_3_1{
					inline static int Block( Dynamic &fillStyle){
						HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",330);
						{
							HX_STACK_LINE(330)
							int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(330)
							return (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static Float Block( Dynamic &fillStyle){
						HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",330);
						{
							HX_STACK_LINE(330)
							int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(330)
							int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(330)
							return (Float(f) / Float((int)255));
						}
						return null();
					}
				};
				HX_STACK_LINE(330)
				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill(_Function_3_1::Block(fillStyle),_Function_3_2::Block(fillStyle));
			}
			else{
				struct _Function_3_1{
					inline static Float Block( int &Color){
						HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",330);
						{
							HX_STACK_LINE(330)
							int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(330)
							return (Float(f) / Float((int)255));
						}
						return null();
					}
				};
				HX_STACK_LINE(330)
				::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255)))),_Function_3_1::Block(Color));
			}
		}
		HX_STACK_LINE(331)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->drawCircle(X,Y,Radius);
		HX_STACK_LINE(332)
		{
			HX_STACK_LINE(332)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
			HX_STACK_LINE(332)
			::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
			HX_STACK_LINE(332)
			sprite;
		}
		HX_STACK_LINE(333)
		return sprite;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxSpriteUtil_obj,drawCircle,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawEllipse( ::flixel::FlxSprite sprite,Float X,Float Y,Float Width,Float Height,int Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle){
	HX_STACK_PUSH("FlxSpriteUtil::drawEllipse","flixel/util/FlxSpriteUtil.hx",351);
	HX_STACK_ARG(sprite,"sprite");
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(lineStyle,"lineStyle");
	HX_STACK_ARG(fillStyle,"fillStyle");
	HX_STACK_ARG(drawStyle,"drawStyle");
	HX_STACK_LINE(352)
	{
		HX_STACK_LINE(352)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
		HX_STACK_LINE(352)
		if (((lineStyle != null()))){
			HX_STACK_LINE(352)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(352)
			Float alpha;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(352)
			if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
				HX_STACK_LINE(352)
				color = (int)0;
				HX_STACK_LINE(352)
				alpha = (int)1;
			}
			else{
				struct _Function_4_1{
					inline static int Block( Dynamic &lineStyle){
						HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",352);
						{
							HX_STACK_LINE(352)
							int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(352)
							return (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
						}
						return null();
					}
				};
				HX_STACK_LINE(352)
				color = _Function_4_1::Block(lineStyle);
				struct _Function_4_2{
					inline static Float Block( Dynamic &lineStyle){
						HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",352);
						{
							HX_STACK_LINE(352)
							int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(352)
							int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(352)
							return (Float(f) / Float((int)255));
						}
						return null();
					}
				};
				HX_STACK_LINE(352)
				alpha = _Function_4_2::Block(lineStyle);
			}
			HX_STACK_LINE(352)
			if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
				HX_STACK_LINE(352)
				lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
			}
			HX_STACK_LINE(352)
			if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
				HX_STACK_LINE(352)
				lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
			}
			HX_STACK_LINE(352)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),color,alpha,lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
		}
		HX_STACK_LINE(352)
		if (((bool((fillStyle != null())) && bool(fillStyle->__Field(HX_CSTRING("hasFill"),true))))){
			struct _Function_3_1{
				inline static int Block( Dynamic &fillStyle){
					HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",352);
					{
						HX_STACK_LINE(352)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(352)
						return (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static Float Block( Dynamic &fillStyle){
					HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",352);
					{
						HX_STACK_LINE(352)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(352)
						int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(352)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(352)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill(_Function_3_1::Block(fillStyle),_Function_3_2::Block(fillStyle));
		}
		else{
			struct _Function_3_1{
				inline static Float Block( int &Color){
					HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",352);
					{
						HX_STACK_LINE(352)
						int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(352)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(352)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255)))),_Function_3_1::Block(Color));
		}
	}
	HX_STACK_LINE(353)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->drawEllipse(X,Y,Width,Height);
	HX_STACK_LINE(354)
	{
		HX_STACK_LINE(354)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
		HX_STACK_LINE(354)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
		HX_STACK_LINE(354)
		sprite;
	}
	HX_STACK_LINE(355)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxSpriteUtil_obj,drawEllipse,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawTriangle( ::flixel::FlxSprite sprite,Float X,Float Y,Float Height,int Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle){
	HX_STACK_PUSH("FlxSpriteUtil::drawTriangle","flixel/util/FlxSpriteUtil.hx",372);
	HX_STACK_ARG(sprite,"sprite");
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(lineStyle,"lineStyle");
	HX_STACK_ARG(fillStyle,"fillStyle");
	HX_STACK_ARG(drawStyle,"drawStyle");
	HX_STACK_LINE(373)
	{
		HX_STACK_LINE(373)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
		HX_STACK_LINE(373)
		if (((lineStyle != null()))){
			HX_STACK_LINE(373)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(373)
			Float alpha;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(373)
			if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
				HX_STACK_LINE(373)
				color = (int)0;
				HX_STACK_LINE(373)
				alpha = (int)1;
			}
			else{
				struct _Function_4_1{
					inline static int Block( Dynamic &lineStyle){
						HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",373);
						{
							HX_STACK_LINE(373)
							int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(373)
							return (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
						}
						return null();
					}
				};
				HX_STACK_LINE(373)
				color = _Function_4_1::Block(lineStyle);
				struct _Function_4_2{
					inline static Float Block( Dynamic &lineStyle){
						HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",373);
						{
							HX_STACK_LINE(373)
							int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(373)
							int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(373)
							return (Float(f) / Float((int)255));
						}
						return null();
					}
				};
				HX_STACK_LINE(373)
				alpha = _Function_4_2::Block(lineStyle);
			}
			HX_STACK_LINE(373)
			if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
				HX_STACK_LINE(373)
				lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
			}
			HX_STACK_LINE(373)
			if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
				HX_STACK_LINE(373)
				lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
			}
			HX_STACK_LINE(373)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),color,alpha,lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
		}
		HX_STACK_LINE(373)
		if (((bool((fillStyle != null())) && bool(fillStyle->__Field(HX_CSTRING("hasFill"),true))))){
			struct _Function_3_1{
				inline static int Block( Dynamic &fillStyle){
					HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",373);
					{
						HX_STACK_LINE(373)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(373)
						return (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static Float Block( Dynamic &fillStyle){
					HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",373);
					{
						HX_STACK_LINE(373)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(373)
						int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(373)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(373)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill(_Function_3_1::Block(fillStyle),_Function_3_2::Block(fillStyle));
		}
		else{
			struct _Function_3_1{
				inline static Float Block( int &Color){
					HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",373);
					{
						HX_STACK_LINE(373)
						int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(373)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(373)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255)))),_Function_3_1::Block(Color));
		}
	}
	HX_STACK_LINE(374)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->moveTo((X + (Float(Height) / Float((int)2))),Y);
	HX_STACK_LINE(375)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo((X + Height),(Height + Y));
	HX_STACK_LINE(376)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo(X,(Height + Y));
	HX_STACK_LINE(377)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo((X + (Float(Height) / Float((int)2))),Y);
	HX_STACK_LINE(378)
	{
		HX_STACK_LINE(378)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
		HX_STACK_LINE(378)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
		HX_STACK_LINE(378)
		sprite;
	}
	HX_STACK_LINE(379)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxSpriteUtil_obj,drawTriangle,return )

::flixel::FlxSprite FlxSpriteUtil_obj::drawPolygon( ::flixel::FlxSprite sprite,Array< ::Dynamic > Vertices,int Color,Dynamic lineStyle,Dynamic fillStyle,Dynamic drawStyle){
	HX_STACK_PUSH("FlxSpriteUtil::drawPolygon","flixel/util/FlxSpriteUtil.hx",394);
	HX_STACK_ARG(sprite,"sprite");
	HX_STACK_ARG(Vertices,"Vertices");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(lineStyle,"lineStyle");
	HX_STACK_ARG(fillStyle,"fillStyle");
	HX_STACK_ARG(drawStyle,"drawStyle");
	HX_STACK_LINE(395)
	{
		HX_STACK_LINE(395)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
		HX_STACK_LINE(395)
		if (((lineStyle != null()))){
			HX_STACK_LINE(395)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(395)
			Float alpha;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(395)
			if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
				HX_STACK_LINE(395)
				color = (int)0;
				HX_STACK_LINE(395)
				alpha = (int)1;
			}
			else{
				struct _Function_4_1{
					inline static int Block( Dynamic &lineStyle){
						HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",395);
						{
							HX_STACK_LINE(395)
							int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(395)
							return (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
						}
						return null();
					}
				};
				HX_STACK_LINE(395)
				color = _Function_4_1::Block(lineStyle);
				struct _Function_4_2{
					inline static Float Block( Dynamic &lineStyle){
						HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",395);
						{
							HX_STACK_LINE(395)
							int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(395)
							int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(395)
							return (Float(f) / Float((int)255));
						}
						return null();
					}
				};
				HX_STACK_LINE(395)
				alpha = _Function_4_2::Block(lineStyle);
			}
			HX_STACK_LINE(395)
			if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
				HX_STACK_LINE(395)
				lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
			}
			HX_STACK_LINE(395)
			if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
				HX_STACK_LINE(395)
				lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
			}
			HX_STACK_LINE(395)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),color,alpha,lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
		}
		HX_STACK_LINE(395)
		if (((bool((fillStyle != null())) && bool(fillStyle->__Field(HX_CSTRING("hasFill"),true))))){
			struct _Function_3_1{
				inline static int Block( Dynamic &fillStyle){
					HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",395);
					{
						HX_STACK_LINE(395)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(395)
						return (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static Float Block( Dynamic &fillStyle){
					HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",395);
					{
						HX_STACK_LINE(395)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(395)
						int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(395)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(395)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill(_Function_3_1::Block(fillStyle),_Function_3_2::Block(fillStyle));
		}
		else{
			struct _Function_3_1{
				inline static Float Block( int &Color){
					HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",395);
					{
						HX_STACK_LINE(395)
						int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(395)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(395)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255)))),_Function_3_1::Block(Color));
		}
	}
	HX_STACK_LINE(396)
	::flixel::util::FlxPoint p = Vertices->shift().StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(397)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->moveTo(p->x,p->y);
	HX_STACK_LINE(398)
	{
		HX_STACK_LINE(398)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(398)
		while(((_g < Vertices->length))){
			HX_STACK_LINE(398)
			::flixel::util::FlxPoint p1 = Vertices->__get(_g).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(p1,"p1");
			HX_STACK_LINE(398)
			++(_g);
			HX_STACK_LINE(400)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineTo(p1->x,p1->y);
		}
	}
	HX_STACK_LINE(402)
	{
		HX_STACK_LINE(402)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
		HX_STACK_LINE(402)
		::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
		HX_STACK_LINE(402)
		sprite;
	}
	HX_STACK_LINE(403)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxSpriteUtil_obj,drawPolygon,return )

Void FlxSpriteUtil_obj::beginDraw( int Color,Dynamic lineStyle,Dynamic fillStyle){
{
		HX_STACK_PUSH("FlxSpriteUtil::beginDraw","flixel/util/FlxSpriteUtil.hx",414);
		HX_STACK_ARG(Color,"Color");
		HX_STACK_ARG(lineStyle,"lineStyle");
		HX_STACK_ARG(fillStyle,"fillStyle");
		HX_STACK_LINE(415)
		::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
		HX_STACK_LINE(416)
		if (((lineStyle != null()))){
			HX_STACK_LINE(416)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(416)
			Float alpha;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(416)
			if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
				HX_STACK_LINE(416)
				color = (int)0;
				HX_STACK_LINE(416)
				alpha = (int)1;
			}
			else{
				struct _Function_3_1{
					inline static int Block( Dynamic &lineStyle){
						HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",416);
						{
							HX_STACK_LINE(416)
							int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(416)
							return (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
						}
						return null();
					}
				};
				HX_STACK_LINE(416)
				color = _Function_3_1::Block(lineStyle);
				struct _Function_3_2{
					inline static Float Block( Dynamic &lineStyle){
						HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",416);
						{
							HX_STACK_LINE(416)
							int Color1 = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
							HX_STACK_LINE(416)
							int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(416)
							return (Float(f) / Float((int)255));
						}
						return null();
					}
				};
				HX_STACK_LINE(416)
				alpha = _Function_3_2::Block(lineStyle);
			}
			HX_STACK_LINE(416)
			if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
				HX_STACK_LINE(416)
				lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
			}
			HX_STACK_LINE(416)
			if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
				HX_STACK_LINE(416)
				lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
			}
			HX_STACK_LINE(416)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),color,alpha,lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
		}
		HX_STACK_LINE(418)
		if (((bool((fillStyle != null())) && bool(fillStyle->__Field(HX_CSTRING("hasFill"),true))))){
			struct _Function_2_1{
				inline static int Block( Dynamic &fillStyle){
					HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",421);
					{
						HX_STACK_LINE(421)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(421)
						return (int((int((int(((int((int(Color1) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color1) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color1) & int((int)255))));
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( Dynamic &fillStyle){
					HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",421);
					{
						HX_STACK_LINE(421)
						int Color1 = fillStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color1,"Color1");
						HX_STACK_LINE(421)
						int f = (int((int(Color1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(421)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(419)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill(_Function_2_1::Block(fillStyle),_Function_2_2::Block(fillStyle));
		}
		else{
			struct _Function_2_1{
				inline static Float Block( int &Color){
					HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",426);
					{
						HX_STACK_LINE(426)
						int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(426)
						return (Float(f) / Float((int)255));
					}
					return null();
				}
			};
			HX_STACK_LINE(424)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->beginFill((int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255)))),_Function_2_1::Block(Color));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSpriteUtil_obj,beginDraw,(void))

::flixel::FlxSprite FlxSpriteUtil_obj::endDraw( ::flixel::FlxSprite sprite,Dynamic drawStyle){
	HX_STACK_PUSH("FlxSpriteUtil::endDraw","flixel/util/FlxSpriteUtil.hx",438);
	HX_STACK_ARG(sprite,"sprite");
	HX_STACK_ARG(drawStyle,"drawStyle");
	HX_STACK_LINE(439)
	::flixel::util::FlxSpriteUtil_obj::flashGfx->endFill();
	HX_STACK_LINE(440)
	::flixel::util::FlxSpriteUtil_obj::updateSpriteGraphic(sprite,drawStyle);
	HX_STACK_LINE(441)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,endDraw,return )

::flixel::FlxSprite FlxSpriteUtil_obj::updateSpriteGraphic( ::flixel::FlxSprite sprite,Dynamic drawStyle){
	HX_STACK_PUSH("FlxSpriteUtil::updateSpriteGraphic","flixel/util/FlxSpriteUtil.hx",453);
	HX_STACK_ARG(sprite,"sprite");
	HX_STACK_ARG(drawStyle,"drawStyle");
	HX_STACK_LINE(454)
	if (((drawStyle == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",456);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("smoothing") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(455)
		drawStyle = _Function_2_1::Block();
	}
	else{
		HX_STACK_LINE(458)
		if (((drawStyle->__Field(HX_CSTRING("smoothing"),true) == null()))){
			HX_STACK_LINE(459)
			drawStyle->__FieldRef(HX_CSTRING("smoothing")) = false;
		}
	}
	HX_STACK_LINE(463)
	sprite->get_pixels()->draw(::flixel::util::FlxSpriteUtil_obj::flashGfxSprite,drawStyle->__Field(HX_CSTRING("matrix"),true),drawStyle->__Field(HX_CSTRING("colorTransform"),true),drawStyle->__Field(HX_CSTRING("blendMode"),true),drawStyle->__Field(HX_CSTRING("clipRect"),true),drawStyle->__Field(HX_CSTRING("smoothing"),true));
	HX_STACK_LINE(465)
	sprite->dirty = true;
	HX_STACK_LINE(466)
	sprite->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
	HX_STACK_LINE(467)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,updateSpriteGraphic,return )

Void FlxSpriteUtil_obj::setLineStyle( Dynamic lineStyle){
{
		HX_STACK_PUSH("FlxSpriteUtil::setLineStyle","flixel/util/FlxSpriteUtil.hx",477);
		HX_STACK_ARG(lineStyle,"lineStyle");
		HX_STACK_LINE(477)
		if (((lineStyle != null()))){
			HX_STACK_LINE(480)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(481)
			Float alpha;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(483)
			if (((lineStyle->__Field(HX_CSTRING("color"),true) == null()))){
				HX_STACK_LINE(485)
				color = (int)0;
				HX_STACK_LINE(486)
				alpha = (int)1;
			}
			else{
				struct _Function_3_1{
					inline static int Block( Dynamic &lineStyle){
						HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",490);
						{
							HX_STACK_LINE(490)
							int Color = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color,"Color");
							HX_STACK_LINE(490)
							return (int((int((int(((int((int(Color) >> int((int)16))) & int((int)255)))) << int((int)16))) | int((int(((int((int(Color) >> int((int)8))) & int((int)255)))) << int((int)8))))) | int((int(Color) & int((int)255))));
						}
						return null();
					}
				};
				HX_STACK_LINE(490)
				color = _Function_3_1::Block(lineStyle);
				struct _Function_3_2{
					inline static Float Block( Dynamic &lineStyle){
						HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",491);
						{
							HX_STACK_LINE(491)
							int Color = lineStyle->__Field(HX_CSTRING("color"),true);		HX_STACK_VAR(Color,"Color");
							HX_STACK_LINE(491)
							int f = (int((int(Color) >> int((int)24))) & int((int)255));		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(491)
							return (Float(f) / Float((int)255));
						}
						return null();
					}
				};
				HX_STACK_LINE(491)
				alpha = _Function_3_2::Block(lineStyle);
			}
			HX_STACK_LINE(494)
			if (((lineStyle->__Field(HX_CSTRING("pixelHinting"),true) == null()))){
				HX_STACK_LINE(494)
				lineStyle->__FieldRef(HX_CSTRING("pixelHinting")) = false;
			}
			HX_STACK_LINE(495)
			if (((lineStyle->__Field(HX_CSTRING("miterLimit"),true) == null()))){
				HX_STACK_LINE(495)
				lineStyle->__FieldRef(HX_CSTRING("miterLimit")) = (int)3;
			}
			HX_STACK_LINE(497)
			::flixel::util::FlxSpriteUtil_obj::flashGfx->lineStyle(lineStyle->__Field(HX_CSTRING("thickness"),true),color,alpha,lineStyle->__Field(HX_CSTRING("pixelHinting"),true),lineStyle->__Field(HX_CSTRING("scaleMode"),true),lineStyle->__Field(HX_CSTRING("capsStyle"),true),lineStyle->__Field(HX_CSTRING("jointStyle"),true),lineStyle->__Field(HX_CSTRING("miterLimit"),true));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,setLineStyle,(void))

::flixel::FlxSprite FlxSpriteUtil_obj::fill( ::flixel::FlxSprite sprite,int Color){
	HX_STACK_PUSH("FlxSpriteUtil::fill","flixel/util/FlxSpriteUtil.hx",516);
	HX_STACK_ARG(sprite,"sprite");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(517)
	sprite->get_pixels()->fillRect(sprite->get_pixels()->get_rect(),Color);
	HX_STACK_LINE(519)
	if (((sprite->get_pixels() != sprite->framePixels))){
		HX_STACK_LINE(520)
		sprite->dirty = true;
	}
	HX_STACK_LINE(524)
	sprite->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
	HX_STACK_LINE(525)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSpriteUtil_obj,fill,return )

::flixel::FlxObject FlxSpriteUtil_obj::flicker( ::flixel::FlxObject Object,hx::Null< Float >  __o_Duration,hx::Null< Float >  __o_Interval,hx::Null< bool >  __o_EndVisibility,hx::Null< bool >  __o_ForceRestart,Dynamic CompletionCallback,Dynamic ProgressCallback){
Float Duration = __o_Duration.Default(1);
Float Interval = __o_Interval.Default(0.04);
bool EndVisibility = __o_EndVisibility.Default(true);
bool ForceRestart = __o_ForceRestart.Default(true);
	HX_STACK_PUSH("FlxSpriteUtil::flicker","flixel/util/FlxSpriteUtil.hx",541);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(Interval,"Interval");
	HX_STACK_ARG(EndVisibility,"EndVisibility");
	HX_STACK_ARG(ForceRestart,"ForceRestart");
	HX_STACK_ARG(CompletionCallback,"CompletionCallback");
	HX_STACK_ARG(ProgressCallback,"ProgressCallback");
{
		HX_STACK_LINE(542)
		::flixel::effects::FlxFlicker_obj::flicker(Object,Duration,Interval,EndVisibility,ForceRestart,CompletionCallback,ProgressCallback);
		HX_STACK_LINE(543)
		return Object;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxSpriteUtil_obj,flicker,return )

bool FlxSpriteUtil_obj::isFlickering( ::flixel::FlxObject Object){
	HX_STACK_PUSH("FlxSpriteUtil::isFlickering","flixel/util/FlxSpriteUtil.hx",552);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_LINE(552)
	return ::flixel::effects::FlxFlicker_obj::isFlickering(Object);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,isFlickering,return )

::flixel::FlxObject FlxSpriteUtil_obj::stopFlickering( ::flixel::FlxObject Object){
	HX_STACK_PUSH("FlxSpriteUtil::stopFlickering","flixel/util/FlxSpriteUtil.hx",563);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_LINE(564)
	::flixel::effects::FlxFlicker_obj::stopFlickering(Object);
	HX_STACK_LINE(565)
	return Object;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSpriteUtil_obj,stopFlickering,return )

::flixel::FlxSprite FlxSpriteUtil_obj::fadeIn( ::flixel::FlxSprite sprite,Float Duration,Dynamic ResetAlpha,Dynamic OnComplete){
	HX_STACK_PUSH("FlxSpriteUtil::fadeIn","flixel/util/FlxSpriteUtil.hx",576);
	HX_STACK_ARG(sprite,"sprite");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(ResetAlpha,"ResetAlpha");
	HX_STACK_ARG(OnComplete,"OnComplete");
	HX_STACK_LINE(577)
	if ((ResetAlpha)){
		HX_STACK_LINE(577)
		sprite->set_alpha((int)0);
	}
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &OnComplete){
			HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",580);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("complete") , OnComplete,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(580)
	::flixel::tweens::FlxTween_obj::color(sprite,Duration,sprite->color,sprite->color,sprite->alpha,(int)1,(  (((OnComplete != null()))) ? Dynamic(_Function_1_1::Block(OnComplete)) : Dynamic(null()) ));
	HX_STACK_LINE(581)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxSpriteUtil_obj,fadeIn,return )

::flixel::FlxSprite FlxSpriteUtil_obj::fadeOut( ::flixel::FlxSprite sprite,Float Duration,Dynamic FadeToBlack,Dynamic OnComplete){
	HX_STACK_PUSH("FlxSpriteUtil::fadeOut","flixel/util/FlxSpriteUtil.hx",592);
	HX_STACK_ARG(sprite,"sprite");
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(FadeToBlack,"FadeToBlack");
	HX_STACK_ARG(OnComplete,"OnComplete");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &OnComplete){
			HX_STACK_PUSH("*::closure","flixel/util/FlxSpriteUtil.hx",593);
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("complete") , OnComplete,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(593)
	::flixel::tweens::FlxTween_obj::color(sprite,Duration,sprite->color,(  ((FadeToBlack)) ? int((int)-16777216) : int(sprite->color) ),sprite->alpha,(int)0,(  (((OnComplete != null()))) ? Dynamic(_Function_1_1::Block(OnComplete)) : Dynamic(null()) ));
	HX_STACK_LINE(594)
	return sprite;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxSpriteUtil_obj,fadeOut,return )


FlxSpriteUtil_obj::FlxSpriteUtil_obj()
{
}

void FlxSpriteUtil_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSpriteUtil);
	HX_MARK_END_CLASS();
}

void FlxSpriteUtil_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxSpriteUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { return space_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fadeIn") ) { return fadeIn_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endDraw") ) { return endDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"flicker") ) { return flicker_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeOut") ) { return fadeOut_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flashGfx") ) { return flashGfx; }
		if (HX_FIELD_EQ(inName,"drawLine") ) { return drawLine_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alphaMask") ) { return alphaMask_dyn(); }
		if (HX_FIELD_EQ(inName,"beginDraw") ) { return beginDraw_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"screenWrap") ) { return screenWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return drawEllipse_dyn(); }
		if (HX_FIELD_EQ(inName,"drawPolygon") ) { return drawPolygon_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenCenter") ) { return screenCenter_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriangle") ) { return drawTriangle_dyn(); }
		if (HX_FIELD_EQ(inName,"setLineStyle") ) { return setLineStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"isFlickering") ) { return isFlickering_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flashGfxSprite") ) { return flashGfxSprite; }
		if (HX_FIELD_EQ(inName,"stopFlickering") ) { return stopFlickering_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"alphaMaskFlxSprite") ) { return alphaMaskFlxSprite_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateSpriteGraphic") ) { return updateSpriteGraphic_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSpriteUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"flashGfx") ) { flashGfx=inValue.Cast< ::flash::display::Graphics >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flashGfxSprite") ) { flashGfxSprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSpriteUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("flashGfxSprite"),
	HX_CSTRING("flashGfx"),
	HX_CSTRING("alphaMask"),
	HX_CSTRING("alphaMaskFlxSprite"),
	HX_CSTRING("screenWrap"),
	HX_CSTRING("space"),
	HX_CSTRING("screenCenter"),
	HX_CSTRING("drawLine"),
	HX_CSTRING("drawRect"),
	HX_CSTRING("drawRoundRect"),
	HX_CSTRING("drawCircle"),
	HX_CSTRING("drawEllipse"),
	HX_CSTRING("drawTriangle"),
	HX_CSTRING("drawPolygon"),
	HX_CSTRING("beginDraw"),
	HX_CSTRING("endDraw"),
	HX_CSTRING("updateSpriteGraphic"),
	HX_CSTRING("setLineStyle"),
	HX_CSTRING("fill"),
	HX_CSTRING("flicker"),
	HX_CSTRING("isFlickering"),
	HX_CSTRING("stopFlickering"),
	HX_CSTRING("fadeIn"),
	HX_CSTRING("fadeOut"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::flashGfxSprite,"flashGfxSprite");
	HX_MARK_MEMBER_NAME(FlxSpriteUtil_obj::flashGfx,"flashGfx");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::flashGfxSprite,"flashGfxSprite");
	HX_VISIT_MEMBER_NAME(FlxSpriteUtil_obj::flashGfx,"flashGfx");
};

Class FlxSpriteUtil_obj::__mClass;

void FlxSpriteUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxSpriteUtil"), hx::TCanCast< FlxSpriteUtil_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxSpriteUtil_obj::__boot()
{
	flashGfxSprite= ::flash::display::Sprite_obj::__new();
	flashGfx= ::flixel::util::FlxSpriteUtil_obj::flashGfxSprite->get_graphics();
}

} // end namespace flixel
} // end namespace util
