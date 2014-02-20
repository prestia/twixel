#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#define INCLUDED_flixel_system_ui_FlxSystemButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS3(flixel,system,ui,FlxSystemButton)
namespace flixel{
namespace system{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxSystemButton_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef FlxSystemButton_obj OBJ_;
		FlxSystemButton_obj();
		Void __construct(::flash::display::BitmapData Icon,Dynamic DownHandler,hx::Null< bool >  __o_ToggleMode);

	public:
		static hx::ObjectPtr< FlxSystemButton_obj > __new(::flash::display::BitmapData Icon,Dynamic DownHandler,hx::Null< bool >  __o_ToggleMode);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxSystemButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxSystemButton"); }

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void onMouseOut( ::flash::events::MouseEvent E);
		Dynamic onMouseOut_dyn();

		virtual Void onMouseOver( ::flash::events::MouseEvent E);
		Dynamic onMouseOver_dyn();

		virtual Void onMouseUp( ::flash::events::MouseEvent E);
		Dynamic onMouseUp_dyn();

		virtual Void changeIcon( ::flash::display::BitmapData Icon);
		Dynamic changeIcon_dyn();

		virtual bool set_toggled( bool Value);
		Dynamic set_toggled_dyn();

		bool toggled;
		bool toggleMode;
		::flash::display::Bitmap icon;
		bool enabled;
		Dynamic downHandler;
		Dynamic &downHandler_dyn() { return downHandler;}
};

} // end namespace flixel
} // end namespace system
} // end namespace ui

#endif /* INCLUDED_flixel_system_ui_FlxSystemButton */ 
