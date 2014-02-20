#ifndef INCLUDED_flixel_FlxObject
#define INCLUDED_flixel_FlxObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxBasic.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,system,layer,Region)
HX_DECLARE_CLASS4(flixel,system,layer,frames,FlxSpriteFrames)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxRect)
HX_DECLARE_CLASS3(flixel,util,loaders,CachedGraphics)
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxObject_obj : public ::flixel::FlxBasic_obj{
	public:
		typedef ::flixel::FlxBasic_obj super;
		typedef FlxObject_obj OBJ_;
		FlxObject_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height);

	public:
		static hx::ObjectPtr< FlxObject_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxObject"); }

		virtual ::String toString( );

		virtual bool set_forceComplexRender( bool Value);
		Dynamic set_forceComplexRender_dyn();

		virtual bool set_immovable( bool Value);
		Dynamic set_immovable_dyn();

		virtual bool set_moves( bool Value);
		Dynamic set_moves_dyn();

		virtual Float set_angle( Float Value);
		Dynamic set_angle_dyn();

		virtual bool set_solid( bool Solid);
		Dynamic set_solid_dyn();

		virtual bool get_solid( );
		Dynamic get_solid_dyn();

		virtual Float get_height( );
		Dynamic get_height_dyn();

		virtual Float get_width( );
		Dynamic get_width_dyn();

		virtual Float set_height( Float Height);
		Dynamic set_height_dyn();

		virtual Float set_width( Float Width);
		Dynamic set_width_dyn();

		virtual Float set_y( Float NewY);
		Dynamic set_y_dyn();

		virtual Float set_x( Float NewX);
		Dynamic set_x_dyn();

		virtual ::flixel::util::loaders::CachedGraphics set_cachedGraphics( ::flixel::util::loaders::CachedGraphics Value);
		Dynamic set_cachedGraphics_dyn();

		virtual Void setSize( Float Width,Float Height);
		Dynamic setSize_dyn();

		virtual Void setPosition( hx::Null< Float >  X,hx::Null< Float >  Y);
		Dynamic setPosition_dyn();

		virtual Void hurt( Float Damage);
		Dynamic hurt_dyn();

		virtual bool justTouched( int Direction);
		Dynamic justTouched_dyn();

		virtual bool isTouching( int Direction);
		Dynamic isTouching_dyn();

		virtual bool isOnScreen( ::flixel::FlxCamera Camera);
		Dynamic isOnScreen_dyn();

		virtual Void reset( Float X,Float Y);
		Dynamic reset_dyn();

		virtual ::flixel::util::FlxPoint getMidpoint( ::flixel::util::FlxPoint point);
		Dynamic getMidpoint_dyn();

		virtual ::flixel::util::FlxPoint getScreenXY( ::flixel::util::FlxPoint point,::flixel::FlxCamera Camera);
		Dynamic getScreenXY_dyn();

		virtual bool inWorldBounds( );
		Dynamic inWorldBounds_dyn();

		virtual bool overlapsPoint( ::flixel::util::FlxPoint point,hx::Null< bool >  InScreenSpace,::flixel::FlxCamera Camera);
		Dynamic overlapsPoint_dyn();

		virtual bool overlapsAt( Float X,Float Y,::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  InScreenSpace,::flixel::FlxCamera Camera);
		Dynamic overlapsAt_dyn();

		virtual bool overlaps( ::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  InScreenSpace,::flixel::FlxCamera Camera);
		Dynamic overlaps_dyn();

		virtual Void draw( );

		virtual Void updateMotion( );
		Dynamic updateMotion_dyn();

		virtual Void update( );

		virtual Void destroy( );

		virtual Void initMotionVars( );
		Dynamic initMotionVars_dyn();

		virtual Void initVars( );
		Dynamic initVars_dyn();

		::flixel::util::FlxPoint _point;
		::flixel::util::loaders::CachedGraphics cachedGraphics;
		::flixel::system::layer::frames::FlxSpriteFrames framesData;
		::flixel::system::layer::Region region;
		bool collisonXDrag;
		::flixel::util::FlxPoint last;
		int allowCollisions;
		int wasTouching;
		int touching;
		Float health;
		Float maxAngular;
		Float angularDrag;
		Float angularAcceleration;
		Float angularVelocity;
		Float elasticity;
		Float mass;
		::flixel::util::FlxPoint maxVelocity;
		::flixel::util::FlxPoint drag;
		::flixel::util::FlxPoint acceleration;
		::flixel::util::FlxPoint velocity;
		::flixel::util::FlxPoint scrollFactor;
		bool forceComplexRender;
		bool immovable;
		bool moves;
		Float angle;
		Float height;
		Float width;
		Float y;
		Float x;
		static Float SEPARATE_BIAS;
		static int LEFT;
		static int RIGHT;
		static int UP;
		static int DOWN;
		static int NONE;
		static int CEILING;
		static int FLOOR;
		static int WALL;
		static int ANY;
		static ::flixel::util::FlxPoint _pZero;
		static ::flixel::util::FlxRect _firstSeparateFlxRect;
		static ::flixel::util::FlxRect _secondSeparateFlxRect;
		static bool separate( ::flixel::FlxObject Object1,::flixel::FlxObject Object2);
		static Dynamic separate_dyn();

		static bool separateX( ::flixel::FlxObject Object1,::flixel::FlxObject Object2);
		static Dynamic separateX_dyn();

		static bool separateY( ::flixel::FlxObject Object1,::flixel::FlxObject Object2);
		static Dynamic separateY_dyn();

};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxObject */ 
