#include <hxcpp.h>

#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_openfl_utils_SystemPath
#include <openfl/utils/SystemPath.h>
#endif
namespace openfl{
namespace utils{

Void SystemPath_obj::__construct()
{
	return null();
}

SystemPath_obj::~SystemPath_obj() { }

Dynamic SystemPath_obj::__CreateEmpty() { return  new SystemPath_obj; }
hx::ObjectPtr< SystemPath_obj > SystemPath_obj::__new()
{  hx::ObjectPtr< SystemPath_obj > result = new SystemPath_obj();
	result->__construct();
	return result;}

Dynamic SystemPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SystemPath_obj > result = new SystemPath_obj();
	result->__construct();
	return result;}

::String SystemPath_obj::applicationDirectory;

::String SystemPath_obj::applicationStorageDirectory;

::String SystemPath_obj::desktopDirectory;

::String SystemPath_obj::documentsDirectory;

::String SystemPath_obj::userDirectory;

int SystemPath_obj::APP;

int SystemPath_obj::STORAGE;

int SystemPath_obj::DESKTOP;

int SystemPath_obj::DOCS;

int SystemPath_obj::USER;

::String SystemPath_obj::get_applicationDirectory( ){
	HX_STACK_PUSH("SystemPath::get_applicationDirectory","openfl/utils/SystemPath.hx",31);
	HX_STACK_LINE(31)
	return ::openfl::utils::SystemPath_obj::lime_filesystem_get_special_dir((int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemPath_obj,get_applicationDirectory,return )

::String SystemPath_obj::get_applicationStorageDirectory( ){
	HX_STACK_PUSH("SystemPath::get_applicationStorageDirectory","openfl/utils/SystemPath.hx",32);
	HX_STACK_LINE(32)
	return ::openfl::utils::SystemPath_obj::lime_filesystem_get_special_dir((int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemPath_obj,get_applicationStorageDirectory,return )

::String SystemPath_obj::get_desktopDirectory( ){
	HX_STACK_PUSH("SystemPath::get_desktopDirectory","openfl/utils/SystemPath.hx",33);
	HX_STACK_LINE(33)
	return ::openfl::utils::SystemPath_obj::lime_filesystem_get_special_dir((int)2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemPath_obj,get_desktopDirectory,return )

::String SystemPath_obj::get_documentsDirectory( ){
	HX_STACK_PUSH("SystemPath::get_documentsDirectory","openfl/utils/SystemPath.hx",34);
	HX_STACK_LINE(34)
	return ::openfl::utils::SystemPath_obj::lime_filesystem_get_special_dir((int)3);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemPath_obj,get_documentsDirectory,return )

::String SystemPath_obj::get_userDirectory( ){
	HX_STACK_PUSH("SystemPath::get_userDirectory","openfl/utils/SystemPath.hx",35);
	HX_STACK_LINE(35)
	return ::openfl::utils::SystemPath_obj::lime_filesystem_get_special_dir((int)4);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SystemPath_obj,get_userDirectory,return )

Dynamic SystemPath_obj::lime_filesystem_get_special_dir;


SystemPath_obj::SystemPath_obj()
{
}

void SystemPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SystemPath);
	HX_MARK_END_CLASS();
}

void SystemPath_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic SystemPath_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { return inCallProp ? get_userDirectory() : userDirectory; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { return inCallProp ? get_desktopDirectory() : desktopDirectory; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_userDirectory") ) { return get_userDirectory_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { return inCallProp ? get_documentsDirectory() : documentsDirectory; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { return inCallProp ? get_applicationDirectory() : applicationDirectory; }
		if (HX_FIELD_EQ(inName,"get_desktopDirectory") ) { return get_desktopDirectory_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_documentsDirectory") ) { return get_documentsDirectory_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_applicationDirectory") ) { return get_applicationDirectory_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { return inCallProp ? get_applicationStorageDirectory() : applicationStorageDirectory; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"get_applicationStorageDirectory") ) { return get_applicationStorageDirectory_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_filesystem_get_special_dir") ) { return lime_filesystem_get_special_dir; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SystemPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { userDirectory=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { desktopDirectory=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { documentsDirectory=inValue.Cast< ::String >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { applicationDirectory=inValue.Cast< ::String >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { applicationStorageDirectory=inValue.Cast< ::String >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_filesystem_get_special_dir") ) { lime_filesystem_get_special_dir=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SystemPath_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("applicationDirectory"),
	HX_CSTRING("applicationStorageDirectory"),
	HX_CSTRING("desktopDirectory"),
	HX_CSTRING("documentsDirectory"),
	HX_CSTRING("userDirectory"),
	HX_CSTRING("APP"),
	HX_CSTRING("STORAGE"),
	HX_CSTRING("DESKTOP"),
	HX_CSTRING("DOCS"),
	HX_CSTRING("USER"),
	HX_CSTRING("get_applicationDirectory"),
	HX_CSTRING("get_applicationStorageDirectory"),
	HX_CSTRING("get_desktopDirectory"),
	HX_CSTRING("get_documentsDirectory"),
	HX_CSTRING("get_userDirectory"),
	HX_CSTRING("lime_filesystem_get_special_dir"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SystemPath_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SystemPath_obj::applicationDirectory,"applicationDirectory");
	HX_MARK_MEMBER_NAME(SystemPath_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_MARK_MEMBER_NAME(SystemPath_obj::desktopDirectory,"desktopDirectory");
	HX_MARK_MEMBER_NAME(SystemPath_obj::documentsDirectory,"documentsDirectory");
	HX_MARK_MEMBER_NAME(SystemPath_obj::userDirectory,"userDirectory");
	HX_MARK_MEMBER_NAME(SystemPath_obj::APP,"APP");
	HX_MARK_MEMBER_NAME(SystemPath_obj::STORAGE,"STORAGE");
	HX_MARK_MEMBER_NAME(SystemPath_obj::DESKTOP,"DESKTOP");
	HX_MARK_MEMBER_NAME(SystemPath_obj::DOCS,"DOCS");
	HX_MARK_MEMBER_NAME(SystemPath_obj::USER,"USER");
	HX_MARK_MEMBER_NAME(SystemPath_obj::lime_filesystem_get_special_dir,"lime_filesystem_get_special_dir");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SystemPath_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SystemPath_obj::applicationDirectory,"applicationDirectory");
	HX_VISIT_MEMBER_NAME(SystemPath_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_VISIT_MEMBER_NAME(SystemPath_obj::desktopDirectory,"desktopDirectory");
	HX_VISIT_MEMBER_NAME(SystemPath_obj::documentsDirectory,"documentsDirectory");
	HX_VISIT_MEMBER_NAME(SystemPath_obj::userDirectory,"userDirectory");
	HX_VISIT_MEMBER_NAME(SystemPath_obj::APP,"APP");
	HX_VISIT_MEMBER_NAME(SystemPath_obj::STORAGE,"STORAGE");
	HX_VISIT_MEMBER_NAME(SystemPath_obj::DESKTOP,"DESKTOP");
	HX_VISIT_MEMBER_NAME(SystemPath_obj::DOCS,"DOCS");
	HX_VISIT_MEMBER_NAME(SystemPath_obj::USER,"USER");
	HX_VISIT_MEMBER_NAME(SystemPath_obj::lime_filesystem_get_special_dir,"lime_filesystem_get_special_dir");
};

Class SystemPath_obj::__mClass;

void SystemPath_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.utils.SystemPath"), hx::TCanCast< SystemPath_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SystemPath_obj::__boot()
{
	APP= (int)0;
	STORAGE= (int)1;
	DESKTOP= (int)2;
	DOCS= (int)3;
	USER= (int)4;
	lime_filesystem_get_special_dir= ::flash::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_filesystem_get_special_dir"),(int)1);
}

} // end namespace openfl
} // end namespace utils
