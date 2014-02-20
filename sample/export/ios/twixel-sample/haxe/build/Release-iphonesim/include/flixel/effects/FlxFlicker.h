#ifndef INCLUDED_flixel_effects_FlxFlicker
#define INCLUDED_flixel_effects_FlxFlicker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,effects,FlxFlicker)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,FlxPool_flixel_effects_FlxFlicker)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
namespace flixel{
namespace effects{


class HXCPP_CLASS_ATTRIBUTES  FlxFlicker_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxFlicker_obj OBJ_;
		FlxFlicker_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxFlicker_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxFlicker_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxFlicker"); }

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void flickerProgress( ::flixel::util::FlxTimer Timer);
		Dynamic flickerProgress_dyn();

		virtual Void release( );
		Dynamic release_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void start( );
		Dynamic start_dyn();

		virtual Void reset( ::flixel::FlxObject Object,Float Duration,Float Interval,bool EndVisibility,Dynamic CompletionCallback,Dynamic ProgressCallback);
		Dynamic reset_dyn();

		Float interval;
		Float duration;
		Dynamic progressCallback;
		Dynamic &progressCallback_dyn() { return progressCallback;}
		Dynamic completionCallback;
		Dynamic &completionCallback_dyn() { return completionCallback;}
		::flixel::util::FlxTimer timer;
		bool endVisibility;
		::flixel::FlxObject object;
		static ::flixel::util::FlxPool_flixel_effects_FlxFlicker _pool;
		static ::haxe::ds::ObjectMap _boundObjects;
		static ::flixel::effects::FlxFlicker recycle( ::flixel::FlxObject Object,Float Duration,Float Interval,bool EndVisibility,Dynamic CompletionCallback,Dynamic ProgressCallback);
		static Dynamic recycle_dyn();

		static Void put( ::flixel::effects::FlxFlicker Flicker);
		static Dynamic put_dyn();

		static Void flicker( ::flixel::FlxObject Object,hx::Null< Float >  Duration,hx::Null< Float >  Interval,hx::Null< bool >  EndVisibility,hx::Null< bool >  ForceRestart,Dynamic CompletionCallback,Dynamic ProgressCallback);
		static Dynamic flicker_dyn();

		static bool isFlickering( ::flixel::FlxObject Object);
		static Dynamic isFlickering_dyn();

		static Void stopFlickering( ::flixel::FlxObject Object);
		static Dynamic stopFlickering_dyn();

};

} // end namespace flixel
} // end namespace effects

#endif /* INCLUDED_flixel_effects_FlxFlicker */ 
