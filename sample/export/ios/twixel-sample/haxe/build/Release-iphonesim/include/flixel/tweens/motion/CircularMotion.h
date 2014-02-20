#ifndef INCLUDED_flixel_tweens_motion_CircularMotion
#define INCLUDED_flixel_tweens_motion_CircularMotion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/tweens/motion/Motion.h>
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS3(flixel,tweens,motion,CircularMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,Motion)
namespace flixel{
namespace tweens{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES  CircularMotion_obj : public ::flixel::tweens::motion::Motion_obj{
	public:
		typedef ::flixel::tweens::motion::Motion_obj super;
		typedef CircularMotion_obj OBJ_;
		CircularMotion_obj();
		Void __construct(Dynamic complete,hx::Null< int >  __o_type);

	public:
		static hx::ObjectPtr< CircularMotion_obj > __new(Dynamic complete,hx::Null< int >  __o_type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CircularMotion_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CircularMotion"); }

		virtual Float get_circumference( );
		Dynamic get_circumference_dyn();

		virtual Void update( );

		virtual ::flixel::tweens::motion::CircularMotion setMotion( Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,Float DurationOrSpeed,hx::Null< bool >  UseDuration,Dynamic Ease);
		Dynamic setMotion_dyn();

		Float _angleFinish;
		Float _angleStart;
		Float _radius;
		Float _centerY;
		Float _centerX;
		Float angle;
};

} // end namespace flixel
} // end namespace tweens
} // end namespace motion

#endif /* INCLUDED_flixel_tweens_motion_CircularMotion */ 
