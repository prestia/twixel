#ifndef INCLUDED_flixel_tile_FlxTilemap
#define INCLUDED_flixel_tile_FlxTilemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxObject.h>
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,tile,FlxTile)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemapBuffer)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxRect)
namespace flixel{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES  FlxTilemap_obj : public ::flixel::FlxObject_obj{
	public:
		typedef ::flixel::FlxObject_obj super;
		typedef FlxTilemap_obj OBJ_;
		FlxTilemap_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxTilemap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTilemap_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTilemap"); }

		virtual Float set_scaleY( Float Scale);
		Dynamic set_scaleY_dyn();

		virtual Float set_scaleX( Float Scale);
		Dynamic set_scaleX_dyn();

		virtual bool set_forceComplexRender( bool Value);

		virtual Void updateBuffers( );
		Dynamic updateBuffers_dyn();

		virtual ::flixel::FlxSprite tileToFlxSprite( int X,int Y,hx::Null< int >  NewTile);
		Dynamic tileToFlxSprite_dyn();

		virtual Void updateFrameData( );
		Dynamic updateFrameData_dyn();

		virtual Void updateTile( int Index);
		Dynamic updateTile_dyn();

		virtual Void autoTile( int Index);
		Dynamic autoTile_dyn();

		virtual ::flixel::util::FlxPoint rayHit( ::flixel::util::FlxPoint Start,::flixel::util::FlxPoint End,hx::Null< Float >  Resolution);
		Dynamic rayHit_dyn();

		virtual bool ray( ::flixel::util::FlxPoint Start,::flixel::util::FlxPoint End,::flixel::util::FlxPoint Result,hx::Null< Float >  Resolution);
		Dynamic ray_dyn();

		virtual ::flixel::util::FlxRect getBounds( ::flixel::util::FlxRect Bounds);
		Dynamic getBounds_dyn();

		virtual Void follow( ::flixel::FlxCamera Camera,hx::Null< int >  Border,hx::Null< bool >  UpdateWorld);
		Dynamic follow_dyn();

		virtual Void setTileProperties( int Tile,hx::Null< int >  AllowCollisions,Dynamic Callback,::Class CallbackFilter,hx::Null< int >  Range);
		Dynamic setTileProperties_dyn();

		virtual bool setTileByIndex( int Index,int Tile,hx::Null< bool >  UpdateGraphics);
		Dynamic setTileByIndex_dyn();

		virtual bool setTile( int X,int Y,int Tile,hx::Null< bool >  UpdateGraphics);
		Dynamic setTile_dyn();

		virtual Array< ::Dynamic > getTileCoords( int Index,hx::Null< bool >  Midpoint);
		Dynamic getTileCoords_dyn();

		virtual Array< int > getTileInstances( int Index);
		Dynamic getTileInstances_dyn();

		virtual int getTileCollisions( int Index);
		Dynamic getTileCollisions_dyn();

		virtual int getTileByIndex( int Index);
		Dynamic getTileByIndex_dyn();

		virtual int getTile( int X,int Y);
		Dynamic getTile_dyn();

		virtual bool overlapsPoint( ::flixel::util::FlxPoint WorldPoint,hx::Null< bool >  InScreenSpace,::flixel::FlxCamera Camera);

		virtual bool overlapsWithCallback( ::flixel::FlxObject Object,Dynamic Callback,hx::Null< bool >  FlipCallbackParams,::flixel::util::FlxPoint Position);
		Dynamic overlapsWithCallback_dyn();

		virtual bool overlapsAt( Float X,Float Y,::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  InScreenSpace,::flixel::FlxCamera Camera);

		virtual bool overlaps( ::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  InScreenSpace,::flixel::FlxCamera Camera);

		virtual Void walkPath( Array< int > Data,int Start,Array< ::Dynamic > Points);
		Dynamic walkPath_dyn();

		virtual Array< int > computePathDistance( int StartIndex,int EndIndex,bool WideDiagonal);
		Dynamic computePathDistance_dyn();

		virtual Void raySimplifyPath( Array< ::Dynamic > Points);
		Dynamic raySimplifyPath_dyn();

		virtual Void simplifyPath( Array< ::Dynamic > Points);
		Dynamic simplifyPath_dyn();

		virtual Array< ::Dynamic > findPath( ::flixel::util::FlxPoint Start,::flixel::util::FlxPoint End,hx::Null< bool >  Simplify,hx::Null< bool >  RaySimplify,hx::Null< bool >  WideDiagonal);
		Dynamic findPath_dyn();

		virtual Void setDirty( hx::Null< bool >  Dirty);
		Dynamic setDirty_dyn();

		virtual Array< int > getData( hx::Null< bool >  Simple);
		Dynamic getData_dyn();

		virtual Void draw( );

		virtual Void drawTilemap( ::flixel::tile::FlxTilemapBuffer Buffer,::flixel::FlxCamera Camera);
		Dynamic drawTilemap_dyn();

		virtual Void setCustomTileMappings( Array< int > mappings,Array< int > randomIndices,Array< ::Dynamic > randomChoices,Dynamic randomLambda);
		Dynamic setCustomTileMappings_dyn();

		virtual ::flixel::tile::FlxTilemap loadMap( Dynamic MapData,Dynamic TileGraphic,hx::Null< int >  TileWidth,hx::Null< int >  TileHeight,hx::Null< int >  AutoTile,hx::Null< int >  StartingIndex,hx::Null< int >  DrawIndex,hx::Null< int >  CollideIndex);
		Dynamic loadMap_dyn();

		virtual Void destroy( );

		Array< int > _rectIDs;
		::flash::geom::Point _helperPoint;
		int _startingIndex;
		Array< ::Dynamic > _tileObjects;
		Float _scaledTileHeight;
		Float _scaledTileWidth;
		int _tileHeight;
		int _tileWidth;
		Array< int > _data;
		Array< ::Dynamic > _buffers;
		::flash::geom::Rectangle _flashRect;
		::flash::geom::Point _flashPoint;
		Dynamic _randomLambda;
		Dynamic &_randomLambda_dyn() { return _randomLambda;}
		Array< ::Dynamic > _randomChoices;
		Array< int > _randomIndices;
		Array< int > customTileRemap;
		Float tileScaleHack;
		int totalTiles;
		int heightInTiles;
		int widthInTiles;
		int _auto;
		Float scaleY;
		Float scaleX;
		static int OFF;
		static int AUTO;
		static int ALT;
		static ::String arrayToCSV( Array< int > Data,int Width,hx::Null< bool >  Invert);
		static Dynamic arrayToCSV_dyn();

		static ::String bitmapToCSV( ::flash::display::BitmapData Bitmap,hx::Null< bool >  Invert,hx::Null< int >  Scale,Array< int > ColorMap);
		static Dynamic bitmapToCSV_dyn();

		static ::String imageToCSV( Dynamic ImageFile,hx::Null< bool >  Invert,hx::Null< int >  Scale);
		static Dynamic imageToCSV_dyn();

};

} // end namespace flixel
} // end namespace tile

#endif /* INCLUDED_flixel_tile_FlxTilemap */ 
