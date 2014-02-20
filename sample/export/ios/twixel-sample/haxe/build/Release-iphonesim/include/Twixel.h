#ifndef INCLUDED_Twixel
#define INCLUDED_Twixel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Twixel)


class HXCPP_CLASS_ATTRIBUTES  Twixel_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Twixel_obj OBJ_;
		Twixel_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Twixel_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Twixel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Twixel"); }

		static bool tweet( ::String message);
		static Dynamic tweet_dyn();

		static Dynamic twixel_tweet;
		static Dynamic &twixel_tweet_dyn() { return twixel_tweet;}
};


#endif /* INCLUDED_Twixel */ 
