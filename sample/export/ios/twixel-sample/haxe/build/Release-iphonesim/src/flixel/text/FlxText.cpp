#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_filters_BitmapFilter
#include <flash/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_text_TextFormatAlign
#include <flash/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace text{

Void FlxText_obj::__construct(Float X,Float Y,int Width,::String Text,hx::Null< int >  __o_size,hx::Null< bool >  __o_EmbeddedFont)
{
HX_STACK_PUSH("FlxText::new","flixel/text/FlxText.hx",24);
int size = __o_size.Default(8);
bool EmbeddedFont = __o_EmbeddedFont.Default(true);
{
	HX_STACK_LINE(131)
	this->_heightInc = (int)0;
	HX_STACK_LINE(130)
	this->_widthInc = (int)0;
	HX_STACK_LINE(105)
	this->borderQuality = (int)1;
	HX_STACK_LINE(98)
	this->borderSize = (int)1;
	HX_STACK_LINE(93)
	this->borderColor = (int)0;
	HX_STACK_LINE(88)
	this->borderStyle = (int)0;
	HX_STACK_LINE(144)
	super::__construct(X,Y,null());
	HX_STACK_LINE(146)
	this->_filters = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(148)
	if (((Text == null()))){
		HX_STACK_LINE(149)
		Text = HX_CSTRING("");
	}
	HX_STACK_LINE(153)
	this->_textField = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(154)
	this->_textField->set_width(Width);
	HX_STACK_LINE(155)
	this->_textField->set_selectable(false);
	HX_STACK_LINE(156)
	this->_textField->set_multiline(true);
	HX_STACK_LINE(157)
	this->_textField->set_wordWrap(true);
	HX_STACK_LINE(158)
	this->_defaultFormat = ::flash::text::TextFormat_obj::__new(::flixel::system::FlxAssets_obj::FONT_DEFAULT,size,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(159)
	this->_formatAdjusted = ::flash::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(160)
	this->_textField->set_defaultTextFormat(this->_defaultFormat);
	HX_STACK_LINE(161)
	this->_textField->set_text(Text);
	HX_STACK_LINE(162)
	this->_textField->set_embedFonts(EmbeddedFont);
	HX_STACK_LINE(164)
	this->_formats = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(170)
	this->_textField->set_height((  (((Text.length <= (int)0))) ? Float((int)1) : Float((int)10) ));
	HX_STACK_LINE(172)
	this->allowCollisions = (int)0;
	HX_STACK_LINE(173)
	this->set_moves(false);
	HX_STACK_LINE(175)
	::String key = ::flixel::FlxG_obj::bitmap->getUniqueKey(HX_CSTRING("text"));		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(176)
	this->makeGraphic(Width,(int)1,(int)0,false,key);
	HX_STACK_LINE(181)
	if (((Text != HX_CSTRING("")))){
		HX_STACK_LINE(182)
		this->calcFrame(null());
	}
}
;
	return null();
}

FlxText_obj::~FlxText_obj() { }

Dynamic FlxText_obj::__CreateEmpty() { return  new FlxText_obj; }
hx::ObjectPtr< FlxText_obj > FlxText_obj::__new(Float X,Float Y,int Width,::String Text,hx::Null< int >  __o_size,hx::Null< bool >  __o_EmbeddedFont)
{  hx::ObjectPtr< FlxText_obj > result = new FlxText_obj();
	result->__construct(X,Y,Width,Text,__o_size,__o_EmbeddedFont);
	return result;}

Dynamic FlxText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxText_obj > result = new FlxText_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void FlxText_obj::updateFormat( ::flash::text::TextFormat Format){
{
		HX_STACK_PUSH("FlxText::updateFormat","flixel/text/FlxText.hx",874);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Format,"Format");
		HX_STACK_LINE(874)
		this->_textField->setTextFormat(Format,(int)0,this->_textField->get_text().length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,updateFormat,(void))

::String FlxText_obj::convertTextAlignmentFromString( ::String StrAlign){
	HX_STACK_PUSH("FlxText::convertTextAlignmentFromString","flixel/text/FlxText.hx",868);
	HX_STACK_THIS(this);
	HX_STACK_ARG(StrAlign,"StrAlign");
	HX_STACK_LINE(868)
	return StrAlign;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,convertTextAlignmentFromString,return )

::flash::text::TextFormat FlxText_obj::dtfCopy( ){
	HX_STACK_PUSH("FlxText::dtfCopy","flixel/text/FlxText.hx",837);
	HX_STACK_THIS(this);
	HX_STACK_LINE(838)
	::flash::text::TextFormat defaultTextFormat = this->_textField->get_defaultTextFormat();		HX_STACK_VAR(defaultTextFormat,"defaultTextFormat");
	HX_STACK_LINE(840)
	return ::flash::text::TextFormat_obj::__new(defaultTextFormat->font,defaultTextFormat->size,defaultTextFormat->color,defaultTextFormat->bold,defaultTextFormat->italic,defaultTextFormat->underline,defaultTextFormat->url,defaultTextFormat->target,defaultTextFormat->align,null(),null(),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,dtfCopy,return )

Void FlxText_obj::calcFrame( hx::Null< bool >  __o_RunOnCpp){
bool RunOnCpp = __o_RunOnCpp.Default(false);
	HX_STACK_PUSH("FlxText::calcFrame","flixel/text/FlxText.hx",673);
	HX_STACK_THIS(this);
	HX_STACK_ARG(RunOnCpp,"RunOnCpp");
{
		HX_STACK_LINE(674)
		if (((this->_textField == null()))){
			HX_STACK_LINE(675)
			return null();
		}
		HX_STACK_LINE(679)
		if (((this->_filters != null()))){
			HX_STACK_LINE(680)
			this->_textField->set_filters(this->_filters);
		}
		HX_STACK_LINE(684)
		this->regenGraphics();
		HX_STACK_LINE(686)
		if (((bool((bool((this->_textField != null())) && bool((this->_textField->get_text() != null())))) && bool((this->_textField->get_text().length > (int)0))))){
			HX_STACK_LINE(689)
			this->_formatAdjusted->font = this->_defaultFormat->font;
			HX_STACK_LINE(690)
			this->_formatAdjusted->size = this->_defaultFormat->size;
			HX_STACK_LINE(691)
			this->_formatAdjusted->bold = this->_defaultFormat->bold;
			HX_STACK_LINE(692)
			this->_formatAdjusted->italic = this->_defaultFormat->italic;
			HX_STACK_LINE(693)
			this->_formatAdjusted->color = this->_defaultFormat->color;
			HX_STACK_LINE(694)
			this->_formatAdjusted->align = this->_defaultFormat->align;
			HX_STACK_LINE(695)
			this->_matrix->identity();
			HX_STACK_LINE(697)
			this->_matrix->translate(::Std_obj::_int((0.5 * this->_widthInc)),::Std_obj::_int((0.5 * this->_heightInc)));
			HX_STACK_LINE(703)
			if (((bool((this->_defaultFormat->align == ::flash::text::TextFormatAlign_obj::CENTER)) && bool((this->_textField->get_numLines() == (int)1))))){
				HX_STACK_LINE(706)
				this->_formatAdjusted->align = ::flash::text::TextFormatAlign_obj::LEFT;
				HX_STACK_LINE(707)
				this->_textField->setTextFormat(this->_formatAdjusted,(int)0,this->_textField->get_text().length);
				HX_STACK_LINE(712)
				this->_matrix->translate(::Math_obj::floor((Float(((this->get_width() - this->_textField->get_textWidth()))) / Float((int)2))),(int)0);
			}
			HX_STACK_LINE(716)
			if (((this->borderStyle != (int)0))){
				HX_STACK_LINE(718)
				int iterations = ::Std_obj::_int((this->borderSize * this->borderQuality));		HX_STACK_VAR(iterations,"iterations");
				HX_STACK_LINE(719)
				if (((iterations <= (int)0))){
					HX_STACK_LINE(720)
					iterations = (int)1;
				}
				HX_STACK_LINE(723)
				Float delta = (Float(this->borderSize) / Float(iterations));		HX_STACK_VAR(delta,"delta");
				HX_STACK_LINE(725)
				if (((this->borderStyle == (int)1))){
					HX_STACK_LINE(729)
					{
						HX_STACK_LINE(729)
						::flash::text::TextFormat FormatAdjusted = this->_formatAdjusted;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
						HX_STACK_LINE(729)
						FormatAdjusted->color = this->borderColor;
						HX_STACK_LINE(729)
						this->_textField->setTextFormat(FormatAdjusted,(int)0,this->_textField->get_text().length);
						HX_STACK_LINE(729)
						{
							HX_STACK_LINE(729)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(729)
							while(((_g < _g1->length))){
								HX_STACK_LINE(729)
								::flixel::text::FlxTextFormat format = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(format,"format");
								HX_STACK_LINE(729)
								++(_g);
								HX_STACK_LINE(729)
								if ((((this->_textField->get_text().length - (int)1) < format->start))){
									HX_STACK_LINE(729)
									break;
								}
								else{
									HX_STACK_LINE(729)
									FormatAdjusted->font = format->format->font;
									HX_STACK_LINE(729)
									FormatAdjusted->bold = format->format->bold;
									HX_STACK_LINE(729)
									FormatAdjusted->italic = format->format->italic;
									HX_STACK_LINE(729)
									FormatAdjusted->size = format->format->size;
									HX_STACK_LINE(729)
									FormatAdjusted->color = format->borderColor;
								}
								HX_STACK_LINE(729)
								this->_textField->setTextFormat(FormatAdjusted,format->start,::Std_obj::_int(::Math_obj::min(format->end,this->_textField->get_text().length)));
							}
						}
					}
					HX_STACK_LINE(731)
					{
						HX_STACK_LINE(731)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(731)
						while(((_g < iterations))){
							HX_STACK_LINE(731)
							int iter = (_g)++;		HX_STACK_VAR(iter,"iter");
							HX_STACK_LINE(733)
							this->_matrix->translate(delta,delta);
							HX_STACK_LINE(734)
							this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
						}
					}
					HX_STACK_LINE(737)
					this->_matrix->translate(-(this->borderSize),-(this->borderSize));
					HX_STACK_LINE(738)
					{
						HX_STACK_LINE(738)
						::flash::text::TextFormat FormatAdjusted = this->_formatAdjusted;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
						HX_STACK_LINE(738)
						FormatAdjusted->color = this->_defaultFormat->color;
						HX_STACK_LINE(738)
						this->_textField->setTextFormat(FormatAdjusted,(int)0,this->_textField->get_text().length);
						HX_STACK_LINE(738)
						{
							HX_STACK_LINE(738)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(738)
							while(((_g < _g1->length))){
								HX_STACK_LINE(738)
								::flixel::text::FlxTextFormat format = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(format,"format");
								HX_STACK_LINE(738)
								++(_g);
								HX_STACK_LINE(738)
								if ((((this->_textField->get_text().length - (int)1) < format->start))){
									HX_STACK_LINE(738)
									break;
								}
								else{
									HX_STACK_LINE(738)
									FormatAdjusted->font = format->format->font;
									HX_STACK_LINE(738)
									FormatAdjusted->bold = format->format->bold;
									HX_STACK_LINE(738)
									FormatAdjusted->italic = format->format->italic;
									HX_STACK_LINE(738)
									FormatAdjusted->size = format->format->size;
									HX_STACK_LINE(738)
									FormatAdjusted->color = format->format->color;
								}
								HX_STACK_LINE(738)
								this->_textField->setTextFormat(FormatAdjusted,format->start,::Std_obj::_int(::Math_obj::min(format->end,this->_textField->get_text().length)));
							}
						}
					}
				}
				else{
					HX_STACK_LINE(740)
					if (((this->borderStyle == (int)2))){
						HX_STACK_LINE(744)
						{
							HX_STACK_LINE(744)
							::flash::text::TextFormat FormatAdjusted = this->_formatAdjusted;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
							HX_STACK_LINE(744)
							FormatAdjusted->color = this->borderColor;
							HX_STACK_LINE(744)
							this->_textField->setTextFormat(FormatAdjusted,(int)0,this->_textField->get_text().length);
							HX_STACK_LINE(744)
							{
								HX_STACK_LINE(744)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(744)
								while(((_g < _g1->length))){
									HX_STACK_LINE(744)
									::flixel::text::FlxTextFormat format = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(format,"format");
									HX_STACK_LINE(744)
									++(_g);
									HX_STACK_LINE(744)
									if ((((this->_textField->get_text().length - (int)1) < format->start))){
										HX_STACK_LINE(744)
										break;
									}
									else{
										HX_STACK_LINE(744)
										FormatAdjusted->font = format->format->font;
										HX_STACK_LINE(744)
										FormatAdjusted->bold = format->format->bold;
										HX_STACK_LINE(744)
										FormatAdjusted->italic = format->format->italic;
										HX_STACK_LINE(744)
										FormatAdjusted->size = format->format->size;
										HX_STACK_LINE(744)
										FormatAdjusted->color = format->borderColor;
									}
									HX_STACK_LINE(744)
									this->_textField->setTextFormat(FormatAdjusted,format->start,::Std_obj::_int(::Math_obj::min(format->end,this->_textField->get_text().length)));
								}
							}
						}
						HX_STACK_LINE(746)
						Float itd = delta;		HX_STACK_VAR(itd,"itd");
						HX_STACK_LINE(747)
						{
							HX_STACK_LINE(747)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(747)
							while(((_g < iterations))){
								HX_STACK_LINE(747)
								int iter = (_g)++;		HX_STACK_VAR(iter,"iter");
								HX_STACK_LINE(749)
								this->_matrix->translate(-(itd),-(itd));
								HX_STACK_LINE(750)
								this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
								HX_STACK_LINE(751)
								this->_matrix->translate(itd,(int)0);
								HX_STACK_LINE(752)
								this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
								HX_STACK_LINE(753)
								this->_matrix->translate(itd,(int)0);
								HX_STACK_LINE(754)
								this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
								HX_STACK_LINE(755)
								this->_matrix->translate((int)0,itd);
								HX_STACK_LINE(756)
								this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
								HX_STACK_LINE(757)
								this->_matrix->translate((int)0,itd);
								HX_STACK_LINE(758)
								this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
								HX_STACK_LINE(759)
								this->_matrix->translate(-(itd),(int)0);
								HX_STACK_LINE(760)
								this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
								HX_STACK_LINE(761)
								this->_matrix->translate(-(itd),(int)0);
								HX_STACK_LINE(762)
								this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
								HX_STACK_LINE(763)
								this->_matrix->translate((int)0,-(itd));
								HX_STACK_LINE(764)
								this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
								HX_STACK_LINE(765)
								this->_matrix->translate(itd,(int)0);
								HX_STACK_LINE(766)
								hx::AddEq(itd,delta);
							}
						}
						HX_STACK_LINE(769)
						{
							HX_STACK_LINE(769)
							::flash::text::TextFormat FormatAdjusted = this->_formatAdjusted;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
							HX_STACK_LINE(769)
							FormatAdjusted->color = this->_defaultFormat->color;
							HX_STACK_LINE(769)
							this->_textField->setTextFormat(FormatAdjusted,(int)0,this->_textField->get_text().length);
							HX_STACK_LINE(769)
							{
								HX_STACK_LINE(769)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(769)
								while(((_g < _g1->length))){
									HX_STACK_LINE(769)
									::flixel::text::FlxTextFormat format = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(format,"format");
									HX_STACK_LINE(769)
									++(_g);
									HX_STACK_LINE(769)
									if ((((this->_textField->get_text().length - (int)1) < format->start))){
										HX_STACK_LINE(769)
										break;
									}
									else{
										HX_STACK_LINE(769)
										FormatAdjusted->font = format->format->font;
										HX_STACK_LINE(769)
										FormatAdjusted->bold = format->format->bold;
										HX_STACK_LINE(769)
										FormatAdjusted->italic = format->format->italic;
										HX_STACK_LINE(769)
										FormatAdjusted->size = format->format->size;
										HX_STACK_LINE(769)
										FormatAdjusted->color = format->format->color;
									}
									HX_STACK_LINE(769)
									this->_textField->setTextFormat(FormatAdjusted,format->start,::Std_obj::_int(::Math_obj::min(format->end,this->_textField->get_text().length)));
								}
							}
						}
					}
					else{
						HX_STACK_LINE(771)
						if (((this->borderStyle == (int)3))){
							HX_STACK_LINE(776)
							{
								HX_STACK_LINE(776)
								::flash::text::TextFormat FormatAdjusted = this->_formatAdjusted;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
								HX_STACK_LINE(776)
								FormatAdjusted->color = this->borderColor;
								HX_STACK_LINE(776)
								this->_textField->setTextFormat(FormatAdjusted,(int)0,this->_textField->get_text().length);
								HX_STACK_LINE(776)
								{
									HX_STACK_LINE(776)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(776)
									while(((_g < _g1->length))){
										HX_STACK_LINE(776)
										::flixel::text::FlxTextFormat format = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(format,"format");
										HX_STACK_LINE(776)
										++(_g);
										HX_STACK_LINE(776)
										if ((((this->_textField->get_text().length - (int)1) < format->start))){
											HX_STACK_LINE(776)
											break;
										}
										else{
											HX_STACK_LINE(776)
											FormatAdjusted->font = format->format->font;
											HX_STACK_LINE(776)
											FormatAdjusted->bold = format->format->bold;
											HX_STACK_LINE(776)
											FormatAdjusted->italic = format->format->italic;
											HX_STACK_LINE(776)
											FormatAdjusted->size = format->format->size;
											HX_STACK_LINE(776)
											FormatAdjusted->color = format->borderColor;
										}
										HX_STACK_LINE(776)
										this->_textField->setTextFormat(FormatAdjusted,format->start,::Std_obj::_int(::Math_obj::min(format->end,this->_textField->get_text().length)));
									}
								}
							}
							HX_STACK_LINE(778)
							Float itd = delta;		HX_STACK_VAR(itd,"itd");
							HX_STACK_LINE(779)
							{
								HX_STACK_LINE(779)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(779)
								while(((_g < iterations))){
									HX_STACK_LINE(779)
									int iter = (_g)++;		HX_STACK_VAR(iter,"iter");
									HX_STACK_LINE(781)
									this->_matrix->translate(-(itd),-(itd));
									HX_STACK_LINE(782)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
									HX_STACK_LINE(783)
									this->_matrix->translate((itd * (int)2),(int)0);
									HX_STACK_LINE(784)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
									HX_STACK_LINE(785)
									this->_matrix->translate((int)0,(itd * (int)2));
									HX_STACK_LINE(786)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
									HX_STACK_LINE(787)
									this->_matrix->translate((-(itd) * (int)2),(int)0);
									HX_STACK_LINE(788)
									this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
									HX_STACK_LINE(789)
									this->_matrix->translate(itd,-(itd));
									HX_STACK_LINE(790)
									hx::AddEq(itd,delta);
								}
							}
							HX_STACK_LINE(793)
							{
								HX_STACK_LINE(793)
								::flash::text::TextFormat FormatAdjusted = this->_formatAdjusted;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
								HX_STACK_LINE(793)
								FormatAdjusted->color = this->_defaultFormat->color;
								HX_STACK_LINE(793)
								this->_textField->setTextFormat(FormatAdjusted,(int)0,this->_textField->get_text().length);
								HX_STACK_LINE(793)
								{
									HX_STACK_LINE(793)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(793)
									while(((_g < _g1->length))){
										HX_STACK_LINE(793)
										::flixel::text::FlxTextFormat format = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(format,"format");
										HX_STACK_LINE(793)
										++(_g);
										HX_STACK_LINE(793)
										if ((((this->_textField->get_text().length - (int)1) < format->start))){
											HX_STACK_LINE(793)
											break;
										}
										else{
											HX_STACK_LINE(793)
											FormatAdjusted->font = format->format->font;
											HX_STACK_LINE(793)
											FormatAdjusted->bold = format->format->bold;
											HX_STACK_LINE(793)
											FormatAdjusted->italic = format->format->italic;
											HX_STACK_LINE(793)
											FormatAdjusted->size = format->format->size;
											HX_STACK_LINE(793)
											FormatAdjusted->color = format->format->color;
										}
										HX_STACK_LINE(793)
										this->_textField->setTextFormat(FormatAdjusted,format->start,::Std_obj::_int(::Math_obj::min(format->end,this->_textField->get_text().length)));
									}
								}
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(798)
				::flash::text::TextFormat FormatAdjusted = this->_formatAdjusted;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
				HX_STACK_LINE(798)
				FormatAdjusted->color = this->_defaultFormat->color;
				HX_STACK_LINE(798)
				this->_textField->setTextFormat(FormatAdjusted,(int)0,this->_textField->get_text().length);
				HX_STACK_LINE(798)
				{
					HX_STACK_LINE(798)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(798)
					while(((_g < _g1->length))){
						HX_STACK_LINE(798)
						::flixel::text::FlxTextFormat format = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(format,"format");
						HX_STACK_LINE(798)
						++(_g);
						HX_STACK_LINE(798)
						if ((((this->_textField->get_text().length - (int)1) < format->start))){
							HX_STACK_LINE(798)
							break;
						}
						else{
							HX_STACK_LINE(798)
							FormatAdjusted->font = format->format->font;
							HX_STACK_LINE(798)
							FormatAdjusted->bold = format->format->bold;
							HX_STACK_LINE(798)
							FormatAdjusted->italic = format->format->italic;
							HX_STACK_LINE(798)
							FormatAdjusted->size = format->format->size;
							HX_STACK_LINE(798)
							FormatAdjusted->color = format->format->color;
						}
						HX_STACK_LINE(798)
						this->_textField->setTextFormat(FormatAdjusted,format->start,::Std_obj::_int(::Math_obj::min(format->end,this->_textField->get_text().length)));
					}
				}
			}
			HX_STACK_LINE(802)
			this->cachedGraphics->bitmap->draw(this->_textField,this->_matrix,null(),null(),null(),null());
		}
		HX_STACK_LINE(805)
		this->dirty = false;
		HX_STACK_LINE(808)
		if ((!(RunOnCpp))){
			HX_STACK_LINE(809)
			return null();
		}
		HX_STACK_LINE(815)
		if (((bool((bool((this->framePixels == null())) || bool((this->framePixels->get_width() != this->cachedGraphics->bitmap->get_width())))) || bool((this->framePixels->get_height() != this->cachedGraphics->bitmap->get_height()))))){
			HX_STACK_LINE(817)
			if (((this->framePixels != null()))){
				HX_STACK_LINE(818)
				this->framePixels->dispose();
			}
			HX_STACK_LINE(820)
			this->framePixels = ::flash::display::BitmapData_obj::__new(this->cachedGraphics->bitmap->get_width(),this->cachedGraphics->bitmap->get_height(),true,(int)0,null());
		}
		HX_STACK_LINE(823)
		this->framePixels->copyPixels(this->cachedGraphics->bitmap,this->_flashRect,this->_flashPointZero,null(),null(),null());
		HX_STACK_LINE(825)
		if ((this->useColorTransform)){
			HX_STACK_LINE(826)
			this->framePixels->colorTransform(this->_flashRect,this->_colorTransform);
		}
	}
return null();
}


Void FlxText_obj::regenGraphics( ){
{
		HX_STACK_PUSH("FlxText::regenGraphics","flixel/text/FlxText.hx",637);
		HX_STACK_THIS(this);
		HX_STACK_LINE(638)
		Float oldWidth = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(oldWidth,"oldWidth");
		HX_STACK_LINE(639)
		Float oldHeight = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(oldHeight,"oldHeight");
		HX_STACK_LINE(641)
		Float newWidth = (this->_textField->get_width() + this->_widthInc);		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(643)
		Float newHeight = ((this->_textField->get_textHeight() + this->_heightInc) + (int)4);		HX_STACK_VAR(newHeight,"newHeight");
		HX_STACK_LINE(645)
		if (((bool((oldWidth != newWidth)) || bool((oldHeight != newHeight))))){
			HX_STACK_LINE(648)
			this->set_height((newHeight - this->_heightInc));
			HX_STACK_LINE(649)
			::String key = this->cachedGraphics->key;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(650)
			::flixel::FlxG_obj::bitmap->remove(key);
			HX_STACK_LINE(652)
			this->makeGraphic(::Std_obj::_int(newWidth),::Std_obj::_int(newHeight),(int)0,false,key);
			HX_STACK_LINE(653)
			this->frameHeight = ::Std_obj::_int(this->get_height());
			HX_STACK_LINE(654)
			this->_textField->set_height((this->get_height() * 1.2));
			HX_STACK_LINE(655)
			this->_flashRect->x = (int)0;
			HX_STACK_LINE(656)
			this->_flashRect->y = (int)0;
			HX_STACK_LINE(657)
			this->_flashRect->width = newWidth;
			HX_STACK_LINE(658)
			this->_flashRect->height = newHeight;
		}
		else{
			HX_STACK_LINE(662)
			this->cachedGraphics->bitmap->fillRect(this->_flashRect,(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,regenGraphics,(void))

Void FlxText_obj::updateColorTransform( ){
{
		HX_STACK_PUSH("FlxText::updateColorTransform","flixel/text/FlxText.hx",610);
		HX_STACK_THIS(this);
		HX_STACK_LINE(611)
		if (((this->alpha != (int)1))){
			HX_STACK_LINE(613)
			if (((this->_colorTransform == null()))){
				HX_STACK_LINE(614)
				this->_colorTransform = ::flash::geom::ColorTransform_obj::__new((int)1,(int)1,(int)1,this->alpha,null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(618)
				this->_colorTransform->alphaMultiplier = this->alpha;
			}
			HX_STACK_LINE(621)
			this->useColorTransform = true;
		}
		else{
			HX_STACK_LINE(625)
			if (((this->_colorTransform != null()))){
				HX_STACK_LINE(626)
				this->_colorTransform->alphaMultiplier = (int)1;
			}
			HX_STACK_LINE(630)
			this->useColorTransform = false;
		}
		HX_STACK_LINE(633)
		this->dirty = true;
	}
return null();
}


::flixel::util::loaders::CachedGraphics FlxText_obj::set_cachedGraphics( ::flixel::util::loaders::CachedGraphics Value){
	HX_STACK_PUSH("FlxText::set_cachedGraphics","flixel/text/FlxText.hx",600);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(601)
	::flixel::util::loaders::CachedGraphics cached = this->super::set_cachedGraphics(Value);		HX_STACK_VAR(cached,"cached");
	HX_STACK_LINE(603)
	if (((Value != null()))){
		HX_STACK_LINE(604)
		Value->set_destroyOnNoUse(true);
	}
	HX_STACK_LINE(606)
	return cached;
}


::flash::text::TextField FlxText_obj::get_textField( ){
	HX_STACK_PUSH("FlxText::get_textField","flixel/text/FlxText.hx",595);
	HX_STACK_THIS(this);
	HX_STACK_LINE(595)
	return this->_textField;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_textField,return )

Float FlxText_obj::set_borderQuality( Float Value){
	HX_STACK_PUSH("FlxText::set_borderQuality","flixel/text/FlxText.hx",579);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(580)
	if (((Value < (int)0))){
		HX_STACK_LINE(581)
		Value = (int)0;
	}
	else{
		HX_STACK_LINE(582)
		if (((Value > (int)1))){
			HX_STACK_LINE(583)
			Value = (int)1;
		}
	}
	HX_STACK_LINE(585)
	if (((bool((Value != this->borderQuality)) && bool((this->borderStyle != (int)0))))){
		HX_STACK_LINE(586)
		this->dirty = true;
	}
	HX_STACK_LINE(589)
	this->borderQuality = Value;
	HX_STACK_LINE(591)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderQuality,return )

Float FlxText_obj::set_borderSize( Float Value){
	HX_STACK_PUSH("FlxText::set_borderSize","flixel/text/FlxText.hx",568);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(569)
	if (((bool((Value != this->borderSize)) && bool((this->borderStyle != (int)0))))){
		HX_STACK_LINE(570)
		this->dirty = true;
	}
	HX_STACK_LINE(573)
	this->borderSize = Value;
	HX_STACK_LINE(575)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderSize,return )

int FlxText_obj::set_borderColor( int Color){
	HX_STACK_PUSH("FlxText::set_borderColor","flixel/text/FlxText.hx",555);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(556)
	hx::AndEq(Color,(int)16777215);
	HX_STACK_LINE(558)
	if (((bool((this->borderColor != Color)) && bool((this->borderStyle != (int)0))))){
		HX_STACK_LINE(559)
		this->dirty = true;
	}
	HX_STACK_LINE(562)
	this->borderColor = Color;
	HX_STACK_LINE(564)
	return Color;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderColor,return )

int FlxText_obj::set_borderStyle( int style){
	HX_STACK_PUSH("FlxText::set_borderStyle","flixel/text/FlxText.hx",544);
	HX_STACK_THIS(this);
	HX_STACK_ARG(style,"style");
	HX_STACK_LINE(545)
	if (((style != this->borderStyle))){
		HX_STACK_LINE(547)
		this->borderStyle = style;
		HX_STACK_LINE(548)
		this->dirty = true;
	}
	HX_STACK_LINE(551)
	return this->borderStyle;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderStyle,return )

::String FlxText_obj::set_alignment( ::String Alignment){
	HX_STACK_PUSH("FlxText::set_alignment","flixel/text/FlxText.hx",535);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Alignment,"Alignment");
	HX_STACK_LINE(536)
	this->_defaultFormat->align = this->convertTextAlignmentFromString(Alignment);
	HX_STACK_LINE(537)
	this->_textField->set_defaultTextFormat(this->_defaultFormat);
	HX_STACK_LINE(538)
	this->_textField->setTextFormat(this->_defaultFormat,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(539)
	this->dirty = true;
	HX_STACK_LINE(540)
	return Alignment;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_alignment,return )

::String FlxText_obj::get_alignment( ){
	HX_STACK_PUSH("FlxText::get_alignment","flixel/text/FlxText.hx",530);
	HX_STACK_THIS(this);
	HX_STACK_LINE(530)
	return hx::TCast< String >::cast(this->_defaultFormat->align);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_alignment,return )

bool FlxText_obj::set_wordWrap( bool value){
	HX_STACK_PUSH("FlxText::set_wordWrap","flixel/text/FlxText.hx",519);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(520)
	if (((this->_textField->get_wordWrap() != value))){
		HX_STACK_LINE(522)
		this->_textField->set_wordWrap(value);
		HX_STACK_LINE(523)
		this->_textField->set_multiline(value);
		HX_STACK_LINE(524)
		this->dirty = true;
	}
	HX_STACK_LINE(526)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_wordWrap,return )

bool FlxText_obj::get_wordWrap( ){
	HX_STACK_PUSH("FlxText::get_wordWrap","flixel/text/FlxText.hx",514);
	HX_STACK_THIS(this);
	HX_STACK_LINE(514)
	return this->_textField->get_wordWrap();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_wordWrap,return )

bool FlxText_obj::set_italic( bool value){
	HX_STACK_PUSH("FlxText::set_italic","flixel/text/FlxText.hx",502);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(503)
	if (((this->_defaultFormat->italic != value))){
		HX_STACK_LINE(505)
		this->_defaultFormat->italic = value;
		HX_STACK_LINE(506)
		this->_textField->set_defaultTextFormat(this->_defaultFormat);
		HX_STACK_LINE(507)
		this->_textField->setTextFormat(this->_defaultFormat,(int)0,this->_textField->get_text().length);
		HX_STACK_LINE(508)
		this->dirty = true;
	}
	HX_STACK_LINE(510)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_italic,return )

bool FlxText_obj::get_italic( ){
	HX_STACK_PUSH("FlxText::get_italic","flixel/text/FlxText.hx",497);
	HX_STACK_THIS(this);
	HX_STACK_LINE(497)
	return this->_defaultFormat->italic;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_italic,return )

bool FlxText_obj::set_bold( bool value){
	HX_STACK_PUSH("FlxText::set_bold","flixel/text/FlxText.hx",485);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(486)
	if (((this->_defaultFormat->bold != value))){
		HX_STACK_LINE(488)
		this->_defaultFormat->bold = value;
		HX_STACK_LINE(489)
		this->_textField->set_defaultTextFormat(this->_defaultFormat);
		HX_STACK_LINE(490)
		this->_textField->setTextFormat(this->_defaultFormat,(int)0,this->_textField->get_text().length);
		HX_STACK_LINE(491)
		this->dirty = true;
	}
	HX_STACK_LINE(493)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_bold,return )

bool FlxText_obj::get_bold( ){
	HX_STACK_PUSH("FlxText::get_bold","flixel/text/FlxText.hx",480);
	HX_STACK_THIS(this);
	HX_STACK_LINE(480)
	return this->_defaultFormat->bold;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_bold,return )

::String FlxText_obj::set_systemFont( ::String Font){
	HX_STACK_PUSH("FlxText::set_systemFont","flixel/text/FlxText.hx",470);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Font,"Font");
	HX_STACK_LINE(471)
	this->_textField->set_embedFonts(false);
	HX_STACK_LINE(472)
	this->_defaultFormat->font = Font;
	HX_STACK_LINE(473)
	this->_textField->set_defaultTextFormat(this->_defaultFormat);
	HX_STACK_LINE(474)
	this->_textField->setTextFormat(this->_defaultFormat,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(475)
	this->dirty = true;
	HX_STACK_LINE(476)
	return Font;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_systemFont,return )

::String FlxText_obj::get_systemFont( ){
	HX_STACK_PUSH("FlxText::get_systemFont","flixel/text/FlxText.hx",465);
	HX_STACK_THIS(this);
	HX_STACK_LINE(465)
	return this->_defaultFormat->font;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_systemFont,return )

bool FlxText_obj::get_embedded( ){
	HX_STACK_PUSH("FlxText::get_embedded","flixel/text/FlxText.hx",460);
	HX_STACK_THIS(this);
	HX_STACK_LINE(460)
	return this->_textField->set_embedFonts(true);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_embedded,return )

::String FlxText_obj::set_font( ::String Font){
	HX_STACK_PUSH("FlxText::set_font","flixel/text/FlxText.hx",450);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Font,"Font");
	HX_STACK_LINE(451)
	this->_textField->set_embedFonts(true);
	HX_STACK_LINE(452)
	this->_defaultFormat->font = ::openfl::Assets_obj::getFont(Font,null())->fontName;
	HX_STACK_LINE(453)
	this->_textField->set_defaultTextFormat(this->_defaultFormat);
	HX_STACK_LINE(454)
	this->_textField->setTextFormat(this->_defaultFormat,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(455)
	this->dirty = true;
	HX_STACK_LINE(456)
	return Font;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_font,return )

::String FlxText_obj::get_font( ){
	HX_STACK_PUSH("FlxText::get_font","flixel/text/FlxText.hx",445);
	HX_STACK_THIS(this);
	HX_STACK_LINE(445)
	return this->_defaultFormat->font;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_font,return )

int FlxText_obj::set_color( int Color){
	HX_STACK_PUSH("FlxText::set_color","flixel/text/FlxText.hx",430);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Color,"Color");
	HX_STACK_LINE(431)
	hx::AndEq(Color,(int)16777215);
	HX_STACK_LINE(432)
	if (((this->_defaultFormat->color == Color))){
		HX_STACK_LINE(433)
		return Color;
	}
	HX_STACK_LINE(436)
	this->_defaultFormat->color = Color;
	HX_STACK_LINE(437)
	this->color = Color;
	HX_STACK_LINE(438)
	this->_textField->set_defaultTextFormat(this->_defaultFormat);
	HX_STACK_LINE(439)
	this->_textField->setTextFormat(this->_defaultFormat,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(440)
	this->dirty = true;
	HX_STACK_LINE(441)
	return Color;
}


Float FlxText_obj::set_size( Float Size){
	HX_STACK_PUSH("FlxText::set_size","flixel/text/FlxText.hx",417);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Size,"Size");
	HX_STACK_LINE(418)
	this->_defaultFormat->size = Size;
	HX_STACK_LINE(419)
	this->_textField->set_defaultTextFormat(this->_defaultFormat);
	HX_STACK_LINE(420)
	this->_textField->setTextFormat(this->_defaultFormat,(int)0,this->_textField->get_text().length);
	HX_STACK_LINE(421)
	this->dirty = true;
	HX_STACK_LINE(423)
	return Size;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_size,return )

Float FlxText_obj::get_size( ){
	HX_STACK_PUSH("FlxText::get_size","flixel/text/FlxText.hx",412);
	HX_STACK_THIS(this);
	HX_STACK_LINE(412)
	return this->_defaultFormat->size;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_size,return )

::String FlxText_obj::set_text( ::String Text){
	HX_STACK_PUSH("FlxText::set_text","flixel/text/FlxText.hx",399);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Text,"Text");
	HX_STACK_LINE(400)
	::String ot = this->_textField->get_text();		HX_STACK_VAR(ot,"ot");
	HX_STACK_LINE(401)
	this->_textField->set_text(Text);
	HX_STACK_LINE(403)
	if (((this->_textField->get_text() != ot))){
		HX_STACK_LINE(404)
		this->dirty = true;
	}
	HX_STACK_LINE(408)
	return this->_textField->get_text();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_text,return )

::String FlxText_obj::get_text( ){
	HX_STACK_PUSH("FlxText::get_text","flixel/text/FlxText.hx",394);
	HX_STACK_THIS(this);
	HX_STACK_LINE(394)
	return this->_textField->get_text();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_text,return )

Float FlxText_obj::set_width( Float Width){
	HX_STACK_PUSH("FlxText::set_width","flixel/text/FlxText.hx",379);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Width,"Width");
	HX_STACK_LINE(380)
	if (((Width != this->get_width()))){
		HX_STACK_LINE(382)
		Float newWidth = this->super::set_width(Width);		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(383)
		if (((this->_textField != null()))){
			HX_STACK_LINE(384)
			this->_textField->set_width(newWidth);
		}
		HX_STACK_LINE(387)
		this->dirty = true;
	}
	HX_STACK_LINE(390)
	return Width;
}


Void FlxText_obj::applyFormats( ::flash::text::TextFormat FormatAdjusted,hx::Null< bool >  __o_UseBorderColor){
bool UseBorderColor = __o_UseBorderColor.Default(false);
	HX_STACK_PUSH("FlxText::applyFormats","flixel/text/FlxText.hx",352);
	HX_STACK_THIS(this);
	HX_STACK_ARG(FormatAdjusted,"FormatAdjusted");
	HX_STACK_ARG(UseBorderColor,"UseBorderColor");
{
		HX_STACK_LINE(354)
		FormatAdjusted->color = (  ((UseBorderColor)) ? Dynamic(this->borderColor) : Dynamic(this->_defaultFormat->color) );
		HX_STACK_LINE(355)
		this->_textField->setTextFormat(FormatAdjusted,(int)0,this->_textField->get_text().length);
		HX_STACK_LINE(358)
		{
			HX_STACK_LINE(358)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(358)
			while(((_g < _g1->length))){
				HX_STACK_LINE(358)
				::flixel::text::FlxTextFormat format = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(format,"format");
				HX_STACK_LINE(358)
				++(_g);
				HX_STACK_LINE(360)
				if ((((this->_textField->get_text().length - (int)1) < format->start))){
					HX_STACK_LINE(361)
					break;
				}
				else{
					HX_STACK_LINE(367)
					FormatAdjusted->font = format->format->font;
					HX_STACK_LINE(368)
					FormatAdjusted->bold = format->format->bold;
					HX_STACK_LINE(369)
					FormatAdjusted->italic = format->format->italic;
					HX_STACK_LINE(370)
					FormatAdjusted->size = format->format->size;
					HX_STACK_LINE(371)
					FormatAdjusted->color = (  ((UseBorderColor)) ? Dynamic(format->borderColor) : Dynamic(format->format->color) );
				}
				HX_STACK_LINE(374)
				this->_textField->setTextFormat(FormatAdjusted,format->start,::Std_obj::_int(::Math_obj::min(format->end,this->_textField->get_text().length)));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,applyFormats,(void))

Void FlxText_obj::updateFrameData( ){
{
		HX_STACK_PUSH("FlxText::updateFrameData","flixel/text/FlxText.hx",342);
		HX_STACK_THIS(this);
		HX_STACK_LINE(342)
		if (((this->cachedGraphics != null()))){
			HX_STACK_LINE(345)
			this->framesData = this->cachedGraphics->get_tilesheet()->getSpriteSheetFrames(this->region,null());
			HX_STACK_LINE(346)
			this->set_frame(this->framesData->frames->__get((int)0).StaticCast< ::flixel::system::layer::frames::FlxFrame >());
			HX_STACK_LINE(347)
			this->frames = (int)1;
		}
	}
return null();
}


Void FlxText_obj::clearFilters( ){
{
		HX_STACK_PUSH("FlxText::clearFilters","flixel/text/FlxText.hx",333);
		HX_STACK_THIS(this);
		HX_STACK_LINE(334)
		if (((this->_filters->length > (int)0))){
			HX_STACK_LINE(335)
			this->dirty = true;
		}
		HX_STACK_LINE(338)
		this->_filters = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,clearFilters,(void))

Void FlxText_obj::removeFilter( ::flash::filters::BitmapFilter filter){
{
		HX_STACK_PUSH("FlxText::removeFilter","flixel/text/FlxText.hx",324);
		HX_STACK_THIS(this);
		HX_STACK_ARG(filter,"filter");
		HX_STACK_LINE(325)
		bool removed = this->_filters->remove(filter);		HX_STACK_VAR(removed,"removed");
		HX_STACK_LINE(326)
		if ((removed)){
			HX_STACK_LINE(327)
			this->dirty = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,removeFilter,(void))

Void FlxText_obj::addFilter( ::flash::filters::BitmapFilter filter,hx::Null< int >  __o_widthInc,hx::Null< int >  __o_heightInc){
int widthInc = __o_widthInc.Default(0);
int heightInc = __o_heightInc.Default(0);
	HX_STACK_PUSH("FlxText::addFilter","flixel/text/FlxText.hx",318);
	HX_STACK_THIS(this);
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(widthInc,"widthInc");
	HX_STACK_ARG(heightInc,"heightInc");
{
		HX_STACK_LINE(319)
		this->_filters->push(filter);
		HX_STACK_LINE(320)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,addFilter,(void))

Void FlxText_obj::setBorderStyle( int Style,hx::Null< int >  __o_Color,hx::Null< Float >  __o_Size,hx::Null< Float >  __o_Quality){
int Color = __o_Color.Default(0);
Float Size = __o_Size.Default(1);
Float Quality = __o_Quality.Default(1);
	HX_STACK_PUSH("FlxText::setBorderStyle","flixel/text/FlxText.hx",310);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Style,"Style");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Size,"Size");
	HX_STACK_ARG(Quality,"Quality");
{
		HX_STACK_LINE(311)
		this->set_borderStyle(Style);
		HX_STACK_LINE(312)
		this->set_borderColor(Color);
		HX_STACK_LINE(313)
		this->set_borderSize(Size);
		HX_STACK_LINE(314)
		this->set_borderQuality(Quality);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxText_obj,setBorderStyle,(void))

::flixel::text::FlxText FlxText_obj::setFormat( ::String Font,hx::Null< Float >  __o_Size,hx::Null< int >  __o_Color,::String Alignment,hx::Null< int >  __o_BorderStyle,hx::Null< int >  __o_BorderColor,hx::Null< bool >  __o_Embedded){
Float Size = __o_Size.Default(8);
int Color = __o_Color.Default(16777215);
int BorderStyle = __o_BorderStyle.Default(0);
int BorderColor = __o_BorderColor.Default(0);
bool Embedded = __o_Embedded.Default(true);
	HX_STACK_PUSH("FlxText::setFormat","flixel/text/FlxText.hx",269);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Font,"Font");
	HX_STACK_ARG(Size,"Size");
	HX_STACK_ARG(Color,"Color");
	HX_STACK_ARG(Alignment,"Alignment");
	HX_STACK_ARG(BorderStyle,"BorderStyle");
	HX_STACK_ARG(BorderColor,"BorderColor");
	HX_STACK_ARG(Embedded,"Embedded");
{
		HX_STACK_LINE(270)
		if ((Embedded)){
			HX_STACK_LINE(271)
			if (((Font == null()))){
				HX_STACK_LINE(273)
				this->_defaultFormat->font = ::flixel::system::FlxAssets_obj::FONT_DEFAULT;
			}
			else{
				HX_STACK_LINE(277)
				this->_defaultFormat->font = ::openfl::Assets_obj::getFont(Font,null())->fontName;
			}
		}
		else{
			HX_STACK_LINE(281)
			if (((Font != null()))){
				HX_STACK_LINE(282)
				this->_defaultFormat->font = Font;
			}
		}
		HX_STACK_LINE(286)
		this->_textField->set_embedFonts(Embedded);
		HX_STACK_LINE(288)
		this->_defaultFormat->size = Size;
		HX_STACK_LINE(289)
		hx::AndEq(Color,(int)16777215);
		HX_STACK_LINE(290)
		this->_defaultFormat->color = Color;
		HX_STACK_LINE(291)
		this->_defaultFormat->align = this->convertTextAlignmentFromString(Alignment);
		HX_STACK_LINE(292)
		this->_textField->set_defaultTextFormat(this->_defaultFormat);
		HX_STACK_LINE(293)
		this->set_borderStyle(BorderStyle);
		HX_STACK_LINE(294)
		this->set_borderColor(BorderColor);
		HX_STACK_LINE(295)
		this->_textField->setTextFormat(this->_defaultFormat,(int)0,this->_textField->get_text().length);
		HX_STACK_LINE(296)
		this->dirty = true;
		HX_STACK_LINE(298)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(FlxText_obj,setFormat,return )

Void FlxText_obj::clearFormats( ){
{
		HX_STACK_PUSH("FlxText::clearFormats","flixel/text/FlxText.hx",242);
		HX_STACK_THIS(this);
		HX_STACK_LINE(243)
		{
			HX_STACK_LINE(243)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(243)
			while(((_g < _g1->length))){
				HX_STACK_LINE(243)
				::flixel::text::FlxTextFormat format = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(format,"format");
				HX_STACK_LINE(243)
				++(_g);
				HX_STACK_LINE(245)
				format->destroy();
				HX_STACK_LINE(246)
				format = null();
			}
		}
		HX_STACK_LINE(249)
		this->_formats = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(251)
		this->_textField->setTextFormat(this->_defaultFormat,(int)0,this->_textField->get_text().length);
		HX_STACK_LINE(252)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,clearFormats,(void))

Void FlxText_obj::removeFormat( ::flixel::text::FlxTextFormat Format){
{
		HX_STACK_PUSH("FlxText::removeFormat","flixel/text/FlxText.hx",233);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Format,"Format");
		HX_STACK_LINE(234)
		::flixel::util::FlxArrayUtil_obj::fastSplice_flixel_text_FlxTextFormat(this->_formats,Format);
		HX_STACK_LINE(235)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,removeFormat,(void))

Void FlxText_obj::addFormat( ::flixel::text::FlxTextFormat Format,hx::Null< int >  __o_Start,hx::Null< int >  __o_End){
int Start = __o_Start.Default(-1);
int End = __o_End.Default(-1);
	HX_STACK_PUSH("FlxText::addFormat","flixel/text/FlxText.hx",220);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Format,"Format");
	HX_STACK_ARG(Start,"Start");
	HX_STACK_ARG(End,"End");
{
		HX_STACK_LINE(221)
		Format->start = (  (((Start > (int)-1))) ? int(Start) : int(Format->start) );
		HX_STACK_LINE(222)
		Format->end = (  (((End > (int)-1))) ? int(End) : int(Format->end) );
		HX_STACK_LINE(223)
		this->_formats->push(Format);

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int run(::flixel::text::FlxTextFormat left,::flixel::text::FlxTextFormat right){
			HX_STACK_PUSH("*::_Function_1_1","flixel/text/FlxText.hx",225);
			HX_STACK_ARG(left,"left");
			HX_STACK_ARG(right,"right");
			{
				HX_STACK_LINE(225)
				return (  (((left->start < right->start))) ? int((int)-1) : int((int)1) );
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(225)
		this->_formats->sort( Dynamic(new _Function_1_1()));
		HX_STACK_LINE(226)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,addFormat,(void))

Void FlxText_obj::destroy( ){
{
		HX_STACK_PUSH("FlxText::destroy","flixel/text/FlxText.hx",192);
		HX_STACK_THIS(this);
		HX_STACK_LINE(193)
		this->_textField = null();
		HX_STACK_LINE(194)
		this->_defaultFormat = null();
		HX_STACK_LINE(195)
		this->_formatAdjusted = null();
		HX_STACK_LINE(196)
		this->_filters = null();
		HX_STACK_LINE(197)
		if (((this->_formats != null()))){
			HX_STACK_LINE(199)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->_formats;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(199)
			while(((_g < _g1->length))){
				HX_STACK_LINE(199)
				::flixel::text::FlxTextFormat format = _g1->__get(_g).StaticCast< ::flixel::text::FlxTextFormat >();		HX_STACK_VAR(format,"format");
				HX_STACK_LINE(199)
				++(_g);
				HX_STACK_LINE(201)
				if (((format != null()))){
					HX_STACK_LINE(203)
					format->destroy();
					HX_STACK_LINE(204)
					format = null();
				}
			}
		}
		HX_STACK_LINE(208)
		this->_formats = null();
		HX_STACK_LINE(209)
		this->super::destroy();
	}
return null();
}


int FlxText_obj::BORDER_NONE;

int FlxText_obj::BORDER_SHADOW;

int FlxText_obj::BORDER_OUTLINE;

int FlxText_obj::BORDER_OUTLINE_FAST;


FlxText_obj::FlxText_obj()
{
}

void FlxText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxText);
	HX_MARK_MEMBER_NAME(_heightInc,"_heightInc");
	HX_MARK_MEMBER_NAME(_widthInc,"_widthInc");
	HX_MARK_MEMBER_NAME(_filters,"_filters");
	HX_MARK_MEMBER_NAME(_formats,"_formats");
	HX_MARK_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_MARK_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_MARK_MEMBER_NAME(_textField,"_textField");
	HX_MARK_MEMBER_NAME(borderQuality,"borderQuality");
	HX_MARK_MEMBER_NAME(borderSize,"borderSize");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(borderStyle,"borderStyle");
	HX_MARK_MEMBER_NAME(embedded,"embedded");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_heightInc,"_heightInc");
	HX_VISIT_MEMBER_NAME(_widthInc,"_widthInc");
	HX_VISIT_MEMBER_NAME(_filters,"_filters");
	HX_VISIT_MEMBER_NAME(_formats,"_formats");
	HX_VISIT_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_VISIT_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_VISIT_MEMBER_NAME(_textField,"_textField");
	HX_VISIT_MEMBER_NAME(borderQuality,"borderQuality");
	HX_VISIT_MEMBER_NAME(borderSize,"borderSize");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(borderStyle,"borderStyle");
	HX_VISIT_MEMBER_NAME(embedded,"embedded");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxText_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { return get_bold(); }
		if (HX_FIELD_EQ(inName,"font") ) { return get_font(); }
		if (HX_FIELD_EQ(inName,"size") ) { return get_size(); }
		if (HX_FIELD_EQ(inName,"text") ) { return get_text(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { return get_italic(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dtfCopy") ) { return dtfCopy_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_bold") ) { return set_bold_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bold") ) { return get_bold_dyn(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"get_font") ) { return get_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"_filters") ) { return _filters; }
		if (HX_FIELD_EQ(inName,"_formats") ) { return _formats; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return get_wordWrap(); }
		if (HX_FIELD_EQ(inName,"embedded") ) { return inCallProp ? get_embedded() : embedded; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"addFilter") ) { return addFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return setFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"addFormat") ) { return addFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"_widthInc") ) { return _widthInc; }
		if (HX_FIELD_EQ(inName,"textField") ) { return get_textField(); }
		if (HX_FIELD_EQ(inName,"alignment") ) { return get_alignment(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_italic") ) { return set_italic_dyn(); }
		if (HX_FIELD_EQ(inName,"get_italic") ) { return get_italic_dyn(); }
		if (HX_FIELD_EQ(inName,"_heightInc") ) { return _heightInc; }
		if (HX_FIELD_EQ(inName,"_textField") ) { return _textField; }
		if (HX_FIELD_EQ(inName,"borderSize") ) { return borderSize; }
		if (HX_FIELD_EQ(inName,"systemFont") ) { return get_systemFont(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
		if (HX_FIELD_EQ(inName,"borderStyle") ) { return borderStyle; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateFormat") ) { return updateFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return get_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_embedded") ) { return get_embedded_dyn(); }
		if (HX_FIELD_EQ(inName,"applyFormats") ) { return applyFormats_dyn(); }
		if (HX_FIELD_EQ(inName,"clearFilters") ) { return clearFilters_dyn(); }
		if (HX_FIELD_EQ(inName,"removeFilter") ) { return removeFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"clearFormats") ) { return clearFormats_dyn(); }
		if (HX_FIELD_EQ(inName,"removeFormat") ) { return removeFormat_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"regenGraphics") ) { return regenGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textField") ) { return get_textField_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alignment") ) { return set_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alignment") ) { return get_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"borderQuality") ) { return borderQuality; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_borderSize") ) { return set_borderSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_systemFont") ) { return set_systemFont_dyn(); }
		if (HX_FIELD_EQ(inName,"get_systemFont") ) { return get_systemFont_dyn(); }
		if (HX_FIELD_EQ(inName,"setBorderStyle") ) { return setBorderStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { return _defaultFormat; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderStyle") ) { return set_borderStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { return _formatAdjusted; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_borderQuality") ) { return set_borderQuality_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_cachedGraphics") ) { return set_cachedGraphics_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"convertTextAlignmentFromString") ) { return convertTextAlignmentFromString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxText_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { return set_bold(inValue); }
		if (HX_FIELD_EQ(inName,"font") ) { return set_font(inValue); }
		if (HX_FIELD_EQ(inName,"size") ) { return set_size(inValue); }
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { return set_italic(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_filters") ) { _filters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_formats") ) { _formats=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return set_wordWrap(inValue); }
		if (HX_FIELD_EQ(inName,"embedded") ) { embedded=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_widthInc") ) { _widthInc=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alignment") ) { return set_alignment(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_heightInc") ) { _heightInc=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textField") ) { _textField=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp) return set_borderSize(inValue);borderSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"systemFont") ) { return set_systemFont(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp) return set_borderColor(inValue);borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderStyle") ) { if (inCallProp) return set_borderStyle(inValue);borderStyle=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"borderQuality") ) { if (inCallProp) return set_borderQuality(inValue);borderQuality=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { _defaultFormat=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { _formatAdjusted=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_heightInc"));
	outFields->push(HX_CSTRING("_widthInc"));
	outFields->push(HX_CSTRING("_filters"));
	outFields->push(HX_CSTRING("_formats"));
	outFields->push(HX_CSTRING("_formatAdjusted"));
	outFields->push(HX_CSTRING("_defaultFormat"));
	outFields->push(HX_CSTRING("_textField"));
	outFields->push(HX_CSTRING("textField"));
	outFields->push(HX_CSTRING("borderQuality"));
	outFields->push(HX_CSTRING("borderSize"));
	outFields->push(HX_CSTRING("borderColor"));
	outFields->push(HX_CSTRING("borderStyle"));
	outFields->push(HX_CSTRING("alignment"));
	outFields->push(HX_CSTRING("wordWrap"));
	outFields->push(HX_CSTRING("italic"));
	outFields->push(HX_CSTRING("bold"));
	outFields->push(HX_CSTRING("systemFont"));
	outFields->push(HX_CSTRING("embedded"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("text"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BORDER_NONE"),
	HX_CSTRING("BORDER_SHADOW"),
	HX_CSTRING("BORDER_OUTLINE"),
	HX_CSTRING("BORDER_OUTLINE_FAST"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateFormat"),
	HX_CSTRING("convertTextAlignmentFromString"),
	HX_CSTRING("dtfCopy"),
	HX_CSTRING("calcFrame"),
	HX_CSTRING("regenGraphics"),
	HX_CSTRING("updateColorTransform"),
	HX_CSTRING("set_cachedGraphics"),
	HX_CSTRING("get_textField"),
	HX_CSTRING("set_borderQuality"),
	HX_CSTRING("set_borderSize"),
	HX_CSTRING("set_borderColor"),
	HX_CSTRING("set_borderStyle"),
	HX_CSTRING("set_alignment"),
	HX_CSTRING("get_alignment"),
	HX_CSTRING("set_wordWrap"),
	HX_CSTRING("get_wordWrap"),
	HX_CSTRING("set_italic"),
	HX_CSTRING("get_italic"),
	HX_CSTRING("set_bold"),
	HX_CSTRING("get_bold"),
	HX_CSTRING("set_systemFont"),
	HX_CSTRING("get_systemFont"),
	HX_CSTRING("get_embedded"),
	HX_CSTRING("set_font"),
	HX_CSTRING("get_font"),
	HX_CSTRING("set_color"),
	HX_CSTRING("set_size"),
	HX_CSTRING("get_size"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_width"),
	HX_CSTRING("applyFormats"),
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("clearFilters"),
	HX_CSTRING("removeFilter"),
	HX_CSTRING("addFilter"),
	HX_CSTRING("setBorderStyle"),
	HX_CSTRING("setFormat"),
	HX_CSTRING("clearFormats"),
	HX_CSTRING("removeFormat"),
	HX_CSTRING("addFormat"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_heightInc"),
	HX_CSTRING("_widthInc"),
	HX_CSTRING("_filters"),
	HX_CSTRING("_formats"),
	HX_CSTRING("_formatAdjusted"),
	HX_CSTRING("_defaultFormat"),
	HX_CSTRING("_textField"),
	HX_CSTRING("borderQuality"),
	HX_CSTRING("borderSize"),
	HX_CSTRING("borderColor"),
	HX_CSTRING("borderStyle"),
	HX_CSTRING("embedded"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxText_obj::BORDER_NONE,"BORDER_NONE");
	HX_MARK_MEMBER_NAME(FlxText_obj::BORDER_SHADOW,"BORDER_SHADOW");
	HX_MARK_MEMBER_NAME(FlxText_obj::BORDER_OUTLINE,"BORDER_OUTLINE");
	HX_MARK_MEMBER_NAME(FlxText_obj::BORDER_OUTLINE_FAST,"BORDER_OUTLINE_FAST");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxText_obj::BORDER_NONE,"BORDER_NONE");
	HX_VISIT_MEMBER_NAME(FlxText_obj::BORDER_SHADOW,"BORDER_SHADOW");
	HX_VISIT_MEMBER_NAME(FlxText_obj::BORDER_OUTLINE,"BORDER_OUTLINE");
	HX_VISIT_MEMBER_NAME(FlxText_obj::BORDER_OUTLINE_FAST,"BORDER_OUTLINE_FAST");
};

Class FlxText_obj::__mClass;

void FlxText_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.text.FlxText"), hx::TCanCast< FlxText_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxText_obj::__boot()
{
	BORDER_NONE= (int)0;
	BORDER_SHADOW= (int)1;
	BORDER_OUTLINE= (int)2;
	BORDER_OUTLINE_FAST= (int)3;
}

} // end namespace flixel
} // end namespace text
