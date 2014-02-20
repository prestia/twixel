#ifndef INCLUDED_flixel_util_FlxBitmapDataPool
#define INCLUDED_flixel_util_FlxBitmapDataPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(flixel,util,FlxBitmapDataPool)
HX_DECLARE_CLASS3(flixel,util,_FlxBitmapDataPool,FlxBitmapDataPoolNode)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxBitmapDataPool_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxBitmapDataPool_obj OBJ_;
		FlxBitmapDataPool_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxBitmapDataPool_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxBitmapDataPool_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxBitmapDataPool"); }

		static int maxLength;
		static int length;
		static ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode _head;
		static ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode _tail;
		static ::flash::geom::Rectangle _rect;
		static ::flash::display::BitmapData get( int w,int h,hx::Null< bool >  transparent,Dynamic fillColor,Dynamic exactSize);
		static Dynamic get_dyn();

		static Void put( ::flash::display::BitmapData bmd);
		static Dynamic put_dyn();

		static Void clear( );
		static Dynamic clear_dyn();

		static int set_maxLength( int value);
		static Dynamic set_maxLength_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxBitmapDataPool */ 
