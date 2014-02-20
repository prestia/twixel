#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxCollisionType
#include <flixel/system/FlxCollisionType.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#include <flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTile
#include <flixel/tile/FlxTile.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapBuffer
#include <flixel/tile/FlxTilemapBuffer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
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
#ifndef INCLUDED_flixel_util_loaders_TextureRegion
#include <flixel/util/loaders/TextureRegion.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace tile{

Void FlxTilemap_obj::__construct()
{
HX_STACK_PUSH("FlxTilemap::new","flixel/tile/FlxTilemap.hx",36);
{
	HX_STACK_LINE(108)
	this->_randomLambda = null();
	HX_STACK_LINE(103)
	this->_randomChoices = null();
	HX_STACK_LINE(102)
	this->_randomIndices = null();
	HX_STACK_LINE(86)
	this->customTileRemap = null();
	HX_STACK_LINE(73)
	this->tileScaleHack = 1.01;
	HX_STACK_LINE(52)
	this->scaleY = 1.0;
	HX_STACK_LINE(51)
	this->scaleX = 1.0;
	HX_STACK_LINE(193)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(195)
	this->collisionType = ::flixel::system::FlxCollisionType_obj::TILEMAP;
	HX_STACK_LINE(197)
	this->_auto = (int)0;
	HX_STACK_LINE(198)
	this->widthInTiles = (int)0;
	HX_STACK_LINE(199)
	this->heightInTiles = (int)0;
	HX_STACK_LINE(200)
	this->totalTiles = (int)0;
	HX_STACK_LINE(201)
	this->_buffers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(202)
	this->_flashPoint = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(203)
	this->_flashRect = null();
	HX_STACK_LINE(204)
	this->_data = null();
	HX_STACK_LINE(205)
	this->_tileWidth = (int)0;
	HX_STACK_LINE(206)
	this->_tileHeight = (int)0;
	HX_STACK_LINE(214)
	this->_rectIDs = null();
	HX_STACK_LINE(216)
	this->_tileObjects = null();
	HX_STACK_LINE(217)
	this->set_immovable(true);
	HX_STACK_LINE(218)
	this->set_moves(false);
	HX_STACK_LINE(219)
	this->cameras = null();
	HX_STACK_LINE(229)
	this->_startingIndex = (int)0;
	HX_STACK_LINE(232)
	this->_helperPoint = ::flash::geom::Point_obj::__new(null(),null());
}
;
	return null();
}

FlxTilemap_obj::~FlxTilemap_obj() { }

Dynamic FlxTilemap_obj::__CreateEmpty() { return  new FlxTilemap_obj; }
hx::ObjectPtr< FlxTilemap_obj > FlxTilemap_obj::__new()
{  hx::ObjectPtr< FlxTilemap_obj > result = new FlxTilemap_obj();
	result->__construct();
	return result;}

Dynamic FlxTilemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTilemap_obj > result = new FlxTilemap_obj();
	result->__construct();
	return result;}

Float FlxTilemap_obj::set_scaleY( Float Scale){
	HX_STACK_PUSH("FlxTilemap::set_scaleY","flixel/tile/FlxTilemap.hx",2578);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Scale,"Scale");
	HX_STACK_LINE(2579)
	Scale = ::Math_obj::abs(Scale);
	HX_STACK_LINE(2580)
	this->scaleY = Scale;
	HX_STACK_LINE(2581)
	this->_scaledTileHeight = (this->_tileHeight * Scale);
	HX_STACK_LINE(2582)
	this->set_height((this->heightInTiles * this->_scaledTileHeight));
	HX_STACK_LINE(2584)
	if (((this->cameras != null()))){
		HX_STACK_LINE(2586)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(2587)
		int l = this->cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(2588)
		while(((i < l))){
			HX_STACK_LINE(2590)
			if (((this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >() != null()))){
				HX_STACK_LINE(2591)
				this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->updateRows(this->_tileHeight,this->heightInTiles,Scale,this->cameras->__get(i).StaticCast< ::flixel::FlxCamera >());
			}
			HX_STACK_LINE(2594)
			(i)++;
		}
	}
	HX_STACK_LINE(2598)
	return Scale;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_scaleY,return )

Float FlxTilemap_obj::set_scaleX( Float Scale){
	HX_STACK_PUSH("FlxTilemap::set_scaleX","flixel/tile/FlxTilemap.hx",2554);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Scale,"Scale");
	HX_STACK_LINE(2555)
	Scale = ::Math_obj::abs(Scale);
	HX_STACK_LINE(2556)
	this->scaleX = Scale;
	HX_STACK_LINE(2557)
	this->_scaledTileWidth = (this->_tileWidth * Scale);
	HX_STACK_LINE(2558)
	this->set_width((this->widthInTiles * this->_scaledTileWidth));
	HX_STACK_LINE(2560)
	if (((this->cameras != null()))){
		HX_STACK_LINE(2562)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(2563)
		int l = this->cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(2564)
		while(((i < l))){
			HX_STACK_LINE(2566)
			if (((this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >() != null()))){
				HX_STACK_LINE(2567)
				this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->updateColumns(this->_tileWidth,this->widthInTiles,Scale,this->cameras->__get(i).StaticCast< ::flixel::FlxCamera >());
			}
			HX_STACK_LINE(2570)
			(i)++;
		}
	}
	HX_STACK_LINE(2574)
	return Scale;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_scaleX,return )

bool FlxTilemap_obj::set_forceComplexRender( bool Value){
	HX_STACK_PUSH("FlxTilemap::set_forceComplexRender","flixel/tile/FlxTilemap.hx",2535);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(2536)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(2537)
	int l;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(2539)
	if (((this->_buffers != null()))){
		HX_STACK_LINE(2541)
		i = (int)0;
		HX_STACK_LINE(2542)
		l = this->_buffers->length;
		HX_STACK_LINE(2544)
		{
			HX_STACK_LINE(2544)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2544)
			while(((_g < l))){
				HX_STACK_LINE(2544)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(2546)
				this->_buffers->__get(i1).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->forceComplexRender = Value;
			}
		}
	}
	HX_STACK_LINE(2550)
	return this->super::set_forceComplexRender(Value);
}


Void FlxTilemap_obj::updateBuffers( ){
{
		HX_STACK_PUSH("FlxTilemap::updateBuffers","flixel/tile/FlxTilemap.hx",2514);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2515)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(2516)
		int l;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(2518)
		if (((this->_buffers != null()))){
			HX_STACK_LINE(2520)
			i = (int)0;
			HX_STACK_LINE(2521)
			l = this->_buffers->length;
			HX_STACK_LINE(2523)
			{
				HX_STACK_LINE(2523)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2523)
				while(((_g < l))){
					HX_STACK_LINE(2523)
					int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(2525)
					this->_buffers->__get(i1).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->destroy();
				}
			}
			HX_STACK_LINE(2528)
			this->_buffers = null();
		}
		HX_STACK_LINE(2531)
		this->_buffers = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,updateBuffers,(void))

::flixel::FlxSprite FlxTilemap_obj::tileToFlxSprite( int X,int Y,hx::Null< int >  __o_NewTile){
int NewTile = __o_NewTile.Default(0);
	HX_STACK_PUSH("FlxTilemap::tileToFlxSprite","flixel/tile/FlxTilemap.hx",2455);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(NewTile,"NewTile");
{
		HX_STACK_LINE(2456)
		int rowIndex = (X + (Y * this->widthInTiles));		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(2458)
		::flash::geom::Rectangle rect = null();		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(2464)
		::flixel::tile::FlxTile tile = this->_tileObjects->__get(this->_data->__get(rowIndex)).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(2466)
		if (((bool((tile == null())) || bool(!(tile->visible))))){
		}
		else{
			HX_STACK_LINE(2472)
			int rx = (((this->_data->__get(rowIndex) - this->_startingIndex)) * ((this->_tileWidth + this->region->spacingX)));		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(2473)
			int ry = (int)0;		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(2475)
			if (((rx >= this->region->width))){
				HX_STACK_LINE(2477)
				ry = (::Std_obj::_int((Float(rx) / Float(this->region->width))) * ((this->_tileHeight + this->region->spacingY)));
				HX_STACK_LINE(2478)
				hx::ModEq(rx,this->region->width);
			}
			HX_STACK_LINE(2481)
			rect = ::flash::geom::Rectangle_obj::__new((rx + this->region->startX),(ry + this->region->startY),this->_tileWidth,this->_tileHeight);
		}
		HX_STACK_LINE(2486)
		::flash::geom::Point pt = ::flash::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(pt,"pt");
		HX_STACK_LINE(2487)
		::flixel::FlxSprite tileSprite = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tileSprite,"tileSprite");
		HX_STACK_LINE(2488)
		tileSprite->makeGraphic(this->_tileWidth,this->_tileHeight,(int)0,true,null());
		HX_STACK_LINE(2489)
		tileSprite->set_x(((X * this->_tileWidth) + this->x));
		HX_STACK_LINE(2490)
		tileSprite->set_y(((Y * this->_tileHeight) + this->y));
		HX_STACK_LINE(2491)
		tileSprite->scale->set_x(this->scaleX);
		HX_STACK_LINE(2492)
		tileSprite->scale->set_y(this->scaleY);
		HX_STACK_LINE(2494)
		if (((rect != null()))){
			HX_STACK_LINE(2495)
			tileSprite->get_pixels()->copyPixels(this->cachedGraphics->bitmap,rect,pt,null(),null(),null());
		}
		HX_STACK_LINE(2499)
		tileSprite->dirty = true;
		HX_STACK_LINE(2500)
		tileSprite->updateFrameData();
		HX_STACK_LINE(2502)
		if (((NewTile >= (int)0))){
			HX_STACK_LINE(2503)
			this->setTile(X,Y,NewTile,null());
		}
		HX_STACK_LINE(2507)
		return tileSprite;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,tileToFlxSprite,return )

Void FlxTilemap_obj::updateFrameData( ){
{
		HX_STACK_PUSH("FlxTilemap::updateFrameData","flixel/tile/FlxTilemap.hx",2428);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2428)
		if (((bool((bool((this->cachedGraphics != null())) && bool((this->_tileWidth >= (int)1)))) && bool((this->_tileHeight >= (int)1))))){
			HX_STACK_LINE(2431)
			this->framesData = this->cachedGraphics->get_tilesheet()->getSpriteSheetFrames(this->region,::flash::geom::Point_obj::__new((int)0,(int)0));
			HX_STACK_LINE(2433)
			this->_rectIDs = Array_obj< int >::__new();
			HX_STACK_LINE(2434)
			::flixel::util::FlxArrayUtil_obj::setLength_Int(this->_rectIDs,this->totalTiles);
			HX_STACK_LINE(2436)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(2438)
			while(((i < this->totalTiles))){
				HX_STACK_LINE(2439)
				this->updateTile((i)++);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,updateFrameData,(void))

Void FlxTilemap_obj::updateTile( int Index){
{
		HX_STACK_PUSH("FlxTilemap::updateTile","flixel/tile/FlxTilemap.hx",2394);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Index,"Index");
		HX_STACK_LINE(2395)
		::flixel::tile::FlxTile tile = this->_tileObjects->__get(this->_data->__get(Index)).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(2397)
		if (((bool((tile == null())) || bool(!(tile->visible))))){
			HX_STACK_LINE(2402)
			this->_rectIDs[Index] = (int)-1;
			HX_STACK_LINE(2405)
			return null();
		}
		HX_STACK_LINE(2419)
		this->_rectIDs[Index] = this->framesData->frames->__get((this->_data->__get(Index) - this->_startingIndex)).StaticCast< ::flixel::system::layer::frames::FlxFrame >()->tileID;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,updateTile,(void))

Void FlxTilemap_obj::autoTile( int Index){
{
		HX_STACK_PUSH("FlxTilemap::autoTile","flixel/tile/FlxTilemap.hx",2331);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Index,"Index");
		HX_STACK_LINE(2332)
		if (((this->_data->__get(Index) == (int)0))){
			HX_STACK_LINE(2333)
			return null();
		}
		HX_STACK_LINE(2337)
		this->_data[Index] = (int)0;
		HX_STACK_LINE(2340)
		if (((bool(((Index - this->widthInTiles) < (int)0)) || bool((this->_data->__get((Index - this->widthInTiles)) > (int)0))))){
			HX_STACK_LINE(2341)
			hx::AddEq(this->_data[Index],(int)1);
		}
		HX_STACK_LINE(2345)
		if (((bool((hx::Mod(Index,this->widthInTiles) >= (this->widthInTiles - (int)1))) || bool((this->_data->__get((Index + (int)1)) > (int)0))))){
			HX_STACK_LINE(2346)
			hx::AddEq(this->_data[Index],(int)2);
		}
		HX_STACK_LINE(2350)
		if (((bool((::Std_obj::_int((Index + this->widthInTiles)) >= this->totalTiles)) || bool((this->_data->__get((Index + this->widthInTiles)) > (int)0))))){
			HX_STACK_LINE(2351)
			hx::AddEq(this->_data[Index],(int)4);
		}
		HX_STACK_LINE(2355)
		if (((bool((hx::Mod(Index,this->widthInTiles) <= (int)0)) || bool((this->_data->__get((Index - (int)1)) > (int)0))))){
			HX_STACK_LINE(2356)
			hx::AddEq(this->_data[Index],(int)8);
		}
		HX_STACK_LINE(2361)
		if (((bool((this->_auto == (int)2)) && bool((this->_data->__get(Index) == (int)15))))){
			HX_STACK_LINE(2364)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) > (int)0)) && bool((::Std_obj::_int((Index + this->widthInTiles)) < this->totalTiles)))) && bool((this->_data->__get(((Index + this->widthInTiles) - (int)1)) <= (int)0))))){
				HX_STACK_LINE(2365)
				this->_data[Index] = (int)1;
			}
			HX_STACK_LINE(2369)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) > (int)0)) && bool(((Index - this->widthInTiles) >= (int)0)))) && bool((this->_data->__get(((Index - this->widthInTiles) - (int)1)) <= (int)0))))){
				HX_STACK_LINE(2370)
				this->_data[Index] = (int)2;
			}
			HX_STACK_LINE(2374)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) < (this->widthInTiles - (int)1))) && bool(((Index - this->widthInTiles) >= (int)0)))) && bool((this->_data->__get(((Index - this->widthInTiles) + (int)1)) <= (int)0))))){
				HX_STACK_LINE(2375)
				this->_data[Index] = (int)4;
			}
			HX_STACK_LINE(2379)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) < (this->widthInTiles - (int)1))) && bool((::Std_obj::_int((Index + this->widthInTiles)) < this->totalTiles)))) && bool((this->_data->__get(((Index + this->widthInTiles) + (int)1)) <= (int)0))))){
				HX_STACK_LINE(2380)
				this->_data[Index] = (int)8;
			}
		}
		HX_STACK_LINE(2385)
		hx::AddEq(this->_data[Index],(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,autoTile,(void))

::flixel::util::FlxPoint FlxTilemap_obj::rayHit( ::flixel::util::FlxPoint Start,::flixel::util::FlxPoint End,hx::Null< Float >  __o_Resolution){
Float Resolution = __o_Resolution.Default(1);
	HX_STACK_PUSH("FlxTilemap::rayHit","flixel/tile/FlxTilemap.hx",2025);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Start,"Start");
	HX_STACK_ARG(End,"End");
	HX_STACK_ARG(Resolution,"Resolution");
{
		HX_STACK_LINE(2026)
		::flixel::util::FlxPoint Result = null();		HX_STACK_VAR(Result,"Result");
		HX_STACK_LINE(2027)
		Float step = this->_scaledTileWidth;		HX_STACK_VAR(step,"step");
		HX_STACK_LINE(2029)
		if (((this->_scaledTileHeight < this->_scaledTileWidth))){
			HX_STACK_LINE(2030)
			step = this->_scaledTileHeight;
		}
		HX_STACK_LINE(2034)
		hx::DivEq(step,Resolution);
		HX_STACK_LINE(2035)
		Float deltaX = (End->x - Start->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(2036)
		Float deltaY = (End->y - Start->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(2037)
		Float distance = ::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY)));		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(2038)
		int steps = ::Math_obj::ceil((Float(distance) / Float(step)));		HX_STACK_VAR(steps,"steps");
		HX_STACK_LINE(2039)
		Float stepX = (Float(deltaX) / Float(steps));		HX_STACK_VAR(stepX,"stepX");
		HX_STACK_LINE(2040)
		Float stepY = (Float(deltaY) / Float(steps));		HX_STACK_VAR(stepY,"stepY");
		HX_STACK_LINE(2041)
		Float curX = ((Start->x - stepX) - this->x);		HX_STACK_VAR(curX,"curX");
		HX_STACK_LINE(2042)
		Float curY = ((Start->y - stepY) - this->y);		HX_STACK_VAR(curY,"curY");
		HX_STACK_LINE(2043)
		int tileX;		HX_STACK_VAR(tileX,"tileX");
		HX_STACK_LINE(2044)
		int tileY;		HX_STACK_VAR(tileY,"tileY");
		HX_STACK_LINE(2045)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(2047)
		while(((i < steps))){
			HX_STACK_LINE(2049)
			hx::AddEq(curX,stepX);
			HX_STACK_LINE(2050)
			hx::AddEq(curY,stepY);
			HX_STACK_LINE(2052)
			if (((bool((bool((bool((curX < (int)0)) || bool((curX > this->get_width())))) || bool((curY < (int)0)))) || bool((curY > this->get_height()))))){
				HX_STACK_LINE(2054)
				(i)++;
				HX_STACK_LINE(2055)
				continue;
			}
			HX_STACK_LINE(2058)
			tileX = ::Math_obj::floor((Float(curX) / Float(this->_scaledTileWidth)));
			HX_STACK_LINE(2059)
			tileY = ::Math_obj::floor((Float(curY) / Float(this->_scaledTileHeight)));
			HX_STACK_LINE(2061)
			if (((this->_tileObjects->__get(this->_data->__get(((tileY * this->widthInTiles) + tileX))).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions != (int)0))){
				HX_STACK_LINE(2064)
				hx::MultEq(tileX,::Std_obj::_int(this->_scaledTileWidth));
				HX_STACK_LINE(2065)
				hx::MultEq(tileY,::Std_obj::_int(this->_scaledTileHeight));
				HX_STACK_LINE(2066)
				Float rx = (int)0;		HX_STACK_VAR(rx,"rx");
				HX_STACK_LINE(2067)
				Float ry = (int)0;		HX_STACK_VAR(ry,"ry");
				HX_STACK_LINE(2068)
				Float q;		HX_STACK_VAR(q,"q");
				HX_STACK_LINE(2069)
				Float lx = (curX - stepX);		HX_STACK_VAR(lx,"lx");
				HX_STACK_LINE(2070)
				Float ly = (curY - stepY);		HX_STACK_VAR(ly,"ly");
				HX_STACK_LINE(2073)
				q = tileX;
				HX_STACK_LINE(2075)
				if (((deltaX < (int)0))){
					HX_STACK_LINE(2076)
					hx::AddEq(q,this->_scaledTileWidth);
				}
				HX_STACK_LINE(2080)
				rx = q;
				HX_STACK_LINE(2081)
				ry = (ly + (stepY * ((Float(((q - lx))) / Float(stepX)))));
				HX_STACK_LINE(2083)
				if (((bool((ry > tileY)) && bool((ry < (tileY + this->_scaledTileHeight)))))){
					HX_STACK_LINE(2085)
					if (((Result == null()))){
						HX_STACK_LINE(2086)
						Result = ::flixel::util::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(2090)
					Result->set_x(rx);
					HX_STACK_LINE(2091)
					Result->set_y(ry);
					HX_STACK_LINE(2092)
					return Result;
				}
				HX_STACK_LINE(2096)
				q = tileY;
				HX_STACK_LINE(2098)
				if (((deltaY < (int)0))){
					HX_STACK_LINE(2099)
					hx::AddEq(q,this->_scaledTileHeight);
				}
				HX_STACK_LINE(2103)
				rx = (lx + (stepX * ((Float(((q - ly))) / Float(stepY)))));
				HX_STACK_LINE(2104)
				ry = q;
				HX_STACK_LINE(2106)
				if (((bool((rx > tileX)) && bool((rx < (tileX + this->_scaledTileWidth)))))){
					HX_STACK_LINE(2108)
					if (((Result == null()))){
						HX_STACK_LINE(2109)
						Result = ::flixel::util::FlxPoint_obj::__new(null(),null());
					}
					HX_STACK_LINE(2113)
					Result->set_x(rx);
					HX_STACK_LINE(2114)
					Result->set_y(ry);
					HX_STACK_LINE(2115)
					return Result;
				}
				HX_STACK_LINE(2118)
				return null();
			}
			HX_STACK_LINE(2121)
			(i)++;
		}
		HX_STACK_LINE(2124)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,rayHit,return )

bool FlxTilemap_obj::ray( ::flixel::util::FlxPoint Start,::flixel::util::FlxPoint End,::flixel::util::FlxPoint Result,hx::Null< Float >  __o_Resolution){
Float Resolution = __o_Resolution.Default(1);
	HX_STACK_PUSH("FlxTilemap::ray","flixel/tile/FlxTilemap.hx",1911);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Start,"Start");
	HX_STACK_ARG(End,"End");
	HX_STACK_ARG(Result,"Result");
	HX_STACK_ARG(Resolution,"Resolution");
{
		HX_STACK_LINE(1912)
		Float step = this->_scaledTileWidth;		HX_STACK_VAR(step,"step");
		HX_STACK_LINE(1914)
		if (((this->_scaledTileHeight < this->_scaledTileWidth))){
			HX_STACK_LINE(1915)
			step = this->_scaledTileHeight;
		}
		HX_STACK_LINE(1919)
		hx::DivEq(step,Resolution);
		HX_STACK_LINE(1920)
		Float deltaX = (End->x - Start->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(1921)
		Float deltaY = (End->y - Start->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(1922)
		Float distance = ::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY)));		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(1923)
		int steps = ::Math_obj::ceil((Float(distance) / Float(step)));		HX_STACK_VAR(steps,"steps");
		HX_STACK_LINE(1924)
		Float stepX = (Float(deltaX) / Float(steps));		HX_STACK_VAR(stepX,"stepX");
		HX_STACK_LINE(1925)
		Float stepY = (Float(deltaY) / Float(steps));		HX_STACK_VAR(stepY,"stepY");
		HX_STACK_LINE(1926)
		Float curX = ((Start->x - stepX) - this->x);		HX_STACK_VAR(curX,"curX");
		HX_STACK_LINE(1927)
		Float curY = ((Start->y - stepY) - this->y);		HX_STACK_VAR(curY,"curY");
		HX_STACK_LINE(1928)
		int tileX;		HX_STACK_VAR(tileX,"tileX");
		HX_STACK_LINE(1929)
		int tileY;		HX_STACK_VAR(tileY,"tileY");
		HX_STACK_LINE(1930)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1932)
		while(((i < steps))){
			HX_STACK_LINE(1934)
			hx::AddEq(curX,stepX);
			HX_STACK_LINE(1935)
			hx::AddEq(curY,stepY);
			HX_STACK_LINE(1937)
			if (((bool((bool((bool((curX < (int)0)) || bool((curX > this->get_width())))) || bool((curY < (int)0)))) || bool((curY > this->get_height()))))){
				HX_STACK_LINE(1939)
				(i)++;
				HX_STACK_LINE(1940)
				continue;
			}
			HX_STACK_LINE(1943)
			tileX = ::Math_obj::floor((Float(curX) / Float(this->_scaledTileWidth)));
			HX_STACK_LINE(1944)
			tileY = ::Math_obj::floor((Float(curY) / Float(this->_scaledTileHeight)));
			HX_STACK_LINE(1946)
			if (((this->_tileObjects->__get(this->_data->__get(((tileY * this->widthInTiles) + tileX))).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions != (int)0))){
				HX_STACK_LINE(1949)
				hx::MultEq(tileX,::Std_obj::_int(this->_scaledTileWidth));
				HX_STACK_LINE(1950)
				hx::MultEq(tileY,::Std_obj::_int(this->_scaledTileHeight));
				HX_STACK_LINE(1951)
				Float rx = (int)0;		HX_STACK_VAR(rx,"rx");
				HX_STACK_LINE(1952)
				Float ry = (int)0;		HX_STACK_VAR(ry,"ry");
				HX_STACK_LINE(1953)
				Float q;		HX_STACK_VAR(q,"q");
				HX_STACK_LINE(1954)
				Float lx = (curX - stepX);		HX_STACK_VAR(lx,"lx");
				HX_STACK_LINE(1955)
				Float ly = (curY - stepY);		HX_STACK_VAR(ly,"ly");
				HX_STACK_LINE(1958)
				q = tileX;
				HX_STACK_LINE(1960)
				if (((deltaX < (int)0))){
					HX_STACK_LINE(1961)
					hx::AddEq(q,this->_scaledTileWidth);
				}
				HX_STACK_LINE(1965)
				rx = q;
				HX_STACK_LINE(1966)
				ry = (ly + (stepY * ((Float(((q - lx))) / Float(stepX)))));
				HX_STACK_LINE(1968)
				if (((bool((ry > tileY)) && bool((ry < (tileY + this->_scaledTileHeight)))))){
					HX_STACK_LINE(1970)
					if (((Result != null()))){
						HX_STACK_LINE(1972)
						Result->set_x(rx);
						HX_STACK_LINE(1973)
						Result->set_y(ry);
					}
					HX_STACK_LINE(1976)
					return false;
				}
				HX_STACK_LINE(1980)
				q = tileY;
				HX_STACK_LINE(1982)
				if (((deltaY < (int)0))){
					HX_STACK_LINE(1983)
					hx::AddEq(q,this->_scaledTileHeight);
				}
				HX_STACK_LINE(1987)
				rx = (lx + (stepX * ((Float(((q - ly))) / Float(stepY)))));
				HX_STACK_LINE(1988)
				ry = q;
				HX_STACK_LINE(1990)
				if (((bool((rx > tileX)) && bool((rx < (tileX + this->_scaledTileWidth)))))){
					HX_STACK_LINE(1992)
					if (((Result != null()))){
						HX_STACK_LINE(1994)
						Result->set_x(rx);
						HX_STACK_LINE(1995)
						Result->set_y(ry);
					}
					HX_STACK_LINE(1998)
					return false;
				}
				HX_STACK_LINE(2001)
				return true;
			}
			HX_STACK_LINE(2004)
			(i)++;
		}
		HX_STACK_LINE(2007)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,ray,return )

::flixel::util::FlxRect FlxTilemap_obj::getBounds( ::flixel::util::FlxRect Bounds){
	HX_STACK_PUSH("FlxTilemap::getBounds","flixel/tile/FlxTilemap.hx",1891);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Bounds,"Bounds");
	HX_STACK_LINE(1892)
	if (((Bounds == null()))){
		HX_STACK_LINE(1893)
		Bounds = ::flixel::util::FlxRect_obj::__new(null(),null(),null(),null());
	}
	struct _Function_1_1{
		inline static ::flixel::util::FlxRect Block( ::flixel::tile::FlxTilemap_obj *__this,::flixel::util::FlxRect &Bounds){
			HX_STACK_PUSH("*::closure","flixel/tile/FlxTilemap.hx",1897);
			{
				HX_STACK_LINE(1897)
				Bounds->x = __this->x;
				HX_STACK_LINE(1897)
				Bounds->y = __this->y;
				HX_STACK_LINE(1897)
				Bounds->width = __this->get_width();
				HX_STACK_LINE(1897)
				Bounds->height = __this->get_height();
				HX_STACK_LINE(1897)
				return Bounds;
			}
			return null();
		}
	};
	HX_STACK_LINE(1897)
	return _Function_1_1::Block(this,Bounds);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getBounds,return )

Void FlxTilemap_obj::follow( ::flixel::FlxCamera Camera,hx::Null< int >  __o_Border,hx::Null< bool >  __o_UpdateWorld){
int Border = __o_Border.Default(0);
bool UpdateWorld = __o_UpdateWorld.Default(true);
	HX_STACK_PUSH("FlxTilemap::follow","flixel/tile/FlxTilemap.hx",1875);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(Border,"Border");
	HX_STACK_ARG(UpdateWorld,"UpdateWorld");
{
		HX_STACK_LINE(1876)
		if (((Camera == null()))){
			HX_STACK_LINE(1877)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1881)
		Camera->setBounds((this->x + (Border * this->_scaledTileWidth)),(this->y + (Border * this->_scaledTileHeight)),(this->get_width() - ((Border * this->_scaledTileWidth) * (int)2)),(this->get_height() - ((Border * this->_scaledTileHeight) * (int)2)),UpdateWorld);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,follow,(void))

Void FlxTilemap_obj::setTileProperties( int Tile,hx::Null< int >  __o_AllowCollisions,Dynamic Callback,::Class CallbackFilter,hx::Null< int >  __o_Range){
int AllowCollisions = __o_AllowCollisions.Default(4369);
int Range = __o_Range.Default(1);
	HX_STACK_PUSH("FlxTilemap::setTileProperties","flixel/tile/FlxTilemap.hx",1848);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Tile,"Tile");
	HX_STACK_ARG(AllowCollisions,"AllowCollisions");
	HX_STACK_ARG(Callback,"Callback");
	HX_STACK_ARG(CallbackFilter,"CallbackFilter");
	HX_STACK_ARG(Range,"Range");
{
		HX_STACK_LINE(1849)
		if (((Range <= (int)0))){
			HX_STACK_LINE(1850)
			Range = (int)1;
		}
		HX_STACK_LINE(1854)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(1855)
		int i = Tile;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1856)
		int l = (Tile + Range);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1858)
		while(((i < l))){
			HX_STACK_LINE(1860)
			tile = this->_tileObjects->__get((i)++).StaticCast< ::flixel::tile::FlxTile >();
			HX_STACK_LINE(1861)
			tile->allowCollisions = AllowCollisions;
			HX_STACK_LINE(1862)
			tile->callbackFunction = Callback;
			HX_STACK_LINE(1863)
			tile->filter = CallbackFilter;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTilemap_obj,setTileProperties,(void))

bool FlxTilemap_obj::setTileByIndex( int Index,int Tile,hx::Null< bool >  __o_UpdateGraphics){
bool UpdateGraphics = __o_UpdateGraphics.Default(true);
	HX_STACK_PUSH("FlxTilemap::setTileByIndex","flixel/tile/FlxTilemap.hx",1787);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_ARG(Tile,"Tile");
	HX_STACK_ARG(UpdateGraphics,"UpdateGraphics");
{
		HX_STACK_LINE(1788)
		if (((Index >= this->_data->length))){
			HX_STACK_LINE(1789)
			return false;
		}
		HX_STACK_LINE(1793)
		bool ok = true;		HX_STACK_VAR(ok,"ok");
		HX_STACK_LINE(1794)
		this->_data[Index] = Tile;
		HX_STACK_LINE(1796)
		if ((!(UpdateGraphics))){
			HX_STACK_LINE(1797)
			return ok;
		}
		HX_STACK_LINE(1801)
		this->setDirty(null());
		HX_STACK_LINE(1803)
		if (((this->_auto == (int)0))){
			HX_STACK_LINE(1805)
			this->updateTile(Index);
			HX_STACK_LINE(1806)
			return ok;
		}
		HX_STACK_LINE(1810)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1811)
		int row = (::Std_obj::_int((Float(Index) / Float(this->widthInTiles))) - (int)1);		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1812)
		int rowLength = (row + (int)3);		HX_STACK_VAR(rowLength,"rowLength");
		HX_STACK_LINE(1813)
		int column = (hx::Mod(Index,this->widthInTiles) - (int)1);		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1814)
		int columnHeight = (column + (int)3);		HX_STACK_VAR(columnHeight,"columnHeight");
		HX_STACK_LINE(1816)
		while(((row < rowLength))){
			HX_STACK_LINE(1818)
			column = (columnHeight - (int)3);
			HX_STACK_LINE(1820)
			while(((column < columnHeight))){
				HX_STACK_LINE(1822)
				if (((bool((bool((bool((row >= (int)0)) && bool((row < this->heightInTiles)))) && bool((column >= (int)0)))) && bool((column < this->widthInTiles))))){
					HX_STACK_LINE(1824)
					i = ((row * this->widthInTiles) + column);
					HX_STACK_LINE(1825)
					this->autoTile(i);
					HX_STACK_LINE(1826)
					this->updateTile(i);
				}
				HX_STACK_LINE(1828)
				(column)++;
			}
			HX_STACK_LINE(1831)
			(row)++;
		}
		HX_STACK_LINE(1834)
		return ok;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,setTileByIndex,return )

bool FlxTilemap_obj::setTile( int X,int Y,int Tile,hx::Null< bool >  __o_UpdateGraphics){
bool UpdateGraphics = __o_UpdateGraphics.Default(true);
	HX_STACK_PUSH("FlxTilemap::setTile","flixel/tile/FlxTilemap.hx",1769);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(Tile,"Tile");
	HX_STACK_ARG(UpdateGraphics,"UpdateGraphics");
{
		HX_STACK_LINE(1770)
		if (((bool((X >= this->widthInTiles)) || bool((Y >= this->heightInTiles))))){
			HX_STACK_LINE(1771)
			return false;
		}
		HX_STACK_LINE(1775)
		return this->setTileByIndex(((Y * this->widthInTiles) + X),Tile,UpdateGraphics);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,setTile,return )

Array< ::Dynamic > FlxTilemap_obj::getTileCoords( int Index,hx::Null< bool >  __o_Midpoint){
bool Midpoint = __o_Midpoint.Default(true);
	HX_STACK_PUSH("FlxTilemap::getTileCoords","flixel/tile/FlxTilemap.hx",1727);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_ARG(Midpoint,"Midpoint");
{
		HX_STACK_LINE(1728)
		Array< ::Dynamic > array = null();		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(1730)
		::flixel::util::FlxPoint point;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(1731)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1732)
		int l = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1734)
		while(((i < l))){
			HX_STACK_LINE(1736)
			if (((this->_data->__get(i) == Index))){
				HX_STACK_LINE(1738)
				point = ::flixel::util::FlxPoint_obj::__new((this->x + (::Std_obj::_int(hx::Mod(i,this->widthInTiles)) * this->_scaledTileWidth)),(this->y + (::Std_obj::_int((Float(i) / Float(this->widthInTiles))) * this->_scaledTileHeight)));
				HX_STACK_LINE(1740)
				if ((Midpoint)){
					HX_STACK_LINE(1742)
					{
						HX_STACK_LINE(1742)
						::flixel::util::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1742)
						_g->set_x((_g->x + (this->_scaledTileWidth * 0.5)));
					}
					HX_STACK_LINE(1743)
					{
						HX_STACK_LINE(1743)
						::flixel::util::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1743)
						_g->set_y((_g->y + (this->_scaledTileHeight * 0.5)));
					}
				}
				HX_STACK_LINE(1746)
				if (((array == null()))){
					HX_STACK_LINE(1747)
					array = Array_obj< ::Dynamic >::__new();
				}
				HX_STACK_LINE(1750)
				array->push(point);
			}
			HX_STACK_LINE(1753)
			(i)++;
		}
		HX_STACK_LINE(1756)
		return array;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,getTileCoords,return )

Array< int > FlxTilemap_obj::getTileInstances( int Index){
	HX_STACK_PUSH("FlxTilemap::getTileInstances","flixel/tile/FlxTilemap.hx",1697);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_LINE(1698)
	Array< int > array = null();		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(1699)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1700)
	int l = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(1702)
	while(((i < l))){
		HX_STACK_LINE(1704)
		if (((this->_data->__get(i) == Index))){
			HX_STACK_LINE(1706)
			if (((array == null()))){
				HX_STACK_LINE(1707)
				array = Array_obj< int >::__new();
			}
			HX_STACK_LINE(1710)
			array->push(i);
		}
		HX_STACK_LINE(1713)
		(i)++;
	}
	HX_STACK_LINE(1716)
	return array;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getTileInstances,return )

int FlxTilemap_obj::getTileCollisions( int Index){
	HX_STACK_PUSH("FlxTilemap::getTileCollisions","flixel/tile/FlxTilemap.hx",1686);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_LINE(1686)
	return this->_tileObjects->__get(Index).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getTileCollisions,return )

int FlxTilemap_obj::getTileByIndex( int Index){
	HX_STACK_PUSH("FlxTilemap::getTileByIndex","flixel/tile/FlxTilemap.hx",1675);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Index,"Index");
	HX_STACK_LINE(1675)
	return this->_data->__get(Index);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getTileByIndex,return )

int FlxTilemap_obj::getTile( int X,int Y){
	HX_STACK_PUSH("FlxTilemap::getTile","flixel/tile/FlxTilemap.hx",1664);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_LINE(1664)
	return this->_data->__get(((Y * this->widthInTiles) + X));
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,getTile,return )

bool FlxTilemap_obj::overlapsPoint( ::flixel::util::FlxPoint WorldPoint,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxTilemap::overlapsPoint","flixel/tile/FlxTilemap.hx",1638);
	HX_STACK_THIS(this);
	HX_STACK_ARG(WorldPoint,"WorldPoint");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(1639)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(1640)
			return (this->_tileObjects->__get(this->_data->__get(::Math_obj::floor(((::Math_obj::floor((Float(((WorldPoint->y - this->y))) / Float(this->_scaledTileHeight))) * this->widthInTiles) + (Float(((WorldPoint->x - this->x))) / Float(this->_scaledTileWidth)))))).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions > (int)0);
		}
		HX_STACK_LINE(1644)
		if (((Camera == null()))){
			HX_STACK_LINE(1645)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1649)
		WorldPoint->set_x((WorldPoint->x - Camera->scroll->x));
		HX_STACK_LINE(1650)
		WorldPoint->set_y((WorldPoint->y - Camera->scroll->y));
		HX_STACK_LINE(1651)
		this->getScreenXY(this->_point,Camera);
		HX_STACK_LINE(1653)
		return (this->_tileObjects->__get(this->_data->__get(::Std_obj::_int(((::Std_obj::_int((Float(((WorldPoint->y - WorldPoint->y))) / Float(this->_scaledTileHeight))) * this->widthInTiles) + (Float(((WorldPoint->x - WorldPoint->x))) / Float(this->_scaledTileWidth)))))).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions > (int)0);
	}
}


bool FlxTilemap_obj::overlapsWithCallback( ::flixel::FlxObject Object,Dynamic Callback,hx::Null< bool >  __o_FlipCallbackParams,::flixel::util::FlxPoint Position){
bool FlipCallbackParams = __o_FlipCallbackParams.Default(false);
	HX_STACK_PUSH("FlxTilemap::overlapsWithCallback","flixel/tile/FlxTilemap.hx",1522);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(Callback,"Callback");
	HX_STACK_ARG(FlipCallbackParams,"FlipCallbackParams");
	HX_STACK_ARG(Position,"Position");
{
		HX_STACK_LINE(1523)
		bool results = false;		HX_STACK_VAR(results,"results");
		HX_STACK_LINE(1525)
		Float X = this->x;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(1526)
		Float Y = this->y;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(1528)
		if (((Position != null()))){
			HX_STACK_LINE(1530)
			X = Position->x;
			HX_STACK_LINE(1531)
			Y = Position->y;
		}
		HX_STACK_LINE(1535)
		int selectionX = ::Math_obj::floor((Float(((Object->x - X))) / Float(this->_scaledTileWidth)));		HX_STACK_VAR(selectionX,"selectionX");
		HX_STACK_LINE(1536)
		int selectionY = ::Math_obj::floor((Float(((Object->y - Y))) / Float(this->_scaledTileHeight)));		HX_STACK_VAR(selectionY,"selectionY");
		HX_STACK_LINE(1537)
		int selectionWidth = ((selectionX + ::Math_obj::ceil((Float(Object->get_width()) / Float(this->_scaledTileWidth)))) + (int)1);		HX_STACK_VAR(selectionWidth,"selectionWidth");
		HX_STACK_LINE(1538)
		int selectionHeight = ((selectionY + ::Math_obj::ceil((Float(Object->get_height()) / Float(this->_scaledTileHeight)))) + (int)1);		HX_STACK_VAR(selectionHeight,"selectionHeight");
		HX_STACK_LINE(1541)
		if (((selectionX < (int)0))){
			HX_STACK_LINE(1542)
			selectionX = (int)0;
		}
		HX_STACK_LINE(1545)
		if (((selectionY < (int)0))){
			HX_STACK_LINE(1546)
			selectionY = (int)0;
		}
		HX_STACK_LINE(1549)
		if (((selectionWidth > this->widthInTiles))){
			HX_STACK_LINE(1550)
			selectionWidth = this->widthInTiles;
		}
		HX_STACK_LINE(1553)
		if (((selectionHeight > this->heightInTiles))){
			HX_STACK_LINE(1554)
			selectionHeight = this->heightInTiles;
		}
		HX_STACK_LINE(1559)
		int rowStart = (selectionY * this->widthInTiles);		HX_STACK_VAR(rowStart,"rowStart");
		HX_STACK_LINE(1560)
		int row = selectionY;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1561)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1562)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(1563)
		bool overlapFound;		HX_STACK_VAR(overlapFound,"overlapFound");
		HX_STACK_LINE(1564)
		Float deltaX = (X - this->last->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(1565)
		Float deltaY = (Y - this->last->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(1567)
		while(((row < selectionHeight))){
			HX_STACK_LINE(1569)
			column = selectionX;
			HX_STACK_LINE(1571)
			while(((column < selectionWidth))){
				HX_STACK_LINE(1573)
				int dataIndex = this->_data->__get((rowStart + column));		HX_STACK_VAR(dataIndex,"dataIndex");
				HX_STACK_LINE(1575)
				if (((dataIndex < (int)0))){
					HX_STACK_LINE(1577)
					(column)++;
					HX_STACK_LINE(1578)
					continue;
				}
				HX_STACK_LINE(1581)
				tile = this->_tileObjects->__get(dataIndex).StaticCast< ::flixel::tile::FlxTile >();
				HX_STACK_LINE(1582)
				tile->set_width(this->_scaledTileWidth);
				HX_STACK_LINE(1583)
				tile->set_height(this->_scaledTileHeight);
				HX_STACK_LINE(1584)
				tile->set_x((X + (column * tile->get_width())));
				HX_STACK_LINE(1585)
				tile->set_y((Y + (row * tile->get_height())));
				HX_STACK_LINE(1586)
				tile->last->set_x((tile->x - deltaX));
				HX_STACK_LINE(1587)
				tile->last->set_y((tile->y - deltaY));
				HX_STACK_LINE(1588)
				overlapFound = (bool((bool((bool(((Object->x + Object->get_width()) > tile->x)) && bool((Object->x < (tile->x + tile->get_width()))))) && bool(((Object->y + Object->get_height()) > tile->y)))) && bool((Object->y < (tile->y + tile->get_height()))));
				HX_STACK_LINE(1590)
				if (((tile->allowCollisions != (int)0))){
					HX_STACK_LINE(1591)
					if (((Callback != null()))){
						HX_STACK_LINE(1593)
						if ((FlipCallbackParams)){
							HX_STACK_LINE(1595)
							overlapFound = Callback(Object,tile).Cast< bool >();
						}
						else{
							HX_STACK_LINE(1599)
							overlapFound = Callback(tile,Object).Cast< bool >();
						}
					}
				}
				HX_STACK_LINE(1605)
				if ((overlapFound)){
					HX_STACK_LINE(1607)
					if (((bool((tile->callbackFunction != null())) && bool(((bool((tile->filter == null())) || bool(::Std_obj::is(Object,tile->filter)))))))){
						HX_STACK_LINE(1609)
						tile->mapIndex = (rowStart + column);
						HX_STACK_LINE(1610)
						tile->callbackFunction(tile,Object);
					}
					HX_STACK_LINE(1613)
					if (((tile->allowCollisions != (int)0))){
						HX_STACK_LINE(1614)
						results = true;
					}
				}
				HX_STACK_LINE(1619)
				(column)++;
			}
			HX_STACK_LINE(1622)
			hx::AddEq(rowStart,this->widthInTiles);
			HX_STACK_LINE(1623)
			(row)++;
		}
		HX_STACK_LINE(1626)
		return results;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,overlapsWithCallback,return )

bool FlxTilemap_obj::overlapsAt( Float X,Float Y,::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxTilemap::overlapsAt","flixel/tile/FlxTilemap.hx",1454);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(1455)
		::flixel::system::FlxCollisionType objType = ObjectOrGroup->collisionType;		HX_STACK_VAR(objType,"objType");
		HX_STACK_LINE(1456)
		if (((ObjectOrGroup->collisionType == ::flixel::system::FlxCollisionType_obj::SPRITEGROUP))){
			HX_STACK_LINE(1458)
			ObjectOrGroup = ::Reflect_obj::field(ObjectOrGroup,HX_CSTRING("group"));
			HX_STACK_LINE(1459)
			objType = ::flixel::system::FlxCollisionType_obj::GROUP;
		}
		HX_STACK_LINE(1462)
		if (((objType == ::flixel::system::FlxCollisionType_obj::GROUP))){
			HX_STACK_LINE(1464)
			bool results = false;		HX_STACK_VAR(results,"results");
			HX_STACK_LINE(1465)
			::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(1466)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1467)
			::flixel::group::FlxTypedGroup grp = ObjectOrGroup;		HX_STACK_VAR(grp,"grp");
			HX_STACK_LINE(1468)
			Array< ::Dynamic > members = grp->get_members();		HX_STACK_VAR(members,"members");
			HX_STACK_LINE(1470)
			while(((i < grp->length))){
				HX_STACK_LINE(1472)
				basic = members->__get((i)++).StaticCast< ::flixel::FlxBasic >();
				HX_STACK_LINE(1474)
				if (((bool((basic != null())) && bool(basic->exists)))){
					HX_STACK_LINE(1476)
					objType = basic->collisionType;
					HX_STACK_LINE(1477)
					if (((bool((objType == ::flixel::system::FlxCollisionType_obj::OBJECT)) || bool((objType == ::flixel::system::FlxCollisionType_obj::TILEMAP))))){
						HX_STACK_LINE(1479)
						this->_point->set_x(X);
						HX_STACK_LINE(1480)
						this->_point->set_y(Y);
						HX_STACK_LINE(1482)
						if ((this->overlapsWithCallback(hx::TCast< flixel::FlxObject >::cast(basic),null(),false,this->_point))){
							HX_STACK_LINE(1483)
							results = true;
						}
					}
					else{
						HX_STACK_LINE(1488)
						if ((this->overlapsAt(X,Y,basic,InScreenSpace,Camera))){
							HX_STACK_LINE(1490)
							results = true;
						}
					}
				}
			}
			HX_STACK_LINE(1497)
			return results;
		}
		else{
			HX_STACK_LINE(1499)
			if (((bool((objType == ::flixel::system::FlxCollisionType_obj::OBJECT)) || bool((objType == ::flixel::system::FlxCollisionType_obj::TILEMAP))))){
				HX_STACK_LINE(1501)
				this->_point->set_x(X);
				HX_STACK_LINE(1502)
				this->_point->set_y(Y);
				HX_STACK_LINE(1504)
				return this->overlapsWithCallback(hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup),null(),false,this->_point);
			}
		}
		HX_STACK_LINE(1507)
		return false;
	}
}


bool FlxTilemap_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_PUSH("FlxTilemap::overlaps","flixel/tile/FlxTilemap.hx",1391);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup");
	HX_STACK_ARG(InScreenSpace,"InScreenSpace");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(1392)
		::flixel::system::FlxCollisionType objType = ObjectOrGroup->collisionType;		HX_STACK_VAR(objType,"objType");
		HX_STACK_LINE(1393)
		if (((objType == ::flixel::system::FlxCollisionType_obj::SPRITEGROUP))){
			HX_STACK_LINE(1395)
			ObjectOrGroup = ::Reflect_obj::field(ObjectOrGroup,HX_CSTRING("group"));
			HX_STACK_LINE(1396)
			objType = ::flixel::system::FlxCollisionType_obj::GROUP;
		}
		HX_STACK_LINE(1399)
		if (((objType == ::flixel::system::FlxCollisionType_obj::GROUP))){
			HX_STACK_LINE(1401)
			bool results = false;		HX_STACK_VAR(results,"results");
			HX_STACK_LINE(1402)
			::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(1403)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1404)
			::flixel::group::FlxTypedGroup grp = ObjectOrGroup;		HX_STACK_VAR(grp,"grp");
			HX_STACK_LINE(1405)
			Array< ::Dynamic > members = grp->get_members();		HX_STACK_VAR(members,"members");
			HX_STACK_LINE(1407)
			while(((i < grp->length))){
				HX_STACK_LINE(1409)
				basic = members->__get((i)++).StaticCast< ::flixel::FlxBasic >();
				HX_STACK_LINE(1411)
				if (((bool((basic != null())) && bool(basic->exists)))){
					HX_STACK_LINE(1413)
					objType = basic->collisionType;
					HX_STACK_LINE(1414)
					if (((bool((objType == ::flixel::system::FlxCollisionType_obj::OBJECT)) || bool((objType == ::flixel::system::FlxCollisionType_obj::TILEMAP))))){
						HX_STACK_LINE(1415)
						if ((this->overlapsWithCallback(hx::TCast< flixel::FlxObject >::cast(basic),null(),null(),null()))){
							HX_STACK_LINE(1417)
							results = true;
						}
					}
					else{
						HX_STACK_LINE(1422)
						if ((this->overlaps(basic,InScreenSpace,Camera))){
							HX_STACK_LINE(1424)
							results = true;
						}
					}
				}
			}
			HX_STACK_LINE(1431)
			return results;
		}
		else{
			HX_STACK_LINE(1433)
			if (((bool((objType == ::flixel::system::FlxCollisionType_obj::OBJECT)) || bool((objType == ::flixel::system::FlxCollisionType_obj::TILEMAP))))){
				HX_STACK_LINE(1434)
				return this->overlapsWithCallback(hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup),null(),null(),null());
			}
		}
		HX_STACK_LINE(1438)
		return false;
	}
}


Void FlxTilemap_obj::walkPath( Array< int > Data,int Start,Array< ::Dynamic > Points){
{
		HX_STACK_PUSH("FlxTilemap::walkPath","flixel/tile/FlxTilemap.hx",1287);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Data,"Data");
		HX_STACK_ARG(Start,"Start");
		HX_STACK_ARG(Points,"Points");
		HX_STACK_LINE(1288)
		Points->push(::flixel::util::FlxPoint_obj::__new(((this->x + (::Math_obj::floor(hx::Mod(Start,this->widthInTiles)) * this->_scaledTileWidth)) + (this->_scaledTileWidth * 0.5)),((this->y + (::Math_obj::floor((Float(Start) / Float(this->widthInTiles))) * this->_scaledTileHeight)) + (this->_scaledTileHeight * 0.5))));
		HX_STACK_LINE(1290)
		if (((Data->__get(Start) == (int)0))){
			HX_STACK_LINE(1291)
			return null();
		}
		HX_STACK_LINE(1296)
		bool left = (hx::Mod(Start,this->widthInTiles) > (int)0);		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(1297)
		bool right = (hx::Mod(Start,this->widthInTiles) < (this->widthInTiles - (int)1));		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(1298)
		bool up = ((Float(Start) / Float(this->widthInTiles)) > (int)0);		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(1299)
		bool down = ((Float(Start) / Float(this->widthInTiles)) < (this->heightInTiles - (int)1));		HX_STACK_VAR(down,"down");
		HX_STACK_LINE(1301)
		int current = Data->__get(Start);		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(1302)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1304)
		if ((up)){
			HX_STACK_LINE(1306)
			i = (Start - this->widthInTiles);
			HX_STACK_LINE(1308)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1309)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1313)
		if ((right)){
			HX_STACK_LINE(1315)
			i = (Start + (int)1);
			HX_STACK_LINE(1317)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1318)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1322)
		if ((down)){
			HX_STACK_LINE(1324)
			i = (Start + this->widthInTiles);
			HX_STACK_LINE(1326)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1327)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1331)
		if ((left)){
			HX_STACK_LINE(1333)
			i = (Start - (int)1);
			HX_STACK_LINE(1335)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1336)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1340)
		if (((bool(up) && bool(right)))){
			HX_STACK_LINE(1342)
			i = ((Start - this->widthInTiles) + (int)1);
			HX_STACK_LINE(1344)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1345)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1349)
		if (((bool(right) && bool(down)))){
			HX_STACK_LINE(1351)
			i = ((Start + this->widthInTiles) + (int)1);
			HX_STACK_LINE(1353)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1354)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1358)
		if (((bool(left) && bool(down)))){
			HX_STACK_LINE(1360)
			i = ((Start + this->widthInTiles) - (int)1);
			HX_STACK_LINE(1362)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1363)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1367)
		if (((bool(up) && bool(left)))){
			HX_STACK_LINE(1369)
			i = ((Start - this->widthInTiles) - (int)1);
			HX_STACK_LINE(1371)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(1372)
				return this->walkPath(Data,i,Points);
			}
		}
		HX_STACK_LINE(1377)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,walkPath,(void))

Array< int > FlxTilemap_obj::computePathDistance( int StartIndex,int EndIndex,bool WideDiagonal){
	HX_STACK_PUSH("FlxTilemap::computePathDistance","flixel/tile/FlxTilemap.hx",1107);
	HX_STACK_THIS(this);
	HX_STACK_ARG(StartIndex,"StartIndex");
	HX_STACK_ARG(EndIndex,"EndIndex");
	HX_STACK_ARG(WideDiagonal,"WideDiagonal");
	HX_STACK_LINE(1110)
	int mapSize = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(mapSize,"mapSize");
	HX_STACK_LINE(1111)
	Array< int > distances = Array_obj< int >::__new();		HX_STACK_VAR(distances,"distances");
	HX_STACK_LINE(1112)
	::flixel::util::FlxArrayUtil_obj::setLength_Int(distances,mapSize);
	HX_STACK_LINE(1113)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1115)
	while(((i < mapSize))){
		HX_STACK_LINE(1117)
		if (((this->_tileObjects->__get(this->_data->__get(i)).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions != (int)0))){
			HX_STACK_LINE(1118)
			distances[i] = (int)-2;
		}
		else{
			HX_STACK_LINE(1122)
			distances[i] = (int)-1;
		}
		HX_STACK_LINE(1125)
		(i)++;
	}
	HX_STACK_LINE(1128)
	distances[StartIndex] = (int)0;
	HX_STACK_LINE(1129)
	int distance = (int)1;		HX_STACK_VAR(distance,"distance");
	HX_STACK_LINE(1130)
	Array< int > neighbors = Array_obj< int >::__new().Add(StartIndex);		HX_STACK_VAR(neighbors,"neighbors");
	HX_STACK_LINE(1131)
	Array< int > current;		HX_STACK_VAR(current,"current");
	HX_STACK_LINE(1132)
	int currentIndex;		HX_STACK_VAR(currentIndex,"currentIndex");
	HX_STACK_LINE(1133)
	bool left;		HX_STACK_VAR(left,"left");
	HX_STACK_LINE(1134)
	bool right;		HX_STACK_VAR(right,"right");
	HX_STACK_LINE(1135)
	bool up;		HX_STACK_VAR(up,"up");
	HX_STACK_LINE(1136)
	bool down;		HX_STACK_VAR(down,"down");
	HX_STACK_LINE(1137)
	int currentLength;		HX_STACK_VAR(currentLength,"currentLength");
	HX_STACK_LINE(1138)
	bool foundEnd = false;		HX_STACK_VAR(foundEnd,"foundEnd");
	HX_STACK_LINE(1140)
	while(((neighbors->length > (int)0))){
		HX_STACK_LINE(1142)
		current = neighbors;
		HX_STACK_LINE(1143)
		neighbors = Array_obj< int >::__new();
		HX_STACK_LINE(1145)
		i = (int)0;
		HX_STACK_LINE(1146)
		currentLength = current->length;
		HX_STACK_LINE(1147)
		while(((i < currentLength))){
			HX_STACK_LINE(1149)
			currentIndex = current->__get((i)++);
			HX_STACK_LINE(1151)
			if (((currentIndex == ::Std_obj::_int(EndIndex)))){
				HX_STACK_LINE(1153)
				foundEnd = true;
				HX_STACK_LINE(1155)
				neighbors = Array_obj< int >::__new();
				HX_STACK_LINE(1156)
				break;
			}
			HX_STACK_LINE(1160)
			left = (hx::Mod(currentIndex,this->widthInTiles) > (int)0);
			HX_STACK_LINE(1161)
			right = (hx::Mod(currentIndex,this->widthInTiles) < (this->widthInTiles - (int)1));
			HX_STACK_LINE(1162)
			up = ((Float(currentIndex) / Float(this->widthInTiles)) > (int)0);
			HX_STACK_LINE(1163)
			down = ((Float(currentIndex) / Float(this->widthInTiles)) < (this->heightInTiles - (int)1));
			HX_STACK_LINE(1165)
			int index;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(1167)
			if ((up)){
				HX_STACK_LINE(1169)
				index = (currentIndex - this->widthInTiles);
				HX_STACK_LINE(1171)
				if (((distances->__get(index) == (int)-1))){
					HX_STACK_LINE(1173)
					distances[index] = distance;
					HX_STACK_LINE(1174)
					neighbors->push(index);
				}
			}
			HX_STACK_LINE(1177)
			if ((right)){
				HX_STACK_LINE(1179)
				index = (currentIndex + (int)1);
				HX_STACK_LINE(1181)
				if (((distances->__get(index) == (int)-1))){
					HX_STACK_LINE(1183)
					distances[index] = distance;
					HX_STACK_LINE(1184)
					neighbors->push(index);
				}
			}
			HX_STACK_LINE(1187)
			if ((down)){
				HX_STACK_LINE(1189)
				index = (currentIndex + this->widthInTiles);
				HX_STACK_LINE(1191)
				if (((distances->__get(index) == (int)-1))){
					HX_STACK_LINE(1193)
					distances[index] = distance;
					HX_STACK_LINE(1194)
					neighbors->push(index);
				}
			}
			HX_STACK_LINE(1197)
			if ((left)){
				HX_STACK_LINE(1199)
				index = (currentIndex - (int)1);
				HX_STACK_LINE(1201)
				if (((distances->__get(index) == (int)-1))){
					HX_STACK_LINE(1203)
					distances[index] = distance;
					HX_STACK_LINE(1204)
					neighbors->push(index);
				}
			}
			HX_STACK_LINE(1207)
			if (((bool(up) && bool(right)))){
				HX_STACK_LINE(1209)
				index = ((currentIndex - this->widthInTiles) + (int)1);
				HX_STACK_LINE(1211)
				if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex - this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex + (int)1)) >= (int)-1))))){
					HX_STACK_LINE(1213)
					distances[index] = distance;
					HX_STACK_LINE(1214)
					neighbors->push(index);
				}
				else{
					HX_STACK_LINE(1216)
					if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
						HX_STACK_LINE(1218)
						distances[index] = distance;
						HX_STACK_LINE(1219)
						neighbors->push(index);
					}
				}
			}
			HX_STACK_LINE(1222)
			if (((bool(right) && bool(down)))){
				HX_STACK_LINE(1224)
				index = ((currentIndex + this->widthInTiles) + (int)1);
				HX_STACK_LINE(1226)
				if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex + this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex + (int)1)) >= (int)-1))))){
					HX_STACK_LINE(1228)
					distances[index] = distance;
					HX_STACK_LINE(1229)
					neighbors->push(index);
				}
				else{
					HX_STACK_LINE(1231)
					if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
						HX_STACK_LINE(1233)
						distances[index] = distance;
						HX_STACK_LINE(1234)
						neighbors->push(index);
					}
				}
			}
			HX_STACK_LINE(1237)
			if (((bool(left) && bool(down)))){
				HX_STACK_LINE(1239)
				index = ((currentIndex + this->widthInTiles) - (int)1);
				HX_STACK_LINE(1241)
				if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex + this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex - (int)1)) >= (int)-1))))){
					HX_STACK_LINE(1243)
					distances[index] = distance;
					HX_STACK_LINE(1244)
					neighbors->push(index);
				}
				else{
					HX_STACK_LINE(1246)
					if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
						HX_STACK_LINE(1248)
						distances[index] = distance;
						HX_STACK_LINE(1249)
						neighbors->push(index);
					}
				}
			}
			HX_STACK_LINE(1252)
			if (((bool(up) && bool(left)))){
				HX_STACK_LINE(1254)
				index = ((currentIndex - this->widthInTiles) - (int)1);
				HX_STACK_LINE(1256)
				if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex - this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex - (int)1)) >= (int)-1))))){
					HX_STACK_LINE(1258)
					distances[index] = distance;
					HX_STACK_LINE(1259)
					neighbors->push(index);
				}
				else{
					HX_STACK_LINE(1261)
					if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
						HX_STACK_LINE(1263)
						distances[index] = distance;
						HX_STACK_LINE(1264)
						neighbors->push(index);
					}
				}
			}
		}
		HX_STACK_LINE(1269)
		(distance)++;
	}
	HX_STACK_LINE(1271)
	if ((!(foundEnd))){
		HX_STACK_LINE(1272)
		distances = null();
	}
	HX_STACK_LINE(1276)
	return distances;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,computePathDistance,return )

Void FlxTilemap_obj::raySimplifyPath( Array< ::Dynamic > Points){
{
		HX_STACK_PUSH("FlxTilemap::raySimplifyPath","flixel/tile/FlxTilemap.hx",1065);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Points,"Points");
		HX_STACK_LINE(1066)
		::flixel::util::FlxPoint source = Points->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(1067)
		int lastIndex = (int)-1;		HX_STACK_VAR(lastIndex,"lastIndex");
		HX_STACK_LINE(1068)
		::flixel::util::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(1069)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1070)
		int l = Points->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1072)
		while(((i < l))){
			HX_STACK_LINE(1074)
			node = Points->__get((i)++).StaticCast< ::flixel::util::FlxPoint >();
			HX_STACK_LINE(1076)
			if (((node == null()))){
				HX_STACK_LINE(1077)
				continue;
			}
			HX_STACK_LINE(1081)
			if ((this->ray(source,node,this->_point,null()))){
				HX_STACK_LINE(1082)
				if (((lastIndex >= (int)0))){
					HX_STACK_LINE(1084)
					Points[lastIndex] = null();
				}
			}
			else{
				HX_STACK_LINE(1089)
				source = Points->__get(lastIndex).StaticCast< ::flixel::util::FlxPoint >();
			}
			HX_STACK_LINE(1093)
			lastIndex = (i - (int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,raySimplifyPath,(void))

Void FlxTilemap_obj::simplifyPath( Array< ::Dynamic > Points){
{
		HX_STACK_PUSH("FlxTilemap::simplifyPath","flixel/tile/FlxTilemap.hx",1032);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Points,"Points");
		HX_STACK_LINE(1033)
		Float deltaPrevious;		HX_STACK_VAR(deltaPrevious,"deltaPrevious");
		HX_STACK_LINE(1034)
		Float deltaNext;		HX_STACK_VAR(deltaNext,"deltaNext");
		HX_STACK_LINE(1035)
		::flixel::util::FlxPoint last = Points->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(1036)
		::flixel::util::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(1037)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1038)
		int l = (Points->length - (int)1);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1040)
		while(((i < l))){
			HX_STACK_LINE(1042)
			node = Points->__get(i).StaticCast< ::flixel::util::FlxPoint >();
			HX_STACK_LINE(1043)
			deltaPrevious = (Float(((node->x - last->x))) / Float(((node->y - last->y))));
			HX_STACK_LINE(1044)
			deltaNext = (Float(((node->x - Points->__get((i + (int)1)).StaticCast< ::flixel::util::FlxPoint >()->x))) / Float(((node->y - Points->__get((i + (int)1)).StaticCast< ::flixel::util::FlxPoint >()->y))));
			HX_STACK_LINE(1046)
			if (((bool((bool((last->x == Points->__get((i + (int)1)).StaticCast< ::flixel::util::FlxPoint >()->x)) || bool((last->y == Points->__get((i + (int)1)).StaticCast< ::flixel::util::FlxPoint >()->y)))) || bool((deltaPrevious == deltaNext))))){
				HX_STACK_LINE(1047)
				Points[i] = null();
			}
			else{
				HX_STACK_LINE(1051)
				last = node;
			}
			HX_STACK_LINE(1055)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,simplifyPath,(void))

Array< ::Dynamic > FlxTilemap_obj::findPath( ::flixel::util::FlxPoint Start,::flixel::util::FlxPoint End,hx::Null< bool >  __o_Simplify,hx::Null< bool >  __o_RaySimplify,hx::Null< bool >  __o_WideDiagonal){
bool Simplify = __o_Simplify.Default(true);
bool RaySimplify = __o_RaySimplify.Default(false);
bool WideDiagonal = __o_WideDiagonal.Default(true);
	HX_STACK_PUSH("FlxTilemap::findPath","flixel/tile/FlxTilemap.hx",967);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Start,"Start");
	HX_STACK_ARG(End,"End");
	HX_STACK_ARG(Simplify,"Simplify");
	HX_STACK_ARG(RaySimplify,"RaySimplify");
	HX_STACK_ARG(WideDiagonal,"WideDiagonal");
{
		HX_STACK_LINE(969)
		int startIndex = ((::Std_obj::_int((Float(((Start->y - this->y))) / Float(this->_scaledTileHeight))) * this->widthInTiles) + ::Std_obj::_int((Float(((Start->x - this->x))) / Float(this->_scaledTileWidth))));		HX_STACK_VAR(startIndex,"startIndex");
		HX_STACK_LINE(970)
		int endIndex = ((::Std_obj::_int((Float(((End->y - this->y))) / Float(this->_scaledTileHeight))) * this->widthInTiles) + ::Std_obj::_int((Float(((End->x - this->x))) / Float(this->_scaledTileWidth))));		HX_STACK_VAR(endIndex,"endIndex");
		HX_STACK_LINE(973)
		if (((bool((this->_tileObjects->__get(this->_data->__get(startIndex)).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions > (int)0)) || bool((this->_tileObjects->__get(this->_data->__get(endIndex)).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions > (int)0))))){
			HX_STACK_LINE(974)
			return null();
		}
		HX_STACK_LINE(979)
		Array< int > distances = this->computePathDistance(startIndex,endIndex,WideDiagonal);		HX_STACK_VAR(distances,"distances");
		HX_STACK_LINE(981)
		if (((distances == null()))){
			HX_STACK_LINE(982)
			return null();
		}
		HX_STACK_LINE(987)
		Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(988)
		this->walkPath(distances,endIndex,points);
		HX_STACK_LINE(991)
		::flixel::util::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(992)
		node = points->__get((points->length - (int)1)).StaticCast< ::flixel::util::FlxPoint >();
		HX_STACK_LINE(993)
		node->set_x(Start->x);
		HX_STACK_LINE(994)
		node->set_y(Start->y);
		HX_STACK_LINE(995)
		node = points->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();
		HX_STACK_LINE(996)
		node->set_x(End->x);
		HX_STACK_LINE(997)
		node->set_y(End->y);
		HX_STACK_LINE(1000)
		if ((Simplify)){
			HX_STACK_LINE(1001)
			this->simplifyPath(points);
		}
		HX_STACK_LINE(1004)
		if ((RaySimplify)){
			HX_STACK_LINE(1005)
			this->raySimplifyPath(points);
		}
		HX_STACK_LINE(1010)
		Array< ::Dynamic > path = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(1011)
		int i = (points->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1013)
		while(((i >= (int)0))){
			HX_STACK_LINE(1015)
			node = points->__get((i)--).StaticCast< ::flixel::util::FlxPoint >();
			HX_STACK_LINE(1017)
			if (((node != null()))){
				HX_STACK_LINE(1018)
				path->push(node);
			}
		}
		HX_STACK_LINE(1023)
		return path;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTilemap_obj,findPath,return )

Void FlxTilemap_obj::setDirty( hx::Null< bool >  __o_Dirty){
bool Dirty = __o_Dirty.Default(true);
	HX_STACK_PUSH("FlxTilemap::setDirty","flixel/tile/FlxTilemap.hx",945);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Dirty,"Dirty");
{
		HX_STACK_LINE(946)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(947)
		int l = this->_buffers->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(949)
		while(((i < l))){
			HX_STACK_LINE(950)
			this->_buffers->__get((i)++).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->dirty = Dirty;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setDirty,(void))

Array< int > FlxTilemap_obj::getData( hx::Null< bool >  __o_Simple){
bool Simple = __o_Simple.Default(false);
	HX_STACK_PUSH("FlxTilemap::getData","flixel/tile/FlxTilemap.hx",918);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Simple,"Simple");
{
		HX_STACK_LINE(919)
		if ((!(Simple))){
			HX_STACK_LINE(920)
			return this->_data;
		}
		HX_STACK_LINE(924)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(925)
		int l = this->_data->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(926)
		Array< int > data = Array_obj< int >::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(927)
		::flixel::util::FlxArrayUtil_obj::setLength_Int(data,l);
		HX_STACK_LINE(929)
		while(((i < l))){
			HX_STACK_LINE(931)
			data[i] = (  (((this->_tileObjects->__get(this->_data->__get(i)).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions > (int)0))) ? int((int)1) : int((int)0) );
			HX_STACK_LINE(932)
			(i)++;
		}
		HX_STACK_LINE(935)
		return data;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getData,return )

Void FlxTilemap_obj::draw( ){
{
		HX_STACK_PUSH("FlxTilemap::draw","flixel/tile/FlxTilemap.hx",854);
		HX_STACK_THIS(this);
		HX_STACK_LINE(855)
		if (((this->cameras == null()))){
			HX_STACK_LINE(856)
			this->cameras = ::flixel::FlxG_obj::cameras->list;
		}
		HX_STACK_LINE(860)
		::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(861)
		::flixel::tile::FlxTilemapBuffer buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(862)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(863)
		int l = this->cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(865)
		while(((i < l))){
			HX_STACK_LINE(867)
			camera = this->cameras->__get(i).StaticCast< ::flixel::FlxCamera >();
			HX_STACK_LINE(869)
			if (((bool(!(camera->visible)) || bool(!(camera->exists))))){
				HX_STACK_LINE(870)
				continue;
			}
			HX_STACK_LINE(874)
			if (((this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >() == null()))){
				HX_STACK_LINE(876)
				this->_buffers[i] = ::flixel::tile::FlxTilemapBuffer_obj::__new(this->_tileWidth,this->_tileHeight,this->widthInTiles,this->heightInTiles,camera,this->scaleX,this->scaleY);
				HX_STACK_LINE(877)
				this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->forceComplexRender = this->forceComplexRender;
			}
			HX_STACK_LINE(880)
			buffer = this->_buffers->__get((i)++).StaticCast< ::flixel::tile::FlxTilemapBuffer >();
			HX_STACK_LINE(881)
			buffer->dirty = true;
			HX_STACK_LINE(902)
			this->drawTilemap(buffer,camera);
		}
	}
return null();
}


Void FlxTilemap_obj::drawTilemap( ::flixel::tile::FlxTilemapBuffer Buffer,::flixel::FlxCamera Camera){
{
		HX_STACK_PUSH("FlxTilemap::drawTilemap","flixel/tile/FlxTilemap.hx",571);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Buffer,"Buffer");
		HX_STACK_ARG(Camera,"Camera");
		HX_STACK_LINE(575)
		this->_helperPoint->x = (this->x - (Camera->scroll->x * this->scrollFactor->x));
		HX_STACK_LINE(576)
		this->_helperPoint->y = (this->y - (Camera->scroll->y * this->scrollFactor->y));
		HX_STACK_LINE(578)
		int tileID;		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(579)
		Float drawX;		HX_STACK_VAR(drawX,"drawX");
		HX_STACK_LINE(580)
		Float drawY;		HX_STACK_VAR(drawY,"drawY");
		HX_STACK_LINE(582)
		Float hackScaleX = (this->tileScaleHack * this->scaleX);		HX_STACK_VAR(hackScaleX,"hackScaleX");
		HX_STACK_LINE(583)
		Float hackScaleY = (this->tileScaleHack * this->scaleY);		HX_STACK_VAR(hackScaleY,"hackScaleY");
		HX_STACK_LINE(586)
		::flixel::system::layer::DrawStackItem drawItem = Camera->getDrawStackItem(this->cachedGraphics,false,(int)0,null());		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(590)
		Array< Float > currDrawData = drawItem->drawData;		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(591)
		int currIndex = drawItem->position;		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(595)
		this->_point->set_x(((Camera->scroll->x * this->scrollFactor->x) - this->x));
		HX_STACK_LINE(596)
		this->_point->set_y(((Camera->scroll->y * this->scrollFactor->y) - this->y));
		HX_STACK_LINE(598)
		int screenXInTiles = ::Math_obj::floor((Float(this->_point->x) / Float(this->_scaledTileWidth)));		HX_STACK_VAR(screenXInTiles,"screenXInTiles");
		HX_STACK_LINE(599)
		int screenYInTiles = ::Math_obj::floor((Float(this->_point->y) / Float(this->_scaledTileHeight)));		HX_STACK_VAR(screenYInTiles,"screenYInTiles");
		HX_STACK_LINE(600)
		int screenRows = Buffer->rows;		HX_STACK_VAR(screenRows,"screenRows");
		HX_STACK_LINE(601)
		int screenColumns = Buffer->columns;		HX_STACK_VAR(screenColumns,"screenColumns");
		HX_STACK_LINE(604)
		if (((screenXInTiles < (int)0))){
			HX_STACK_LINE(605)
			screenXInTiles = (int)0;
		}
		HX_STACK_LINE(608)
		if (((screenXInTiles > (this->widthInTiles - screenColumns)))){
			HX_STACK_LINE(609)
			screenXInTiles = (this->widthInTiles - screenColumns);
		}
		HX_STACK_LINE(612)
		if (((screenYInTiles < (int)0))){
			HX_STACK_LINE(613)
			screenYInTiles = (int)0;
		}
		HX_STACK_LINE(616)
		if (((screenYInTiles > (this->heightInTiles - screenRows)))){
			HX_STACK_LINE(617)
			screenYInTiles = (this->heightInTiles - screenRows);
		}
		HX_STACK_LINE(621)
		int rowIndex = ((screenYInTiles * this->widthInTiles) + screenXInTiles);		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(622)
		this->_flashPoint->y = (int)0;
		HX_STACK_LINE(623)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(624)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(625)
		int columnIndex;		HX_STACK_VAR(columnIndex,"columnIndex");
		HX_STACK_LINE(626)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(632)
		while(((row < screenRows))){
			HX_STACK_LINE(634)
			columnIndex = rowIndex;
			HX_STACK_LINE(635)
			column = (int)0;
			HX_STACK_LINE(636)
			this->_flashPoint->x = (int)0;
			HX_STACK_LINE(638)
			while(((column < screenColumns))){
				HX_STACK_LINE(676)
				tileID = this->_rectIDs->__get(columnIndex);
				HX_STACK_LINE(678)
				if (((tileID != (int)-1))){
					HX_STACK_LINE(680)
					drawX = (this->_helperPoint->x + (hx::Mod(columnIndex,this->widthInTiles) * this->_scaledTileWidth));
					HX_STACK_LINE(681)
					drawY = (this->_helperPoint->y + (::Math_obj::floor((Float(columnIndex) / Float(this->widthInTiles))) * this->_scaledTileHeight));
					HX_STACK_LINE(684)
					currDrawData[(currIndex)++] = drawX;
					HX_STACK_LINE(685)
					currDrawData[(currIndex)++] = drawY;
					HX_STACK_LINE(690)
					currDrawData[(currIndex)++] = tileID;
					HX_STACK_LINE(693)
					currDrawData[(currIndex)++] = hackScaleX;
					HX_STACK_LINE(694)
					currDrawData[(currIndex)++] = (int)0;
					HX_STACK_LINE(695)
					currDrawData[(currIndex)++] = (int)0;
					HX_STACK_LINE(697)
					currDrawData[(currIndex)++] = hackScaleY;
					HX_STACK_LINE(701)
					currDrawData[(currIndex)++] = 1.0;
				}
				HX_STACK_LINE(709)
				(column)++;
				HX_STACK_LINE(710)
				(columnIndex)++;
			}
			HX_STACK_LINE(716)
			hx::AddEq(rowIndex,this->widthInTiles);
			HX_STACK_LINE(717)
			(row)++;
		}
		HX_STACK_LINE(721)
		drawItem->position = currIndex;
		HX_STACK_LINE(724)
		Buffer->x = (screenXInTiles * this->_scaledTileWidth);
		HX_STACK_LINE(725)
		Buffer->y = (screenYInTiles * this->_scaledTileHeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,drawTilemap,(void))

Void FlxTilemap_obj::setCustomTileMappings( Array< int > mappings,Array< int > randomIndices,Array< ::Dynamic > randomChoices,Dynamic randomLambda){
{
		HX_STACK_PUSH("FlxTilemap::setCustomTileMappings","flixel/tile/FlxTilemap.hx",508);
		HX_STACK_THIS(this);
		HX_STACK_ARG(mappings,"mappings");
		HX_STACK_ARG(randomIndices,"randomIndices");
		HX_STACK_ARG(randomChoices,"randomChoices");
		HX_STACK_ARG(randomLambda,"randomLambda");
		HX_STACK_LINE(509)
		this->customTileRemap = mappings;
		HX_STACK_LINE(510)
		this->_randomIndices = randomIndices;
		HX_STACK_LINE(511)
		this->_randomChoices = randomChoices;
		HX_STACK_LINE(512)
		this->_randomLambda = randomLambda;
		HX_STACK_LINE(515)
		if (((bool((this->_randomIndices != null())) && bool(((bool((this->_randomChoices == null())) || bool((this->_randomChoices->length == (int)0)))))))){
			HX_STACK_LINE(516)
			hx::Throw (HX_CSTRING("You must provide valid 'randomChoices' if you wish to randomize tilemap indicies, please read documentation of 'setCustomTileMappings' function."));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,setCustomTileMappings,(void))

::flixel::tile::FlxTilemap FlxTilemap_obj::loadMap( Dynamic MapData,Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,hx::Null< int >  __o_AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int AutoTile = __o_AutoTile.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_PUSH("FlxTilemap::loadMap","flixel/tile/FlxTilemap.hx",303);
	HX_STACK_THIS(this);
	HX_STACK_ARG(MapData,"MapData");
	HX_STACK_ARG(TileGraphic,"TileGraphic");
	HX_STACK_ARG(TileWidth,"TileWidth");
	HX_STACK_ARG(TileHeight,"TileHeight");
	HX_STACK_ARG(AutoTile,"AutoTile");
	HX_STACK_ARG(StartingIndex,"StartingIndex");
	HX_STACK_ARG(DrawIndex,"DrawIndex");
	HX_STACK_ARG(CollideIndex,"CollideIndex");
{
		HX_STACK_LINE(304)
		this->_auto = AutoTile;
		HX_STACK_LINE(305)
		this->_startingIndex = (  (((StartingIndex <= (int)0))) ? int((int)0) : int(StartingIndex) );
		HX_STACK_LINE(308)
		if ((::Std_obj::is(MapData,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(311)
			this->_data = Array_obj< int >::__new();
			HX_STACK_LINE(312)
			Array< ::String > columns;		HX_STACK_VAR(columns,"columns");
			HX_STACK_LINE(313)
			Array< ::String > rows = MapData->__Field(HX_CSTRING("split"),true)(HX_CSTRING("\n"));		HX_STACK_VAR(rows,"rows");
			HX_STACK_LINE(314)
			this->heightInTiles = rows->length;
			HX_STACK_LINE(315)
			this->widthInTiles = (int)0;
			HX_STACK_LINE(316)
			int row = (int)0;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(317)
			int column;		HX_STACK_VAR(column,"column");
			HX_STACK_LINE(319)
			while(((row < this->heightInTiles))){
				HX_STACK_LINE(321)
				columns = rows->__get((row)++).split(HX_CSTRING(","));
				HX_STACK_LINE(323)
				if (((columns->length <= (int)1))){
					HX_STACK_LINE(325)
					this->heightInTiles = (this->heightInTiles - (int)1);
					HX_STACK_LINE(326)
					continue;
				}
				HX_STACK_LINE(328)
				if (((this->widthInTiles == (int)0))){
					HX_STACK_LINE(329)
					this->widthInTiles = columns->length;
				}
				HX_STACK_LINE(332)
				column = (int)0;
				HX_STACK_LINE(334)
				while(((column < this->widthInTiles))){
					HX_STACK_LINE(335)
					this->_data->push(::Std_obj::parseInt(columns->__get((column)++)));
				}
			}
		}
		else{
			HX_STACK_LINE(342)
			if ((::Std_obj::is(MapData,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(343)
				this->_data = MapData;
			}
			else{
				HX_STACK_LINE(347)
				hx::Throw (((HX_CSTRING("Unexpected MapData format '") + ::Std_obj::string(::Type_obj::_typeof(MapData))) + HX_CSTRING("' passed into loadMap. Map data must be CSV string or Array<Int>.")));
			}
		}
		HX_STACK_LINE(352)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(353)
		this->totalTiles = this->_data->length;
		HX_STACK_LINE(355)
		if (((this->_auto > (int)0))){
			HX_STACK_LINE(357)
			this->_startingIndex = (int)1;
			HX_STACK_LINE(358)
			DrawIndex = (int)1;
			HX_STACK_LINE(359)
			CollideIndex = (int)1;
			HX_STACK_LINE(360)
			i = (int)0;
			HX_STACK_LINE(362)
			while(((i < this->totalTiles))){
				HX_STACK_LINE(363)
				this->autoTile((i)++);
			}
		}
		HX_STACK_LINE(368)
		if (((this->customTileRemap != null()))){
			HX_STACK_LINE(370)
			i = (int)0;
			HX_STACK_LINE(371)
			while(((i < this->totalTiles))){
				HX_STACK_LINE(373)
				int old_index = this->_data->__get(i);		HX_STACK_VAR(old_index,"old_index");
				HX_STACK_LINE(374)
				int new_index = old_index;		HX_STACK_VAR(new_index,"new_index");
				HX_STACK_LINE(375)
				if (((old_index < this->customTileRemap->length))){
					HX_STACK_LINE(376)
					new_index = this->customTileRemap->__get(old_index);
				}
				HX_STACK_LINE(379)
				this->_data[i] = new_index;
				HX_STACK_LINE(380)
				(i)++;
			}
		}
		HX_STACK_LINE(384)
		if (((this->_randomIndices != null()))){
			HX_STACK_LINE(386)
			Dynamic randLambda = (  (((this->_randomLambda_dyn() != null()))) ? Dynamic(this->_randomLambda_dyn()) : Dynamic(::flixel::util::FlxRandom_obj::_float_dyn()) );		HX_STACK_VAR(randLambda,"randLambda");
			HX_STACK_LINE(388)
			i = (int)0;
			HX_STACK_LINE(389)
			while(((i < this->totalTiles))){
				HX_STACK_LINE(391)
				int old_index = this->_data->__get(i);		HX_STACK_VAR(old_index,"old_index");
				HX_STACK_LINE(392)
				int j = (int)0;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(393)
				int new_index = old_index;		HX_STACK_VAR(new_index,"new_index");
				HX_STACK_LINE(394)
				{
					HX_STACK_LINE(394)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					Array< int > _g1 = this->_randomIndices;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(394)
					while(((_g < _g1->length))){
						HX_STACK_LINE(394)
						int rand = _g1->__get(_g);		HX_STACK_VAR(rand,"rand");
						HX_STACK_LINE(394)
						++(_g);
						HX_STACK_LINE(396)
						if (((old_index == rand))){
							HX_STACK_LINE(398)
							int k = ::Std_obj::_int((randLambda().Cast< Float >() * this->_randomChoices->__get(j).StaticCast< Array< int > >()->length));		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(399)
							new_index = this->_randomChoices->__get(j).StaticCast< Array< int > >()->__get(k);
						}
						HX_STACK_LINE(401)
						(j)++;
					}
				}
				HX_STACK_LINE(403)
				this->_data[i] = new_index;
				HX_STACK_LINE(404)
				(i)++;
			}
		}
		HX_STACK_LINE(409)
		this->set_cachedGraphics(::flixel::FlxG_obj::bitmap->add(TileGraphic,null(),null()));
		HX_STACK_LINE(410)
		this->_tileWidth = TileWidth;
		HX_STACK_LINE(412)
		if (((this->_tileWidth <= (int)0))){
			HX_STACK_LINE(413)
			this->_tileWidth = this->cachedGraphics->bitmap->get_height();
		}
		HX_STACK_LINE(417)
		this->_tileHeight = TileHeight;
		HX_STACK_LINE(419)
		if (((this->_tileHeight <= (int)0))){
			HX_STACK_LINE(420)
			this->_tileHeight = this->_tileWidth;
		}
		HX_STACK_LINE(424)
		if ((!(::Std_obj::is(TileGraphic,hx::ClassOf< ::flixel::util::loaders::TextureRegion >())))){
			HX_STACK_LINE(426)
			this->region = ::flixel::system::layer::Region_obj::__new((int)0,(int)0,this->_tileWidth,this->_tileHeight,null(),null(),null(),null());
			HX_STACK_LINE(427)
			this->region->width = (::Std_obj::_int((Float(this->cachedGraphics->bitmap->get_width()) / Float(this->_tileWidth))) * this->_tileWidth);
			HX_STACK_LINE(428)
			this->region->height = (::Std_obj::_int((Float(this->cachedGraphics->bitmap->get_height()) / Float(this->_tileHeight))) * this->_tileHeight);
		}
		else{
			HX_STACK_LINE(432)
			::flixel::util::loaders::TextureRegion spriteRegion = TileGraphic;		HX_STACK_VAR(spriteRegion,"spriteRegion");
			HX_STACK_LINE(433)
			this->region = spriteRegion->region->clone();
			HX_STACK_LINE(434)
			if (((this->region->tileWidth > (int)0))){
				HX_STACK_LINE(435)
				this->_tileWidth = this->region->tileWidth;
			}
			else{
				HX_STACK_LINE(439)
				this->region->tileWidth = this->_tileWidth;
			}
			HX_STACK_LINE(443)
			if (((this->region->tileHeight > (int)0))){
				HX_STACK_LINE(444)
				this->_tileHeight = this->region->tileWidth;
			}
			else{
				HX_STACK_LINE(448)
				this->region->tileHeight = this->_tileHeight;
			}
		}
		HX_STACK_LINE(454)
		this->_tileObjects = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(456)
		int length = this->region->get_numTiles();		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(457)
		hx::AddEq(length,this->_startingIndex);
		HX_STACK_LINE(459)
		{
			HX_STACK_LINE(459)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(459)
			while(((_g < length))){
				HX_STACK_LINE(459)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(461)
				this->_tileObjects[i1] = ::flixel::tile::FlxTile_obj::__new(hx::ObjectPtr<OBJ_>(this),i1,this->_tileWidth,this->_tileHeight,(i1 >= DrawIndex),(  (((i1 >= CollideIndex))) ? int(this->allowCollisions) : int((int)0) ));
			}
		}
		HX_STACK_LINE(471)
		this->_scaledTileWidth = (this->_tileWidth * this->scaleX);
		HX_STACK_LINE(472)
		this->_scaledTileHeight = (this->_tileHeight * this->scaleY);
		HX_STACK_LINE(475)
		this->set_width((this->widthInTiles * this->_scaledTileWidth));
		HX_STACK_LINE(476)
		this->set_height((this->heightInTiles * this->_scaledTileHeight));
		HX_STACK_LINE(492)
		this->updateFrameData();
		HX_STACK_LINE(495)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC8(FlxTilemap_obj,loadMap,return )

Void FlxTilemap_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTilemap::destroy","flixel/tile/FlxTilemap.hx",240);
		HX_STACK_THIS(this);
		HX_STACK_LINE(241)
		this->_flashPoint = null();
		HX_STACK_LINE(242)
		this->_flashRect = null();
		HX_STACK_LINE(243)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(244)
		int l;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(246)
		if (((this->_tileObjects != null()))){
			HX_STACK_LINE(248)
			l = this->_tileObjects->length;
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(250)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(250)
				while(((_g < l))){
					HX_STACK_LINE(250)
					int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(252)
					this->_tileObjects->__get(i1).StaticCast< ::flixel::tile::FlxTile >()->destroy();
				}
			}
			HX_STACK_LINE(255)
			this->_tileObjects = null();
		}
		HX_STACK_LINE(258)
		if (((this->_buffers != null()))){
			HX_STACK_LINE(260)
			i = (int)0;
			HX_STACK_LINE(261)
			l = this->_buffers->length;
			HX_STACK_LINE(263)
			{
				HX_STACK_LINE(263)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(263)
				while(((_g < l))){
					HX_STACK_LINE(263)
					int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(265)
					this->_buffers->__get(i1).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->destroy();
				}
			}
			HX_STACK_LINE(268)
			this->_buffers = null();
		}
		HX_STACK_LINE(271)
		this->_data = null();
		HX_STACK_LINE(282)
		this->_helperPoint = null();
		HX_STACK_LINE(283)
		this->_rectIDs = null();
		HX_STACK_LINE(286)
		this->super::destroy();
	}
return null();
}


int FlxTilemap_obj::OFF;

int FlxTilemap_obj::AUTO;

int FlxTilemap_obj::ALT;

::String FlxTilemap_obj::arrayToCSV( Array< int > Data,int Width,hx::Null< bool >  __o_Invert){
bool Invert = __o_Invert.Default(false);
	HX_STACK_PUSH("FlxTilemap::arrayToCSV","flixel/tile/FlxTilemap.hx",2136);
	HX_STACK_ARG(Data,"Data");
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Invert,"Invert");
{
		HX_STACK_LINE(2137)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(2138)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(2139)
		::String csv = HX_CSTRING("");		HX_STACK_VAR(csv,"csv");
		HX_STACK_LINE(2140)
		int Height = ::Std_obj::_int((Float(Data->length) / Float(Width)));		HX_STACK_VAR(Height,"Height");
		HX_STACK_LINE(2141)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(2142)
		int offset = (int)0;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(2144)
		while(((row < Height))){
			HX_STACK_LINE(2146)
			column = (int)0;
			HX_STACK_LINE(2148)
			while(((column < Width))){
				HX_STACK_LINE(2150)
				index = Data->__get(offset);
				HX_STACK_LINE(2152)
				if ((Invert)){
					HX_STACK_LINE(2153)
					if (((index == (int)0))){
						HX_STACK_LINE(2155)
						index = (int)1;
					}
					else{
						HX_STACK_LINE(2158)
						if (((index == (int)1))){
							HX_STACK_LINE(2159)
							index = (int)0;
						}
					}
				}
				HX_STACK_LINE(2164)
				if (((column == (int)0))){
					HX_STACK_LINE(2165)
					if (((row == (int)0))){
						HX_STACK_LINE(2167)
						hx::AddEq(csv,index);
					}
					else{
						HX_STACK_LINE(2171)
						hx::AddEq(csv,(HX_CSTRING("\n") + index));
					}
				}
				else{
					HX_STACK_LINE(2176)
					hx::AddEq(csv,(HX_CSTRING(", ") + index));
				}
				HX_STACK_LINE(2180)
				(column)++;
				HX_STACK_LINE(2181)
				(offset)++;
			}
			HX_STACK_LINE(2184)
			(row)++;
		}
		HX_STACK_LINE(2187)
		return csv;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,arrayToCSV,return )

::String FlxTilemap_obj::bitmapToCSV( ::flash::display::BitmapData Bitmap,hx::Null< bool >  __o_Invert,hx::Null< int >  __o_Scale,Array< int > ColorMap){
bool Invert = __o_Invert.Default(false);
int Scale = __o_Scale.Default(1);
	HX_STACK_PUSH("FlxTilemap::bitmapToCSV","flixel/tile/FlxTilemap.hx",2203);
	HX_STACK_ARG(Bitmap,"Bitmap");
	HX_STACK_ARG(Invert,"Invert");
	HX_STACK_ARG(Scale,"Scale");
	HX_STACK_ARG(ColorMap,"ColorMap");
{
		HX_STACK_LINE(2204)
		if (((Scale < (int)1))){
			HX_STACK_LINE(2205)
			Scale = (int)1;
		}
		HX_STACK_LINE(2210)
		if (((Scale > (int)1))){
			HX_STACK_LINE(2212)
			::flash::display::BitmapData bd = Bitmap;		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(2213)
			Bitmap = ::flash::display::BitmapData_obj::__new((Bitmap->get_width() * Scale),(Bitmap->get_height() * Scale),null(),null(),null());
			HX_STACK_LINE(2236)
			::flash::geom::Matrix mtx = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(mtx,"mtx");
			HX_STACK_LINE(2237)
			mtx->scale(Scale,Scale);
			HX_STACK_LINE(2238)
			Bitmap->draw(bd,mtx,null(),null(),null(),null());
		}
		HX_STACK_LINE(2243)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(2244)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(2245)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(2246)
		::String csv = HX_CSTRING("");		HX_STACK_VAR(csv,"csv");
		HX_STACK_LINE(2247)
		int bitmapWidth = Bitmap->get_width();		HX_STACK_VAR(bitmapWidth,"bitmapWidth");
		HX_STACK_LINE(2248)
		int bitmapHeight = Bitmap->get_height();		HX_STACK_VAR(bitmapHeight,"bitmapHeight");
		HX_STACK_LINE(2250)
		while(((row < bitmapHeight))){
			HX_STACK_LINE(2252)
			column = (int)0;
			HX_STACK_LINE(2254)
			while(((column < bitmapWidth))){
				HX_STACK_LINE(2257)
				pixel = Bitmap->getPixel(column,row);
				HX_STACK_LINE(2259)
				if (((ColorMap != null()))){
					HX_STACK_LINE(2260)
					pixel = ::flixel::util::FlxArrayUtil_obj::indexOf_Int(ColorMap,pixel,null());
				}
				else{
					HX_STACK_LINE(2263)
					if (((bool((bool(Invert) && bool((pixel > (int)0)))) || bool((bool(!(Invert)) && bool((pixel == (int)0))))))){
						HX_STACK_LINE(2264)
						pixel = (int)1;
					}
					else{
						HX_STACK_LINE(2268)
						pixel = (int)0;
					}
				}
				HX_STACK_LINE(2273)
				if (((column == (int)0))){
					HX_STACK_LINE(2274)
					if (((row == (int)0))){
						HX_STACK_LINE(2276)
						hx::AddEq(csv,pixel);
					}
					else{
						HX_STACK_LINE(2280)
						hx::AddEq(csv,(HX_CSTRING("\n") + pixel));
					}
				}
				else{
					HX_STACK_LINE(2285)
					hx::AddEq(csv,(HX_CSTRING(", ") + pixel));
				}
				HX_STACK_LINE(2289)
				(column)++;
			}
			HX_STACK_LINE(2292)
			(row)++;
		}
		HX_STACK_LINE(2295)
		return csv;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,bitmapToCSV,return )

::String FlxTilemap_obj::imageToCSV( Dynamic ImageFile,hx::Null< bool >  __o_Invert,hx::Null< int >  __o_Scale){
bool Invert = __o_Invert.Default(false);
int Scale = __o_Scale.Default(1);
	HX_STACK_PUSH("FlxTilemap::imageToCSV","flixel/tile/FlxTilemap.hx",2310);
	HX_STACK_ARG(ImageFile,"ImageFile");
	HX_STACK_ARG(Invert,"Invert");
	HX_STACK_ARG(Scale,"Scale");
{
		HX_STACK_LINE(2311)
		::flash::display::BitmapData tempBitmapData;		HX_STACK_VAR(tempBitmapData,"tempBitmapData");
		HX_STACK_LINE(2313)
		if ((::Std_obj::is(ImageFile,hx::ClassOf< ::String >()))){
			struct _Function_2_1{
				inline static ::flash::display::BitmapData Block( Dynamic &ImageFile){
					HX_STACK_PUSH("*::closure","flixel/tile/FlxTilemap.hx",2315);
					{
						HX_STACK_LINE(2315)
						::String id = ImageFile;		HX_STACK_VAR(id,"id");
						HX_STACK_LINE(2315)
						return ::openfl::Assets_obj::getBitmapData(id,false);
					}
					return null();
				}
			};
			HX_STACK_LINE(2314)
			tempBitmapData = _Function_2_1::Block(ImageFile);
		}
		else{
			HX_STACK_LINE(2318)
			tempBitmapData = ::Type_obj::createInstance(ImageFile,Dynamic( Array_obj<Dynamic>::__new()))->__Field(HX_CSTRING("bitmapData"),true);
		}
		HX_STACK_LINE(2322)
		return ::flixel::tile::FlxTilemap_obj::bitmapToCSV(tempBitmapData,Invert,Scale,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,imageToCSV,return )


FlxTilemap_obj::FlxTilemap_obj()
{
}

void FlxTilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemap);
	HX_MARK_MEMBER_NAME(_rectIDs,"_rectIDs");
	HX_MARK_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_MARK_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_MARK_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_MARK_MEMBER_NAME(_scaledTileHeight,"_scaledTileHeight");
	HX_MARK_MEMBER_NAME(_scaledTileWidth,"_scaledTileWidth");
	HX_MARK_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_MARK_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_buffers,"_buffers");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_randomLambda,"_randomLambda");
	HX_MARK_MEMBER_NAME(_randomChoices,"_randomChoices");
	HX_MARK_MEMBER_NAME(_randomIndices,"_randomIndices");
	HX_MARK_MEMBER_NAME(customTileRemap,"customTileRemap");
	HX_MARK_MEMBER_NAME(tileScaleHack,"tileScaleHack");
	HX_MARK_MEMBER_NAME(totalTiles,"totalTiles");
	HX_MARK_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_MARK_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_MARK_MEMBER_NAME(_auto,"auto");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_rectIDs,"_rectIDs");
	HX_VISIT_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_VISIT_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_VISIT_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_VISIT_MEMBER_NAME(_scaledTileHeight,"_scaledTileHeight");
	HX_VISIT_MEMBER_NAME(_scaledTileWidth,"_scaledTileWidth");
	HX_VISIT_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_VISIT_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_buffers,"_buffers");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_randomLambda,"_randomLambda");
	HX_VISIT_MEMBER_NAME(_randomChoices,"_randomChoices");
	HX_VISIT_MEMBER_NAME(_randomIndices,"_randomIndices");
	HX_VISIT_MEMBER_NAME(customTileRemap,"customTileRemap");
	HX_VISIT_MEMBER_NAME(tileScaleHack,"tileScaleHack");
	HX_VISIT_MEMBER_NAME(totalTiles,"totalTiles");
	HX_VISIT_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_VISIT_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_VISIT_MEMBER_NAME(_auto,"auto");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTilemap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return ray_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"auto") ) { return _auto; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rayHit") ) { return rayHit_dyn(); }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setTile") ) { return setTile_dyn(); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return getTile_dyn(); }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMap") ) { return loadMap_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoTile") ) { return autoTile_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"walkPath") ) { return walkPath_dyn(); }
		if (HX_FIELD_EQ(inName,"findPath") ) { return findPath_dyn(); }
		if (HX_FIELD_EQ(inName,"setDirty") ) { return setDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"_rectIDs") ) { return _rectIDs; }
		if (HX_FIELD_EQ(inName,"_buffers") ) { return _buffers; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"arrayToCSV") ) { return arrayToCSV_dyn(); }
		if (HX_FIELD_EQ(inName,"imageToCSV") ) { return imageToCSV_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return set_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return set_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"updateTile") ) { return updateTile_dyn(); }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return overlapsAt_dyn(); }
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { return _tileWidth; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"totalTiles") ) { return totalTiles; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bitmapToCSV") ) { return bitmapToCSV_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTilemap") ) { return drawTilemap_dyn(); }
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { return _tileHeight; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simplifyPath") ) { return simplifyPath_dyn(); }
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { return _helperPoint; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { return _tileObjects; }
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { return widthInTiles; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateBuffers") ) { return updateBuffers_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCoords") ) { return getTileCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"_randomLambda") ) { return _randomLambda; }
		if (HX_FIELD_EQ(inName,"tileScaleHack") ) { return tileScaleHack; }
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { return heightInTiles; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setTileByIndex") ) { return setTileByIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileByIndex") ) { return getTileByIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { return _startingIndex; }
		if (HX_FIELD_EQ(inName,"_randomChoices") ) { return _randomChoices; }
		if (HX_FIELD_EQ(inName,"_randomIndices") ) { return _randomIndices; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"tileToFlxSprite") ) { return tileToFlxSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"raySimplifyPath") ) { return raySimplifyPath_dyn(); }
		if (HX_FIELD_EQ(inName,"customTileRemap") ) { return customTileRemap; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getTileInstances") ) { return getTileInstances_dyn(); }
		if (HX_FIELD_EQ(inName,"_scaledTileWidth") ) { return _scaledTileWidth; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setTileProperties") ) { return setTileProperties_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCollisions") ) { return getTileCollisions_dyn(); }
		if (HX_FIELD_EQ(inName,"_scaledTileHeight") ) { return _scaledTileHeight; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"computePathDistance") ) { return computePathDistance_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"overlapsWithCallback") ) { return overlapsWithCallback_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setCustomTileMappings") ) { return setCustomTileMappings_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_forceComplexRender") ) { return set_forceComplexRender_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTilemap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"auto") ) { _auto=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp) return set_scaleY(inValue);scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp) return set_scaleX(inValue);scaleX=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_rectIDs") ) { _rectIDs=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buffers") ) { _buffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { _tileWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"totalTiles") ) { totalTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { _tileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { _helperPoint=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { _tileObjects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { widthInTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_randomLambda") ) { _randomLambda=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileScaleHack") ) { tileScaleHack=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { heightInTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { _startingIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomChoices") ) { _randomChoices=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomIndices") ) { _randomIndices=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"customTileRemap") ) { customTileRemap=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_scaledTileWidth") ) { _scaledTileWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_scaledTileHeight") ) { _scaledTileHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_rectIDs"));
	outFields->push(HX_CSTRING("_helperPoint"));
	outFields->push(HX_CSTRING("_startingIndex"));
	outFields->push(HX_CSTRING("_tileObjects"));
	outFields->push(HX_CSTRING("_scaledTileHeight"));
	outFields->push(HX_CSTRING("_scaledTileWidth"));
	outFields->push(HX_CSTRING("_tileHeight"));
	outFields->push(HX_CSTRING("_tileWidth"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("_buffers"));
	outFields->push(HX_CSTRING("_flashRect"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_randomChoices"));
	outFields->push(HX_CSTRING("_randomIndices"));
	outFields->push(HX_CSTRING("customTileRemap"));
	outFields->push(HX_CSTRING("tileScaleHack"));
	outFields->push(HX_CSTRING("totalTiles"));
	outFields->push(HX_CSTRING("heightInTiles"));
	outFields->push(HX_CSTRING("widthInTiles"));
	outFields->push(HX_CSTRING("auto"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("scaleX"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("OFF"),
	HX_CSTRING("AUTO"),
	HX_CSTRING("ALT"),
	HX_CSTRING("arrayToCSV"),
	HX_CSTRING("bitmapToCSV"),
	HX_CSTRING("imageToCSV"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_scaleY"),
	HX_CSTRING("set_scaleX"),
	HX_CSTRING("set_forceComplexRender"),
	HX_CSTRING("updateBuffers"),
	HX_CSTRING("tileToFlxSprite"),
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("updateTile"),
	HX_CSTRING("autoTile"),
	HX_CSTRING("rayHit"),
	HX_CSTRING("ray"),
	HX_CSTRING("getBounds"),
	HX_CSTRING("follow"),
	HX_CSTRING("setTileProperties"),
	HX_CSTRING("setTileByIndex"),
	HX_CSTRING("setTile"),
	HX_CSTRING("getTileCoords"),
	HX_CSTRING("getTileInstances"),
	HX_CSTRING("getTileCollisions"),
	HX_CSTRING("getTileByIndex"),
	HX_CSTRING("getTile"),
	HX_CSTRING("overlapsPoint"),
	HX_CSTRING("overlapsWithCallback"),
	HX_CSTRING("overlapsAt"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("walkPath"),
	HX_CSTRING("computePathDistance"),
	HX_CSTRING("raySimplifyPath"),
	HX_CSTRING("simplifyPath"),
	HX_CSTRING("findPath"),
	HX_CSTRING("setDirty"),
	HX_CSTRING("getData"),
	HX_CSTRING("draw"),
	HX_CSTRING("drawTilemap"),
	HX_CSTRING("setCustomTileMappings"),
	HX_CSTRING("loadMap"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_rectIDs"),
	HX_CSTRING("_helperPoint"),
	HX_CSTRING("_startingIndex"),
	HX_CSTRING("_tileObjects"),
	HX_CSTRING("_scaledTileHeight"),
	HX_CSTRING("_scaledTileWidth"),
	HX_CSTRING("_tileHeight"),
	HX_CSTRING("_tileWidth"),
	HX_CSTRING("_data"),
	HX_CSTRING("_buffers"),
	HX_CSTRING("_flashRect"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_randomLambda"),
	HX_CSTRING("_randomChoices"),
	HX_CSTRING("_randomIndices"),
	HX_CSTRING("customTileRemap"),
	HX_CSTRING("tileScaleHack"),
	HX_CSTRING("totalTiles"),
	HX_CSTRING("heightInTiles"),
	HX_CSTRING("widthInTiles"),
	HX_CSTRING("auto"),
	HX_CSTRING("scaleY"),
	HX_CSTRING("scaleX"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::OFF,"OFF");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::AUTO,"AUTO");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::ALT,"ALT");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::OFF,"OFF");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::AUTO,"AUTO");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::ALT,"ALT");
};

Class FlxTilemap_obj::__mClass;

void FlxTilemap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tile.FlxTilemap"), hx::TCanCast< FlxTilemap_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTilemap_obj::__boot()
{
	OFF= (int)0;
	AUTO= (int)1;
	ALT= (int)2;
}

} // end namespace flixel
} // end namespace tile
