#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTile
#include <flixel/tile/FlxTile.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
namespace flixel{
namespace tile{

Void FlxTile_obj::__construct(::flixel::tile::FlxTilemap Tilemap,int Index,Float Width,Float Height,bool Visible,int AllowCollisions)
{
HX_STACK_PUSH("FlxTile::new","flixel/tile/FlxTile.hx",10);
{
	HX_STACK_LINE(40)
	this->mapIndex = (int)0;
	HX_STACK_LINE(17)
	this->callbackFunction = null();
	HX_STACK_LINE(54)
	super::__construct((int)0,(int)0,Width,Height);
	HX_STACK_LINE(56)
	this->set_immovable(true);
	HX_STACK_LINE(57)
	this->set_moves(false);
	HX_STACK_LINE(58)
	this->filter = null();
	HX_STACK_LINE(60)
	this->tilemap = Tilemap;
	HX_STACK_LINE(61)
	this->index = Index;
	HX_STACK_LINE(62)
	this->set_visible(Visible);
	HX_STACK_LINE(63)
	this->allowCollisions = AllowCollisions;
}
;
	return null();
}

FlxTile_obj::~FlxTile_obj() { }

Dynamic FlxTile_obj::__CreateEmpty() { return  new FlxTile_obj; }
hx::ObjectPtr< FlxTile_obj > FlxTile_obj::__new(::flixel::tile::FlxTilemap Tilemap,int Index,Float Width,Float Height,bool Visible,int AllowCollisions)
{  hx::ObjectPtr< FlxTile_obj > result = new FlxTile_obj();
	result->__construct(Tilemap,Index,Width,Height,Visible,AllowCollisions);
	return result;}

Dynamic FlxTile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTile_obj > result = new FlxTile_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void FlxTile_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTile::destroy","flixel/tile/FlxTile.hx",70);
		HX_STACK_THIS(this);
		HX_STACK_LINE(71)
		this->callbackFunction = null();
		HX_STACK_LINE(72)
		this->tilemap = null();
		HX_STACK_LINE(74)
		this->super::destroy();
	}
return null();
}



FlxTile_obj::FlxTile_obj()
{
}

void FlxTile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTile);
	HX_MARK_MEMBER_NAME(mapIndex,"mapIndex");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(tilemap,"tilemap");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(callbackFunction,"callbackFunction");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mapIndex,"mapIndex");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(tilemap,"tilemap");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(callbackFunction,"callbackFunction");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTile_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return filter; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"tilemap") ) { return tilemap; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mapIndex") ) { return mapIndex; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"callbackFunction") ) { return callbackFunction; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTile_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast< ::Class >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tilemap") ) { tilemap=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mapIndex") ) { mapIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"callbackFunction") ) { callbackFunction=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mapIndex"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("tilemap"));
	outFields->push(HX_CSTRING("filter"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("mapIndex"),
	HX_CSTRING("index"),
	HX_CSTRING("tilemap"),
	HX_CSTRING("filter"),
	HX_CSTRING("callbackFunction"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTile_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTile_obj::__mClass,"__mClass");
};

Class FlxTile_obj::__mClass;

void FlxTile_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tile.FlxTile"), hx::TCanCast< FlxTile_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTile_obj::__boot()
{
}

} // end namespace flixel
} // end namespace tile
