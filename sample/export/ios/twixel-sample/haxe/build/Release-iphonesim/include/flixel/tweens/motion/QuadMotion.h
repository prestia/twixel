#ifndef INCLUDED_flixel_tweens_motion_QuadMotion
#define INCLUDED_flixel_tweens_motion_QuadMotion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/tweens/motion/Motion.h>
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS3(flixel,tweens,motion,Motion)
HX_DECLARE_CLASS3(flixel,tweens,motion,QuadMotion)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace tweens{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES  QuadMotion_obj : public ::flixel::tweens::motion::Motion_obj{
	public:
		typedef ::flixel::tweens::motion::Motion_obj super;
		typedef QuadMotion_obj OBJ_;
		QuadMotion_obj();
		Void __construct(Dynamic complete,hx::Null< int >  __o_type);

	public:
		static hx::ObjectPtr< QuadMotion_obj > __new(Dynamic complete,hx::Null< int >  __o_type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~QuadMotion_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("QuadMotion"); }

		virtual Float get_distance( );
		Dynamic get_distance_dyn();

		virtual Void update( );

		virtual ::flixel::tweens::motion::QuadMotion setMotion( Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,Float DurationOrSpeed,hx::Null< bool >  UseDuration,Dynamic Ease);
		Dynamic setMotion_dyn();

		Float _controlY;
		Float _controlX;
		Float _toY;
		Float _toX;
		Float _fromY;
		Float _fromX;
		Float _distance;
		static ::flixel::util::FlxPoint point;
		static ::flixel::util::FlxPoint point2;
};

} // end namespace flixel
} // end namespace tweens
} // end namespace motion

#endif /* INCLUDED_flixel_tweens_motion_QuadMotion */ 
