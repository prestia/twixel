#ifndef INCLUDED_flixel_ui_FlxTypedButton
#define INCLUDED_flixel_ui_FlxTypedButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouch)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS3(flixel,ui,_FlxTypedButton,FlxButtonEvent)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxTypedButton_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef FlxTypedButton_obj OBJ_;
		FlxTypedButton_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick);

	public:
		static hx::ObjectPtr< FlxTypedButton_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTypedButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTypedButton"); }

		virtual Void onOutHandler( );
		Dynamic onOutHandler_dyn();

		virtual Void onOverHandler( );
		Dynamic onOverHandler_dyn();

		virtual Void onDownHandler( );
		Dynamic onDownHandler_dyn();

		virtual Void onUpHandler( );
		Dynamic onUpHandler_dyn();

		virtual int set_status( int Value);
		Dynamic set_status_dyn();

		virtual Void updateStatus( bool Overlap,bool JustPressed,bool Pressed,::flixel::input::touch::FlxTouch Touch);
		Dynamic updateStatus_dyn();

		virtual Void updateButton( );
		Dynamic updateButton_dyn();

		virtual Void draw( );

		virtual Void update( );

		virtual Void destroy( );

		bool _pressedMouse;
		::flixel::input::touch::FlxTouch _pressedTouch;
		::flixel::ui::_FlxTypedButton::FlxButtonEvent onOut;
		::flixel::ui::_FlxTypedButton::FlxButtonEvent onOver;
		::flixel::ui::_FlxTypedButton::FlxButtonEvent onDown;
		::flixel::ui::_FlxTypedButton::FlxButtonEvent onUp;
		int status;
		Array< Float > labelAlphas;
		Array< ::Dynamic > labelOffsets;
		Dynamic label;
};

} // end namespace flixel
} // end namespace ui

#endif /* INCLUDED_flixel_ui_FlxTypedButton */ 
