#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapBuffer
#include <flixel/tile/FlxTilemapBuffer.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace tile{

Void FlxTilemapBuffer_obj::__construct(int TileWidth,int TileHeight,int WidthInTiles,int HeightInTiles,::flixel::FlxCamera Camera,hx::Null< Float >  __o_ScaleX,hx::Null< Float >  __o_ScaleY)
{
HX_STACK_PUSH("FlxTilemapBuffer::new","flixel/tile/FlxTilemapBuffer.hx",14);
Float ScaleX = __o_ScaleX.Default(1.0);
Float ScaleY = __o_ScaleY.Default(1.0);
{
	HX_STACK_LINE(45)
	this->forceComplexRender = false;
	HX_STACK_LINE(64)
	this->updateColumns(TileWidth,WidthInTiles,ScaleX,Camera);
	HX_STACK_LINE(65)
	this->updateRows(TileHeight,HeightInTiles,ScaleY,Camera);
	HX_STACK_LINE(73)
	this->dirty = true;
}
;
	return null();
}

FlxTilemapBuffer_obj::~FlxTilemapBuffer_obj() { }

Dynamic FlxTilemapBuffer_obj::__CreateEmpty() { return  new FlxTilemapBuffer_obj; }
hx::ObjectPtr< FlxTilemapBuffer_obj > FlxTilemapBuffer_obj::__new(int TileWidth,int TileHeight,int WidthInTiles,int HeightInTiles,::flixel::FlxCamera Camera,hx::Null< Float >  __o_ScaleX,hx::Null< Float >  __o_ScaleY)
{  hx::ObjectPtr< FlxTilemapBuffer_obj > result = new FlxTilemapBuffer_obj();
	result->__construct(TileWidth,TileHeight,WidthInTiles,HeightInTiles,Camera,__o_ScaleX,__o_ScaleY);
	return result;}

Dynamic FlxTilemapBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTilemapBuffer_obj > result = new FlxTilemapBuffer_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

Void FlxTilemapBuffer_obj::updateRows( int TileHeight,int HeightInTiles,hx::Null< Float >  __o_ScaleY,::flixel::FlxCamera Camera){
Float ScaleY = __o_ScaleY.Default(1.0);
	HX_STACK_PUSH("FlxTilemapBuffer::updateRows","flixel/tile/FlxTilemapBuffer.hx",156);
	HX_STACK_THIS(this);
	HX_STACK_ARG(TileHeight,"TileHeight");
	HX_STACK_ARG(HeightInTiles,"HeightInTiles");
	HX_STACK_ARG(ScaleY,"ScaleY");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(157)
		if (((HeightInTiles < (int)0))){
			HX_STACK_LINE(158)
			HeightInTiles = (int)0;
		}
		HX_STACK_LINE(162)
		if (((Camera == null()))){
			HX_STACK_LINE(163)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(167)
		this->rows = (::Math_obj::ceil((Float(Camera->height) / Float(((TileHeight * ScaleY))))) + (int)1);
		HX_STACK_LINE(169)
		if (((this->rows > HeightInTiles))){
			HX_STACK_LINE(170)
			this->rows = HeightInTiles;
		}
		HX_STACK_LINE(174)
		this->height = ::Std_obj::_int(((this->rows * TileHeight) * ScaleY));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapBuffer_obj,updateRows,(void))

Void FlxTilemapBuffer_obj::updateColumns( int TileWidth,int WidthInTiles,hx::Null< Float >  __o_ScaleX,::flixel::FlxCamera Camera){
Float ScaleX = __o_ScaleX.Default(1.0);
	HX_STACK_PUSH("FlxTilemapBuffer::updateColumns","flixel/tile/FlxTilemapBuffer.hx",134);
	HX_STACK_THIS(this);
	HX_STACK_ARG(TileWidth,"TileWidth");
	HX_STACK_ARG(WidthInTiles,"WidthInTiles");
	HX_STACK_ARG(ScaleX,"ScaleX");
	HX_STACK_ARG(Camera,"Camera");
{
		HX_STACK_LINE(135)
		if (((WidthInTiles < (int)0))){
			HX_STACK_LINE(136)
			WidthInTiles = (int)0;
		}
		HX_STACK_LINE(140)
		if (((Camera == null()))){
			HX_STACK_LINE(141)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(145)
		this->columns = (::Math_obj::ceil((Float(Camera->width) / Float(((TileWidth * ScaleX))))) + (int)1);
		HX_STACK_LINE(147)
		if (((this->columns > WidthInTiles))){
			HX_STACK_LINE(148)
			this->columns = WidthInTiles;
		}
		HX_STACK_LINE(152)
		this->width = ::Std_obj::_int(((this->columns * TileWidth) * ScaleX));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapBuffer_obj,updateColumns,(void))

Void FlxTilemapBuffer_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTilemapBuffer::destroy","flixel/tile/FlxTilemapBuffer.hx",80);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemapBuffer_obj,destroy,(void))


FlxTilemapBuffer_obj::FlxTilemapBuffer_obj()
{
}

void FlxTilemapBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemapBuffer);
	HX_MARK_MEMBER_NAME(forceComplexRender,"forceComplexRender");
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void FlxTilemapBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(forceComplexRender,"forceComplexRender");
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic FlxTilemapBuffer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { return rows; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"columns") ) { return columns; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateRows") ) { return updateRows_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateColumns") ) { return updateColumns_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"forceComplexRender") ) { return forceComplexRender; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTilemapBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"forceComplexRender") ) { forceComplexRender=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilemapBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("forceComplexRender"));
	outFields->push(HX_CSTRING("columns"));
	outFields->push(HX_CSTRING("rows"));
	outFields->push(HX_CSTRING("dirty"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateRows"),
	HX_CSTRING("updateColumns"),
	HX_CSTRING("destroy"),
	HX_CSTRING("forceComplexRender"),
	HX_CSTRING("columns"),
	HX_CSTRING("rows"),
	HX_CSTRING("dirty"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilemapBuffer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilemapBuffer_obj::__mClass,"__mClass");
};

Class FlxTilemapBuffer_obj::__mClass;

void FlxTilemapBuffer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tile.FlxTilemapBuffer"), hx::TCanCast< FlxTilemapBuffer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTilemapBuffer_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tile
