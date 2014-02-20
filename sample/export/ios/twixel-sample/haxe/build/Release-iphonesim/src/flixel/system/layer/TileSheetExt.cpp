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
#ifndef INCLUDED_flixel_system_layer_RectPointTileID
#include <flixel/system/layer/RectPointTileID.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
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

Void TileSheetExt_obj::__construct(::flash::display::BitmapData bitmap)
{
HX_STACK_PUSH("TileSheetExt::new","flixel/system/layer/TileSheetExt.hx",19);
{
	HX_STACK_LINE(20)
	super::__construct(bitmap);
	HX_STACK_LINE(22)
	this->tileIDs = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(23)
	this->tileOrder = Array_obj< ::String >::__new();
	HX_STACK_LINE(24)
	this->numTiles = (int)0;
}
;
	return null();
}

TileSheetExt_obj::~TileSheetExt_obj() { }

Dynamic TileSheetExt_obj::__CreateEmpty() { return  new TileSheetExt_obj; }
hx::ObjectPtr< TileSheetExt_obj > TileSheetExt_obj::__new(::flash::display::BitmapData bitmap)
{  hx::ObjectPtr< TileSheetExt_obj > result = new TileSheetExt_obj();
	result->__construct(bitmap);
	return result;}

Dynamic TileSheetExt_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileSheetExt_obj > result = new TileSheetExt_obj();
	result->__construct(inArgs[0]);
	return result;}

::flash::display::BitmapData TileSheetExt_obj::get_nmeBitmap( ){
	HX_STACK_PUSH("TileSheetExt::get_nmeBitmap","flixel/system/layer/TileSheetExt.hx",105);
	HX_STACK_THIS(this);
	HX_STACK_LINE(105)
	return this->__bitmap;
}


HX_DEFINE_DYNAMIC_FUNC0(TileSheetExt_obj,get_nmeBitmap,return )

Void TileSheetExt_obj::destroy( ){
{
		HX_STACK_PUSH("TileSheetExt::destroy","flixel/system/layer/TileSheetExt.hx",84);
		HX_STACK_THIS(this);
		HX_STACK_LINE(86)
		this->__bitmap = null();
		HX_STACK_LINE(87)
		this->__handle = null();
		HX_STACK_LINE(90)
		this->tileOrder = null();
		HX_STACK_LINE(91)
		if (((this->tileIDs != null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ::flixel::system::layer::TileSheetExt_obj *__this){
					HX_STACK_PUSH("*::closure","flixel/system/layer/TileSheetExt.hx",93);
					{
						HX_STACK_LINE(93)
						Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->tileIDs);		HX_STACK_VAR(_e,"_e");

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_e)
						Dynamic run(){
							HX_STACK_PUSH("*::_Function_3_1","flixel/system/layer/TileSheetExt.hx",93);
							{
								HX_STACK_LINE(93)
								return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
							}
							return null();
						}
						HX_END_LOCAL_FUNC0(return)

						HX_STACK_LINE(93)
						return  Dynamic(new _Function_3_1(_e));
					}
					return null();
				}
			};
			HX_STACK_LINE(92)
			for(::cpp::FastIterator_obj< ::flixel::system::layer::RectPointTileID > *__it = ::cpp::CreateFastIterator< ::flixel::system::layer::RectPointTileID >((_Function_2_1::Block(this))());  __it->hasNext(); ){
				::flixel::system::layer::RectPointTileID tileObj = __it->next();
				tileObj->destroy();
			}
		}
		HX_STACK_LINE(98)
		this->tileIDs = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileSheetExt_obj,destroy,(void))

int TileSheetExt_obj::addTileRectID( ::flash::geom::Rectangle rect,::flash::geom::Point point){
	HX_STACK_PUSH("TileSheetExt::addTileRectID","flixel/system/layer/TileSheetExt.hx",67);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(68)
	::String key = this->getKey(rect,point);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(70)
	if ((this->tileIDs->exists(key))){
		HX_STACK_LINE(71)
		return this->tileIDs->get(key)->__Field(HX_CSTRING("id"),true);
	}
	HX_STACK_LINE(75)
	this->addTileRect(rect,point);
	HX_STACK_LINE(76)
	int tileID = this->numTiles;		HX_STACK_VAR(tileID,"tileID");
	HX_STACK_LINE(77)
	(this->numTiles)++;
	HX_STACK_LINE(78)
	this->tileOrder[tileID] = key;
	HX_STACK_LINE(79)
	this->tileIDs->set(key,::flixel::system::layer::RectPointTileID_obj::__new(tileID,rect,point));
	HX_STACK_LINE(80)
	return tileID;
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetExt_obj,addTileRectID,return )

::String TileSheetExt_obj::getKey( ::flash::geom::Rectangle rect,::flash::geom::Point point){
	HX_STACK_PUSH("TileSheetExt::getKey","flixel/system/layer/TileSheetExt.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rect,"rect");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(54)
	::String key = (((((((rect->x + HX_CSTRING("_")) + rect->y) + HX_CSTRING("_")) + rect->width) + HX_CSTRING("_")) + rect->height) + HX_CSTRING("_"));		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(55)
	if (((point != null()))){
		HX_STACK_LINE(56)
		key = (((key + point->x) + HX_CSTRING("_")) + point->y);
	}
	HX_STACK_LINE(59)
	return key;
}


HX_DEFINE_DYNAMIC_FUNC2(TileSheetExt_obj,getKey,return )

Void TileSheetExt_obj::rebuildFromOld( ::flixel::system::layer::TileSheetExt old){
{
		HX_STACK_PUSH("TileSheetExt::rebuildFromOld","flixel/system/layer/TileSheetExt.hx",28);
		HX_STACK_THIS(this);
		HX_STACK_ARG(old,"old");
		HX_STACK_LINE(29)
		int num = old->tileOrder->length;		HX_STACK_VAR(num,"num");
		HX_STACK_LINE(30)
		{
			HX_STACK_LINE(30)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(30)
			while(((_g < num))){
				HX_STACK_LINE(30)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(32)
				::String tileName = old->tileOrder->__get(i);		HX_STACK_VAR(tileName,"tileName");
				HX_STACK_LINE(33)
				::flixel::system::layer::RectPointTileID tileObj = old->tileIDs->get(tileName);		HX_STACK_VAR(tileObj,"tileObj");
				HX_STACK_LINE(34)
				this->addTileRect(tileObj->rect,tileObj->point);
			}
		}
		HX_STACK_LINE(37)
		this->tileIDs = old->tileIDs;
		HX_STACK_LINE(38)
		this->tileOrder = old->tileOrder;
		HX_STACK_LINE(39)
		this->numTiles = old->numTiles;
		HX_STACK_LINE(41)
		old->tileIDs = null();
		HX_STACK_LINE(42)
		old->tileOrder = null();
		HX_STACK_LINE(43)
		old->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileSheetExt_obj,rebuildFromOld,(void))

int TileSheetExt_obj::_DRAWCALLS;


TileSheetExt_obj::TileSheetExt_obj()
{
}

void TileSheetExt_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileSheetExt);
	HX_MARK_MEMBER_NAME(nmeBitmap,"nmeBitmap");
	HX_MARK_MEMBER_NAME(tileOrder,"tileOrder");
	HX_MARK_MEMBER_NAME(tileIDs,"tileIDs");
	HX_MARK_MEMBER_NAME(numTiles,"numTiles");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TileSheetExt_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nmeBitmap,"nmeBitmap");
	HX_VISIT_MEMBER_NAME(tileOrder,"tileOrder");
	HX_VISIT_MEMBER_NAME(tileIDs,"tileIDs");
	HX_VISIT_MEMBER_NAME(numTiles,"numTiles");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TileSheetExt_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"getKey") ) { return getKey_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"tileIDs") ) { return tileIDs; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"numTiles") ) { return numTiles; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeBitmap") ) { return inCallProp ? get_nmeBitmap() : nmeBitmap; }
		if (HX_FIELD_EQ(inName,"tileOrder") ) { return tileOrder; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_DRAWCALLS") ) { return _DRAWCALLS; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_nmeBitmap") ) { return get_nmeBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"addTileRectID") ) { return addTileRectID_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rebuildFromOld") ) { return rebuildFromOld_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileSheetExt_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"tileIDs") ) { tileIDs=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"numTiles") ) { numTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeBitmap") ) { nmeBitmap=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileOrder") ) { tileOrder=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_DRAWCALLS") ) { _DRAWCALLS=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileSheetExt_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nmeBitmap"));
	outFields->push(HX_CSTRING("tileOrder"));
	outFields->push(HX_CSTRING("tileIDs"));
	outFields->push(HX_CSTRING("numTiles"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_DRAWCALLS"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_nmeBitmap"),
	HX_CSTRING("nmeBitmap"),
	HX_CSTRING("destroy"),
	HX_CSTRING("addTileRectID"),
	HX_CSTRING("getKey"),
	HX_CSTRING("rebuildFromOld"),
	HX_CSTRING("tileOrder"),
	HX_CSTRING("tileIDs"),
	HX_CSTRING("numTiles"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileSheetExt_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TileSheetExt_obj::_DRAWCALLS,"_DRAWCALLS");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileSheetExt_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TileSheetExt_obj::_DRAWCALLS,"_DRAWCALLS");
};

Class TileSheetExt_obj::__mClass;

void TileSheetExt_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.layer.TileSheetExt"), hx::TCanCast< TileSheetExt_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TileSheetExt_obj::__boot()
{
	_DRAWCALLS= (int)0;
}

} // end namespace flixel
} // end namespace system
} // end namespace layer
