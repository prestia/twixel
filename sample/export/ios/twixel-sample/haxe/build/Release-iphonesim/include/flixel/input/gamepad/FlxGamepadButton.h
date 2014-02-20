#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#define INCLUDED_flixel_input_gamepad_FlxGamepadButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadButton)
namespace flixel{
namespace input{
namespace gamepad{


class HXCPP_CLASS_ATTRIBUTES  FlxGamepadButton_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxGamepadButton_obj OBJ_;
		FlxGamepadButton_obj();
		Void __construct(int ID,hx::Null< int >  __o_Current,hx::Null< int >  __o_Last);

	public:
		static hx::ObjectPtr< FlxGamepadButton_obj > __new(int ID,hx::Null< int >  __o_Current,hx::Null< int >  __o_Last);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxGamepadButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxGamepadButton"); }

		virtual Void reset( );
		Dynamic reset_dyn();

		int last;
		int current;
		int id;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_input_gamepad_FlxGamepadButton */ 
