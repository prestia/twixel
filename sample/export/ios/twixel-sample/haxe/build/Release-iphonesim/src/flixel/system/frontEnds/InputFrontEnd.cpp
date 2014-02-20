#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void InputFrontEnd_obj::__construct()
{
HX_STACK_PUSH("InputFrontEnd::new","flixel/system/frontEnds/InputFrontEnd.hx",51);
{
	HX_STACK_LINE(51)
	this->list = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

InputFrontEnd_obj::~InputFrontEnd_obj() { }

Dynamic InputFrontEnd_obj::__CreateEmpty() { return  new InputFrontEnd_obj; }
hx::ObjectPtr< InputFrontEnd_obj > InputFrontEnd_obj::__new()
{  hx::ObjectPtr< InputFrontEnd_obj > result = new InputFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic InputFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InputFrontEnd_obj > result = new InputFrontEnd_obj();
	result->__construct();
	return result;}

Void InputFrontEnd_obj::destroy( ){
{
		HX_STACK_PUSH("InputFrontEnd::destroy","flixel/system/frontEnds/InputFrontEnd.hx",92);
		HX_STACK_THIS(this);
		HX_STACK_LINE(93)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(93)
		while(((_g < _g1->length))){
			HX_STACK_LINE(93)
			::flixel::interfaces::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::interfaces::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(93)
			++(_g);
			HX_STACK_LINE(95)
			input->destroy();
			HX_STACK_LINE(96)
			input = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,destroy,(void))

Void InputFrontEnd_obj::onFocusLost( ){
{
		HX_STACK_PUSH("InputFrontEnd::onFocusLost","flixel/system/frontEnds/InputFrontEnd.hx",81);
		HX_STACK_THIS(this);
		HX_STACK_LINE(82)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(82)
		while(((_g < _g1->length))){
			HX_STACK_LINE(82)
			::flixel::interfaces::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::interfaces::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(82)
			++(_g);
			HX_STACK_LINE(84)
			input->onFocusLost();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,onFocusLost,(void))

Void InputFrontEnd_obj::onFocus( ){
{
		HX_STACK_PUSH("InputFrontEnd::onFocus","flixel/system/frontEnds/InputFrontEnd.hx",70);
		HX_STACK_THIS(this);
		HX_STACK_LINE(71)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(71)
		while(((_g < _g1->length))){
			HX_STACK_LINE(71)
			::flixel::interfaces::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::interfaces::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(71)
			++(_g);
			HX_STACK_LINE(73)
			input->onFocus();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,onFocus,(void))

Void InputFrontEnd_obj::update( ){
{
		HX_STACK_PUSH("InputFrontEnd::update","flixel/system/frontEnds/InputFrontEnd.hx",59);
		HX_STACK_THIS(this);
		HX_STACK_LINE(60)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(60)
		while(((_g < _g1->length))){
			HX_STACK_LINE(60)
			::flixel::interfaces::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::interfaces::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(60)
			++(_g);
			HX_STACK_LINE(62)
			input->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,update,(void))

Void InputFrontEnd_obj::reset( ){
{
		HX_STACK_PUSH("InputFrontEnd::reset","flixel/system/frontEnds/InputFrontEnd.hx",43);
		HX_STACK_THIS(this);
		HX_STACK_LINE(44)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(44)
		while(((_g < _g1->length))){
			HX_STACK_LINE(44)
			::flixel::interfaces::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::interfaces::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(44)
			++(_g);
			HX_STACK_LINE(46)
			input->reset();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,reset,(void))

::flixel::input::keyboard::FlxKeyboard InputFrontEnd_obj::add_flixel_input_keyboard_FlxKeyboard( ::flixel::input::keyboard::FlxKeyboard Input){
	HX_STACK_PUSH("InputFrontEnd::add_flixel_input_keyboard_FlxKeyboard","flixel/system/frontEnds/InputFrontEnd.hx",25);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Input,"Input");
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(27)
		while(((_g < _g1->length))){
			HX_STACK_LINE(27)
			::flixel::interfaces::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::interfaces::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(27)
			++(_g);
			struct _Function_3_1{
				inline static bool Block( ::flixel::input::keyboard::FlxKeyboard &Input,::flixel::interfaces::IFlxInput &input){
					HX_STACK_PUSH("*::closure","flixel/system/frontEnds/InputFrontEnd.hx",29);
					{
						HX_STACK_LINE(29)
						bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
						struct _Function_4_1{
							inline static ::String Block( ::flixel::input::keyboard::FlxKeyboard &Input,bool &Simple){
								HX_STACK_PUSH("*::closure","flixel/system/frontEnds/InputFrontEnd.hx",29);
								{
									HX_STACK_LINE(29)
									::String s = ::Type_obj::getClassName(::Type_obj::getClass(Input));		HX_STACK_VAR(s,"s");
									HX_STACK_LINE(29)
									if (((s != null()))){
										HX_STACK_LINE(29)
										s = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));
										HX_STACK_LINE(29)
										if ((Simple)){
											HX_STACK_LINE(29)
											s = s.substr((s.lastIndexOf(HX_CSTRING("."),null()) + (int)1),null());
										}
									}
									HX_STACK_LINE(29)
									return s;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static ::String Block( ::flixel::interfaces::IFlxInput &input,bool &Simple){
								HX_STACK_PUSH("*::closure","flixel/system/frontEnds/InputFrontEnd.hx",29);
								{
									HX_STACK_LINE(29)
									::String s = ::Type_obj::getClassName(::Type_obj::getClass(input));		HX_STACK_VAR(s,"s");
									HX_STACK_LINE(29)
									if (((s != null()))){
										HX_STACK_LINE(29)
										s = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));
										HX_STACK_LINE(29)
										if ((Simple)){
											HX_STACK_LINE(29)
											s = s.substr((s.lastIndexOf(HX_CSTRING("."),null()) + (int)1),null());
										}
									}
									HX_STACK_LINE(29)
									return s;
								}
								return null();
							}
						};
						HX_STACK_LINE(29)
						return (_Function_4_1::Block(Input,Simple) == _Function_4_2::Block(input,Simple));
					}
					return null();
				}
			};
			HX_STACK_LINE(29)
			if ((_Function_3_1::Block(Input,input))){
				HX_STACK_LINE(30)
				return Input;
			}
		}
	}
	HX_STACK_LINE(35)
	this->list->push(Input);
	HX_STACK_LINE(36)
	return Input;
}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_keyboard_FlxKeyboard,return )

::flixel::input::mouse::FlxMouse InputFrontEnd_obj::add_flixel_input_mouse_FlxMouse( ::flixel::input::mouse::FlxMouse Input){
	HX_STACK_PUSH("InputFrontEnd::add_flixel_input_mouse_FlxMouse","flixel/system/frontEnds/InputFrontEnd.hx",25);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Input,"Input");
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(27)
		while(((_g < _g1->length))){
			HX_STACK_LINE(27)
			::flixel::interfaces::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::interfaces::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(27)
			++(_g);
			struct _Function_3_1{
				inline static bool Block( ::flixel::input::mouse::FlxMouse &Input,::flixel::interfaces::IFlxInput &input){
					HX_STACK_PUSH("*::closure","flixel/system/frontEnds/InputFrontEnd.hx",29);
					{
						HX_STACK_LINE(29)
						bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
						struct _Function_4_1{
							inline static ::String Block( ::flixel::input::mouse::FlxMouse &Input,bool &Simple){
								HX_STACK_PUSH("*::closure","flixel/system/frontEnds/InputFrontEnd.hx",29);
								{
									HX_STACK_LINE(29)
									::String s = ::Type_obj::getClassName(::Type_obj::getClass(Input));		HX_STACK_VAR(s,"s");
									HX_STACK_LINE(29)
									if (((s != null()))){
										HX_STACK_LINE(29)
										s = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));
										HX_STACK_LINE(29)
										if ((Simple)){
											HX_STACK_LINE(29)
											s = s.substr((s.lastIndexOf(HX_CSTRING("."),null()) + (int)1),null());
										}
									}
									HX_STACK_LINE(29)
									return s;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static ::String Block( ::flixel::interfaces::IFlxInput &input,bool &Simple){
								HX_STACK_PUSH("*::closure","flixel/system/frontEnds/InputFrontEnd.hx",29);
								{
									HX_STACK_LINE(29)
									::String s = ::Type_obj::getClassName(::Type_obj::getClass(input));		HX_STACK_VAR(s,"s");
									HX_STACK_LINE(29)
									if (((s != null()))){
										HX_STACK_LINE(29)
										s = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));
										HX_STACK_LINE(29)
										if ((Simple)){
											HX_STACK_LINE(29)
											s = s.substr((s.lastIndexOf(HX_CSTRING("."),null()) + (int)1),null());
										}
									}
									HX_STACK_LINE(29)
									return s;
								}
								return null();
							}
						};
						HX_STACK_LINE(29)
						return (_Function_4_1::Block(Input,Simple) == _Function_4_2::Block(input,Simple));
					}
					return null();
				}
			};
			HX_STACK_LINE(29)
			if ((_Function_3_1::Block(Input,input))){
				HX_STACK_LINE(30)
				return Input;
			}
		}
	}
	HX_STACK_LINE(35)
	this->list->push(Input);
	HX_STACK_LINE(36)
	return Input;
}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_mouse_FlxMouse,return )

::flixel::input::touch::FlxTouchManager InputFrontEnd_obj::add_flixel_input_touch_FlxTouchManager( ::flixel::input::touch::FlxTouchManager Input){
	HX_STACK_PUSH("InputFrontEnd::add_flixel_input_touch_FlxTouchManager","flixel/system/frontEnds/InputFrontEnd.hx",25);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Input,"Input");
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(27)
		while(((_g < _g1->length))){
			HX_STACK_LINE(27)
			::flixel::interfaces::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::interfaces::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(27)
			++(_g);
			struct _Function_3_1{
				inline static bool Block( ::flixel::input::touch::FlxTouchManager &Input,::flixel::interfaces::IFlxInput &input){
					HX_STACK_PUSH("*::closure","flixel/system/frontEnds/InputFrontEnd.hx",29);
					{
						HX_STACK_LINE(29)
						bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
						struct _Function_4_1{
							inline static ::String Block( ::flixel::input::touch::FlxTouchManager &Input,bool &Simple){
								HX_STACK_PUSH("*::closure","flixel/system/frontEnds/InputFrontEnd.hx",29);
								{
									HX_STACK_LINE(29)
									::String s = ::Type_obj::getClassName(::Type_obj::getClass(Input));		HX_STACK_VAR(s,"s");
									HX_STACK_LINE(29)
									if (((s != null()))){
										HX_STACK_LINE(29)
										s = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));
										HX_STACK_LINE(29)
										if ((Simple)){
											HX_STACK_LINE(29)
											s = s.substr((s.lastIndexOf(HX_CSTRING("."),null()) + (int)1),null());
										}
									}
									HX_STACK_LINE(29)
									return s;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static ::String Block( ::flixel::interfaces::IFlxInput &input,bool &Simple){
								HX_STACK_PUSH("*::closure","flixel/system/frontEnds/InputFrontEnd.hx",29);
								{
									HX_STACK_LINE(29)
									::String s = ::Type_obj::getClassName(::Type_obj::getClass(input));		HX_STACK_VAR(s,"s");
									HX_STACK_LINE(29)
									if (((s != null()))){
										HX_STACK_LINE(29)
										s = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));
										HX_STACK_LINE(29)
										if ((Simple)){
											HX_STACK_LINE(29)
											s = s.substr((s.lastIndexOf(HX_CSTRING("."),null()) + (int)1),null());
										}
									}
									HX_STACK_LINE(29)
									return s;
								}
								return null();
							}
						};
						HX_STACK_LINE(29)
						return (_Function_4_1::Block(Input,Simple) == _Function_4_2::Block(input,Simple));
					}
					return null();
				}
			};
			HX_STACK_LINE(29)
			if ((_Function_3_1::Block(Input,input))){
				HX_STACK_LINE(30)
				return Input;
			}
		}
	}
	HX_STACK_LINE(35)
	this->list->push(Input);
	HX_STACK_LINE(36)
	return Input;
}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_touch_FlxTouchManager,return )

::flixel::input::gamepad::FlxGamepadManager InputFrontEnd_obj::add_flixel_input_gamepad_FlxGamepadManager( ::flixel::input::gamepad::FlxGamepadManager Input){
	HX_STACK_PUSH("InputFrontEnd::add_flixel_input_gamepad_FlxGamepadManager","flixel/system/frontEnds/InputFrontEnd.hx",25);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Input,"Input");
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(27)
		while(((_g < _g1->length))){
			HX_STACK_LINE(27)
			::flixel::interfaces::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::interfaces::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(27)
			++(_g);
			struct _Function_3_1{
				inline static bool Block( ::flixel::input::gamepad::FlxGamepadManager &Input,::flixel::interfaces::IFlxInput &input){
					HX_STACK_PUSH("*::closure","flixel/system/frontEnds/InputFrontEnd.hx",29);
					{
						HX_STACK_LINE(29)
						bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
						struct _Function_4_1{
							inline static ::String Block( ::flixel::input::gamepad::FlxGamepadManager &Input,bool &Simple){
								HX_STACK_PUSH("*::closure","flixel/system/frontEnds/InputFrontEnd.hx",29);
								{
									HX_STACK_LINE(29)
									::String s = ::Type_obj::getClassName(::Type_obj::getClass(Input));		HX_STACK_VAR(s,"s");
									HX_STACK_LINE(29)
									if (((s != null()))){
										HX_STACK_LINE(29)
										s = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));
										HX_STACK_LINE(29)
										if ((Simple)){
											HX_STACK_LINE(29)
											s = s.substr((s.lastIndexOf(HX_CSTRING("."),null()) + (int)1),null());
										}
									}
									HX_STACK_LINE(29)
									return s;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static ::String Block( ::flixel::interfaces::IFlxInput &input,bool &Simple){
								HX_STACK_PUSH("*::closure","flixel/system/frontEnds/InputFrontEnd.hx",29);
								{
									HX_STACK_LINE(29)
									::String s = ::Type_obj::getClassName(::Type_obj::getClass(input));		HX_STACK_VAR(s,"s");
									HX_STACK_LINE(29)
									if (((s != null()))){
										HX_STACK_LINE(29)
										s = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));
										HX_STACK_LINE(29)
										if ((Simple)){
											HX_STACK_LINE(29)
											s = s.substr((s.lastIndexOf(HX_CSTRING("."),null()) + (int)1),null());
										}
									}
									HX_STACK_LINE(29)
									return s;
								}
								return null();
							}
						};
						HX_STACK_LINE(29)
						return (_Function_4_1::Block(Input,Simple) == _Function_4_2::Block(input,Simple));
					}
					return null();
				}
			};
			HX_STACK_LINE(29)
			if ((_Function_3_1::Block(Input,input))){
				HX_STACK_LINE(30)
				return Input;
			}
		}
	}
	HX_STACK_LINE(35)
	this->list->push(Input);
	HX_STACK_LINE(36)
	return Input;
}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_gamepad_FlxGamepadManager,return )


InputFrontEnd_obj::InputFrontEnd_obj()
{
}

void InputFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InputFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void InputFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
}

Dynamic InputFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"add_flixel_input_mouse_FlxMouse") ) { return add_flixel_input_mouse_FlxMouse_dyn(); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"add_flixel_input_keyboard_FlxKeyboard") ) { return add_flixel_input_keyboard_FlxKeyboard_dyn(); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"add_flixel_input_touch_FlxTouchManager") ) { return add_flixel_input_touch_FlxTouchManager_dyn(); }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"add_flixel_input_gamepad_FlxGamepadManager") ) { return add_flixel_input_gamepad_FlxGamepadManager_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InputFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InputFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("list"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("update"),
	HX_CSTRING("reset"),
	HX_CSTRING("list"),
	HX_CSTRING("add_flixel_input_keyboard_FlxKeyboard"),
	HX_CSTRING("add_flixel_input_mouse_FlxMouse"),
	HX_CSTRING("add_flixel_input_touch_FlxTouchManager"),
	HX_CSTRING("add_flixel_input_gamepad_FlxGamepadManager"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputFrontEnd_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputFrontEnd_obj::__mClass,"__mClass");
};

Class InputFrontEnd_obj::__mClass;

void InputFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.InputFrontEnd"), hx::TCanCast< InputFrontEnd_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void InputFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
