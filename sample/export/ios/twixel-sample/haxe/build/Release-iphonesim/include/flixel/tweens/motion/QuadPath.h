#ifndef INCLUDED_flixel_tweens_motion_QuadPath
#define INCLUDED_flixel_tweens_motion_QuadPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/tweens/motion/Motion.h>
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS3(flixel,tweens,motion,Motion)
HX_DECLARE_CLASS3(flixel,tweens,motion,QuadPath)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace tweens{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES  QuadPath_obj : public ::flixel::tweens::motion::Motion_obj{
	public:
		typedef ::flixel::tweens::motion::Motion_obj super;
		typedef QuadPath_obj OBJ_;
		QuadPath_obj();
		Void __construct(Dynamic complete,hx::Null< int >  __o_type);

	public:
		static hx::ObjectPtr< QuadPath_obj > __new(Dynamic complete,hx::Null< int >  __o_type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~QuadPath_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("QuadPath"); }

		virtual Float getCurveLength( ::flixel::util::FlxPoint start,::flixel::util::FlxPoint control,::flixel::util::FlxPoint finish);
		Dynamic getCurveLength_dyn();

		virtual Void updatePath( );
		Dynamic updatePath_dyn();

		virtual Void update( );

		virtual ::flixel::tweens::FlxTween start( );

		virtual ::flixel::util::FlxPoint getPoint( hx::Null< int >  index);
		Dynamic getPoint_dyn();

		virtual ::flixel::tweens::motion::QuadPath addPoint( hx::Null< Float >  x,hx::Null< Float >  y);
		Dynamic addPoint_dyn();

		virtual ::flixel::tweens::motion::QuadPath setMotion( Float DurationOrSpeed,hx::Null< bool >  UseDuration,Dynamic Ease);
		Dynamic setMotion_dyn();

		virtual Void destroy( );

		::flixel::util::FlxPoint _c;
		::flixel::util::FlxPoint _b;
		::flixel::util::FlxPoint _a;
		Array< Float > _curveD;
		Array< Float > _curveT;
		bool _updateCurve;
		int _numSegs;
		int _index;
		Float _speed;
		Float _distance;
		Array< ::Dynamic > _points;
		static ::flixel::util::FlxPoint _Point;
		static ::flixel::util::FlxPoint _Point2;
};

} // end namespace flixel
} // end namespace tweens
} // end namespace motion

#endif /* INCLUDED_flixel_tweens_motion_QuadPath */ 
