#ifndef INCLUDED_flixel_FlxGame
#define INCLUDED_flixel_FlxGame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxGame)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,system,ui,FlxFocusLostScreen)
HX_DECLARE_CLASS3(flixel,system,ui,FlxSoundTray)
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxGame_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef FlxGame_obj OBJ_;
		FlxGame_obj();
		Void __construct(int GameSizeX,int GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_UpdateFramerate,hx::Null< int >  __o_DrawFramerate,hx::Null< bool >  __o_SkipSplash,hx::Null< bool >  __o_StartFullscreen);

	public:
		static hx::ObjectPtr< FlxGame_obj > __new(int GameSizeX,int GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_UpdateFramerate,hx::Null< int >  __o_DrawFramerate,hx::Null< bool >  __o_SkipSplash,hx::Null< bool >  __o_StartFullscreen);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxGame_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxGame"); }

		virtual Void draw( );
		Dynamic draw_dyn();

		virtual Void updateInput( );
		Dynamic updateInput_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void step( );
		Dynamic step_dyn();

		virtual Void gameStart( );
		Dynamic gameStart_dyn();

		virtual Void switchState( );
		Dynamic switchState_dyn();

		virtual Void resetGame( );
		Dynamic resetGame_dyn();

		virtual Void onEnterFrame( ::flash::events::Event FlashEvent);
		Dynamic onEnterFrame_dyn();

		virtual Void onResize( ::flash::events::Event E);
		Dynamic onResize_dyn();

		virtual Void onFocusLost( ::flash::events::Event FlashEvent);
		Dynamic onFocusLost_dyn();

		virtual Void onFocus( ::flash::events::Event FlashEvent);
		Dynamic onFocus_dyn();

		virtual Void create( ::flash::events::Event FlashEvent);
		Dynamic create_dyn();

		bool _skipSplash;
		::Class _customFocusLostScreen;
		::Class _customSoundTray;
		::flixel::system::ui::FlxFocusLostScreen _focusLostScreen;
		bool _onFocusFiredOnce;
		bool _lostFocus;
		int _accumulator;
		int _total;
		::Class _iState;
		bool _gameJustStarted;
		::flixel::system::ui::FlxSoundTray soundTray;
		bool resetState;
		::flixel::FlxState requestedState;
		int maxAccumulation;
		int focusLostFramerate;
		int drawFramerate;
		Float stepSeconds;
		int stepMS;
		int elapsedMS;
		::flash::display::Sprite inputContainer;
		::flixel::FlxState state;
		int ticks;
};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxGame */ 
