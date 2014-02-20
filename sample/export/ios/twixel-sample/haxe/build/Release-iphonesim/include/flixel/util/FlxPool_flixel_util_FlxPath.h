#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPath
#define INCLUDED_flixel_util_FlxPool_flixel_util_FlxPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxPath)
HX_DECLARE_CLASS2(flixel,util,FlxPool_flixel_util_FlxPath)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxPool_flixel_util_FlxPath_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxPool_flixel_util_FlxPath_obj OBJ_;
		FlxPool_flixel_util_FlxPath_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxPool_flixel_util_FlxPath_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxPool_flixel_util_FlxPath_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxPool_flixel_util_FlxPath"); }

		virtual int get_length( );
		Dynamic get_length_dyn();

		virtual Array< ::Dynamic > clear( );
		Dynamic clear_dyn();

		virtual Void putUnsafe( ::flixel::util::FlxPath obj);
		Dynamic putUnsafe_dyn();

		virtual Void put( ::flixel::util::FlxPath obj);
		Dynamic put_dyn();

		virtual ::flixel::util::FlxPath get( );
		Dynamic get_dyn();

		Array< ::Dynamic > _pool;
};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxPool_flixel_util_FlxPath */ 
