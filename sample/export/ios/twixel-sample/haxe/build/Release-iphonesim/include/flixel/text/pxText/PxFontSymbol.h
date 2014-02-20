#ifndef INCLUDED_flixel_text_pxText_PxFontSymbol
#define INCLUDED_flixel_text_pxText_PxFontSymbol

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,text,pxText,PxFontSymbol)
namespace flixel{
namespace text{
namespace pxText{


class HXCPP_CLASS_ATTRIBUTES  PxFontSymbol_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PxFontSymbol_obj OBJ_;
		PxFontSymbol_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PxFontSymbol_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PxFontSymbol_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PxFontSymbol"); }

		int tileID;
		int xadvance;
		int yoffset;
		int xoffset;
};

} // end namespace flixel
} // end namespace text
} // end namespace pxText

#endif /* INCLUDED_flixel_text_pxText_PxFontSymbol */ 
