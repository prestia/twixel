#ifndef INCLUDED_flixel_system_FlxSound
#define INCLUDED_flixel_system_FlxSound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxBasic.h>
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,media,Sound)
HX_DECLARE_CLASS2(flash,media,SoundChannel)
HX_DECLARE_CLASS2(flash,media,SoundTransform)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,system,FlxSound)
namespace flixel{
namespace system{


class HXCPP_CLASS_ATTRIBUTES  FlxSound_obj : public ::flixel::FlxBasic_obj{
	public:
		typedef ::flixel::FlxBasic_obj super;
		typedef FlxSound_obj OBJ_;
		FlxSound_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxSound_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxSound_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxSound"); }

		virtual Void setPosition( hx::Null< Float >  X,hx::Null< Float >  Y);
		Dynamic setPosition_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void gotID3( ::flash::events::Event event);
		Dynamic gotID3_dyn();

		virtual Void cleanup( bool destroySound,hx::Null< bool >  resetPosition,hx::Null< bool >  resetFading);
		Dynamic cleanup_dyn();

		virtual Void stopped( ::flash::events::Event event);
		Dynamic stopped_dyn();

		virtual Void startSound( Float Position);
		Dynamic startSound_dyn();

		virtual Void updateTransform( );
		Dynamic updateTransform_dyn();

		virtual Float getActualVolume( );
		Dynamic getActualVolume_dyn();

		virtual Float set_volume( Float Volume);
		Dynamic set_volume_dyn();

		virtual Float get_volume( );
		Dynamic get_volume_dyn();

		virtual bool get_playing( );
		Dynamic get_playing_dyn();

		bool playing;
		virtual Void fadeIn( Float Duration,hx::Null< Float >  From,hx::Null< Float >  To);
		Dynamic fadeIn_dyn();

		virtual Void fadeOut( Float Duration,Dynamic To);
		Dynamic fadeOut_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

		virtual Void play( hx::Null< bool >  ForceRestart);
		Dynamic play_dyn();

		virtual ::flixel::system::FlxSound proximity( Float X,Float Y,::flixel::FlxObject TargetObject,Float Radius,hx::Null< bool >  Pan);
		Dynamic proximity_dyn();

		virtual ::flixel::system::FlxSound loadStream( ::String SoundURL,hx::Null< bool >  Looped,hx::Null< bool >  AutoDestroy,Dynamic OnComplete);
		Dynamic loadStream_dyn();

		virtual ::flixel::system::FlxSound loadEmbedded( Dynamic EmbeddedSound,hx::Null< bool >  Looped,hx::Null< bool >  AutoDestroy,Dynamic OnComplete);
		Dynamic loadEmbedded_dyn();

		virtual Void kill( );

		virtual Void update( );

		virtual Void destroy( );

		virtual Void reset( );
		Dynamic reset_dyn();

		bool _alreadyPaused;
		bool _proximityPan;
		Float _radius;
		::flixel::FlxObject _target;
		bool _looped;
		Float _volumeAdjust;
		Float _volume;
		Float _position;
		bool _paused;
		::flash::media::SoundTransform _transform;
		::flash::media::SoundChannel _channel;
		::flash::media::Sound _sound;
		virtual Float set_pan( Float pan);
		Dynamic set_pan_dyn();

		virtual Float get_pan( );
		Dynamic get_pan_dyn();

		Dynamic onComplete;
		Dynamic &onComplete_dyn() { return onComplete;}
		bool autoDestroy;
		Float amplitudeRight;
		Float amplitudeLeft;
		Float amplitude;
		::String artist;
		::String name;
		bool survive;
		Float y;
		Float x;
};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxSound */ 
