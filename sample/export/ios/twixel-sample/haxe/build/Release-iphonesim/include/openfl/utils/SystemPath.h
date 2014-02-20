#ifndef INCLUDED_openfl_utils_SystemPath
#define INCLUDED_openfl_utils_SystemPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,utils,SystemPath)
namespace openfl{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  SystemPath_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SystemPath_obj OBJ_;
		SystemPath_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SystemPath_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SystemPath_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SystemPath"); }

		static ::String applicationDirectory;
		static ::String applicationStorageDirectory;
		static ::String desktopDirectory;
		static ::String documentsDirectory;
		static ::String userDirectory;
		static int APP;
		static int STORAGE;
		static int DESKTOP;
		static int DOCS;
		static int USER;
		static ::String get_applicationDirectory( );
		static Dynamic get_applicationDirectory_dyn();

		static ::String get_applicationStorageDirectory( );
		static Dynamic get_applicationStorageDirectory_dyn();

		static ::String get_desktopDirectory( );
		static Dynamic get_desktopDirectory_dyn();

		static ::String get_documentsDirectory( );
		static Dynamic get_documentsDirectory_dyn();

		static ::String get_userDirectory( );
		static Dynamic get_userDirectory_dyn();

		static Dynamic lime_filesystem_get_special_dir;
		static Dynamic &lime_filesystem_get_special_dir_dyn() { return lime_filesystem_get_special_dir;}
};

} // end namespace openfl
} // end namespace utils

#endif /* INCLUDED_openfl_utils_SystemPath */ 
