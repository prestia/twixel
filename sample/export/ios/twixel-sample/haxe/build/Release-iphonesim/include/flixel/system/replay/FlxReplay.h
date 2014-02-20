#ifndef INCLUDED_flixel_system_replay_FlxReplay
#define INCLUDED_flixel_system_replay_FlxReplay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,system,replay,FlxReplay)
HX_DECLARE_CLASS3(flixel,system,replay,FrameRecord)
namespace flixel{
namespace system{
namespace replay{


class HXCPP_CLASS_ATTRIBUTES  FlxReplay_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxReplay_obj OBJ_;
		FlxReplay_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlxReplay_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxReplay_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxReplay"); }

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void rewind( );
		Dynamic rewind_dyn();

		virtual Void playNextFrame( );
		Dynamic playNextFrame_dyn();

		virtual Void recordFrame( );
		Dynamic recordFrame_dyn();

		virtual ::String save( );
		Dynamic save_dyn();

		virtual Void load( ::String FileContents);
		Dynamic load_dyn();

		virtual Void create( int Seed);
		Dynamic create_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		int _marker;
		int _capacity;
		Array< ::Dynamic > _frames;
		bool finished;
		int frameCount;
		int frame;
		int seed;
};

} // end namespace flixel
} // end namespace system
} // end namespace replay

#endif /* INCLUDED_flixel_system_replay_FlxReplay */ 
