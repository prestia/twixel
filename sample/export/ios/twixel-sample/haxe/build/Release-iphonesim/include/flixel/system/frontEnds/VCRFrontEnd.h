#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#define INCLUDED_flixel_system_frontEnds_VCRFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,system,frontEnds,VCRFrontEnd)
namespace flixel{
namespace system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES  VCRFrontEnd_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VCRFrontEnd_obj OBJ_;
		VCRFrontEnd_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< VCRFrontEnd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~VCRFrontEnd_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("VCRFrontEnd"); }

		virtual Void resume( );
		Dynamic resume_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		bool stepRequested;
		bool paused;
};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_VCRFrontEnd */ 
