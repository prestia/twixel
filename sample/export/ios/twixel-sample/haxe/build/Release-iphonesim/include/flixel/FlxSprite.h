#ifndef INCLUDED_flixel_FlxSprite
#define INCLUDED_flixel_FlxSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxObject.h>
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,BlendMode)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,ColorTransform)
HX_DECLARE_CLASS2(flash,geom,Matrix)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,animation,FlxAnimationController)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS4(flixel,system,layer,frames,FlxFrame)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxSprite_obj : public ::flixel::FlxObject_obj{
	public:
		typedef ::flixel::FlxObject_obj super;
		typedef FlxSprite_obj OBJ_;
		FlxSprite_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic);

	public:
		static hx::ObjectPtr< FlxSprite_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxSprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxSprite"); }

		virtual ::flash::display::BlendMode set_blend( ::flash::display::BlendMode Value);
		Dynamic set_blend_dyn();

		virtual Float set_angle( Float Value);

		virtual ::flash::geom::ColorTransform get_colorTransform( );
		Dynamic get_colorTransform_dyn();

		virtual int set_color( int Color);
		Dynamic set_color_dyn();

		virtual Float set_alpha( Float Alpha);
		Dynamic set_alpha_dyn();

		virtual int set_facing( int Direction);
		Dynamic set_facing_dyn();

		virtual ::flixel::system::layer::frames::FlxFrame set_frame( ::flixel::system::layer::frames::FlxFrame Value);
		Dynamic set_frame_dyn();

		virtual ::flash::display::BitmapData set_pixels( ::flash::display::BitmapData Pixels);
		Dynamic set_pixels_dyn();

		virtual ::flash::display::BitmapData get_pixels( );
		Dynamic get_pixels_dyn();

		virtual bool isSimpleRender( );
		Dynamic isSimpleRender_dyn();

		virtual bool isOnScreen( ::flixel::FlxCamera Camera);

		virtual Void resetFrameBitmapDatas( );
		Dynamic resetFrameBitmapDatas_dyn();

		virtual ::flixel::util::FlxPoint getGraphicMidpoint( ::flixel::util::FlxPoint point);
		Dynamic getGraphicMidpoint_dyn();

		virtual ::flash::display::BitmapData getFlxFrameBitmapData( );
		Dynamic getFlxFrameBitmapData_dyn();

		virtual Void updateFrameData( );
		Dynamic updateFrameData_dyn();

		virtual Void calcFrame( hx::Null< bool >  RunOnCpp);
		Dynamic calcFrame_dyn();

		virtual bool pixelsOverlapPoint( ::flixel::util::FlxPoint point,hx::Null< int >  Mask,::flixel::FlxCamera Camera);
		Dynamic pixelsOverlapPoint_dyn();

		virtual Void updateColorTransform( );
		Dynamic updateColorTransform_dyn();

		virtual Void setColorTransform( hx::Null< Float >  redMultiplier,hx::Null< Float >  greenMultiplier,hx::Null< Float >  blueMultiplier,hx::Null< Float >  alphaMultiplier,hx::Null< Float >  redOffset,hx::Null< Float >  greenOffset,hx::Null< Float >  blueOffset,hx::Null< Float >  alphaOffset);
		Dynamic setColorTransform_dyn();

		virtual Array< ::Dynamic > replaceColor( int Color,int NewColor,hx::Null< bool >  FetchPositions);
		Dynamic replaceColor_dyn();

		virtual Void centerOffsets( hx::Null< bool >  AdjustPosition);
		Dynamic centerOffsets_dyn();

		virtual Void drawFrame( hx::Null< bool >  Force);
		Dynamic drawFrame_dyn();

		virtual Void stamp( ::flixel::FlxSprite Brush,hx::Null< int >  X,hx::Null< int >  Y);
		Dynamic stamp_dyn();

		virtual Void draw( );

		virtual Void update( );

		virtual Void resetHelpers( );
		Dynamic resetHelpers_dyn();

		virtual Void updateHitbox( );
		Dynamic updateHitbox_dyn();

		virtual Void setGraphicSize( hx::Null< int >  Width,hx::Null< int >  Height);
		Dynamic setGraphicSize_dyn();

		virtual Void setOriginToCenter( );
		Dynamic setOriginToCenter_dyn();

		virtual Void resetSizeFromFrame( );
		Dynamic resetSizeFromFrame_dyn();

		virtual Void resetFrameSize( );
		Dynamic resetFrameSize_dyn();

		virtual Void resetSize( );
		Dynamic resetSize_dyn();

		virtual ::flixel::FlxSprite makeGraphic( int Width,int Height,hx::Null< int >  Color,hx::Null< bool >  Unique,::String Key);
		Dynamic makeGraphic_dyn();

		virtual ::flixel::FlxSprite loadRotatedGraphicFromTexture( Dynamic Data,::String Image,hx::Null< int >  Rotations,hx::Null< bool >  AntiAliasing,hx::Null< bool >  AutoBuffer);
		Dynamic loadRotatedGraphicFromTexture_dyn();

		virtual ::flixel::FlxSprite loadGraphicFromTexture( Dynamic Data,hx::Null< bool >  Reverse,hx::Null< bool >  Unique,::String FrameName);
		Dynamic loadGraphicFromTexture_dyn();

		virtual ::flixel::FlxSprite loadRotatedGraphic( Dynamic Graphic,hx::Null< int >  Rotations,hx::Null< int >  Frame,hx::Null< bool >  AntiAliasing,hx::Null< bool >  AutoBuffer,::String Key);
		Dynamic loadRotatedGraphic_dyn();

		virtual ::flixel::FlxSprite loadGraphic( Dynamic Graphic,hx::Null< bool >  Animated,hx::Null< bool >  Reverse,hx::Null< int >  Width,hx::Null< int >  Height,hx::Null< bool >  Unique,::String Key);
		Dynamic loadGraphic_dyn();

		virtual ::flixel::FlxSprite loadGraphicFromSprite( ::flixel::FlxSprite Sprite);
		Dynamic loadGraphicFromSprite_dyn();

		virtual ::flixel::FlxSprite clone( ::flixel::FlxSprite NewSprite);
		Dynamic clone_dyn();

		virtual Void destroy( );

		virtual Void initVars( );

		bool _angleChanged;
		Float _cosAngle;
		Float _sinAngle;
		Float _halfHeight;
		Float _halfWidth;
		::flash::geom::Matrix _matrix;
		bool useColorTransform;
		::flash::geom::ColorTransform _colorTransform;
		::flash::geom::Point _flashPointZero;
		::flash::geom::Rectangle _flashRect2;
		::flash::geom::Rectangle _flashRect;
		::flash::geom::Point _flashPoint;
		int _facingMult;
		Float _blue;
		Float _green;
		Float _red;
		bool isColored;
		int color;
		int _blendInt;
		::flash::display::BlendMode blend;
		bool dirty;
		bool antialiasing;
		::flixel::util::FlxPoint scale;
		::flixel::util::FlxPoint offset;
		::flixel::util::FlxPoint origin;
		int flipped;
		int facing;
		Float alpha;
		Float bakedRotationAngle;
		int frames;
		int frameHeight;
		int frameWidth;
		::flash::display::BitmapData framePixels;
		::flixel::system::layer::frames::FlxFrame frame;
		::flixel::animation::FlxAnimationController animation;
};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxSprite */ 
