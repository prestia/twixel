#ifndef INCLUDED_flixel_tweens_sound_Fader
#define INCLUDED_flixel_tweens_sound_Fader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/tweens/FlxTween.h>
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS3(flixel,tweens,sound,Fader)
namespace flixel{
namespace tweens{
namespace sound{


class HXCPP_CLASS_ATTRIBUTES  Fader_obj : public ::flixel::tweens::FlxTween_obj{
	public:
		typedef ::flixel::tweens::FlxTween_obj super;
		typedef Fader_obj OBJ_;
		Fader_obj();
		Void __construct(Dynamic complete,hx::Null< int >  __o_type);

	public:
		static hx::ObjectPtr< Fader_obj > __new(Dynamic complete,hx::Null< int >  __o_type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Fader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Fader"); }

		virtual Void update( );

		virtual Void fadeTo( Float volume,Float duration,Dynamic ease);
		Dynamic fadeTo_dyn();

		Float _range;
		Float _start;
};

} // end namespace flixel
} // end namespace tweens
} // end namespace sound

#endif /* INCLUDED_flixel_tweens_sound_Fader */ 
