#ifndef INCLUDED_flixel_tweens_FlxTween
#define INCLUDED_flixel_tweens_FlxTween

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/interfaces/IFlxDestroyable.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,plugin,FlxPlugin)
HX_DECLARE_CLASS2(flixel,plugin,TweenManager)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,AngleTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,ColorTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,MultiVarTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,NumTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,VarTween)
HX_DECLARE_CLASS3(flixel,tweens,motion,CircularMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,CubicMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,LinearMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,LinearPath)
HX_DECLARE_CLASS3(flixel,tweens,motion,Motion)
HX_DECLARE_CLASS3(flixel,tweens,motion,QuadMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,QuadPath)
HX_DECLARE_CLASS3(flixel,tweens,sound,Fader)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
namespace flixel{
namespace tweens{


class HXCPP_CLASS_ATTRIBUTES  FlxTween_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxTween_obj OBJ_;
		FlxTween_obj();
		Void __construct(Float duration,hx::Null< int >  __o_type,Dynamic complete,Dynamic ease);

	public:
		static hx::ObjectPtr< FlxTween_obj > __new(Float duration,hx::Null< int >  __o_type,Dynamic complete,Dynamic ease);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTween_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::interfaces::IFlxDestroyable_obj *()
			{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxTween_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxTween"); }

		virtual int set_type( int value);
		Dynamic set_type_dyn();

		virtual Float set_percent( Float value);
		Dynamic set_percent_dyn();

		virtual Float get_percent( );
		Dynamic get_percent_dyn();

		virtual Void finish( );
		Dynamic finish_dyn();

		virtual Void cancel( );
		Dynamic cancel_dyn();

		virtual ::flixel::tweens::FlxTween start( );
		Dynamic start_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		bool _backward;
		Float _secondsSinceStart;
		int executions;
		Float scale;
		bool finished;
		int type;
		Dynamic userData;
		Dynamic ease;
		Dynamic &ease_dyn() { return ease;}
		Float duration;
		Dynamic complete;
		Dynamic &complete_dyn() { return complete;}
		bool active;
		static int PERSIST;
		static int LOOPING;
		static int PINGPONG;
		static int ONESHOT;
		static int BACKWARD;
		static ::flixel::plugin::TweenManager manager;
		static ::flixel::tweens::misc::VarTween singleVar( Dynamic Object,::String Property,Float To,Float Duration,Dynamic Options);
		static Dynamic singleVar_dyn();

		static ::flixel::tweens::misc::MultiVarTween multiVar( Dynamic Object,Dynamic Values,Float Duration,Dynamic Options);
		static Dynamic multiVar_dyn();

		static ::flixel::tweens::misc::NumTween num( Float FromValue,Float ToValue,Float Duration,Dynamic Options);
		static Dynamic num_dyn();

		static ::flixel::tweens::misc::AngleTween angle( ::flixel::FlxSprite Sprite,Float FromAngle,Float ToAngle,Float Duration,Dynamic Options);
		static Dynamic angle_dyn();

		static ::flixel::tweens::misc::ColorTween color( ::flixel::FlxSprite Sprite,Float Duration,int FromColor,int ToColor,hx::Null< Float >  FromAlpha,hx::Null< Float >  ToAlpha,Dynamic Options);
		static Dynamic color_dyn();

		static ::flixel::tweens::sound::Fader fader( Float Volume,Float Duration,Dynamic Options);
		static Dynamic fader_dyn();

		static ::flixel::tweens::motion::LinearMotion linearMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ToX,Float ToY,Float DurationOrSpeed,hx::Null< bool >  UseDuration,Dynamic Options);
		static Dynamic linearMotion_dyn();

		static ::flixel::tweens::motion::QuadMotion quadMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,Float DurationOrSpeed,hx::Null< bool >  UseDuration,Dynamic Options);
		static Dynamic quadMotion_dyn();

		static ::flixel::tweens::motion::CubicMotion cubicMotion( ::flixel::FlxObject Object,Float FromX,Float FromY,Float aX,Float aY,Float bX,Float bY,Float ToX,Float ToY,Float Duration,Dynamic Options);
		static Dynamic cubicMotion_dyn();

		static ::flixel::tweens::motion::CircularMotion circularMotion( ::flixel::FlxObject Object,Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,Float DurationOrSpeed,hx::Null< bool >  UseDuration,Dynamic Options);
		static Dynamic circularMotion_dyn();

		static ::flixel::tweens::motion::LinearPath linearPath( ::flixel::FlxObject Object,Array< ::Dynamic > Points,Float DurationOrSpeed,hx::Null< bool >  UseDuration,Dynamic Options);
		static Dynamic linearPath_dyn();

		static ::flixel::tweens::motion::QuadPath quadPath( ::flixel::FlxObject Object,Array< ::Dynamic > Points,Float DurationOrSpeed,hx::Null< bool >  UseDuration,Dynamic Options);
		static Dynamic quadPath_dyn();

		static Void addTween( ::flixel::tweens::FlxTween Tween,Dynamic Delay);
		static Dynamic addTween_dyn();

		static Void timerCallback( ::flixel::util::FlxTimer Timer);
		static Dynamic timerCallback_dyn();

};

} // end namespace flixel
} // end namespace tweens

#endif /* INCLUDED_flixel_tweens_FlxTween */ 
