#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#define INCLUDED_flixel_system_frontEnds_WatchFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,system,frontEnds,WatchFrontEnd)
namespace flixel{
namespace system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES  WatchFrontEnd_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WatchFrontEnd_obj OBJ_;
		WatchFrontEnd_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< WatchFrontEnd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~WatchFrontEnd_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("WatchFrontEnd"); }

		virtual Void removeMouse( );
		Dynamic removeMouse_dyn();

		virtual Void addMouse( );
		Dynamic addMouse_dyn();

		virtual Void removeQuick( ::String Name);
		Dynamic removeQuick_dyn();

		virtual Void addQuick( ::String Name,Dynamic NewValue);
		Dynamic addQuick_dyn();

		virtual Void remove( Dynamic AnyObject,::String VariableName);
		Dynamic remove_dyn();

		virtual Void add( Dynamic AnyObject,::String VariableName,::String DisplayName);
		Dynamic add_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_WatchFrontEnd */ 
