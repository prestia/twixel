#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxTimer
#define INCLUDED_flixel_util_FlxPool_flixel_util_FlxTimer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxPool_flixel_util_FlxTimer)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxPool_flixel_util_FlxTimer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxPool_flixel_util_FlxTimer_obj OBJ_;
		FlxPool_flixel_util_FlxTimer_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxPool_flixel_util_FlxTimer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxPool_flixel_util_FlxTimer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxPool_flixel_util_FlxTimer"); }

		virtual int get_length( );
		Dynamic get_length_dyn();

		virtual Array< ::Dynamic > clear( );
		Dynamic clear_dyn();

		virtual Void putUnsafe( ::flixel::util::FlxTimer obj);
		Dynamic putUnsafe_dyn();

		virtual Void put( ::flixel::util::FlxTimer obj);
		Dynamic put_dyn();

		virtual ::flixel::util::FlxTimer get( );
		Dynamic get_dyn();

		Array< ::Dynamic > _pool;
};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxPool_flixel_util_FlxTimer */ 
