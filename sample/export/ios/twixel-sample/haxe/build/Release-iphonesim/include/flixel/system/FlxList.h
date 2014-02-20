#ifndef INCLUDED_flixel_system_FlxList
#define INCLUDED_flixel_system_FlxList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,system,FlxList)
namespace flixel{
namespace system{


class HXCPP_CLASS_ATTRIBUTES  FlxList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxList_obj OBJ_;
		FlxList_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxList_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxList"); }

		virtual Void destroy( );
		Dynamic destroy_dyn();

		bool exists;
		::flixel::system::FlxList next;
		::flixel::FlxObject object;
		static int _NUM_CACHED_FLX_LIST;
		static ::flixel::system::FlxList _cachedListsHead;
		static ::flixel::system::FlxList recycle( );
		static Dynamic recycle_dyn();

		static Void clearCache( );
		static Dynamic clearCache_dyn();

};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxList */ 
