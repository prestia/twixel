#ifndef INCLUDED_flixel_input_touch_FlxTouch
#define INCLUDED_flixel_input_touch_FlxTouch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/util/FlxPoint.h>
#include <flixel/interfaces/IFlxDestroyable.h>
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouch)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace input{
namespace touch{


class HXCPP_CLASS_ATTRIBUTES  FlxTouch_obj : public ::flixel::util::FlxPoint_obj{
	public:
		typedef ::flixel::util::FlxPoint_obj super;
		typedef FlxTouch_obj OBJ_;
		FlxTouch_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_PointID);

	public:
		static hx::ObjectPtr< FlxTouch_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_PointID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTouch_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::interfaces::IFlxDestroyable_obj *()
			{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxTouch_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxTouch"); }

		virtual bool get_isActive( );
		Dynamic get_isActive_dyn();

		virtual bool get_justReleased( );
		Dynamic get_justReleased_dyn();

		virtual bool get_justPressed( );
		Dynamic get_justPressed_dyn();

		virtual bool get_pressed( );
		Dynamic get_pressed_dyn();

		virtual Void updatePosition( Float X,Float Y);
		Dynamic updatePosition_dyn();

		virtual Void updateCursor( );
		Dynamic updateCursor_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void deactivate( );
		Dynamic deactivate_dyn();

		virtual Void reset( Float X,Float Y,int PointID);
		Dynamic reset_dyn();

		virtual bool overlaps( ::flixel::FlxBasic ObjectOrGroup,::flixel::FlxCamera Camera);
		Dynamic overlaps_dyn();

		virtual ::flixel::util::FlxPoint getScreenPosition( ::flixel::FlxCamera Camera,::flixel::util::FlxPoint point);
		Dynamic getScreenPosition_dyn();

		virtual ::flixel::util::FlxPoint getWorldPosition( ::flixel::FlxCamera Camera,::flixel::util::FlxPoint point);
		Dynamic getWorldPosition_dyn();

		virtual Void destroy( );

		Float _justPressedTimeInTicks;
		::flixel::util::FlxPoint _justPressedPosition;
		::flash::geom::Point _flashPoint;
		::flixel::util::FlxPoint _globalScreenPosition;
		::flixel::util::FlxPoint _point;
		int _last;
		int _current;
		int touchPointID;
		int screenY;
		int screenX;
};

} // end namespace flixel
} // end namespace input
} // end namespace touch

#endif /* INCLUDED_flixel_input_touch_FlxTouch */ 
