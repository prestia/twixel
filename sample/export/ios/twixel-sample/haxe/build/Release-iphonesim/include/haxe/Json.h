#ifndef INCLUDED_haxe_Json
#define INCLUDED_haxe_Json

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Json)
namespace haxe{


class HXCPP_CLASS_ATTRIBUTES  Json_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Json_obj OBJ_;
		Json_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Json_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Json_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Json"); }

		virtual Void invalidNumber( int start);
		Dynamic invalidNumber_dyn();

		virtual ::String parseString( );
		Dynamic parseString_dyn();

		virtual Dynamic parseRec( );
		Dynamic parseRec_dyn();

		virtual Void invalidChar( );
		Dynamic invalidChar_dyn();

		virtual Dynamic doParse( ::String str);
		Dynamic doParse_dyn();

		int pos;
		::String str;
		static Dynamic parse( ::String text);
		static Dynamic parse_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Json */ 
