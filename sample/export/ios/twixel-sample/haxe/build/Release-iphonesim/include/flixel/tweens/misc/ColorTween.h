#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#define INCLUDED_flixel_tweens_misc_ColorTween

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/tweens/FlxTween.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,ColorTween)
namespace flixel{
namespace tweens{
namespace misc{


class HXCPP_CLASS_ATTRIBUTES  ColorTween_obj : public ::flixel::tweens::FlxTween_obj{
	public:
		typedef ::flixel::tweens::FlxTween_obj super;
		typedef ColorTween_obj OBJ_;
		ColorTween_obj();
		Void __construct(Dynamic Complete,hx::Null< int >  __o_type);

	public:
		static hx::ObjectPtr< ColorTween_obj > __new(Dynamic Complete,hx::Null< int >  __o_type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ColorTween_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ColorTween"); }

		virtual Void update( );

		virtual ::flixel::tweens::misc::ColorTween tween( Float Duration,int FromColor,int ToColor,hx::Null< Float >  FromAlpha,hx::Null< Float >  ToAlpha,Dynamic Ease,::flixel::FlxSprite Sprite);
		Dynamic tween_dyn();

		virtual Void destroy( );

		Float _rangeB;
		Float _rangeG;
		Float _rangeR;
		Float _rangeA;
		Float _startB;
		Float _startG;
		Float _startR;
		Float _startA;
		int blue;
		int green;
		int red;
		::flixel::FlxSprite sprite;
		Float alpha;
		int color;
};

} // end namespace flixel
} // end namespace tweens
} // end namespace misc

#endif /* INCLUDED_flixel_tweens_misc_ColorTween */ 
