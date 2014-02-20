#ifndef INCLUDED_flixel_util_FlxTimer
#define INCLUDED_flixel_util_FlxTimer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,plugin,FlxPlugin)
HX_DECLARE_CLASS2(flixel,plugin,TimerManager)
HX_DECLARE_CLASS2(flixel,util,FlxPool_flixel_util_FlxTimer)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxTimer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxTimer_obj OBJ_;
		FlxTimer_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxTimer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTimer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTimer"); }

		virtual Float get_progress( );
		Dynamic get_progress_dyn();

		virtual int get_elapsedLoops( );
		Dynamic get_elapsedLoops_dyn();

		virtual int get_loopsLeft( );
		Dynamic get_loopsLeft_dyn();

		virtual Float get_elapsedTime( );
		Dynamic get_elapsedTime_dyn();

		virtual Float get_timeLeft( );
		Dynamic get_timeLeft_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void abort( );
		Dynamic abort_dyn();

		virtual ::flixel::util::FlxTimer reset( hx::Null< Float >  NewTime);
		Dynamic reset_dyn();

		virtual Void run( hx::Null< Float >  Time,Dynamic Callback,hx::Null< int >  Loops);
		Dynamic run_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		int _loopsCounter;
		Float _timeCounter;
		Dynamic complete;
		Dynamic &complete_dyn() { return complete;}
		bool usePooling;
		Dynamic userData;
		bool finished;
		bool paused;
		int loops;
		Float time;
		static ::flixel::util::FlxPool_flixel_util_FlxTimer pool;
		static ::flixel::util::FlxTimer recycle( );
		static Dynamic recycle_dyn();

		static ::flixel::util::FlxTimer start( hx::Null< Float >  Time,Dynamic Callback,hx::Null< int >  Loops);
		static Dynamic start_dyn();

		static Void put( ::flixel::util::FlxTimer timer);
		static Dynamic put_dyn();

		static ::flixel::plugin::TimerManager manager;
};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxTimer */ 
