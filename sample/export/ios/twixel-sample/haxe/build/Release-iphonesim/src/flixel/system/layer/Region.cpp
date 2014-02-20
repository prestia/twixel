#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
namespace flixel{
namespace system{
namespace layer{

Void Region_obj::__construct(hx::Null< int >  __o_startX,hx::Null< int >  __o_startY,hx::Null< int >  __o_tileWidth,hx::Null< int >  __o_tileHeight,hx::Null< int >  __o_spacingX,hx::Null< int >  __o_spacingY,hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{
HX_STACK_PUSH("Region::new","flixel/system/layer/Region.hx",20);
int startX = __o_startX.Default(0);
int startY = __o_startY.Default(0);
int tileWidth = __o_tileWidth.Default(0);
int tileHeight = __o_tileHeight.Default(0);
int spacingX = __o_spacingX.Default(0);
int spacingY = __o_spacingY.Default(0);
int width = __o_width.Default(0);
int height = __o_height.Default(0);
{
	HX_STACK_LINE(21)
	this->startX = startX;
	HX_STACK_LINE(22)
	this->startY = startY;
	HX_STACK_LINE(24)
	this->tileWidth = tileWidth;
	HX_STACK_LINE(25)
	this->tileHeight = tileHeight;
	HX_STACK_LINE(27)
	this->spacingX = spacingX;
	HX_STACK_LINE(28)
	this->spacingY = spacingY;
	HX_STACK_LINE(30)
	this->width = width;
	HX_STACK_LINE(31)
	this->height = height;
}
;
	return null();
}

Region_obj::~Region_obj() { }

Dynamic Region_obj::__CreateEmpty() { return  new Region_obj; }
hx::ObjectPtr< Region_obj > Region_obj::__new(hx::Null< int >  __o_startX,hx::Null< int >  __o_startY,hx::Null< int >  __o_tileWidth,hx::Null< int >  __o_tileHeight,hx::Null< int >  __o_spacingX,hx::Null< int >  __o_spacingY,hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{  hx::ObjectPtr< Region_obj > result = new Region_obj();
	result->__construct(__o_startX,__o_startY,__o_tileWidth,__o_tileHeight,__o_spacingX,__o_spacingY,__o_width,__o_height);
	return result;}

Dynamic Region_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Region_obj > result = new Region_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

::flixel::system::layer::Region Region_obj::clone( ){
	HX_STACK_PUSH("Region::clone","flixel/system/layer/Region.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_LINE(70)
	return ::flixel::system::layer::Region_obj::__new(this->startX,this->startY,this->tileWidth,this->tileHeight,this->spacingX,this->spacingY,this->width,this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,clone,return )

int Region_obj::get_numCols( ){
	HX_STACK_PUSH("Region::get_numCols","flixel/system/layer/Region.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_LINE(59)
	int num = (int)1;		HX_STACK_VAR(num,"num");
	HX_STACK_LINE(61)
	if (((this->tileWidth != (int)0))){
		HX_STACK_LINE(62)
		num = ::Std_obj::_int((Float(((this->width + this->spacingX))) / Float(((this->tileWidth + this->spacingX)))));
	}
	HX_STACK_LINE(66)
	return num;
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,get_numCols,return )

int Region_obj::get_numRows( ){
	HX_STACK_PUSH("Region::get_numRows","flixel/system/layer/Region.hx",44);
	HX_STACK_THIS(this);
	HX_STACK_LINE(45)
	int num = (int)1;		HX_STACK_VAR(num,"num");
	HX_STACK_LINE(47)
	if (((this->tileHeight != (int)0))){
		HX_STACK_LINE(48)
		num = ::Std_obj::_int((Float(((this->height + this->spacingY))) / Float(((this->tileHeight + this->spacingY)))));
	}
	HX_STACK_LINE(52)
	return num;
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,get_numRows,return )

int Region_obj::get_numTiles( ){
	HX_STACK_PUSH("Region::get_numTiles","flixel/system/layer/Region.hx",37);
	HX_STACK_THIS(this);
	HX_STACK_LINE(37)
	return (this->get_numRows() * this->get_numCols());
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,get_numTiles,return )


Region_obj::Region_obj()
{
}

void Region_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Region);
	HX_MARK_MEMBER_NAME(numCols,"numCols");
	HX_MARK_MEMBER_NAME(numRows,"numRows");
	HX_MARK_MEMBER_NAME(numTiles,"numTiles");
	HX_MARK_MEMBER_NAME(spacingY,"spacingY");
	HX_MARK_MEMBER_NAME(spacingX,"spacingX");
	HX_MARK_MEMBER_NAME(tileHeight,"tileHeight");
	HX_MARK_MEMBER_NAME(tileWidth,"tileWidth");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(startY,"startY");
	HX_MARK_MEMBER_NAME(startX,"startX");
	HX_MARK_END_CLASS();
}

void Region_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numCols,"numCols");
	HX_VISIT_MEMBER_NAME(numRows,"numRows");
	HX_VISIT_MEMBER_NAME(numTiles,"numTiles");
	HX_VISIT_MEMBER_NAME(spacingY,"spacingY");
	HX_VISIT_MEMBER_NAME(spacingX,"spacingX");
	HX_VISIT_MEMBER_NAME(tileHeight,"tileHeight");
	HX_VISIT_MEMBER_NAME(tileWidth,"tileWidth");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(startY,"startY");
	HX_VISIT_MEMBER_NAME(startX,"startX");
}

Dynamic Region_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"startY") ) { return startY; }
		if (HX_FIELD_EQ(inName,"startX") ) { return startX; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numCols") ) { return inCallProp ? get_numCols() : numCols; }
		if (HX_FIELD_EQ(inName,"numRows") ) { return inCallProp ? get_numRows() : numRows; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"numTiles") ) { return inCallProp ? get_numTiles() : numTiles; }
		if (HX_FIELD_EQ(inName,"spacingY") ) { return spacingY; }
		if (HX_FIELD_EQ(inName,"spacingX") ) { return spacingX; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return tileWidth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return tileHeight; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_numCols") ) { return get_numCols_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numRows") ) { return get_numRows_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_numTiles") ) { return get_numTiles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Region_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startY") ) { startY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startX") ) { startX=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numCols") ) { numCols=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numRows") ) { numRows=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"numTiles") ) { numTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spacingY") ) { spacingY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spacingX") ) { spacingX=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Region_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("numCols"));
	outFields->push(HX_CSTRING("numRows"));
	outFields->push(HX_CSTRING("numTiles"));
	outFields->push(HX_CSTRING("spacingY"));
	outFields->push(HX_CSTRING("spacingX"));
	outFields->push(HX_CSTRING("tileHeight"));
	outFields->push(HX_CSTRING("tileWidth"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("startY"));
	outFields->push(HX_CSTRING("startX"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clone"),
	HX_CSTRING("get_numCols"),
	HX_CSTRING("numCols"),
	HX_CSTRING("get_numRows"),
	HX_CSTRING("numRows"),
	HX_CSTRING("get_numTiles"),
	HX_CSTRING("numTiles"),
	HX_CSTRING("spacingY"),
	HX_CSTRING("spacingX"),
	HX_CSTRING("tileHeight"),
	HX_CSTRING("tileWidth"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("startY"),
	HX_CSTRING("startX"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Region_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Region_obj::__mClass,"__mClass");
};

Class Region_obj::__mClass;

void Region_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.layer.Region"), hx::TCanCast< Region_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Region_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace layer
