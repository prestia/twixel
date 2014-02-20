#ifndef INCLUDED_flixel_animation_FlxAnimationController
#define INCLUDED_flixel_animation_FlxAnimationController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,animation,FlxAnimation)
HX_DECLARE_CLASS2(flixel,animation,FlxAnimationController)
HX_DECLARE_CLASS2(flixel,animation,FlxBaseAnimation)
HX_DECLARE_CLASS2(flixel,animation,FlxPrerotatedAnimation)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS4(flixel,system,layer,frames,FlxFrame)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace flixel{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES  FlxAnimationController_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxAnimationController_obj OBJ_;
		FlxAnimationController_obj();
		Void __construct(::flixel::FlxSprite Sprite);

	public:
		static hx::ObjectPtr< FlxAnimationController_obj > __new(::flixel::FlxSprite Sprite);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxAnimationController_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxAnimationController"); }

		virtual int getFrameIndex( ::flixel::system::layer::frames::FlxFrame Frame);
		Dynamic getFrameIndex_dyn();

		virtual int get_frames( );
		Dynamic get_frames_dyn();

		virtual bool set_finished( bool Value);
		Dynamic set_finished_dyn();

		virtual bool get_finished( );
		Dynamic get_finished_dyn();

		virtual bool set_paused( bool Value);
		Dynamic set_paused_dyn();

		virtual bool get_paused( );
		Dynamic get_paused_dyn();

		virtual ::flixel::animation::FlxAnimation set_curAnim( ::flixel::animation::FlxAnimation Anim);
		Dynamic set_curAnim_dyn();

		virtual ::flixel::animation::FlxAnimation get_curAnim( );
		Dynamic get_curAnim_dyn();

		virtual ::String set_name( ::String AnimName);
		Dynamic set_name_dyn();

		virtual ::String get_name( );
		Dynamic get_name_dyn();

		virtual ::String set_frameName( ::String Value);
		Dynamic set_frameName_dyn();

		virtual ::String get_frameName( );
		Dynamic get_frameName_dyn();

		virtual int set_frameIndex( int Frame);
		Dynamic set_frameIndex_dyn();

		virtual Void randomFrame( );
		Dynamic randomFrame_dyn();

		virtual ::flixel::animation::FlxAnimation getByName( ::String Name);
		Dynamic getByName_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void play( ::String AnimName,hx::Null< bool >  Force,hx::Null< int >  Frame);
		Dynamic play_dyn();

		virtual Void addByPrefix( ::String Name,::String Prefix,hx::Null< int >  FrameRate,hx::Null< bool >  Looped);
		Dynamic addByPrefix_dyn();

		virtual int findSpriteFrame( ::String Prefix,int Index,::String Postfix);
		Dynamic findSpriteFrame_dyn();

		virtual Void addByIndicies( ::String Name,::String Prefix,Array< int > Indicies,::String Postfix,hx::Null< int >  FrameRate,hx::Null< bool >  Looped);
		Dynamic addByIndicies_dyn();

		virtual Void addByStringIndicies( ::String Name,::String Prefix,Array< ::String > Indicies,::String Postfix,hx::Null< int >  FrameRate,hx::Null< bool >  Looped);
		Dynamic addByStringIndicies_dyn();

		virtual Void addByNames( ::String Name,Array< ::String > FrameNames,hx::Null< int >  FrameRate,hx::Null< bool >  Looped);
		Dynamic addByNames_dyn();

		virtual Void add( ::String Name,Array< int > Frames,hx::Null< int >  FrameRate,hx::Null< bool >  Looped);
		Dynamic add_dyn();

		virtual ::flixel::animation::FlxAnimation get( ::String Name);
		Dynamic get_dyn();

		virtual Void clear_animations( );
		Dynamic clear_animations_dyn();

		virtual Void clear_prerotated( );
		Dynamic clear_prerotated_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void destroyAnimations( );
		Dynamic destroyAnimations_dyn();

		virtual Void createPrerotated( ::flixel::animation::FlxAnimationController Controller);
		Dynamic createPrerotated_dyn();

		virtual ::flixel::animation::FlxAnimationController copyFrom( ::flixel::animation::FlxAnimationController controller);
		Dynamic copyFrom_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		::flixel::animation::FlxPrerotatedAnimation _prerotated;
		::haxe::ds::StringMap _animations;
		::flixel::animation::FlxAnimation _curAnim;
		::flixel::FlxSprite _sprite;
		Dynamic callback;
		Dynamic &callback_dyn() { return callback;}
		int frames;
		int frameIndex;
		static int prefixLength;
		static int postfixLength;
		static int frameSortFunction( ::flixel::system::layer::frames::FlxFrame frame1,::flixel::system::layer::frames::FlxFrame frame2);
		static Dynamic frameSortFunction_dyn();

};

} // end namespace flixel
} // end namespace animation

#endif /* INCLUDED_flixel_animation_FlxAnimationController */ 
