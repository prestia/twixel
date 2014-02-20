#include <hxcpp.h>

#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_media_Sound
#include <flash/media/Sound.h>
#endif
#ifndef INCLUDED_flash_media_SoundLoaderContext
#include <flash/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_flash_net_URLRequest
#include <flash/net/URLRequest.h>
#endif
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_flixel_system_FlixelSound
#include <flixel/system/FlixelSound.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace flixel{
namespace system{

Void FlixelSound_obj::__construct(::flash::net::URLRequest stream,::flash::media::SoundLoaderContext context,Dynamic __o_forcePlayAsMusic)
{
HX_STACK_PUSH("FlixelSound::new","openfl/Assets.hx",1474);
Dynamic forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
{
	HX_STACK_LINE(1476)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(1478)
	::flash::utils::ByteArray byteArray = ::flash::utils::ByteArray_obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::system::FlixelSound_obj::resourceName));		HX_STACK_VAR(byteArray,"byteArray");
	HX_STACK_LINE(1479)
	this->loadCompressedDataFromByteArray(byteArray,byteArray->length,forcePlayAsMusic);
}
;
	return null();
}

FlixelSound_obj::~FlixelSound_obj() { }

Dynamic FlixelSound_obj::__CreateEmpty() { return  new FlixelSound_obj; }
hx::ObjectPtr< FlixelSound_obj > FlixelSound_obj::__new(::flash::net::URLRequest stream,::flash::media::SoundLoaderContext context,Dynamic __o_forcePlayAsMusic)
{  hx::ObjectPtr< FlixelSound_obj > result = new FlixelSound_obj();
	result->__construct(stream,context,__o_forcePlayAsMusic);
	return result;}

Dynamic FlixelSound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlixelSound_obj > result = new FlixelSound_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String FlixelSound_obj::resourceName;


FlixelSound_obj::FlixelSound_obj()
{
}

void FlixelSound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlixelSound);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlixelSound_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlixelSound_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { return resourceName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlixelSound_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlixelSound_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("resourceName"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlixelSound_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlixelSound_obj::resourceName,"resourceName");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlixelSound_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlixelSound_obj::resourceName,"resourceName");
};

Class FlixelSound_obj::__mClass;

void FlixelSound_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.FlixelSound"), hx::TCanCast< FlixelSound_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlixelSound_obj::__boot()
{
	resourceName= HX_CSTRING("__ASSET__:sound_flixel_system_FlixelSound");
}

} // end namespace flixel
} // end namespace system
