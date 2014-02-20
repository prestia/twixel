#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureRegion
#include <flixel/util/loaders/TextureRegion.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_AssetCache
#include <openfl/AssetCache.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void BitmapFrontEnd_obj::__construct()
{
HX_STACK_PUSH("BitmapFrontEnd::new","flixel/system/frontEnds/BitmapFrontEnd.hx",20);
{
	HX_STACK_LINE(20)
	this->clearCache();
}
;
	return null();
}

BitmapFrontEnd_obj::~BitmapFrontEnd_obj() { }

Dynamic BitmapFrontEnd_obj::__CreateEmpty() { return  new BitmapFrontEnd_obj; }
hx::ObjectPtr< BitmapFrontEnd_obj > BitmapFrontEnd_obj::__new()
{  hx::ObjectPtr< BitmapFrontEnd_obj > result = new BitmapFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic BitmapFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapFrontEnd_obj > result = new BitmapFrontEnd_obj();
	result->__construct();
	return result;}

bool BitmapFrontEnd_obj::inOpenFlAssets( ::flash::display::BitmapData bitmap){
	HX_STACK_PUSH("BitmapFrontEnd::inOpenFlAssets","flixel/system/frontEnds/BitmapFrontEnd.hx",422);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bitmap,"bitmap");
	HX_STACK_LINE(423)
	::haxe::ds::StringMap bitmapDataCache = ::openfl::Assets_obj::cache->bitmapData;		HX_STACK_VAR(bitmapDataCache,"bitmapDataCache");
	HX_STACK_LINE(424)
	if (((bitmapDataCache != null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ::haxe::ds::StringMap &bitmapDataCache){
				HX_STACK_PUSH("*::closure","flixel/system/frontEnds/BitmapFrontEnd.hx",426);
				{
					HX_STACK_LINE(426)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(bitmapDataCache);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_3_1","flixel/system/frontEnds/BitmapFrontEnd.hx",426);
						{
							HX_STACK_LINE(426)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(426)
					return  Dynamic(new _Function_3_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(425)
		for(::cpp::FastIterator_obj< ::flash::display::BitmapData > *__it = ::cpp::CreateFastIterator< ::flash::display::BitmapData >((_Function_2_1::Block(bitmapDataCache))());  __it->hasNext(); ){
			::flash::display::BitmapData bd = __it->next();
			if (((bd == bitmap))){
				HX_STACK_LINE(429)
				return true;
			}
;
		}
	}
	HX_STACK_LINE(434)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,inOpenFlAssets,return )

Void BitmapFrontEnd_obj::clearCache( ){
{
		HX_STACK_PUSH("BitmapFrontEnd::clearCache","flixel/system/frontEnds/BitmapFrontEnd.hx",401);
		HX_STACK_THIS(this);
		HX_STACK_LINE(402)
		::flixel::util::loaders::CachedGraphics obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(404)
		if (((this->_cache == null()))){
			HX_STACK_LINE(405)
			this->_cache = ::haxe::ds::StringMap_obj::__new();
		}
		HX_STACK_LINE(409)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_cache->keys());  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(411)
				obj = this->_cache->get(key);
				HX_STACK_LINE(412)
				if (((bool((bool((obj != null())) && bool(!(obj->persist)))) && bool((this->inOpenFlAssets(obj->bitmap) == false))))){
					HX_STACK_LINE(414)
					this->_cache->remove(key);
					HX_STACK_LINE(415)
					obj->destroy();
					HX_STACK_LINE(416)
					obj = null();
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,clearCache,(void))

Void BitmapFrontEnd_obj::remove( ::String key){
{
		HX_STACK_PUSH("BitmapFrontEnd::remove","flixel/system/frontEnds/BitmapFrontEnd.hx",385);
		HX_STACK_THIS(this);
		HX_STACK_ARG(key,"key");
		HX_STACK_LINE(385)
		if (((bool((key != null())) && bool(this->_cache->exists(key))))){
			HX_STACK_LINE(388)
			::flixel::util::loaders::CachedGraphics obj = this->_cache->get(key);		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(389)
			if (((this->inOpenFlAssets(obj->bitmap) == false))){
				HX_STACK_LINE(391)
				this->_cache->remove(key);
				HX_STACK_LINE(392)
				obj->destroy();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,remove,(void))

::String BitmapFrontEnd_obj::getUniqueKey( ::String __o_baseKey){
::String baseKey = __o_baseKey.Default(HX_CSTRING("pixels"));
	HX_STACK_PUSH("BitmapFrontEnd::getUniqueKey","flixel/system/frontEnds/BitmapFrontEnd.hx",370);
	HX_STACK_THIS(this);
	HX_STACK_ARG(baseKey,"baseKey");
{
		HX_STACK_LINE(371)
		if ((this->checkCache(baseKey))){
			HX_STACK_LINE(373)
			int inc = (int)0;		HX_STACK_VAR(inc,"inc");
			HX_STACK_LINE(374)
			::String ukey;		HX_STACK_VAR(ukey,"ukey");
			HX_STACK_LINE(375)
			do{
				HX_STACK_LINE(376)
				ukey = (baseKey + (inc)++);
			}
while((this->checkCache(ukey)));
			HX_STACK_LINE(379)
			baseKey = ukey;
		}
		HX_STACK_LINE(381)
		return baseKey;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,getUniqueKey,return )

::String BitmapFrontEnd_obj::getCacheKeyFor( ::flash::display::BitmapData bmd){
	HX_STACK_PUSH("BitmapFrontEnd::getCacheKeyFor","flixel/system/frontEnds/BitmapFrontEnd.hx",351);
	HX_STACK_THIS(this);
	HX_STACK_ARG(bmd,"bmd");
	HX_STACK_LINE(352)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_cache->keys());  __it->hasNext(); ){
		::String key = __it->next();
		{
			HX_STACK_LINE(354)
			::flash::display::BitmapData data = this->_cache->get(key)->__Field(HX_CSTRING("bitmap"),true);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(355)
			if (((data == bmd))){
				HX_STACK_LINE(356)
				return key;
			}
		}
;
	}
	HX_STACK_LINE(360)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,getCacheKeyFor,return )

::flixel::util::loaders::CachedGraphics BitmapFrontEnd_obj::get( ::String key){
	HX_STACK_PUSH("BitmapFrontEnd::get","flixel/system/frontEnds/BitmapFrontEnd.hx",340);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(340)
	return this->_cache->get(key);
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,get,return )

::flixel::util::loaders::CachedGraphics BitmapFrontEnd_obj::addWithSpaces( Dynamic Graphic,int FrameWidth,int FrameHeight,hx::Null< int >  __o_SpacingX,hx::Null< int >  __o_SpacingY,hx::Null< bool >  __o_Unique,::String Key){
int SpacingX = __o_SpacingX.Default(1);
int SpacingY = __o_SpacingY.Default(1);
bool Unique = __o_Unique.Default(false);
	HX_STACK_PUSH("BitmapFrontEnd::addWithSpaces","flixel/system/frontEnds/BitmapFrontEnd.hx",149);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Graphic,"Graphic");
	HX_STACK_ARG(FrameWidth,"FrameWidth");
	HX_STACK_ARG(FrameHeight,"FrameHeight");
	HX_STACK_ARG(SpacingX,"SpacingX");
	HX_STACK_ARG(SpacingY,"SpacingY");
	HX_STACK_ARG(Unique,"Unique");
	HX_STACK_ARG(Key,"Key");
{
		HX_STACK_LINE(150)
		if (((Graphic == null()))){
			HX_STACK_LINE(151)
			return null();
		}
		HX_STACK_LINE(155)
		::flixel::util::loaders::TextureRegion region = null();		HX_STACK_VAR(region,"region");
		HX_STACK_LINE(156)
		::flixel::util::loaders::CachedGraphics graphic = null();		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(158)
		bool isClass = true;		HX_STACK_VAR(isClass,"isClass");
		HX_STACK_LINE(159)
		bool isBitmap = true;		HX_STACK_VAR(isBitmap,"isBitmap");
		HX_STACK_LINE(160)
		bool isRegion = true;		HX_STACK_VAR(isRegion,"isRegion");
		HX_STACK_LINE(161)
		bool isGraphics = true;		HX_STACK_VAR(isGraphics,"isGraphics");
		HX_STACK_LINE(163)
		if ((::Std_obj::is(Graphic,hx::ClassOf< ::flixel::util::loaders::CachedGraphics >()))){
			HX_STACK_LINE(165)
			isClass = false;
			HX_STACK_LINE(166)
			isBitmap = false;
			HX_STACK_LINE(167)
			isRegion = false;
			HX_STACK_LINE(168)
			isGraphics = true;
			HX_STACK_LINE(170)
			graphic = hx::TCast< flixel::util::loaders::CachedGraphics >::cast(Graphic);
			HX_STACK_LINE(172)
			if (((bool(!(Unique)) && bool(((bool((FrameWidth <= (int)0)) && bool((FrameHeight <= (int)0)))))))){
				HX_STACK_LINE(173)
				return graphic;
			}
		}
		else{
			HX_STACK_LINE(177)
			if ((::Std_obj::is(Graphic,hx::ClassOf< ::Class >()))){
				HX_STACK_LINE(179)
				isClass = true;
				HX_STACK_LINE(180)
				isBitmap = false;
				HX_STACK_LINE(181)
				isRegion = false;
				HX_STACK_LINE(182)
				isGraphics = false;
			}
			else{
				HX_STACK_LINE(184)
				if ((::Std_obj::is(Graphic,hx::ClassOf< ::flash::display::BitmapData >()))){
					HX_STACK_LINE(186)
					isClass = false;
					HX_STACK_LINE(187)
					isBitmap = true;
					HX_STACK_LINE(188)
					isRegion = false;
					HX_STACK_LINE(189)
					isGraphics = false;
				}
				else{
					HX_STACK_LINE(191)
					if ((::Std_obj::is(Graphic,hx::ClassOf< ::flixel::util::loaders::TextureRegion >()))){
						HX_STACK_LINE(193)
						isClass = false;
						HX_STACK_LINE(194)
						isBitmap = false;
						HX_STACK_LINE(195)
						isRegion = true;
						HX_STACK_LINE(196)
						isGraphics = false;
						HX_STACK_LINE(198)
						region = hx::TCast< flixel::util::loaders::TextureRegion >::cast(Graphic);
					}
					else{
						HX_STACK_LINE(200)
						if ((::Std_obj::is(Graphic,hx::ClassOf< ::String >()))){
							HX_STACK_LINE(202)
							isClass = false;
							HX_STACK_LINE(203)
							isBitmap = false;
							HX_STACK_LINE(204)
							isRegion = false;
							HX_STACK_LINE(205)
							isGraphics = false;
						}
						else{
							HX_STACK_LINE(208)
							return null();
						}
					}
				}
			}
		}
		HX_STACK_LINE(212)
		::String additionalKey = HX_CSTRING("");		HX_STACK_VAR(additionalKey,"additionalKey");
		HX_STACK_LINE(214)
		if (((bool((FrameWidth > (int)0)) || bool((FrameHeight > (int)0))))){
			HX_STACK_LINE(215)
			additionalKey = (((((((HX_CSTRING("FrameSize:") + FrameWidth) + HX_CSTRING("_")) + FrameHeight) + HX_CSTRING("_Spacing:")) + SpacingX) + HX_CSTRING("_")) + SpacingY);
		}
		HX_STACK_LINE(219)
		::String key = Key;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(220)
		if (((key == null()))){
			HX_STACK_LINE(222)
			if ((isClass)){
				HX_STACK_LINE(223)
				key = ::Type_obj::getClassName(hx::TCast< Class >::cast(Graphic));
			}
			else{
				HX_STACK_LINE(226)
				if ((isBitmap)){
					HX_STACK_LINE(227)
					if ((!(Unique))){
						HX_STACK_LINE(230)
						key = this->getCacheKeyFor(Graphic);
						HX_STACK_LINE(231)
						if (((key == null()))){
							HX_STACK_LINE(232)
							key = this->getUniqueKey(null());
						}
					}
				}
				else{
					HX_STACK_LINE(237)
					if ((isRegion)){
						HX_STACK_LINE(238)
						key = region->data->key;
					}
					else{
						HX_STACK_LINE(241)
						if ((isGraphics)){
							HX_STACK_LINE(242)
							key = graphic->key;
						}
						else{
							HX_STACK_LINE(246)
							key = Graphic;
						}
					}
				}
			}
			HX_STACK_LINE(250)
			hx::AddEq(key,additionalKey);
			HX_STACK_LINE(252)
			if ((Unique)){
				HX_STACK_LINE(253)
				key = this->getUniqueKey((  (((key == null()))) ? ::String(HX_CSTRING("pixels")) : ::String(key) ));
			}
		}
		HX_STACK_LINE(259)
		if ((!(this->checkCache(key)))){
			HX_STACK_LINE(261)
			::flash::display::BitmapData bd = null();		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(262)
			if ((isClass)){
				HX_STACK_LINE(263)
				bd = ::Type_obj::createInstance(hx::TCast< Class >::cast(Graphic),Dynamic( Array_obj<Dynamic>::__new().Add((int)0).Add((int)0)));
			}
			else{
				HX_STACK_LINE(266)
				if ((isBitmap)){
					HX_STACK_LINE(267)
					bd = Graphic;
				}
				else{
					HX_STACK_LINE(270)
					if ((isRegion)){
						HX_STACK_LINE(271)
						bd = region->data->bitmap;
					}
					else{
						HX_STACK_LINE(274)
						if ((isGraphics)){
							HX_STACK_LINE(275)
							bd = graphic->bitmap;
						}
						else{
							struct _Function_6_1{
								inline static ::flash::display::BitmapData Block( Dynamic &Graphic){
									HX_STACK_PUSH("*::closure","flixel/system/frontEnds/BitmapFrontEnd.hx",280);
									{
										HX_STACK_LINE(280)
										::String id = Graphic;		HX_STACK_VAR(id,"id");
										HX_STACK_LINE(280)
										return ::openfl::Assets_obj::getBitmapData(id,false);
									}
									return null();
								}
							};
							HX_STACK_LINE(279)
							bd = _Function_6_1::Block(Graphic);
						}
					}
				}
			}
			HX_STACK_LINE(283)
			if (((bool((FrameWidth > (int)0)) || bool((FrameHeight > (int)0))))){
				HX_STACK_LINE(285)
				int numHorizontalFrames = (  (((FrameWidth == (int)0))) ? int((int)1) : int(::Std_obj::_int((Float(bd->get_width()) / Float(FrameWidth)))) );		HX_STACK_VAR(numHorizontalFrames,"numHorizontalFrames");
				HX_STACK_LINE(286)
				int numVerticalFrames = (  (((FrameHeight == (int)0))) ? int((int)1) : int(::Std_obj::_int((Float(bd->get_height()) / Float(FrameHeight)))) );		HX_STACK_VAR(numVerticalFrames,"numVerticalFrames");
				HX_STACK_LINE(288)
				FrameWidth = (  (((FrameWidth == (int)0))) ? int(bd->get_width()) : int(FrameWidth) );
				HX_STACK_LINE(289)
				FrameHeight = (  (((FrameHeight == (int)0))) ? int(bd->get_height()) : int(FrameHeight) );
				HX_STACK_LINE(291)
				::flash::display::BitmapData tempBitmap = ::flash::display::BitmapData_obj::__new((bd->get_width() + (numHorizontalFrames * SpacingX)),(bd->get_height() + (numVerticalFrames * SpacingY)),true,(int)0,null());		HX_STACK_VAR(tempBitmap,"tempBitmap");
				HX_STACK_LINE(292)
				tempBitmap->lock();
				HX_STACK_LINE(293)
				::flash::geom::Rectangle tempRect = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,FrameWidth,FrameHeight);		HX_STACK_VAR(tempRect,"tempRect");
				HX_STACK_LINE(294)
				::flash::geom::Point tempPoint = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tempPoint,"tempPoint");
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(296)
					while(((_g < numHorizontalFrames))){
						HX_STACK_LINE(296)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(298)
						tempPoint->x = (i * ((FrameWidth + SpacingX)));
						HX_STACK_LINE(299)
						tempRect->x = (i * FrameWidth);
						HX_STACK_LINE(301)
						{
							HX_STACK_LINE(301)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							int _g1 = numVerticalFrames;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(301)
							while(((_g2 < _g1))){
								HX_STACK_LINE(301)
								int j = (_g2)++;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(303)
								tempPoint->y = (j * ((FrameHeight + SpacingY)));
								HX_STACK_LINE(304)
								tempRect->y = (j * FrameHeight);
								HX_STACK_LINE(305)
								tempBitmap->copyPixels(bd,tempRect,tempPoint,null(),null(),null());
							}
						}
					}
				}
				HX_STACK_LINE(308)
				tempBitmap->unlock(null());
				HX_STACK_LINE(309)
				bd = tempBitmap;
			}
			HX_STACK_LINE(312)
			if ((Unique)){
				HX_STACK_LINE(313)
				bd = bd->clone();
			}
			HX_STACK_LINE(317)
			::flixel::util::loaders::CachedGraphics co = ::flixel::util::loaders::CachedGraphics_obj::__new(key,bd,null());		HX_STACK_VAR(co,"co");
			HX_STACK_LINE(319)
			if (((bool(isClass) && bool(!(Unique))))){
				HX_STACK_LINE(320)
				co->assetsClass = Graphic;
			}
			else{
				HX_STACK_LINE(323)
				if (((bool((bool((bool(!(isClass)) && bool(!(isBitmap)))) && bool(!(isRegion)))) && bool(!(Unique))))){
					HX_STACK_LINE(324)
					co->assetsKey = Graphic;
				}
			}
			HX_STACK_LINE(328)
			this->_cache->set(key,co);
		}
		HX_STACK_LINE(331)
		return this->_cache->get(key);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapFrontEnd_obj,addWithSpaces,return )

::flixel::util::loaders::CachedGraphics BitmapFrontEnd_obj::add( Dynamic Graphic,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_PUSH("BitmapFrontEnd::add","flixel/system/frontEnds/BitmapFrontEnd.hx",131);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Graphic,"Graphic");
	HX_STACK_ARG(Unique,"Unique");
	HX_STACK_ARG(Key,"Key");
{
		HX_STACK_LINE(131)
		return this->addWithSpaces(Graphic,(int)0,(int)0,(int)1,(int)1,Unique,Key);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFrontEnd_obj,add,return )

::flixel::util::loaders::CachedGraphics BitmapFrontEnd_obj::create( int Width,int Height,int Color,hx::Null< bool >  __o_Unique,::String Key){
bool Unique = __o_Unique.Default(false);
	HX_STACK_PUSH("BitmapFrontEnd::create","flixel/system/frontEnds/BitmapFrontEnd.hx",104);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Unique,"Unique");
	HX_STACK_ARG(Key,"Key");
{
		HX_STACK_LINE(105)
		::String key = Key;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(106)
		if (((key == null()))){
			HX_STACK_LINE(108)
			key = ((((Width + HX_CSTRING("x")) + Height) + HX_CSTRING(":")) + Color);
			HX_STACK_LINE(109)
			if (((bool(Unique) && bool(this->checkCache(key))))){
				HX_STACK_LINE(110)
				key = this->getUniqueKey(key);
			}
		}
		HX_STACK_LINE(114)
		if ((!(this->checkCache(key)))){
			HX_STACK_LINE(115)
			this->_cache->set(key,::flixel::util::loaders::CachedGraphics_obj::__new(key,::flash::display::BitmapData_obj::__new(Width,Height,true,Color,null()),null()));
		}
		HX_STACK_LINE(119)
		return this->_cache->get(key);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapFrontEnd_obj,create,return )

bool BitmapFrontEnd_obj::checkCache( ::String Key){
	HX_STACK_PUSH("BitmapFrontEnd::checkCache","flixel/system/frontEnds/BitmapFrontEnd.hx",89);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Key,"Key");
	HX_STACK_LINE(89)
	return (bool(this->_cache->exists(Key)) && bool((this->_cache->get(Key) != null())));
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,checkCache,return )

Void BitmapFrontEnd_obj::dumpCache( ){
{
		HX_STACK_PUSH("BitmapFrontEnd::dumpCache","flixel/system/frontEnds/BitmapFrontEnd.hx",64);
		HX_STACK_THIS(this);
		HX_STACK_LINE(66)
		::flixel::util::loaders::CachedGraphics obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(68)
		if (((this->_cache != null()))){
			HX_STACK_LINE(69)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_cache->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(72)
					obj = this->_cache->get(key);
					HX_STACK_LINE(73)
					if (((bool((obj != null())) && bool(((bool((obj->assetsClass != null())) || bool((obj->assetsKey != null())))))))){
						HX_STACK_LINE(74)
						obj->dump();
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,dumpCache,(void))

Void BitmapFrontEnd_obj::onContext( ){
{
		HX_STACK_PUSH("BitmapFrontEnd::onContext","flixel/system/frontEnds/BitmapFrontEnd.hx",42);
		HX_STACK_THIS(this);
		HX_STACK_LINE(43)
		::flixel::util::loaders::CachedGraphics obj;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(45)
		if (((this->_cache != null()))){
			HX_STACK_LINE(46)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_cache->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(49)
					obj = this->_cache->get(key);
					HX_STACK_LINE(50)
					if (((bool((obj != null())) && bool(obj->isDumped)))){
						HX_STACK_LINE(51)
						obj->onContext();
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,onContext,(void))

::flixel::util::loaders::CachedGraphics BitmapFrontEnd_obj::get_whitePixel( ){
	HX_STACK_PUSH("BitmapFrontEnd::get_whitePixel","flixel/system/frontEnds/BitmapFrontEnd.hx",30);
	HX_STACK_THIS(this);
	HX_STACK_LINE(31)
	if (((this->_whitePixel == null()))){
		HX_STACK_LINE(33)
		::flash::display::BitmapData bd = ::flash::display::BitmapData_obj::__new((int)2,(int)2,true,(int)-1,null());		HX_STACK_VAR(bd,"bd");
		HX_STACK_LINE(34)
		this->_whitePixel = ::flixel::util::loaders::CachedGraphics_obj::__new(HX_CSTRING("whitePixel"),bd,true);
		HX_STACK_LINE(35)
		this->_whitePixel->get_tilesheet()->tileSheet->addTileRectID(::flash::geom::Rectangle_obj::__new((int)0,(int)0,(int)1,(int)1),::flash::geom::Point_obj::__new((int)0,(int)0));
	}
	HX_STACK_LINE(38)
	return this->_whitePixel;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,get_whitePixel,return )


BitmapFrontEnd_obj::BitmapFrontEnd_obj()
{
}

void BitmapFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapFrontEnd);
	HX_MARK_MEMBER_NAME(_whitePixel,"_whitePixel");
	HX_MARK_MEMBER_NAME(whitePixel,"whitePixel");
	HX_MARK_MEMBER_NAME(_cache,"_cache");
	HX_MARK_END_CLASS();
}

void BitmapFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_whitePixel,"_whitePixel");
	HX_VISIT_MEMBER_NAME(whitePixel,"whitePixel");
	HX_VISIT_MEMBER_NAME(_cache,"_cache");
}

Dynamic BitmapFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"_cache") ) { return _cache; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dumpCache") ) { return dumpCache_dyn(); }
		if (HX_FIELD_EQ(inName,"onContext") ) { return onContext_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { return clearCache_dyn(); }
		if (HX_FIELD_EQ(inName,"checkCache") ) { return checkCache_dyn(); }
		if (HX_FIELD_EQ(inName,"whitePixel") ) { return inCallProp ? get_whitePixel() : whitePixel; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_whitePixel") ) { return _whitePixel; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getUniqueKey") ) { return getUniqueKey_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addWithSpaces") ) { return addWithSpaces_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inOpenFlAssets") ) { return inOpenFlAssets_dyn(); }
		if (HX_FIELD_EQ(inName,"getCacheKeyFor") ) { return getCacheKeyFor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_whitePixel") ) { return get_whitePixel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_cache") ) { _cache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"whitePixel") ) { whitePixel=inValue.Cast< ::flixel::util::loaders::CachedGraphics >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_whitePixel") ) { _whitePixel=inValue.Cast< ::flixel::util::loaders::CachedGraphics >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_whitePixel"));
	outFields->push(HX_CSTRING("whitePixel"));
	outFields->push(HX_CSTRING("_cache"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("inOpenFlAssets"),
	HX_CSTRING("clearCache"),
	HX_CSTRING("remove"),
	HX_CSTRING("getUniqueKey"),
	HX_CSTRING("getCacheKeyFor"),
	HX_CSTRING("get"),
	HX_CSTRING("addWithSpaces"),
	HX_CSTRING("add"),
	HX_CSTRING("create"),
	HX_CSTRING("checkCache"),
	HX_CSTRING("dumpCache"),
	HX_CSTRING("onContext"),
	HX_CSTRING("get_whitePixel"),
	HX_CSTRING("_whitePixel"),
	HX_CSTRING("whitePixel"),
	HX_CSTRING("_cache"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapFrontEnd_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapFrontEnd_obj::__mClass,"__mClass");
};

Class BitmapFrontEnd_obj::__mClass;

void BitmapFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.BitmapFrontEnd"), hx::TCanCast< BitmapFrontEnd_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BitmapFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
