#ifndef INCLUDED_haxe_Timer
#define INCLUDED_haxe_Timer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Timer)
namespace haxe{


class HXCPP_CLASS_ATTRIBUTES  Timer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Timer_obj OBJ_;
		Timer_obj();
		Void __construct(Float _time);

	public:
		static hx::ObjectPtr< Timer_obj > __new(Float _time);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Timer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Timer"); }

		virtual Void stop( );
		Dynamic stop_dyn();

		Dynamic run;
		inline Dynamic &run_dyn() {return run; }

		bool running;
		Float fire_at;
		Float time;
		static Array< ::Dynamic > sRunningTimers;
		static Dynamic measure( Dynamic f,Dynamic pos);
		static Dynamic measure_dyn();

		static Float __nextWake( Float limit);
		static Dynamic __nextWake_dyn();

		static Void __checkTimers( );
		static Dynamic __checkTimers_dyn();

		static Float GetMS( );
		static Dynamic GetMS_dyn();

		static ::haxe::Timer delay( Dynamic _f,int _time);
		static Dynamic delay_dyn();

		static Float stamp( );
		static Dynamic stamp_dyn();

		static Dynamic lime_time_stamp;
		static Dynamic &lime_time_stamp_dyn() { return lime_time_stamp;}
};

} // end namespace haxe

#endif /* INCLUDED_haxe_Timer */ 
