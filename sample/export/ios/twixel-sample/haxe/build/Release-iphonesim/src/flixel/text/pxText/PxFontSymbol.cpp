#include <hxcpp.h>

#ifndef INCLUDED_flixel_text_pxText_PxFontSymbol
#include <flixel/text/pxText/PxFontSymbol.h>
#endif
namespace flixel{
namespace text{
namespace pxText{

Void PxFontSymbol_obj::__construct()
{
HX_STACK_PUSH("PxFontSymbol::new","flixel/text/pxText/PxFontSymbol.hx",26);
{
}
;
	return null();
}

PxFontSymbol_obj::~PxFontSymbol_obj() { }

Dynamic PxFontSymbol_obj::__CreateEmpty() { return  new PxFontSymbol_obj; }
hx::ObjectPtr< PxFontSymbol_obj > PxFontSymbol_obj::__new()
{  hx::ObjectPtr< PxFontSymbol_obj > result = new PxFontSymbol_obj();
	result->__construct();
	return result;}

Dynamic PxFontSymbol_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PxFontSymbol_obj > result = new PxFontSymbol_obj();
	result->__construct();
	return result;}


PxFontSymbol_obj::PxFontSymbol_obj()
{
}

void PxFontSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PxFontSymbol);
	HX_MARK_MEMBER_NAME(tileID,"tileID");
	HX_MARK_MEMBER_NAME(xadvance,"xadvance");
	HX_MARK_MEMBER_NAME(yoffset,"yoffset");
	HX_MARK_MEMBER_NAME(xoffset,"xoffset");
	HX_MARK_END_CLASS();
}

void PxFontSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tileID,"tileID");
	HX_VISIT_MEMBER_NAME(xadvance,"xadvance");
	HX_VISIT_MEMBER_NAME(yoffset,"yoffset");
	HX_VISIT_MEMBER_NAME(xoffset,"xoffset");
}

Dynamic PxFontSymbol_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tileID") ) { return tileID; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"yoffset") ) { return yoffset; }
		if (HX_FIELD_EQ(inName,"xoffset") ) { return xoffset; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xadvance") ) { return xadvance; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PxFontSymbol_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tileID") ) { tileID=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"yoffset") ) { yoffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xoffset") ) { xoffset=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xadvance") ) { xadvance=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PxFontSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tileID"));
	outFields->push(HX_CSTRING("xadvance"));
	outFields->push(HX_CSTRING("yoffset"));
	outFields->push(HX_CSTRING("xoffset"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("tileID"),
	HX_CSTRING("xadvance"),
	HX_CSTRING("yoffset"),
	HX_CSTRING("xoffset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PxFontSymbol_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PxFontSymbol_obj::__mClass,"__mClass");
};

Class PxFontSymbol_obj::__mClass;

void PxFontSymbol_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.text.pxText.PxFontSymbol"), hx::TCanCast< PxFontSymbol_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PxFontSymbol_obj::__boot()
{
}

} // end namespace flixel
} // end namespace text
} // end namespace pxText
