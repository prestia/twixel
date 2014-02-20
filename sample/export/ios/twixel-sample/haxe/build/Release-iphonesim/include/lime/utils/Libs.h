#ifndef INCLUDED_lime_utils_Libs
#define INCLUDED_lime_utils_Libs

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,utils,Libs)
namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Libs_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Libs_obj OBJ_;
		Libs_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Libs_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Libs_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Libs"); }

		static ::haxe::ds::StringMap __moduleNames;
		static Dynamic tryLoad( ::String name,::String library,::String func,int args);
		static Dynamic tryLoad_dyn();

		static ::String findHaxeLib( ::String library);
		static Dynamic findHaxeLib_dyn();

		static ::String sysName( );
		static Dynamic sysName_dyn();

		static Dynamic load( ::String library,::String method,hx::Null< int >  args);
		static Dynamic load_dyn();

		static Void loaderTrace( ::String message);
		static Dynamic loaderTrace_dyn();

};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_Libs */ 
