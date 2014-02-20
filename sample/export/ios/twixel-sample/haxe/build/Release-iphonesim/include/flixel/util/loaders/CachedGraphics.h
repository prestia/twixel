#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#define INCLUDED_flixel_util_loaders_CachedGraphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,system,layer,TileSheetData)
HX_DECLARE_CLASS3(flixel,util,loaders,CachedGraphics)
HX_DECLARE_CLASS3(flixel,util,loaders,TexturePackerData)
HX_DECLARE_CLASS3(flixel,util,loaders,TextureRegion)
namespace flixel{
namespace util{
namespace loaders{


class HXCPP_CLASS_ATTRIBUTES  CachedGraphics_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CachedGraphics_obj OBJ_;
		CachedGraphics_obj();
		Void __construct(::String Key,::flash::display::BitmapData Bitmap,hx::Null< bool >  __o_Persist);

	public:
		static hx::ObjectPtr< CachedGraphics_obj > __new(::String Key,::flash::display::BitmapData Bitmap,hx::Null< bool >  __o_Persist);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CachedGraphics_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CachedGraphics"); }

		virtual bool set_destroyOnNoUse( bool Value);
		Dynamic set_destroyOnNoUse_dyn();

		virtual int set_useCount( int Value);
		Dynamic set_useCount_dyn();

		virtual bool get_canBeDumped( );
		Dynamic get_canBeDumped_dyn();

		virtual ::flash::display::BitmapData getBitmapFromSystem( );
		Dynamic getBitmapFromSystem_dyn();

		virtual ::flixel::system::layer::TileSheetData get_tilesheet( );
		Dynamic get_tilesheet_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::flixel::util::loaders::TextureRegion getRegionForFrame( ::String FrameName);
		Dynamic getRegionForFrame_dyn();

		virtual Void onContext( );
		Dynamic onContext_dyn();

		virtual Void undump( );
		Dynamic undump_dyn();

		virtual Void dump( );
		Dynamic dump_dyn();

		::flixel::system::layer::TileSheetData _tilesheet;
		int useCount;
		::flixel::system::layer::TileSheetData tilesheet;
		bool isDumped;
		bool destroyOnNoUse;
		bool persist;
		::flixel::util::loaders::TexturePackerData data;
		::Class assetsClass;
		::String assetsKey;
		::flash::display::BitmapData bitmap;
		::String key;
};

} // end namespace flixel
} // end namespace util
} // end namespace loaders

#endif /* INCLUDED_flixel_util_loaders_CachedGraphics */ 
