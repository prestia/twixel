#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_lime_utils_Libs
#include <lime/utils/Libs.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
namespace lime{
namespace utils{

Void Libs_obj::__construct()
{
	return null();
}

Libs_obj::~Libs_obj() { }

Dynamic Libs_obj::__CreateEmpty() { return  new Libs_obj; }
hx::ObjectPtr< Libs_obj > Libs_obj::__new()
{  hx::ObjectPtr< Libs_obj > result = new Libs_obj();
	result->__construct();
	return result;}

Dynamic Libs_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Libs_obj > result = new Libs_obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap Libs_obj::__moduleNames;

Dynamic Libs_obj::tryLoad( ::String name,::String library,::String func,int args){
	HX_STACK_PUSH("Libs::tryLoad","lime/utils/Libs.hx",12);
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(library,"library");
	HX_STACK_ARG(func,"func");
	HX_STACK_ARG(args,"args");
	HX_STACK_LINE(17)
	try{
		HX_STACK_LINE(20)
		Dynamic result = ::cpp::Lib_obj::load(name,func,args);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(27)
		if (((result != null()))){
			HX_STACK_LINE(29)
			::lime::utils::Libs_obj::loaderTrace((HX_CSTRING("Got result ") + name));
			HX_STACK_LINE(30)
			::lime::utils::Libs_obj::__moduleNames->set(library,name);
			HX_STACK_LINE(31)
			return result;
		}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(35)
				::lime::utils::Libs_obj::loaderTrace((HX_CSTRING("Failed to load : ") + name));
			}
		}
	}
	HX_STACK_LINE(43)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Libs_obj,tryLoad,return )

::String Libs_obj::findHaxeLib( ::String library){
	HX_STACK_PUSH("Libs::findHaxeLib","lime/utils/Libs.hx",68);
	HX_STACK_ARG(library,"library");
	HX_STACK_LINE(70)
	try{
		HX_STACK_LINE(74)
		::sys::io::Process proc = ::sys::io::Process_obj::__new(HX_CSTRING("haxelib"),Array_obj< ::String >::__new().Add(HX_CSTRING("path")).Add(library));		HX_STACK_VAR(proc,"proc");
		HX_STACK_LINE(76)
		if (((proc != null()))){
			HX_STACK_LINE(78)
			::haxe::io::Input stream = proc->_stdout;		HX_STACK_VAR(stream,"stream");
			HX_STACK_LINE(80)
			try{
				HX_STACK_LINE(80)
				while((true)){
					HX_STACK_LINE(84)
					::String s = stream->readLine();		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(86)
					if (((s.substr((int)0,(int)1) != HX_CSTRING("-")))){
						HX_STACK_LINE(88)
						stream->close();
						HX_STACK_LINE(89)
						proc->close();
						HX_STACK_LINE(90)
						::lime::utils::Libs_obj::loaderTrace((HX_CSTRING("Found haxelib ") + s));
						HX_STACK_LINE(91)
						return s;
					}
				}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
			HX_STACK_LINE(99)
			stream->close();
			HX_STACK_LINE(100)
			proc->close();
		}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(108)
	return HX_CSTRING("");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Libs_obj,findHaxeLib,return )

::String Libs_obj::sysName( ){
	HX_STACK_PUSH("Libs::sysName","lime/utils/Libs.hx",112);
	HX_STACK_LINE(116)
	Dynamic sys_string = ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("sys_string"),(int)0);		HX_STACK_VAR(sys_string,"sys_string");
	HX_STACK_LINE(117)
	return sys_string().Cast< ::String >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Libs_obj,sysName,return )

Dynamic Libs_obj::load( ::String library,::String method,hx::Null< int >  __o_args){
int args = __o_args.Default(0);
	HX_STACK_PUSH("Libs::load","lime/utils/Libs.hx",163);
	HX_STACK_ARG(library,"library");
	HX_STACK_ARG(method,"method");
	HX_STACK_ARG(args,"args");
{
		HX_STACK_LINE(166)
		return ::cpp::Lib_obj::load(library,method,args);
		HX_STACK_LINE(174)
		if (((::lime::utils::Libs_obj::__moduleNames == null()))){
			HX_STACK_LINE(174)
			::lime::utils::Libs_obj::__moduleNames = ::haxe::ds::StringMap_obj::__new();
		}
		HX_STACK_LINE(175)
		if ((::lime::utils::Libs_obj::__moduleNames->exists(library))){
			HX_STACK_LINE(175)
			return ::cpp::Lib_obj::load(::lime::utils::Libs_obj::__moduleNames->get(library),method,args);
		}
		HX_STACK_LINE(185)
		::lime::utils::Libs_obj::__moduleNames->set(library,library);
		HX_STACK_LINE(187)
		Dynamic result = ::lime::utils::Libs_obj::tryLoad((HX_CSTRING("./") + library),library,method,args);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(189)
		if (((result == null()))){
			HX_STACK_LINE(189)
			result = ::lime::utils::Libs_obj::tryLoad((HX_CSTRING(".\\") + library),library,method,args);
		}
		HX_STACK_LINE(195)
		if (((result == null()))){
			HX_STACK_LINE(195)
			result = ::lime::utils::Libs_obj::tryLoad(library,library,method,args);
		}
		HX_STACK_LINE(201)
		if (((result == null()))){
			HX_STACK_LINE(203)
			::String slash = (  (((::lime::utils::Libs_obj::sysName().substr((int)7,null()).toLowerCase() == HX_CSTRING("windows")))) ? ::String(HX_CSTRING("\\")) : ::String(HX_CSTRING("/")) );		HX_STACK_VAR(slash,"slash");
			HX_STACK_LINE(204)
			::String haxelib = ::lime::utils::Libs_obj::findHaxeLib(HX_CSTRING("lime"));		HX_STACK_VAR(haxelib,"haxelib");
			HX_STACK_LINE(206)
			if (((haxelib != HX_CSTRING("")))){
				HX_STACK_LINE(207)
				result = ::lime::utils::Libs_obj::tryLoad(((((((haxelib + slash) + HX_CSTRING("ndll")) + slash) + ::lime::utils::Libs_obj::sysName()) + slash) + library),library,method,args);
				HX_STACK_LINE(208)
				if (((result == null()))){
					HX_STACK_LINE(208)
					result = ::lime::utils::Libs_obj::tryLoad((((((((haxelib + slash) + HX_CSTRING("ndll")) + slash) + ::lime::utils::Libs_obj::sysName()) + HX_CSTRING("64")) + slash) + library),library,method,args);
				}
			}
		}
		HX_STACK_LINE(215)
		::lime::utils::Libs_obj::loaderTrace((HX_CSTRING("Result : ") + ::Std_obj::string(result)));
		HX_STACK_LINE(223)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Libs_obj,load,return )

Void Libs_obj::loaderTrace( ::String message){
{
		HX_STACK_PUSH("Libs::loaderTrace","lime/utils/Libs.hx",227);
		HX_STACK_ARG(message,"message");
		HX_STACK_LINE(233)
		Dynamic get_env = ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("get_env"),(int)1);		HX_STACK_VAR(get_env,"get_env");
		HX_STACK_LINE(234)
		bool debug = (get_env(HX_CSTRING("OPENFL_LOAD_DEBUG")) != null());		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(242)
		if ((debug)){
			HX_STACK_LINE(242)
			::Sys_obj::println(message);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Libs_obj,loaderTrace,(void))


Libs_obj::Libs_obj()
{
}

void Libs_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Libs);
	HX_MARK_END_CLASS();
}

void Libs_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Libs_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tryLoad") ) { return tryLoad_dyn(); }
		if (HX_FIELD_EQ(inName,"sysName") ) { return sysName_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"findHaxeLib") ) { return findHaxeLib_dyn(); }
		if (HX_FIELD_EQ(inName,"loaderTrace") ) { return loaderTrace_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { return __moduleNames; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Libs_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"__moduleNames") ) { __moduleNames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Libs_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__moduleNames"),
	HX_CSTRING("tryLoad"),
	HX_CSTRING("findHaxeLib"),
	HX_CSTRING("sysName"),
	HX_CSTRING("load"),
	HX_CSTRING("loaderTrace"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Libs_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Libs_obj::__moduleNames,"__moduleNames");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Libs_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Libs_obj::__moduleNames,"__moduleNames");
};

Class Libs_obj::__mClass;

void Libs_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("lime.utils.Libs"), hx::TCanCast< Libs_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Libs_obj::__boot()
{
	__moduleNames= null();
}

} // end namespace lime
} // end namespace utils
