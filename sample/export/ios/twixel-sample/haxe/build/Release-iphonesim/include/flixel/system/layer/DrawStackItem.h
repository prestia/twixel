#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#define INCLUDED_flixel_system_layer_DrawStackItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,system,layer,DrawStackItem)
HX_DECLARE_CLASS3(flixel,util,loaders,CachedGraphics)
namespace flixel{
namespace system{
namespace layer{


class HXCPP_CLASS_ATTRIBUTES  DrawStackItem_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DrawStackItem_obj OBJ_;
		DrawStackItem_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< DrawStackItem_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DrawStackItem_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DrawStackItem"); }

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		bool antialiasing;
		bool initialized;
		int blending;
		bool colored;
		::flixel::system::layer::DrawStackItem next;
		int position;
		Array< Float > drawData;
		::flixel::util::loaders::CachedGraphics graphics;
};

} // end namespace flixel
} // end namespace system
} // end namespace layer

#endif /* INCLUDED_flixel_system_layer_DrawStackItem */ 
