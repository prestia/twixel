#ifndef INCLUDED_flixel_util_loaders_TextureRegion
#define INCLUDED_flixel_util_loaders_TextureRegion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,system,layer,Region)
HX_DECLARE_CLASS3(flixel,util,loaders,CachedGraphics)
HX_DECLARE_CLASS3(flixel,util,loaders,TextureRegion)
namespace flixel{
namespace util{
namespace loaders{


class HXCPP_CLASS_ATTRIBUTES  TextureRegion_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextureRegion_obj OBJ_;
		TextureRegion_obj();
		Void __construct(::flixel::util::loaders::CachedGraphics data,hx::Null< int >  __o_startX,hx::Null< int >  __o_startY,hx::Null< int >  __o_tileWidth,hx::Null< int >  __o_tileHeight,hx::Null< int >  __o_spacingX,hx::Null< int >  __o_spacingY,hx::Null< int >  __o_width,hx::Null< int >  __o_height);

	public:
		static hx::ObjectPtr< TextureRegion_obj > __new(::flixel::util::loaders::CachedGraphics data,hx::Null< int >  __o_startX,hx::Null< int >  __o_startY,hx::Null< int >  __o_tileWidth,hx::Null< int >  __o_tileHeight,hx::Null< int >  __o_spacingX,hx::Null< int >  __o_spacingY,hx::Null< int >  __o_width,hx::Null< int >  __o_height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TextureRegion_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TextureRegion"); }

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::flixel::util::loaders::TextureRegion clone( );
		Dynamic clone_dyn();

		::flixel::system::layer::Region region;
		::flixel::util::loaders::CachedGraphics data;
};

} // end namespace flixel
} // end namespace util
} // end namespace loaders

#endif /* INCLUDED_flixel_util_loaders_TextureRegion */ 
