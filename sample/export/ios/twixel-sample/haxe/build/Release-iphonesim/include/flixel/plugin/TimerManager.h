#ifndef INCLUDED_flixel_plugin_TimerManager
#define INCLUDED_flixel_plugin_TimerManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/plugin/FlxPlugin.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,plugin,FlxPlugin)
HX_DECLARE_CLASS2(flixel,plugin,TimerManager)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
namespace flixel{
namespace plugin{


class HXCPP_CLASS_ATTRIBUTES  TimerManager_obj : public ::flixel::plugin::FlxPlugin_obj{
	public:
		typedef ::flixel::plugin::FlxPlugin_obj super;
		typedef TimerManager_obj OBJ_;
		TimerManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TimerManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TimerManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TimerManager"); }

		virtual Void onStateSwitch( );

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void remove( ::flixel::util::FlxTimer Timer,hx::Null< bool >  ReturnInPool);
		Dynamic remove_dyn();

		virtual Void add( ::flixel::util::FlxTimer Timer);
		Dynamic add_dyn();

		virtual Void update( );

		virtual Void destroy( );

		Array< ::Dynamic > _timers;
};

} // end namespace flixel
} // end namespace plugin

#endif /* INCLUDED_flixel_plugin_TimerManager */ 
