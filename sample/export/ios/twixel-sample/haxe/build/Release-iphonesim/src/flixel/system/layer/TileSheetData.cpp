#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureAtlasFrame
#include <flixel/util/loaders/TextureAtlasFrame.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TexturePackerData
#include <flixel/util/loaders/TexturePackerData.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace flixel{
namespace system{
namespace layer{

Void TileSheetData_obj::__construct(::flash::display::BitmapData Bitmap)
{
HX_STACK_PUSH("TileSheetData::new","flixel/system/layer/TileSheetData.hx",39);
{
	HX_STACK_LINE(40)
	this->bitmap = Bitmap;
	HX_STACK_LINE(42)
	this->tileSheet = ::flixel::system::layer::TileSheetExt_obj::__new(this->bitmap);
	HX_STACK_LINE(44)
	this->flxSpriteFrames = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(45)
	this->flxFrames = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(46)
	this->frameNames = Array_obj< ::String >::__new();
}
;
	return null();
}

TileSheetData_obj::~TileSheetData_obj() { }

Dynamic TileSheetData_obj::__CreateEmpty() { return  new TileSheetData_obj; }
hx::ObjectPtr< TileSheetData_obj > TileSheetData_obj::__new(::flash::display::BitmapData Bitmap)
{  hx::ObjectPtr< TileSheetData_obj > result = new TileSheetData_obj();
	result->__construct(Bitmap);
	return result;}

Dynamic TileSheetData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileSheetData_obj > result = new TileSheetData_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *TileSheetData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

Void TileSheetData_obj::destroyFrameBitmapDatas( ){
{
		HX_STACK_PUSH("TileSheetData::destroyFrameBitmapDatas","flixel/system/layer/TileSheetData.hx",283);
		HX_STACK_THIS(this);
		HX_STACK_LINE(284)
		int numFrames = this->frameNames->length;		HX_STACK_VAR(numFrames,"numFrames");
		HX_STACK_LINE(285)
		{
			HX_STACK_LINE(285)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(285)
			while(((_g < numFrames))){
				HX_STACK_LINE(285)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(287)
				this->flxFrames->get(this->frameNames->__get(i))->__Field(HX_CSTRING("destroyBitmapDatas"),true)();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileSheetData_obj,destroyFrameBitmapDatas,(void))

::flixel::system::layer::frames::FlxFrame TileSheetData_obj::addTexturePackerFrame( ::flixel::util::loaders::TextureAtlasFrame frameData,hx::Null< int >  __o_startX,hx::Null< int >  __o_startY){
int startX = __o_startX.Default(0);
int startY = __o_startY.Default(0);
	HX_STACK_PUSH("TileSheetData::addTexturePackerFrame","flixel/system/layer/TileSheetData.hx",249);
	HX_STACK_THIS(this);
	HX_STACK_ARG(frameData,"frameData");
	HX_STACK_ARG(startX,"startX");
	HX_STACK_ARG(startY,"startY");
{
		HX_STACK_LINE(250)
		::String key = frameData->name;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(251)
		if ((this->flxFrames->exists(key))){
			HX_STACK_LINE(252)
			return this->flxFrames->get(key);
		}
		HX_STACK_LINE(256)
		::flixel::system::layer::frames::FlxFrame texFrame = ::flixel::system::layer::frames::FlxFrame_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(texFrame,"texFrame");
		HX_STACK_LINE(257)
		texFrame->trimmed = frameData->trimmed;
		HX_STACK_LINE(258)
		texFrame->rotated = frameData->rotated;
		HX_STACK_LINE(259)
		texFrame->name = key;
		HX_STACK_LINE(260)
		texFrame->sourceSize->copyFrom(frameData->sourceSize);
		HX_STACK_LINE(261)
		texFrame->offset->copyFrom(frameData->offset);
		HX_STACK_LINE(262)
		texFrame->center->set((int)0,(int)0);
		HX_STACK_LINE(263)
		texFrame->frame = frameData->frame->clone();
		HX_STACK_LINE(265)
		if ((frameData->rotated)){
			HX_STACK_LINE(267)
			texFrame->center->set(((texFrame->frame->height * 0.5) + texFrame->offset->x),((texFrame->frame->width * 0.5) + texFrame->offset->y));
			HX_STACK_LINE(268)
			texFrame->additionalAngle = -90.0;
		}
		else{
			HX_STACK_LINE(271)
			texFrame->center->set(((texFrame->frame->width * 0.5) + texFrame->offset->x),((texFrame->frame->height * 0.5) + texFrame->offset->y));
		}
		HX_STACK_LINE(275)
		texFrame->tileID = this->tileSheet->addTileRectID(texFrame->frame,::flash::geom::Point_obj::__new((0.5 * texFrame->frame->width),(0.5 * texFrame->frame->height)));
		HX_STACK_LINE(277)
		this->flxFrames->set(key,texFrame);
		HX_STACK_LINE(278)
		this->frameNames->push(key);
		HX_STACK_LINE(279)
		return texFrame;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(TileSheetData_obj,addTexturePackerFrame,return )

::flixel::system::layer::frames::FlxSpriteFrames TileSheetData_obj::getTexturePackerFrames( ::flixel::util::loaders::TexturePackerData data,hx::Null< int >  __o_startX,hx::Null< int >  __o_startY){
int startX = __o_startX.Default(0);
int startY = __o_startY.Default(0);
	HX_STACK_PUSH("TileSheetData::getTexturePackerFrames","flixel/system/layer/TileSheetData.hx",222);
	HX_STACK_THIS(this);
	HX_STACK_ARG(data,"data");
	HX_STACK_ARG(startX,"startX");
	HX_STACK_ARG(startY,"startY");
{
		HX_STACK_LINE(224)
		if ((this->flxSpriteFrames->exists(data->assetName))){
			HX_STACK_LINE(225)
			return this->flxSpriteFrames->get(data->assetName);
		}
		HX_STACK_LINE(229)
		data->parseData();
		HX_STACK_LINE(231)
		::flixel::system::layer::frames::FlxFrame frame;		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(232)
		::flixel::system::layer::frames::FlxSpriteFrames packerFrames = ::flixel::system::layer::frames::FlxSpriteFrames_obj::__new(data->assetName);		HX_STACK_VAR(packerFrames,"packerFrames");
		HX_STACK_LINE(234)
		int l = data->frames->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(235)
			while(((_g < l))){
				HX_STACK_LINE(235)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(237)
				frame = this->addTexturePackerFrame(data->frames->__get(i).StaticCast< ::flixel::util::loaders::TextureAtlasFrame >(),startX,startY);
				HX_STACK_LINE(238)
				packerFrames->addFrame(frame);
			}
		}
		HX_STACK_LINE(241)
		this->flxSpriteFrames->set(data->assetName,packerFrames);
		HX_STACK_LINE(242)
		return packerFrames;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(TileSheetData_obj,getTexturePackerFrames,return )

Void TileSheetData_obj::onContext( ::flash::display::BitmapData bitmap){
{
		HX_STACK_PUSH("TileSheetData::onContext","flixel/system/layer/TileSheetData.hx",210);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bitmap,"bitmap");
		HX_STACK_LINE(211)
		this->bitmap = bitmap;
		HX_STACK_LINE(212)
		::flixel::system::layer::TileSheetExt newSheet = ::flixel::system::layer::TileSheetExt_obj::__new(bitmap);		HX_STACK_VAR(newSheet,"newSheet");
		HX_STACK_LINE(213)
		newSheet->rebuildFromOld(this->tileSheet);
		HX_STACK_LINE(214)
		this->tileSheet = newSheet;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,onContext,(void))

Void TileSheetData_obj::destroy( ){
{
		HX_STACK_PUSH("TileSheetData::destroy","flixel/system/layer/TileSheetData.hx",181);
		HX_STACK_THIS(this);
		HX_STACK_LINE(182)
		this->bitmap = null();
		HX_STACK_LINE(184)
		this->tileSheet->destroy();
		HX_STACK_LINE(185)
		this->tileSheet = null();
		struct _Function_1_1{
			inline static Dynamic Block( ::flixel::system::layer::TileSheetData_obj *__this){
				HX_STACK_PUSH("*::closure","flixel/system/layer/TileSheetData.hx",188);
				{
					HX_STACK_LINE(188)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->flxSpriteFrames);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","flixel/system/layer/TileSheetData.hx",188);
						{
							HX_STACK_LINE(188)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(188)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(188)
		for(::cpp::FastIterator_obj< ::flixel::system::layer::frames::FlxSpriteFrames > *__it = ::cpp::CreateFastIterator< ::flixel::system::layer::frames::FlxSpriteFrames >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::flixel::system::layer::frames::FlxSpriteFrames spriteData = __it->next();
			spriteData->destroy();
		}
		struct _Function_1_2{
			inline static Dynamic Block( ::flixel::system::layer::TileSheetData_obj *__this){
				HX_STACK_PUSH("*::closure","flixel/system/layer/TileSheetData.hx",193);
				{
					HX_STACK_LINE(193)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->flxSpriteFrames);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","flixel/system/layer/TileSheetData.hx",193);
						{
							HX_STACK_LINE(193)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(193)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(193)
		for(::cpp::FastIterator_obj< ::flixel::system::layer::frames::FlxSpriteFrames > *__it = ::cpp::CreateFastIterator< ::flixel::system::layer::frames::FlxSpriteFrames >((_Function_1_2::Block(this))());  __it->hasNext(); ){
			::flixel::system::layer::frames::FlxSpriteFrames frames = __it->next();
			frames->destroy();
		}
		HX_STACK_LINE(197)
		this->flxSpriteFrames = null();
		struct _Function_1_3{
			inline static Dynamic Block( ::flixel::system::layer::TileSheetData_obj *__this){
				HX_STACK_PUSH("*::closure","flixel/system/layer/TileSheetData.hx",199);
				{
					HX_STACK_LINE(199)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->flxFrames);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","flixel/system/layer/TileSheetData.hx",199);
						{
							HX_STACK_LINE(199)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(199)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(199)
		for(::cpp::FastIterator_obj< ::flixel::system::layer::frames::FlxFrame > *__it = ::cpp::CreateFastIterator< ::flixel::system::layer::frames::FlxFrame >((_Function_1_3::Block(this))());  __it->hasNext(); ){
			::flixel::system::layer::frames::FlxFrame frame = __it->next();
			frame->destroy();
		}
		HX_STACK_LINE(203)
		this->flxFrames = null();
		HX_STACK_LINE(205)
		this->frameNames = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileSheetData_obj,destroy,(void))

int TileSheetData_obj::addTileRect( ::flash::geom::Rectangle tileRect,::flash::geom::Point point){
	HX_STACK_PUSH("TileSheetData::addTileRect","flixel/system/layer/TileSheetData.hx",175);
	HX_STACK_THIS(this);
	HX_STACK_ARG(tileRect,"tileRect");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(175)
	return this->tileSheet->addTileRectID(tileRect,point);
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,addTileRect,return )

bool TileSheetData_obj::containsFrame( ::String key){
	HX_STACK_PUSH("TileSheetData::containsFrame","flixel/system/layer/TileSheetData.hx",169);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(169)
	return this->flxFrames->exists(key);
}


HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,containsFrame,return )

::flixel::system::layer::frames::FlxFrame TileSheetData_obj::addSpriteSheetFrame( ::flash::geom::Rectangle rect,::flash::geom::Point point){
	HX_STACK_PUSH("TileSheetData::addSpriteSheetFrame","flixel/system/layer/TileSheetData.hx",143);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(144)
	::String key = ((((((((((rect->x + HX_CSTRING("_")) + rect->y) + HX_CSTRING("_")) + rect->width) + HX_CSTRING("_")) + rect->height) + HX_CSTRING("_")) + point->x) + HX_CSTRING("_")) + point->y);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(145)
	if ((this->flxFrames->exists(key))){
		HX_STACK_LINE(146)
		return this->flxFrames->get(key);
	}
	HX_STACK_LINE(150)
	::flixel::system::layer::frames::FlxFrame frame = ::flixel::system::layer::frames::FlxFrame_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(152)
	frame->tileID = this->tileSheet->addTileRectID(rect,point);
	HX_STACK_LINE(154)
	frame->name = key;
	HX_STACK_LINE(155)
	frame->frame = rect;
	HX_STACK_LINE(157)
	frame->rotated = false;
	HX_STACK_LINE(158)
	frame->trimmed = false;
	HX_STACK_LINE(159)
	frame->sourceSize->set(rect->width,rect->height);
	HX_STACK_LINE(160)
	frame->offset->set((int)0,(int)0);
	HX_STACK_LINE(162)
	frame->center->set((0.5 * rect->width),(0.5 * rect->height));
	HX_STACK_LINE(163)
	this->flxFrames->set(key,frame);
	HX_STACK_LINE(164)
	this->frameNames->push(key);
	HX_STACK_LINE(165)
	return frame;
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,addSpriteSheetFrame,return )

bool TileSheetData_obj::containsSpriteSheetFrames( int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY){
	HX_STACK_PUSH("TileSheetData::containsSpriteSheetFrames","flixel/system/layer/TileSheetData.hx",134);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(startX,"startX");
	HX_STACK_ARG(startY,"startY");
	HX_STACK_ARG(endX,"endX");
	HX_STACK_ARG(endY,"endY");
	HX_STACK_ARG(xSpacing,"xSpacing");
	HX_STACK_ARG(ySpacing,"ySpacing");
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	HX_STACK_LINE(135)
	::String key = ((((((((((((((((((width + HX_CSTRING("_")) + height) + HX_CSTRING("_")) + startX) + HX_CSTRING("_")) + startY) + HX_CSTRING("_")) + endX) + HX_CSTRING("_")) + endY) + HX_CSTRING("_")) + xSpacing) + HX_CSTRING("_")) + ySpacing) + HX_CSTRING("_")) + pointX) + HX_CSTRING("_")) + pointY);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(136)
	return this->flxSpriteFrames->exists(key);
}


HX_DEFINE_DYNAMIC_FUNC10(TileSheetData_obj,containsSpriteSheetFrames,return )

::String TileSheetData_obj::getKeyForSpriteSheetFrames( int width,int height,int startX,int startY,int endX,int endY,int xSpacing,int ySpacing,Float pointX,Float pointY){
	HX_STACK_PUSH("TileSheetData::getKeyForSpriteSheetFrames","flixel/system/layer/TileSheetData.hx",129);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(startX,"startX");
	HX_STACK_ARG(startY,"startY");
	HX_STACK_ARG(endX,"endX");
	HX_STACK_ARG(endY,"endY");
	HX_STACK_ARG(xSpacing,"xSpacing");
	HX_STACK_ARG(ySpacing,"ySpacing");
	HX_STACK_ARG(pointX,"pointX");
	HX_STACK_ARG(pointY,"pointY");
	HX_STACK_LINE(129)
	return ((((((((((((((((((width + HX_CSTRING("_")) + height) + HX_CSTRING("_")) + startX) + HX_CSTRING("_")) + startY) + HX_CSTRING("_")) + endX) + HX_CSTRING("_")) + endY) + HX_CSTRING("_")) + xSpacing) + HX_CSTRING("_")) + ySpacing) + HX_CSTRING("_")) + pointX) + HX_CSTRING("_")) + pointY);
}


HX_DEFINE_DYNAMIC_FUNC10(TileSheetData_obj,getKeyForSpriteSheetFrames,return )

::String TileSheetData_obj::getSpriteSheetFrameKey( ::flash::geom::Rectangle rect,::flash::geom::Point point){
	HX_STACK_PUSH("TileSheetData::getSpriteSheetFrameKey","flixel/system/layer/TileSheetData.hx",124);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(124)
	return ((((((((((rect->x + HX_CSTRING("_")) + rect->y) + HX_CSTRING("_")) + rect->width) + HX_CSTRING("_")) + rect->height) + HX_CSTRING("_")) + point->x) + HX_CSTRING("_")) + point->y);
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,getSpriteSheetFrameKey,return )

::flixel::system::layer::frames::FlxSpriteFrames TileSheetData_obj::getSpriteSheetFrames( ::flixel::system::layer::Region region,::flash::geom::Point origin){
	HX_STACK_PUSH("TileSheetData::getSpriteSheetFrames","flixel/system/layer/TileSheetData.hx",55);
	HX_STACK_THIS(this);
	HX_STACK_ARG(region,"region");
	HX_STACK_ARG(origin,"origin");
	HX_STACK_LINE(56)
	int bitmapWidth = region->width;		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
	HX_STACK_LINE(57)
	int bitmapHeight = region->height;		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
	HX_STACK_LINE(59)
	int startX = region->startX;		HX_STACK_VAR(startX,"startX");
	HX_STACK_LINE(60)
	int startY = region->startY;		HX_STACK_VAR(startY,"startY");
	HX_STACK_LINE(62)
	int endX = (startX + bitmapWidth);		HX_STACK_VAR(endX,"endX");
	HX_STACK_LINE(63)
	int endY = (startY + bitmapHeight);		HX_STACK_VAR(endY,"endY");
	HX_STACK_LINE(65)
	int xSpacing = region->spacingX;		HX_STACK_VAR(xSpacing,"xSpacing");
	HX_STACK_LINE(66)
	int ySpacing = region->spacingY;		HX_STACK_VAR(ySpacing,"ySpacing");
	HX_STACK_LINE(68)
	int width = (  (((region->tileWidth == (int)0))) ? int(bitmapWidth) : int(region->tileWidth) );		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(69)
	int height = (  (((region->tileHeight == (int)0))) ? int(bitmapHeight) : int(region->tileHeight) );		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(71)
	Float pointX = (0.5 * width);		HX_STACK_VAR(pointX,"pointX");
	HX_STACK_LINE(72)
	Float pointY = (0.5 * height);		HX_STACK_VAR(pointY,"pointY");
	HX_STACK_LINE(74)
	if (((origin != null()))){
		HX_STACK_LINE(76)
		pointX = origin->x;
		HX_STACK_LINE(77)
		pointY = origin->y;
	}
	HX_STACK_LINE(80)
	::String key = ((((((((((((((((((width + HX_CSTRING("_")) + height) + HX_CSTRING("_")) + startX) + HX_CSTRING("_")) + startY) + HX_CSTRING("_")) + endX) + HX_CSTRING("_")) + endY) + HX_CSTRING("_")) + xSpacing) + HX_CSTRING("_")) + ySpacing) + HX_CSTRING("_")) + pointX) + HX_CSTRING("_")) + pointY);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(81)
	if ((this->flxSpriteFrames->exists(key))){
		HX_STACK_LINE(82)
		return this->flxSpriteFrames->get(key);
	}
	HX_STACK_LINE(86)
	int numRows = region->get_numRows();		HX_STACK_VAR(numRows,"numRows");
	HX_STACK_LINE(87)
	int numCols = region->get_numCols();		HX_STACK_VAR(numCols,"numCols");
	HX_STACK_LINE(89)
	::flash::geom::Point tempPoint = origin;		HX_STACK_VAR(tempPoint,"tempPoint");
	HX_STACK_LINE(90)
	if (((origin == null()))){
		HX_STACK_LINE(91)
		tempPoint = ::flash::geom::Point_obj::__new(pointX,pointY);
	}
	HX_STACK_LINE(95)
	::flixel::system::layer::frames::FlxSpriteFrames spriteData = ::flixel::system::layer::frames::FlxSpriteFrames_obj::__new(key);		HX_STACK_VAR(spriteData,"spriteData");
	HX_STACK_LINE(97)
	::flixel::system::layer::frames::FlxFrame frame;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(98)
	::flash::geom::Rectangle tempRect;		HX_STACK_VAR(tempRect,"tempRect");
	HX_STACK_LINE(100)
	int spacedWidth = (width + xSpacing);		HX_STACK_VAR(spacedWidth,"spacedWidth");
	HX_STACK_LINE(101)
	int spacedHeight = (height + ySpacing);		HX_STACK_VAR(spacedHeight,"spacedHeight");
	HX_STACK_LINE(103)
	{
		HX_STACK_LINE(103)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = numRows;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(103)
		while(((_g1 < _g))){
			HX_STACK_LINE(103)
			int j = (_g1)++;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(105)
			{
				HX_STACK_LINE(105)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				int _g2 = numCols;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(105)
				while(((_g3 < _g2))){
					HX_STACK_LINE(105)
					int i = (_g3)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(107)
					tempRect = ::flash::geom::Rectangle_obj::__new((startX + (i * spacedWidth)),(startY + (j * spacedHeight)),width,height);
					HX_STACK_LINE(108)
					frame = this->addSpriteSheetFrame(tempRect,tempPoint);
					HX_STACK_LINE(109)
					spriteData->addFrame(frame);
				}
			}
		}
	}
	HX_STACK_LINE(113)
	this->flxSpriteFrames->set(key,spriteData);
	HX_STACK_LINE(114)
	return spriteData;
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetData_obj,getSpriteSheetFrames,return )

::flixel::system::layer::frames::FlxFrame TileSheetData_obj::getFrame( ::String name){
	HX_STACK_PUSH("TileSheetData::getFrame","flixel/system/layer/TileSheetData.hx",50);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(50)
	return this->flxFrames->get(name);
}


HX_DEFINE_DYNAMIC_FUNC1(TileSheetData_obj,getFrame,return )


TileSheetData_obj::TileSheetData_obj()
{
}

void TileSheetData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileSheetData);
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(frameNames,"frameNames");
	HX_MARK_MEMBER_NAME(flxFrames,"flxFrames");
	HX_MARK_MEMBER_NAME(flxSpriteFrames,"flxSpriteFrames");
	HX_MARK_MEMBER_NAME(tileSheet,"tileSheet");
	HX_MARK_END_CLASS();
}

void TileSheetData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(frameNames,"frameNames");
	HX_VISIT_MEMBER_NAME(flxFrames,"flxFrames");
	HX_VISIT_MEMBER_NAME(flxSpriteFrames,"flxSpriteFrames");
	HX_VISIT_MEMBER_NAME(tileSheet,"tileSheet");
}

Dynamic TileSheetData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFrame") ) { return getFrame_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onContext") ) { return onContext_dyn(); }
		if (HX_FIELD_EQ(inName,"flxFrames") ) { return flxFrames; }
		if (HX_FIELD_EQ(inName,"tileSheet") ) { return tileSheet; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameNames") ) { return frameNames; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addTileRect") ) { return addTileRect_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsFrame") ) { return containsFrame_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"flxSpriteFrames") ) { return flxSpriteFrames; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addSpriteSheetFrame") ) { return addSpriteSheetFrame_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getSpriteSheetFrames") ) { return getSpriteSheetFrames_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"addTexturePackerFrame") ) { return addTexturePackerFrame_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getTexturePackerFrames") ) { return getTexturePackerFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"getSpriteSheetFrameKey") ) { return getSpriteSheetFrameKey_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"destroyFrameBitmapDatas") ) { return destroyFrameBitmapDatas_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"containsSpriteSheetFrames") ) { return containsSpriteSheetFrames_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getKeyForSpriteSheetFrames") ) { return getKeyForSpriteSheetFrames_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileSheetData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"flxFrames") ) { flxFrames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileSheet") ) { tileSheet=inValue.Cast< ::flixel::system::layer::TileSheetExt >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameNames") ) { frameNames=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"flxSpriteFrames") ) { flxSpriteFrames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileSheetData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bitmap"));
	outFields->push(HX_CSTRING("frameNames"));
	outFields->push(HX_CSTRING("flxFrames"));
	outFields->push(HX_CSTRING("flxSpriteFrames"));
	outFields->push(HX_CSTRING("tileSheet"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroyFrameBitmapDatas"),
	HX_CSTRING("addTexturePackerFrame"),
	HX_CSTRING("getTexturePackerFrames"),
	HX_CSTRING("onContext"),
	HX_CSTRING("destroy"),
	HX_CSTRING("addTileRect"),
	HX_CSTRING("containsFrame"),
	HX_CSTRING("addSpriteSheetFrame"),
	HX_CSTRING("containsSpriteSheetFrames"),
	HX_CSTRING("getKeyForSpriteSheetFrames"),
	HX_CSTRING("getSpriteSheetFrameKey"),
	HX_CSTRING("getSpriteSheetFrames"),
	HX_CSTRING("getFrame"),
	HX_CSTRING("bitmap"),
	HX_CSTRING("frameNames"),
	HX_CSTRING("flxFrames"),
	HX_CSTRING("flxSpriteFrames"),
	HX_CSTRING("tileSheet"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileSheetData_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileSheetData_obj::__mClass,"__mClass");
};

Class TileSheetData_obj::__mClass;

void TileSheetData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.layer.TileSheetData"), hx::TCanCast< TileSheetData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TileSheetData_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace layer
