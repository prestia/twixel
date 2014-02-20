#ifndef INCLUDED_flash_errors_Error
#define INCLUDED_flash_errors_Error

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,errors,Error)
namespace flash{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES  Error_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Error_obj OBJ_;
		Error_obj();
		Void __construct(Dynamic message,Dynamic __o_id);

	public:
		static hx::ObjectPtr< Error_obj > __new(Dynamic message,Dynamic __o_id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Error_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Error"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::String getStackTrace( );
		Dynamic getStackTrace_dyn();

		Dynamic name;
		Dynamic message;
		int errorID;
};

} // end namespace flash
} // end namespace errors

#endif /* INCLUDED_flash_errors_Error */ 
