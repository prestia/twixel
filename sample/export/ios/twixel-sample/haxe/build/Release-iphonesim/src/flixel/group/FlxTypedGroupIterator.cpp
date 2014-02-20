#include <hxcpp.h>

#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
namespace flixel{
namespace group{

Void FlxTypedGroupIterator_obj::__construct(Dynamic GroupMembers,Dynamic filter)
{
HX_STACK_PUSH("FlxTypedGroupIterator::new","flixel/group/FlxTypedGroupIterator.hx",17);
{
	HX_STACK_LINE(18)
	this->_groupMembers = GroupMembers;
	HX_STACK_LINE(19)
	this->_cursor = (int)0;
	HX_STACK_LINE(20)
	this->_filter = filter;
}
;
	return null();
}

FlxTypedGroupIterator_obj::~FlxTypedGroupIterator_obj() { }

Dynamic FlxTypedGroupIterator_obj::__CreateEmpty() { return  new FlxTypedGroupIterator_obj; }
hx::ObjectPtr< FlxTypedGroupIterator_obj > FlxTypedGroupIterator_obj::__new(Dynamic GroupMembers,Dynamic filter)
{  hx::ObjectPtr< FlxTypedGroupIterator_obj > result = new FlxTypedGroupIterator_obj();
	result->__construct(GroupMembers,filter);
	return result;}

Dynamic FlxTypedGroupIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedGroupIterator_obj > result = new FlxTypedGroupIterator_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool FlxTypedGroupIterator_obj::hasNext( ){
	HX_STACK_PUSH("FlxTypedGroupIterator::hasNext","flixel/group/FlxTypedGroupIterator.hx",29);
	HX_STACK_THIS(this);
	HX_STACK_LINE(30)
	while(((bool((this->_cursor < this->_groupMembers->__Field(HX_CSTRING("length"),true))) && bool(((bool((this->_groupMembers->__GetItem(this->_cursor) == null())) || bool((bool((this->_filter_dyn() != null())) && bool(!(this->_filter(this->_groupMembers->__GetItem(this->_cursor)))))))))))){
		HX_STACK_LINE(31)
		(this->_cursor)++;
	}
	HX_STACK_LINE(34)
	return (this->_cursor < this->_groupMembers->__Field(HX_CSTRING("length"),true));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroupIterator_obj,hasNext,return )

Dynamic FlxTypedGroupIterator_obj::next( ){
	HX_STACK_PUSH("FlxTypedGroupIterator::next","flixel/group/FlxTypedGroupIterator.hx",24);
	HX_STACK_THIS(this);
	HX_STACK_LINE(24)
	return (  ((this->hasNext())) ? Dynamic(this->_groupMembers->__GetItem((this->_cursor)++)) : Dynamic(null()) );
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroupIterator_obj,next,return )


FlxTypedGroupIterator_obj::FlxTypedGroupIterator_obj()
{
}

void FlxTypedGroupIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedGroupIterator);
	HX_MARK_MEMBER_NAME(_filter,"_filter");
	HX_MARK_MEMBER_NAME(_cursor,"_cursor");
	HX_MARK_MEMBER_NAME(_groupMembers,"_groupMembers");
	HX_MARK_END_CLASS();
}

void FlxTypedGroupIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_filter,"_filter");
	HX_VISIT_MEMBER_NAME(_cursor,"_cursor");
	HX_VISIT_MEMBER_NAME(_groupMembers,"_groupMembers");
}

Dynamic FlxTypedGroupIterator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		if (HX_FIELD_EQ(inName,"_filter") ) { return _filter; }
		if (HX_FIELD_EQ(inName,"_cursor") ) { return _cursor; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_groupMembers") ) { return _groupMembers; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedGroupIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_filter") ) { _filter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cursor") ) { _cursor=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_groupMembers") ) { _groupMembers=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedGroupIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_cursor"));
	outFields->push(HX_CSTRING("_groupMembers"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("hasNext"),
	HX_CSTRING("next"),
	HX_CSTRING("_filter"),
	HX_CSTRING("_cursor"),
	HX_CSTRING("_groupMembers"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedGroupIterator_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedGroupIterator_obj::__mClass,"__mClass");
};

Class FlxTypedGroupIterator_obj::__mClass;

void FlxTypedGroupIterator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.group.FlxTypedGroupIterator"), hx::TCanCast< FlxTypedGroupIterator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTypedGroupIterator_obj::__boot()
{
}

} // end namespace flixel
} // end namespace group
