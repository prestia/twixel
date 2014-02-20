#ifndef INCLUDED_flixel_system_FlixelSound
#define INCLUDED_flixel_system_FlixelSound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/media/Sound.h>
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,media,Sound)
HX_DECLARE_CLASS2(flash,media,SoundLoaderContext)
HX_DECLARE_CLASS2(flash,net,URLRequest)
HX_DECLARE_CLASS2(flixel,system,FlixelSound)
namespace flixel{
namespace system{


class HXCPP_CLASS_ATTRIBUTES  FlixelSound_obj : public ::flash::media::Sound_obj{
	public:
		typedef ::flash::media::Sound_obj super;
		typedef FlixelSound_obj OBJ_;
		FlixelSound_obj();
		Void __construct(::flash::net::URLRequest stream,::flash::media::SoundLoaderContext context,Dynamic __o_forcePlayAsMusic);

	public:
		static hx::ObjectPtr< FlixelSound_obj > __new(::flash::net::URLRequest stream,::flash::media::SoundLoaderContext context,Dynamic __o_forcePlayAsMusic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlixelSound_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlixelSound"); }

		static ::String resourceName;
};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlixelSound */ 
