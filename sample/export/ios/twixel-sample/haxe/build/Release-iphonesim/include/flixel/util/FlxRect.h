#ifndef INCLUDED_flixel_util_FlxRect
#define INCLUDED_flixel_util_FlxRect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxRect)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxRect_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxRect_obj OBJ_;
		FlxRect_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height);

	public:
		static hx::ObjectPtr< FlxRect_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxRect_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxRect"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::flixel::util::FlxRect _union( ::flixel::util::FlxRect Rect);
		Dynamic _union_dyn();

		virtual bool containsFlxPoint( ::flixel::util::FlxPoint Point);
		Dynamic containsFlxPoint_dyn();

		virtual bool overlaps( ::flixel::util::FlxRect Rect);
		Dynamic overlaps_dyn();

		virtual ::flash::geom::Rectangle copyToFlash( ::flash::geom::Rectangle FlashRect);
		Dynamic copyToFlash_dyn();

		virtual ::flixel::util::FlxRect copyFromFlash( ::flash::geom::Rectangle FlashRect);
		Dynamic copyFromFlash_dyn();

		virtual ::flixel::util::FlxRect copyTo( ::flixel::util::FlxRect Rect);
		Dynamic copyTo_dyn();

		virtual ::flixel::util::FlxRect copyFrom( ::flixel::util::FlxRect Rect);
		Dynamic copyFrom_dyn();

		virtual ::flixel::util::FlxRect set( hx::Null< Float >  X,hx::Null< Float >  Y,hx::Null< Float >  Width,hx::Null< Float >  Height);
		Dynamic set_dyn();

		virtual Float set_bottom( Float Value);
		Dynamic set_bottom_dyn();

		virtual Float get_bottom( );
		Dynamic get_bottom_dyn();

		virtual Float set_top( Float Value);
		Dynamic set_top_dyn();

		virtual Float get_top( );
		Dynamic get_top_dyn();

		virtual Float set_right( Float Value);
		Dynamic set_right_dyn();

		virtual Float get_right( );
		Dynamic get_right_dyn();

		virtual Float set_left( Float Value);
		Dynamic set_left_dyn();

		virtual Float get_left( );
		Dynamic get_left_dyn();

		virtual Void setSize( Float Width,Float Height);
		Dynamic setSize_dyn();

		Float height;
		Float width;
		Float y;
		Float x;
};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxRect */ 
