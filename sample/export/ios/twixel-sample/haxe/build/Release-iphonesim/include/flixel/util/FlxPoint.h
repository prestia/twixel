#ifndef INCLUDED_flixel_util_FlxPoint
#define INCLUDED_flixel_util_FlxPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/interfaces/IFlxDestroyable.h>
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxRect)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxPoint_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxPoint_obj OBJ_;
		FlxPoint_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);

	public:
		static hx::ObjectPtr< FlxPoint_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxPoint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::interfaces::IFlxDestroyable_obj *()
			{ return new ::flixel::interfaces::IFlxDestroyable_delegate_< FlxPoint_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxPoint"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Float distanceTo( ::flixel::util::FlxPoint AnotherPoint);
		Dynamic distanceTo_dyn();

		virtual bool inFlxRect( ::flixel::util::FlxRect Rect);
		Dynamic inFlxRect_dyn();

		virtual bool inCoords( Float RectX,Float RectY,Float RectWidth,Float RectHeight);
		Dynamic inCoords_dyn();

		virtual ::flash::geom::Point copyToFlash( ::flash::geom::Point FlashPoint);
		Dynamic copyToFlash_dyn();

		virtual ::flixel::util::FlxPoint copyFromFlash( ::flash::geom::Point FlashPoint);
		Dynamic copyFromFlash_dyn();

		virtual ::flixel::util::FlxPoint copyTo( ::flixel::util::FlxPoint point);
		Dynamic copyTo_dyn();

		virtual ::flixel::util::FlxPoint copyFrom( ::flixel::util::FlxPoint point);
		Dynamic copyFrom_dyn();

		virtual ::flixel::util::FlxPoint set( hx::Null< Float >  X,hx::Null< Float >  Y);
		Dynamic set_dyn();

		virtual Float set_y( Float Value);
		Dynamic set_y_dyn();

		Float y;
		virtual Float set_x( Float Value);
		Dynamic set_x_dyn();

		Float x;
};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxPoint */ 
