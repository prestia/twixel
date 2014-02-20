#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#define INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,system,debug,ButtonAlignment)
HX_DECLARE_CLASS3(flixel,system,debug,DebuggerLayout)
HX_DECLARE_CLASS3(flixel,system,frontEnds,DebuggerFrontEnd)
HX_DECLARE_CLASS3(flixel,system,ui,FlxSystemButton)
namespace flixel{
namespace system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES  DebuggerFrontEnd_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DebuggerFrontEnd_obj OBJ_;
		DebuggerFrontEnd_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< DebuggerFrontEnd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DebuggerFrontEnd_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DebuggerFrontEnd"); }

		virtual bool set_visible( bool Visible);
		Dynamic set_visible_dyn();

		virtual Void removeButton( ::flixel::system::ui::FlxSystemButton Button,hx::Null< bool >  UpdateLayout);
		Dynamic removeButton_dyn();

		virtual ::flixel::system::ui::FlxSystemButton addButton( ::flixel::system::debug::ButtonAlignment Alignment,::flash::display::BitmapData Icon,Dynamic UpHandler,hx::Null< bool >  ToggleMode,hx::Null< bool >  UpdateLayout);
		Dynamic addButton_dyn();

		virtual Void resetLayout( );
		Dynamic resetLayout_dyn();

		virtual Void setLayout( ::flixel::system::debug::DebuggerLayout Layout);
		Dynamic setLayout_dyn();

		bool visible;
		Array< ::String > toggleKeys;
		int precision;
		bool drawDebug;
};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd */ 
