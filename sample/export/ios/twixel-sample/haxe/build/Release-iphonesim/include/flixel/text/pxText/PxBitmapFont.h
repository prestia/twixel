#ifndef INCLUDED_flixel_text_pxText_PxBitmapFont
#define INCLUDED_flixel_text_pxText_PxBitmapFont

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,system,layer,Region)
HX_DECLARE_CLASS3(flixel,system,layer,TileSheetData)
HX_DECLARE_CLASS3(flixel,text,pxText,PxBitmapFont)
HX_DECLARE_CLASS4(flixel,text,pxText,_PxBitmapFont,HelperSymbol)
HX_DECLARE_CLASS3(flixel,util,loaders,CachedGraphics)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace flixel{
namespace text{
namespace pxText{


class HXCPP_CLASS_ATTRIBUTES  PxBitmapFont_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PxBitmapFont_obj OBJ_;
		PxBitmapFont_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PxBitmapFont_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PxBitmapFont_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PxBitmapFont"); }

		virtual Void setCachedGraphics( ::flixel::util::loaders::CachedGraphics value);
		Dynamic setCachedGraphics_dyn();

		virtual int get_numLetters( );
		Dynamic get_numLetters_dyn();

		virtual int get_bgTileID( );
		Dynamic get_bgTileID_dyn();

		int bgTileID;
		virtual ::flash::display::BitmapData get_pixels( );
		Dynamic get_pixels_dyn();

		::flash::display::BitmapData pixels;
		virtual int getFontHeight( );
		Dynamic getFontHeight_dyn();

		virtual int getTextWidth( ::String PxText,hx::Null< int >  PxLetterSpacing,hx::Null< Float >  PxFontScale);
		Dynamic getTextWidth_dyn();

		virtual Void render( Array< Float > DrawData,::String PxText,int PxColor,int PxSecondColor,Float PxAlpha,Float PxOffsetX,Float PxOffsetY,int PxLetterSpacing,Float PxScale,hx::Null< bool >  PxUseColor);
		Dynamic render_dyn();

		virtual Void setGlyph( ::flixel::system::layer::TileSheetData Tiles,int PxCharID,::flash::geom::Rectangle PxRect,hx::Null< int >  PxOffsetX,hx::Null< int >  PxOffsetY,hx::Null< int >  PxAdvanceX);
		Dynamic setGlyph_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual ::flash::display::BitmapData prepareAngelCodeBitmapData( ::flash::display::BitmapData PxBitmapData,::Xml PxXMLData,Array< ::Dynamic > PxSymbols);
		Dynamic prepareAngelCodeBitmapData_dyn();

		virtual ::flash::display::BitmapData preparePixelizerBitmapData( ::flash::display::BitmapData PxBitmapData,Array< ::Dynamic > PxRects);
		Dynamic preparePixelizerBitmapData_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void updateGlyphData( ::flixel::system::layer::TileSheetData Tiles);
		Dynamic updateGlyphData_dyn();

		virtual ::flixel::text::pxText::PxBitmapFont loadAngelCode( ::flash::display::BitmapData pBitmapData,::Xml pXMLData);
		Dynamic loadAngelCode_dyn();

		virtual ::flixel::text::pxText::PxBitmapFont loadPixelizer( ::flash::display::BitmapData PxBitmapData,::String PxLetters);
		Dynamic loadPixelizer_dyn();

		::flixel::util::loaders::CachedGraphics cachedGraphics;
		::flixel::system::layer::Region _region;
		Array< ::Dynamic > _symbols;
		Array< ::Dynamic > _tileRects;
		::flash::geom::Point _point;
		int _maxHeight;
		::String _glyphString;
		int _bgTileID;
		int _num_letters;
		::haxe::ds::IntMap _glyphs;
		static ::haxe::ds::StringMap _storedFonts;
		static ::flash::geom::Point ZERO_POINT;
		static Void store( ::String PxHandle,::flixel::text::pxText::PxBitmapFont PxFont);
		static Dynamic store_dyn();

		static ::flixel::text::pxText::PxBitmapFont fetch( ::String PxHandle);
		static Dynamic fetch_dyn();

		static Void clearStorage( );
		static Dynamic clearStorage_dyn();

};

} // end namespace flixel
} // end namespace text
} // end namespace pxText

#endif /* INCLUDED_flixel_text_pxText_PxBitmapFont */ 
