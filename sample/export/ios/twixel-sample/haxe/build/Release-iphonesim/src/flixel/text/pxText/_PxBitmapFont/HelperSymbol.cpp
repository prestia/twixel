#include <hxcpp.h>

#ifndef INCLUDED_flixel_text_pxText__PxBitmapFont_HelperSymbol
#include <flixel/text/pxText/_PxBitmapFont/HelperSymbol.h>
#endif
namespace flixel{
namespace text{
namespace pxText{
namespace _PxBitmapFont{

Void HelperSymbol_obj::__construct()
{
HX_STACK_PUSH("HelperSymbol::new","flixel/text/pxText/PxBitmapFont.hx",739);
{
}
;
	return null();
}

HelperSymbol_obj::~HelperSymbol_obj() { }

Dynamic HelperSymbol_obj::__CreateEmpty() { return  new HelperSymbol_obj; }
hx::ObjectPtr< HelperSymbol_obj > HelperSymbol_obj::__new()
{  hx::ObjectPtr< HelperSymbol_obj > result = new HelperSymbol_obj();
	result->__construct();
	return result;}

Dynamic HelperSymbol_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HelperSymbol_obj > result = new HelperSymbol_obj();
	result->__construct();
	return result;}


HelperSymbol_obj::HelperSymbol_obj()
{
}

void HelperSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HelperSymbol);
	HX_MARK_MEMBER_NAME(charCode,"charCode");
	HX_MARK_MEMBER_NAME(xadvance,"xadvance");
	HX_MARK_MEMBER_NAME(yoffset,"yoffset");
	HX_MARK_MEMBER_NAME(xoffset,"xoffset");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_END_CLASS();
}

void HelperSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(charCode,"charCode");
	HX_VISIT_MEMBER_NAME(xadvance,"xadvance");
	HX_VISIT_MEMBER_NAME(yoffset,"yoffset");
	HX_VISIT_MEMBER_NAME(xoffset,"xoffset");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
}

Dynamic HelperSymbol_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"yoffset") ) { return yoffset; }
		if (HX_FIELD_EQ(inName,"xoffset") ) { return xoffset; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"charCode") ) { return charCode; }
		if (HX_FIELD_EQ(inName,"xadvance") ) { return xadvance; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HelperSymbol_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"yoffset") ) { yoffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xoffset") ) { xoffset=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"charCode") ) { charCode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xadvance") ) { xadvance=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HelperSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("charCode"));
	outFields->push(HX_CSTRING("xadvance"));
	outFields->push(HX_CSTRING("yoffset"));
	outFields->push(HX_CSTRING("xoffset"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("charCode"),
	HX_CSTRING("xadvance"),
	HX_CSTRING("yoffset"),
	HX_CSTRING("xoffset"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HelperSymbol_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HelperSymbol_obj::__mClass,"__mClass");
};

Class HelperSymbol_obj::__mClass;

void HelperSymbol_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.text.pxText._PxBitmapFont.HelperSymbol"), hx::TCanCast< HelperSymbol_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void HelperSymbol_obj::__boot()
{
}

} // end namespace flixel
} // end namespace text
} // end namespace pxText
} // end namespace _PxBitmapFont
