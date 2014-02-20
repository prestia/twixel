#ifndef INCLUDED_flixel_tweens_motion_Motion
#define INCLUDED_flixel_tweens_motion_Motion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/tweens/FlxTween.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS3(flixel,tweens,motion,Motion)
namespace flixel{
namespace tweens{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES  Motion_obj : public ::flixel::tweens::FlxTween_obj{
	public:
		typedef ::flixel::tweens::FlxTween_obj super;
		typedef Motion_obj OBJ_;
		Motion_obj();
		Void __construct(Float duration,Dynamic complete,hx::Null< int >  __o_type,Dynamic ease);

	public:
		static hx::ObjectPtr< Motion_obj > __new(Float duration,Dynamic complete,hx::Null< int >  __o_type,Dynamic ease);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Motion_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Motion"); }

		virtual Void postUpdate( );
		Dynamic postUpdate_dyn();

		virtual Void update( );

		virtual ::flixel::tweens::motion::Motion setObject( ::flixel::FlxObject object);
		Dynamic setObject_dyn();

		virtual Void destroy( );

		::flixel::FlxObject _object;
		Float y;
		Float x;
};

} // end namespace flixel
} // end namespace tweens
} // end namespace motion

#endif /* INCLUDED_flixel_tweens_motion_Motion */ 
