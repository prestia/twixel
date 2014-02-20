#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#include <flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
namespace flixel{
namespace system{
namespace layer{

Void DrawStackItem_obj::__construct()
{
HX_STACK_PUSH("DrawStackItem::new","flixel/system/layer/DrawStackItem.hx",5);
{
	HX_STACK_LINE(21)
	this->antialiasing = false;
	HX_STACK_LINE(19)
	this->initialized = false;
	HX_STACK_LINE(14)
	this->blending = (int)0;
	HX_STACK_LINE(13)
	this->colored = false;
	HX_STACK_LINE(9)
	this->position = (int)0;
	HX_STACK_LINE(24)
	this->drawData = Array_obj< Float >::__new();
}
;
	return null();
}

DrawStackItem_obj::~DrawStackItem_obj() { }

Dynamic DrawStackItem_obj::__CreateEmpty() { return  new DrawStackItem_obj; }
hx::ObjectPtr< DrawStackItem_obj > DrawStackItem_obj::__new()
{  hx::ObjectPtr< DrawStackItem_obj > result = new DrawStackItem_obj();
	result->__construct();
	return result;}

Dynamic DrawStackItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DrawStackItem_obj > result = new DrawStackItem_obj();
	result->__construct();
	return result;}

Void DrawStackItem_obj::dispose( ){
{
		HX_STACK_PUSH("DrawStackItem::dispose","flixel/system/layer/DrawStackItem.hx",37);
		HX_STACK_THIS(this);
		HX_STACK_LINE(38)
		this->graphics = null();
		HX_STACK_LINE(39)
		this->drawData = null();
		HX_STACK_LINE(40)
		this->next = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawStackItem_obj,dispose,(void))

Void DrawStackItem_obj::reset( ){
{
		HX_STACK_PUSH("DrawStackItem::reset","flixel/system/layer/DrawStackItem.hx",29);
		HX_STACK_THIS(this);
		HX_STACK_LINE(30)
		this->graphics = null();
		HX_STACK_LINE(31)
		this->initialized = false;
		HX_STACK_LINE(32)
		this->antialiasing = false;
		HX_STACK_LINE(33)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DrawStackItem_obj,reset,(void))


DrawStackItem_obj::DrawStackItem_obj()
{
}

void DrawStackItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrawStackItem);
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(initialized,"initialized");
	HX_MARK_MEMBER_NAME(blending,"blending");
	HX_MARK_MEMBER_NAME(colored,"colored");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(drawData,"drawData");
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_END_CLASS();
}

void DrawStackItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(initialized,"initialized");
	HX_VISIT_MEMBER_NAME(blending,"blending");
	HX_VISIT_MEMBER_NAME(colored,"colored");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(drawData,"drawData");
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
}

Dynamic DrawStackItem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"colored") ) { return colored; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"blending") ) { return blending; }
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"drawData") ) { return drawData; }
		if (HX_FIELD_EQ(inName,"graphics") ) { return graphics; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DrawStackItem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::flixel::system::layer::DrawStackItem >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"colored") ) { colored=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"blending") ) { blending=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawData") ) { drawData=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::flixel::util::loaders::CachedGraphics >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { antialiasing=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DrawStackItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("antialiasing"));
	outFields->push(HX_CSTRING("initialized"));
	outFields->push(HX_CSTRING("blending"));
	outFields->push(HX_CSTRING("colored"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("drawData"));
	outFields->push(HX_CSTRING("graphics"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("dispose"),
	HX_CSTRING("reset"),
	HX_CSTRING("antialiasing"),
	HX_CSTRING("initialized"),
	HX_CSTRING("blending"),
	HX_CSTRING("colored"),
	HX_CSTRING("next"),
	HX_CSTRING("position"),
	HX_CSTRING("drawData"),
	HX_CSTRING("graphics"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawStackItem_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawStackItem_obj::__mClass,"__mClass");
};

Class DrawStackItem_obj::__mClass;

void DrawStackItem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.layer.DrawStackItem"), hx::TCanCast< DrawStackItem_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DrawStackItem_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace layer
