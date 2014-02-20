#ifndef INCLUDED_flixel_system_scaleModes_RatioScaleMode
#define INCLUDED_flixel_system_scaleModes_RatioScaleMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/system/scaleModes/BaseScaleMode.h>
HX_DECLARE_CLASS3(flixel,system,scaleModes,BaseScaleMode)
HX_DECLARE_CLASS3(flixel,system,scaleModes,RatioScaleMode)
namespace flixel{
namespace system{
namespace scaleModes{


class HXCPP_CLASS_ATTRIBUTES  RatioScaleMode_obj : public ::flixel::system::scaleModes::BaseScaleMode_obj{
	public:
		typedef ::flixel::system::scaleModes::BaseScaleMode_obj super;
		typedef RatioScaleMode_obj OBJ_;
		RatioScaleMode_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< RatioScaleMode_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RatioScaleMode_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RatioScaleMode"); }

		virtual Void updateGameSize( int Width,int Height);

};

} // end namespace flixel
} // end namespace system
} // end namespace scaleModes

#endif /* INCLUDED_flixel_system_scaleModes_RatioScaleMode */ 
