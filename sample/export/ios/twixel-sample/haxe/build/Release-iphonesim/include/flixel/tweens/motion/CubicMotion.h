#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#define INCLUDED_flixel_tweens_motion_CubicMotion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/tweens/motion/Motion.h>
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS3(flixel,tweens,motion,CubicMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,Motion)
namespace flixel{
namespace tweens{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES  CubicMotion_obj : public ::flixel::tweens::motion::Motion_obj{
	public:
		typedef ::flixel::tweens::motion::Motion_obj super;
		typedef CubicMotion_obj OBJ_;
		CubicMotion_obj();
		Void __construct(Dynamic complete,hx::Null< int >  __o_type);

	public:
		static hx::ObjectPtr< CubicMotion_obj > __new(Dynamic complete,hx::Null< int >  __o_type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CubicMotion_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CubicMotion"); }

		virtual Void update( );

		virtual ::flixel::tweens::motion::CubicMotion setMotion( Float fromX,Float fromY,Float aX,Float aY,Float bX,Float bY,Float toX,Float toY,Float duration,Dynamic ease);
		Dynamic setMotion_dyn();

		Float _tt;
		Float _ttt;
		Float _bY;
		Float _bX;
		Float _aY;
		Float _aX;
		Float _toY;
		Float _toX;
		Float _fromY;
		Float _fromX;
};

} // end namespace flixel
} // end namespace tweens
} // end namespace motion

#endif /* INCLUDED_flixel_tweens_motion_CubicMotion */ 
