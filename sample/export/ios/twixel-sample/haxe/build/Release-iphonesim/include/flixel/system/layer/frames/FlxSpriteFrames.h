#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#define INCLUDED_flixel_system_layer_frames_FlxSpriteFrames

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS4(flixel,system,layer,frames,FlxFrame)
HX_DECLARE_CLASS4(flixel,system,layer,frames,FlxSpriteFrames)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace flixel{
namespace system{
namespace layer{
namespace frames{


class HXCPP_CLASS_ATTRIBUTES  FlxSpriteFrames_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxSpriteFrames_obj OBJ_;
		FlxSpriteFrames_obj();
		Void __construct(::String name);

	public:
		static hx::ObjectPtr< FlxSpriteFrames_obj > __new(::String name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxSpriteFrames_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxSpriteFrames"); }

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void addFrame( ::flixel::system::layer::frames::FlxFrame frame);
		Dynamic addFrame_dyn();

		::String name;
		::haxe::ds::StringMap framesHash;
		Array< ::Dynamic > frames;
};

} // end namespace flixel
} // end namespace system
} // end namespace layer
} // end namespace frames

#endif /* INCLUDED_flixel_system_layer_frames_FlxSpriteFrames */ 
