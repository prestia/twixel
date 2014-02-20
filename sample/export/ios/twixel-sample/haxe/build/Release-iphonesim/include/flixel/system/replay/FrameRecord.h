#ifndef INCLUDED_flixel_system_replay_FrameRecord
#define INCLUDED_flixel_system_replay_FrameRecord

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,system,replay,CodeValuePair)
HX_DECLARE_CLASS3(flixel,system,replay,FrameRecord)
HX_DECLARE_CLASS3(flixel,system,replay,MouseRecord)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace system{
namespace replay{


class HXCPP_CLASS_ATTRIBUTES  FrameRecord_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FrameRecord_obj OBJ_;
		FrameRecord_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FrameRecord_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FrameRecord_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FrameRecord"); }

		virtual ::flixel::system::replay::FrameRecord load( ::String Data);
		Dynamic load_dyn();

		virtual ::String save( );
		Dynamic save_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::flixel::system::replay::FrameRecord create( Float Frame,Array< ::Dynamic > Keys,::flixel::system::replay::MouseRecord Mouse);
		Dynamic create_dyn();

		::flixel::system::replay::MouseRecord mouse;
		Array< ::Dynamic > keys;
		int frame;
};

} // end namespace flixel
} // end namespace system
} // end namespace replay

#endif /* INCLUDED_flixel_system_replay_FrameRecord */ 
