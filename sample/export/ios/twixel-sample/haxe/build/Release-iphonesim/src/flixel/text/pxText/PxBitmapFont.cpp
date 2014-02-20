#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
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
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_flixel_text_pxText_PxBitmapFont
#include <flixel/text/pxText/PxBitmapFont.h>
#endif
#ifndef INCLUDED_flixel_text_pxText_PxFontSymbol
#include <flixel/text/pxText/PxFontSymbol.h>
#endif
#ifndef INCLUDED_flixel_text_pxText__PxBitmapFont_HelperSymbol
#include <flixel/text/pxText/_PxBitmapFont/HelperSymbol.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace flixel{
namespace text{
namespace pxText{

Void PxBitmapFont_obj::__construct()
{
HX_STACK_PUSH("PxBitmapFont::new","flixel/text/pxText/PxBitmapFont.hx",19);
{
	HX_STACK_LINE(34)
	this->_maxHeight = (int)0;
	HX_STACK_LINE(30)
	this->_bgTileID = (int)-1;
	HX_STACK_LINE(29)
	this->_num_letters = (int)0;
	HX_STACK_LINE(56)
	this->_point = ::flash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(63)
	this->_glyphs = ::haxe::ds::IntMap_obj::__new();
}
;
	return null();
}

PxBitmapFont_obj::~PxBitmapFont_obj() { }

Dynamic PxBitmapFont_obj::__CreateEmpty() { return  new PxBitmapFont_obj; }
hx::ObjectPtr< PxBitmapFont_obj > PxBitmapFont_obj::__new()
{  hx::ObjectPtr< PxBitmapFont_obj > result = new PxBitmapFont_obj();
	result->__construct();
	return result;}

Dynamic PxBitmapFont_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PxBitmapFont_obj > result = new PxBitmapFont_obj();
	result->__construct();
	return result;}

Void PxBitmapFont_obj::setCachedGraphics( ::flixel::util::loaders::CachedGraphics value){
{
		HX_STACK_PUSH("PxBitmapFont::setCachedGraphics","flixel/text/pxText/PxBitmapFont.hx",680);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(681)
		if (((bool((this->cachedGraphics != null())) && bool((this->cachedGraphics != value))))){
			HX_STACK_LINE(683)
			::flixel::util::loaders::CachedGraphics _g = this->cachedGraphics;		HX_STACK_VAR(_g,"_g");
			int _g1 = _g->useCount;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(683)
			_g->set_useCount((_g1 - (int)1));
			HX_STACK_LINE(683)
			_g1;
		}
		HX_STACK_LINE(686)
		if (((bool((this->cachedGraphics != value)) && bool((value != null()))))){
			HX_STACK_LINE(688)
			::flixel::util::loaders::CachedGraphics _g = value;		HX_STACK_VAR(_g,"_g");
			int _g1 = _g->useCount;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(688)
			_g->set_useCount((_g1 + (int)1));
			HX_STACK_LINE(688)
			_g1;
		}
		HX_STACK_LINE(690)
		this->cachedGraphics = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PxBitmapFont_obj,setCachedGraphics,(void))

int PxBitmapFont_obj::get_numLetters( ){
	HX_STACK_PUSH("PxBitmapFont::get_numLetters","flixel/text/pxText/PxBitmapFont.hx",671);
	HX_STACK_THIS(this);
	HX_STACK_LINE(671)
	return this->_num_letters;
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,get_numLetters,return )

int PxBitmapFont_obj::get_bgTileID( ){
	HX_STACK_PUSH("PxBitmapFont::get_bgTileID","flixel/text/pxText/PxBitmapFont.hx",665);
	HX_STACK_THIS(this);
	HX_STACK_LINE(665)
	return this->_bgTileID;
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,get_bgTileID,return )

::flash::display::BitmapData PxBitmapFont_obj::get_pixels( ){
	HX_STACK_PUSH("PxBitmapFont::get_pixels","flixel/text/pxText/PxBitmapFont.hx",654);
	HX_STACK_THIS(this);
	HX_STACK_LINE(655)
	if ((!(this->cachedGraphics->isDumped))){
		HX_STACK_LINE(656)
		return this->cachedGraphics->bitmap;
	}
	HX_STACK_LINE(659)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,get_pixels,return )

int PxBitmapFont_obj::getFontHeight( ){
	HX_STACK_PUSH("PxBitmapFont::getFontHeight","flixel/text/pxText/PxBitmapFont.hx",639);
	HX_STACK_THIS(this);
	HX_STACK_LINE(639)
	return this->_maxHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,getFontHeight,return )

int PxBitmapFont_obj::getTextWidth( ::String PxText,hx::Null< int >  __o_PxLetterSpacing,hx::Null< Float >  __o_PxFontScale){
int PxLetterSpacing = __o_PxLetterSpacing.Default(0);
Float PxFontScale = __o_PxFontScale.Default(1);
	HX_STACK_PUSH("PxBitmapFont::getTextWidth","flixel/text/pxText/PxBitmapFont.hx",597);
	HX_STACK_THIS(this);
	HX_STACK_ARG(PxText,"PxText");
	HX_STACK_ARG(PxLetterSpacing,"PxLetterSpacing");
	HX_STACK_ARG(PxFontScale,"PxFontScale");
{
		HX_STACK_LINE(598)
		int w = (int)0;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(600)
		int textLength = PxText.length;		HX_STACK_VAR(textLength,"textLength");
		HX_STACK_LINE(602)
		{
			HX_STACK_LINE(602)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = textLength;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(602)
			while(((_g1 < _g))){
				HX_STACK_LINE(602)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(604)
				int charCode = PxText.charCodeAt(i);		HX_STACK_VAR(charCode,"charCode");
				HX_STACK_LINE(615)
				if ((this->_glyphs->exists(charCode))){
					HX_STACK_LINE(616)
					hx::AddEq(w,this->_glyphs->get(charCode)->__Field(HX_CSTRING("xadvance"),true));
				}
			}
		}
		HX_STACK_LINE(623)
		w = ::Math_obj::round((w * PxFontScale));
		HX_STACK_LINE(625)
		if (((textLength > (int)1))){
			HX_STACK_LINE(626)
			hx::AddEq(w,(((textLength - (int)1)) * PxLetterSpacing));
		}
		HX_STACK_LINE(630)
		return w;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(PxBitmapFont_obj,getTextWidth,return )

Void PxBitmapFont_obj::render( Array< Float > DrawData,::String PxText,int PxColor,int PxSecondColor,Float PxAlpha,Float PxOffsetX,Float PxOffsetY,int PxLetterSpacing,Float PxScale,hx::Null< bool >  __o_PxUseColor){
bool PxUseColor = __o_PxUseColor.Default(true);
	HX_STACK_PUSH("PxBitmapFont::render","flixel/text/pxText/PxBitmapFont.hx",524);
	HX_STACK_THIS(this);
	HX_STACK_ARG(DrawData,"DrawData");
	HX_STACK_ARG(PxText,"PxText");
	HX_STACK_ARG(PxColor,"PxColor");
	HX_STACK_ARG(PxSecondColor,"PxSecondColor");
	HX_STACK_ARG(PxAlpha,"PxAlpha");
	HX_STACK_ARG(PxOffsetX,"PxOffsetX");
	HX_STACK_ARG(PxOffsetY,"PxOffsetY");
	HX_STACK_ARG(PxLetterSpacing,"PxLetterSpacing");
	HX_STACK_ARG(PxScale,"PxScale");
	HX_STACK_ARG(PxUseColor,"PxUseColor");
{
		HX_STACK_LINE(526)
		Float colorMultiplier = (Float((int)1) / Float((int)255));		HX_STACK_VAR(colorMultiplier,"colorMultiplier");
		HX_STACK_LINE(527)
		Float red = colorMultiplier;		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(528)
		Float green = colorMultiplier;		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(529)
		Float blue = colorMultiplier;		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(531)
		if ((PxUseColor)){
			HX_STACK_LINE(533)
			red = (((int(PxColor) >> int((int)16))) * colorMultiplier);
			HX_STACK_LINE(534)
			green = (((int((int(PxColor) >> int((int)8))) & int((int)255))) * colorMultiplier);
			HX_STACK_LINE(535)
			blue = (((int(PxColor) & int((int)255))) * colorMultiplier);
		}
		HX_STACK_LINE(538)
		hx::AndEq(PxSecondColor,(int)16777215);
		HX_STACK_LINE(539)
		hx::MultEq(red,(int(PxSecondColor) >> int((int)16)));
		HX_STACK_LINE(540)
		hx::MultEq(green,(int((int(PxSecondColor) >> int((int)8))) & int((int)255)));
		HX_STACK_LINE(541)
		hx::MultEq(blue,(int(PxSecondColor) & int((int)255)));
		HX_STACK_LINE(544)
		this->_point->x = PxOffsetX;
		HX_STACK_LINE(545)
		this->_point->y = PxOffsetY;
		HX_STACK_LINE(550)
		::flixel::text::pxText::PxFontSymbol glyph;		HX_STACK_VAR(glyph,"glyph");
		HX_STACK_LINE(551)
		int glyphWidth;		HX_STACK_VAR(glyphWidth,"glyphWidth");
		HX_STACK_LINE(554)
		{
			HX_STACK_LINE(554)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = PxText.length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(554)
			while(((_g1 < _g))){
				HX_STACK_LINE(554)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(556)
				int charCode = PxText.charCodeAt(i);		HX_STACK_VAR(charCode,"charCode");
				HX_STACK_LINE(562)
				glyph = this->_glyphs->get(charCode);
				HX_STACK_LINE(563)
				if ((this->_glyphs->exists(charCode))){
					HX_STACK_LINE(570)
					glyphWidth = glyph->xadvance;
					HX_STACK_LINE(573)
					DrawData->push(glyph->tileID);
					HX_STACK_LINE(575)
					DrawData->push((this->_point->x + (glyph->xoffset * PxScale)));
					HX_STACK_LINE(577)
					DrawData->push((this->_point->y + (glyph->yoffset * PxScale)));
					HX_STACK_LINE(578)
					DrawData->push(red);
					HX_STACK_LINE(579)
					DrawData->push(green);
					HX_STACK_LINE(580)
					DrawData->push(blue);
					HX_STACK_LINE(582)
					hx::AddEq(this->_point->x,((glyphWidth * PxScale) + PxLetterSpacing));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC10(PxBitmapFont_obj,render,(void))

Void PxBitmapFont_obj::setGlyph( ::flixel::system::layer::TileSheetData Tiles,int PxCharID,::flash::geom::Rectangle PxRect,hx::Null< int >  __o_PxOffsetX,hx::Null< int >  __o_PxOffsetY,hx::Null< int >  __o_PxAdvanceX){
int PxOffsetX = __o_PxOffsetX.Default(0);
int PxOffsetY = __o_PxOffsetY.Default(0);
int PxAdvanceX = __o_PxAdvanceX.Default(0);
	HX_STACK_PUSH("PxBitmapFont::setGlyph","flixel/text/pxText/PxBitmapFont.hx",492);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Tiles,"Tiles");
	HX_STACK_ARG(PxCharID,"PxCharID");
	HX_STACK_ARG(PxRect,"PxRect");
	HX_STACK_ARG(PxOffsetX,"PxOffsetX");
	HX_STACK_ARG(PxOffsetY,"PxOffsetY");
	HX_STACK_ARG(PxAdvanceX,"PxAdvanceX");
{
		HX_STACK_LINE(493)
		int tileID = Tiles->tileSheet->addTileRectID(PxRect,::flixel::text::pxText::PxBitmapFont_obj::ZERO_POINT);		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(494)
		::flixel::text::pxText::PxFontSymbol symbol = ::flixel::text::pxText::PxFontSymbol_obj::__new();		HX_STACK_VAR(symbol,"symbol");
		HX_STACK_LINE(495)
		symbol->tileID = tileID;
		HX_STACK_LINE(496)
		symbol->xoffset = PxOffsetX;
		HX_STACK_LINE(497)
		symbol->yoffset = PxOffsetY;
		HX_STACK_LINE(498)
		symbol->xadvance = PxAdvanceX;
		HX_STACK_LINE(500)
		this->_glyphs->set(PxCharID,symbol);
		HX_STACK_LINE(501)
		(this->_num_letters)++;
		HX_STACK_LINE(503)
		if ((((::Math_obj::floor(PxRect->height) + PxOffsetY) > this->_maxHeight))){
			HX_STACK_LINE(504)
			this->_maxHeight = (::Math_obj::floor(PxRect->height) + PxOffsetY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(PxBitmapFont_obj,setGlyph,(void))

Void PxBitmapFont_obj::dispose( ){
{
		HX_STACK_PUSH("PxBitmapFont::dispose","flixel/text/pxText/PxBitmapFont.hx",423);
		HX_STACK_THIS(this);
		HX_STACK_LINE(437)
		this->_symbols = null();
		HX_STACK_LINE(438)
		this->_tileRects = null();
		HX_STACK_LINE(439)
		this->setCachedGraphics(null());
		HX_STACK_LINE(440)
		this->_region = null();
		HX_STACK_LINE(441)
		this->_glyphs = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,dispose,(void))

::flash::display::BitmapData PxBitmapFont_obj::prepareAngelCodeBitmapData( ::flash::display::BitmapData PxBitmapData,::Xml PxXMLData,Array< ::Dynamic > PxSymbols){
	HX_STACK_PUSH("PxBitmapFont::prepareAngelCodeBitmapData","flixel/text/pxText/PxBitmapFont.hx",313);
	HX_STACK_THIS(this);
	HX_STACK_ARG(PxBitmapData,"PxBitmapData");
	HX_STACK_ARG(PxXMLData,"PxXMLData");
	HX_STACK_ARG(PxSymbols,"PxSymbols");
	HX_STACK_LINE(314)
	::Xml chars = null();		HX_STACK_VAR(chars,"chars");
	HX_STACK_LINE(316)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(PxXMLData->elements());  __it->hasNext(); ){
		::Xml node = __it->next();
		if (((node->get_nodeName() == HX_CSTRING("font")))){
			HX_STACK_LINE(319)
			for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(node->elements());  __it->hasNext(); ){
				::Xml nodeChild = __it->next();
				if (((nodeChild->get_nodeName() == HX_CSTRING("chars")))){
					HX_STACK_LINE(324)
					chars = nodeChild;
					HX_STACK_LINE(325)
					break;
				}
;
			}
		}
;
	}
	HX_STACK_LINE(331)
	::flixel::text::pxText::_PxBitmapFont::HelperSymbol symbol;		HX_STACK_VAR(symbol,"symbol");
	HX_STACK_LINE(332)
	int maxX = (int)0;		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(333)
	int maxY = (int)0;		HX_STACK_VAR(maxY,"maxY");
	HX_STACK_LINE(335)
	if (((chars != null()))){
		HX_STACK_LINE(336)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(chars->elements());  __it->hasNext(); ){
			::Xml node = __it->next();
			if (((node->get_nodeName() == HX_CSTRING("char")))){
				HX_STACK_LINE(341)
				symbol = ::flixel::text::pxText::_PxBitmapFont::HelperSymbol_obj::__new();
				HX_STACK_LINE(342)
				symbol->x = ::Std_obj::parseInt(node->get(HX_CSTRING("x")));
				HX_STACK_LINE(343)
				symbol->y = ::Std_obj::parseInt(node->get(HX_CSTRING("y")));
				HX_STACK_LINE(344)
				symbol->width = ::Std_obj::parseInt(node->get(HX_CSTRING("width")));
				HX_STACK_LINE(345)
				symbol->height = ::Std_obj::parseInt(node->get(HX_CSTRING("height")));
				HX_STACK_LINE(346)
				symbol->xoffset = ::Std_obj::parseInt(node->get(HX_CSTRING("xoffset")));
				HX_STACK_LINE(347)
				symbol->yoffset = ::Std_obj::parseInt(node->get(HX_CSTRING("yoffset")));
				HX_STACK_LINE(348)
				symbol->xadvance = ::Std_obj::parseInt(node->get(HX_CSTRING("xadvance")));
				HX_STACK_LINE(349)
				symbol->charCode = ::Std_obj::parseInt(node->get(HX_CSTRING("id")));
				HX_STACK_LINE(351)
				PxSymbols->push(symbol);
				HX_STACK_LINE(353)
				maxX = (symbol->x + symbol->width);
				HX_STACK_LINE(354)
				maxY = (symbol->y + symbol->height);
			}
;
		}
	}
	HX_STACK_LINE(359)
	return PxBitmapData;
}


HX_DEFINE_DYNAMIC_FUNC3(PxBitmapFont_obj,prepareAngelCodeBitmapData,return )

::flash::display::BitmapData PxBitmapFont_obj::preparePixelizerBitmapData( ::flash::display::BitmapData PxBitmapData,Array< ::Dynamic > PxRects){
	HX_STACK_PUSH("PxBitmapFont::preparePixelizerBitmapData","flixel/text/pxText/PxBitmapFont.hx",249);
	HX_STACK_THIS(this);
	HX_STACK_ARG(PxBitmapData,"PxBitmapData");
	HX_STACK_ARG(PxRects,"PxRects");
	HX_STACK_LINE(250)
	int bgColor = PxBitmapData->getPixel((int)0,(int)0);		HX_STACK_VAR(bgColor,"bgColor");
	HX_STACK_LINE(251)
	int cy = (int)0;		HX_STACK_VAR(cy,"cy");
	HX_STACK_LINE(252)
	int cx;		HX_STACK_VAR(cx,"cx");
	HX_STACK_LINE(254)
	while(((cy < PxBitmapData->get_height()))){
		HX_STACK_LINE(256)
		int rowHeight = (int)0;		HX_STACK_VAR(rowHeight,"rowHeight");
		HX_STACK_LINE(257)
		cx = (int)0;
		HX_STACK_LINE(259)
		while(((cx < PxBitmapData->get_width()))){
			HX_STACK_LINE(261)
			if (((::Std_obj::_int(PxBitmapData->getPixel(cx,cy)) != bgColor))){
				HX_STACK_LINE(264)
				int gx = cx;		HX_STACK_VAR(gx,"gx");
				HX_STACK_LINE(265)
				int gy = cy;		HX_STACK_VAR(gy,"gy");
				HX_STACK_LINE(268)
				while(((::Std_obj::_int(PxBitmapData->getPixel(gx,cy)) != bgColor))){
					HX_STACK_LINE(269)
					(gx)++;
				}
				HX_STACK_LINE(273)
				while(((::Std_obj::_int(PxBitmapData->getPixel(cx,gy)) != bgColor))){
					HX_STACK_LINE(274)
					(gy)++;
				}
				HX_STACK_LINE(278)
				int gw = (gx - cx);		HX_STACK_VAR(gw,"gw");
				HX_STACK_LINE(279)
				int gh = (gy - cy);		HX_STACK_VAR(gh,"gh");
				HX_STACK_LINE(281)
				PxRects->push(::flash::geom::Rectangle_obj::__new(cx,cy,gw,gh));
				HX_STACK_LINE(284)
				if (((gh > rowHeight))){
					HX_STACK_LINE(285)
					rowHeight = gh;
				}
				HX_STACK_LINE(289)
				if (((gh > this->_maxHeight))){
					HX_STACK_LINE(290)
					this->_maxHeight = gh;
				}
				HX_STACK_LINE(295)
				hx::AddEq(cx,gw);
			}
			HX_STACK_LINE(298)
			(cx)++;
		}
		HX_STACK_LINE(301)
		hx::AddEq(cy,(rowHeight + (int)1));
	}
	HX_STACK_LINE(309)
	return PxBitmapData;
}


HX_DEFINE_DYNAMIC_FUNC2(PxBitmapFont_obj,preparePixelizerBitmapData,return )

Void PxBitmapFont_obj::reset( ){
{
		HX_STACK_PUSH("PxBitmapFont::reset","flixel/text/pxText/PxBitmapFont.hx",232);
		HX_STACK_THIS(this);
		HX_STACK_LINE(233)
		this->dispose();
		HX_STACK_LINE(234)
		this->_maxHeight = (int)0;
		HX_STACK_LINE(239)
		this->_glyphs = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(240)
		this->_bgTileID = (int)-1;
		HX_STACK_LINE(243)
		this->_symbols = null();
		HX_STACK_LINE(244)
		this->_tileRects = null();
		HX_STACK_LINE(245)
		this->_glyphString = HX_CSTRING("");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,reset,(void))

Void PxBitmapFont_obj::updateGlyphData( ::flixel::system::layer::TileSheetData Tiles){
{
		HX_STACK_PUSH("PxBitmapFont::updateGlyphData","flixel/text/pxText/PxBitmapFont.hx",141);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Tiles,"Tiles");
		HX_STACK_LINE(143)
		this->_glyphs = ::haxe::ds::IntMap_obj::__new();
		HX_STACK_LINE(146)
		::flash::geom::Rectangle rect;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(148)
		if (((this->_symbols != null()))){
			HX_STACK_LINE(150)
			this->_glyphString = HX_CSTRING("");
			HX_STACK_LINE(151)
			::flash::geom::Point point = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(152)
			::flash::display::BitmapData bd;		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(153)
			::String charString;		HX_STACK_VAR(charString,"charString");
			HX_STACK_LINE(155)
			{
				HX_STACK_LINE(155)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Dynamic > _g1 = this->_symbols;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(155)
				while(((_g < _g1->length))){
					HX_STACK_LINE(155)
					::flixel::text::pxText::_PxBitmapFont::HelperSymbol symbol = _g1->__get(_g).StaticCast< ::flixel::text::pxText::_PxBitmapFont::HelperSymbol >();		HX_STACK_VAR(symbol,"symbol");
					HX_STACK_LINE(155)
					++(_g);
					HX_STACK_LINE(157)
					rect = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
					HX_STACK_LINE(158)
					rect->x = symbol->x;
					HX_STACK_LINE(159)
					rect->y = symbol->y;
					HX_STACK_LINE(160)
					rect->width = symbol->width;
					HX_STACK_LINE(161)
					rect->height = symbol->height;
					HX_STACK_LINE(163)
					point->x = symbol->xoffset;
					HX_STACK_LINE(164)
					point->y = symbol->yoffset;
					HX_STACK_LINE(166)
					charString = ::String::fromCharCode(symbol->charCode);
					HX_STACK_LINE(167)
					hx::AddEq(this->_glyphString,charString);
					HX_STACK_LINE(169)
					int xadvance = symbol->xadvance;		HX_STACK_VAR(xadvance,"xadvance");
					HX_STACK_LINE(170)
					int charWidth = xadvance;		HX_STACK_VAR(charWidth,"charWidth");
					HX_STACK_LINE(172)
					if (((rect->width > xadvance))){
						HX_STACK_LINE(174)
						charWidth = symbol->width;
						HX_STACK_LINE(175)
						point->x = (int)0;
					}
					HX_STACK_LINE(197)
					if (((bool((charString != HX_CSTRING(" "))) && bool((charString != HX_CSTRING("")))))){
						HX_STACK_LINE(198)
						this->setGlyph(Tiles,symbol->charCode,rect,::Math_obj::floor(point->x),::Math_obj::floor(point->y),charWidth);
					}
					else{
						HX_STACK_LINE(202)
						this->setGlyph(Tiles,symbol->charCode,rect,::Math_obj::floor(point->x),(int)1,charWidth);
					}
				}
			}
		}
		else{
			HX_STACK_LINE(208)
			if (((this->_tileRects != null()))){
				HX_STACK_LINE(210)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->_tileRects->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(210)
				while(((_g1 < _g))){
					HX_STACK_LINE(210)
					int letterID = (_g1)++;		HX_STACK_VAR(letterID,"letterID");
					HX_STACK_LINE(212)
					rect = this->_tileRects->__get(letterID).StaticCast< ::flash::geom::Rectangle >();
					HX_STACK_LINE(222)
					this->setGlyph(Tiles,this->_glyphString.charCodeAt(letterID),rect,(int)0,(int)0,::Std_obj::_int(rect->width));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PxBitmapFont_obj,updateGlyphData,(void))

::flixel::text::pxText::PxBitmapFont PxBitmapFont_obj::loadAngelCode( ::flash::display::BitmapData pBitmapData,::Xml pXMLData){
	HX_STACK_PUSH("PxBitmapFont::loadAngelCode","flixel/text/pxText/PxBitmapFont.hx",117);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pBitmapData,"pBitmapData");
	HX_STACK_ARG(pXMLData,"pXMLData");
	HX_STACK_LINE(118)
	this->reset();
	HX_STACK_LINE(120)
	if (((bool((pBitmapData != null())) && bool((pXMLData != null()))))){
		HX_STACK_LINE(122)
		this->_symbols = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(123)
		::flash::display::BitmapData result = this->prepareAngelCodeBitmapData(pBitmapData,pXMLData,this->_symbols);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(124)
		::String key = ::flixel::FlxG_obj::bitmap->getUniqueKey(HX_CSTRING("font"));		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(125)
		this->setCachedGraphics(::flixel::FlxG_obj::bitmap->add(result,false,key));
		HX_STACK_LINE(130)
		this->updateGlyphData(this->cachedGraphics->get_tilesheet());
	}
	HX_STACK_LINE(134)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(PxBitmapFont_obj,loadAngelCode,return )

::flixel::text::pxText::PxBitmapFont PxBitmapFont_obj::loadPixelizer( ::flash::display::BitmapData PxBitmapData,::String PxLetters){
	HX_STACK_PUSH("PxBitmapFont::loadPixelizer","flixel/text/pxText/PxBitmapFont.hx",75);
	HX_STACK_THIS(this);
	HX_STACK_ARG(PxBitmapData,"PxBitmapData");
	HX_STACK_ARG(PxLetters,"PxLetters");
	HX_STACK_LINE(76)
	this->reset();
	HX_STACK_LINE(78)
	this->_glyphString = PxLetters;
	HX_STACK_LINE(88)
	if (((PxBitmapData != null()))){
		HX_STACK_LINE(90)
		this->_tileRects = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(91)
		::flash::display::BitmapData result = this->preparePixelizerBitmapData(PxBitmapData,this->_tileRects);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(92)
		::String key = ::flixel::FlxG_obj::bitmap->getUniqueKey(HX_CSTRING("font"));		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(93)
		this->setCachedGraphics(::flixel::FlxG_obj::bitmap->add(result,false,key));
		HX_STACK_LINE(94)
		this->_region = ::flixel::system::layer::Region_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(95)
		this->_region->width = this->cachedGraphics->bitmap->get_width();
		HX_STACK_LINE(96)
		this->_region->height = this->cachedGraphics->bitmap->get_height();
		HX_STACK_LINE(97)
		::flash::geom::Rectangle currRect;		HX_STACK_VAR(currRect,"currRect");
		HX_STACK_LINE(102)
		this->updateGlyphData(this->cachedGraphics->get_tilesheet());
	}
	HX_STACK_LINE(106)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(PxBitmapFont_obj,loadPixelizer,return )

::haxe::ds::StringMap PxBitmapFont_obj::_storedFonts;

::flash::geom::Point PxBitmapFont_obj::ZERO_POINT;

Void PxBitmapFont_obj::store( ::String PxHandle,::flixel::text::pxText::PxBitmapFont PxFont){
{
		HX_STACK_PUSH("PxBitmapFont::store","flixel/text/pxText/PxBitmapFont.hx",700);
		HX_STACK_ARG(PxHandle,"PxHandle");
		HX_STACK_ARG(PxFont,"PxFont");
		HX_STACK_LINE(700)
		::flixel::text::pxText::PxBitmapFont_obj::_storedFonts->set(PxHandle,PxFont);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PxBitmapFont_obj,store,(void))

::flixel::text::pxText::PxBitmapFont PxBitmapFont_obj::fetch( ::String PxHandle){
	HX_STACK_PUSH("PxBitmapFont::fetch","flixel/text/pxText/PxBitmapFont.hx",711);
	HX_STACK_ARG(PxHandle,"PxHandle");
	HX_STACK_LINE(712)
	::flixel::text::pxText::PxBitmapFont f = ::flixel::text::pxText::PxBitmapFont_obj::_storedFonts->get(PxHandle);		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(714)
	return f;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PxBitmapFont_obj,fetch,return )

Void PxBitmapFont_obj::clearStorage( ){
{
		HX_STACK_PUSH("PxBitmapFont::clearStorage","flixel/text/pxText/PxBitmapFont.hx",718);
		HX_STACK_LINE(719)
		for(::cpp::FastIterator_obj< ::flixel::text::pxText::PxBitmapFont > *__it = ::cpp::CreateFastIterator< ::flixel::text::pxText::PxBitmapFont >(::flixel::text::pxText::PxBitmapFont_obj::_storedFonts->iterator());  __it->hasNext(); ){
			::flixel::text::pxText::PxBitmapFont font = __it->next();
			font->dispose();
		}
		HX_STACK_LINE(724)
		::flixel::text::pxText::PxBitmapFont_obj::_storedFonts = ::haxe::ds::StringMap_obj::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PxBitmapFont_obj,clearStorage,(void))


PxBitmapFont_obj::PxBitmapFont_obj()
{
}

void PxBitmapFont_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PxBitmapFont);
	HX_MARK_MEMBER_NAME(bgTileID,"bgTileID");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(cachedGraphics,"cachedGraphics");
	HX_MARK_MEMBER_NAME(_region,"_region");
	HX_MARK_MEMBER_NAME(_symbols,"_symbols");
	HX_MARK_MEMBER_NAME(_tileRects,"_tileRects");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_maxHeight,"_maxHeight");
	HX_MARK_MEMBER_NAME(_glyphString,"_glyphString");
	HX_MARK_MEMBER_NAME(_bgTileID,"_bgTileID");
	HX_MARK_MEMBER_NAME(_num_letters,"_num_letters");
	HX_MARK_MEMBER_NAME(_glyphs,"_glyphs");
	HX_MARK_END_CLASS();
}

void PxBitmapFont_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bgTileID,"bgTileID");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
	HX_VISIT_MEMBER_NAME(cachedGraphics,"cachedGraphics");
	HX_VISIT_MEMBER_NAME(_region,"_region");
	HX_VISIT_MEMBER_NAME(_symbols,"_symbols");
	HX_VISIT_MEMBER_NAME(_tileRects,"_tileRects");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_maxHeight,"_maxHeight");
	HX_VISIT_MEMBER_NAME(_glyphString,"_glyphString");
	HX_VISIT_MEMBER_NAME(_bgTileID,"_bgTileID");
	HX_VISIT_MEMBER_NAME(_num_letters,"_num_letters");
	HX_VISIT_MEMBER_NAME(_glyphs,"_glyphs");
}

Dynamic PxBitmapFont_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"store") ) { return store_dyn(); }
		if (HX_FIELD_EQ(inName,"fetch") ) { return fetch_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { return inCallProp ? get_pixels() : pixels; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"_region") ) { return _region; }
		if (HX_FIELD_EQ(inName,"_glyphs") ) { return _glyphs; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bgTileID") ) { return inCallProp ? get_bgTileID() : bgTileID; }
		if (HX_FIELD_EQ(inName,"setGlyph") ) { return setGlyph_dyn(); }
		if (HX_FIELD_EQ(inName,"_symbols") ) { return _symbols; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bgTileID") ) { return _bgTileID; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ZERO_POINT") ) { return ZERO_POINT; }
		if (HX_FIELD_EQ(inName,"get_pixels") ) { return get_pixels_dyn(); }
		if (HX_FIELD_EQ(inName,"numLetters") ) { return get_numLetters(); }
		if (HX_FIELD_EQ(inName,"_tileRects") ) { return _tileRects; }
		if (HX_FIELD_EQ(inName,"_maxHeight") ) { return _maxHeight; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storedFonts") ) { return _storedFonts; }
		if (HX_FIELD_EQ(inName,"clearStorage") ) { return clearStorage_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bgTileID") ) { return get_bgTileID_dyn(); }
		if (HX_FIELD_EQ(inName,"getTextWidth") ) { return getTextWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"_glyphString") ) { return _glyphString; }
		if (HX_FIELD_EQ(inName,"_num_letters") ) { return _num_letters; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFontHeight") ) { return getFontHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"loadAngelCode") ) { return loadAngelCode_dyn(); }
		if (HX_FIELD_EQ(inName,"loadPixelizer") ) { return loadPixelizer_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_numLetters") ) { return get_numLetters_dyn(); }
		if (HX_FIELD_EQ(inName,"cachedGraphics") ) { return cachedGraphics; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateGlyphData") ) { return updateGlyphData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setCachedGraphics") ) { return setCachedGraphics_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"prepareAngelCodeBitmapData") ) { return prepareAngelCodeBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"preparePixelizerBitmapData") ) { return preparePixelizerBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PxBitmapFont_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_region") ) { _region=inValue.Cast< ::flixel::system::layer::Region >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_glyphs") ) { _glyphs=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bgTileID") ) { bgTileID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_symbols") ) { _symbols=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_bgTileID") ) { _bgTileID=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ZERO_POINT") ) { ZERO_POINT=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileRects") ) { _tileRects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxHeight") ) { _maxHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_storedFonts") ) { _storedFonts=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_glyphString") ) { _glyphString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_num_letters") ) { _num_letters=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cachedGraphics") ) { cachedGraphics=inValue.Cast< ::flixel::util::loaders::CachedGraphics >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PxBitmapFont_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bgTileID"));
	outFields->push(HX_CSTRING("pixels"));
	outFields->push(HX_CSTRING("numLetters"));
	outFields->push(HX_CSTRING("cachedGraphics"));
	outFields->push(HX_CSTRING("_region"));
	outFields->push(HX_CSTRING("_symbols"));
	outFields->push(HX_CSTRING("_tileRects"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_maxHeight"));
	outFields->push(HX_CSTRING("_glyphString"));
	outFields->push(HX_CSTRING("_bgTileID"));
	outFields->push(HX_CSTRING("_num_letters"));
	outFields->push(HX_CSTRING("_glyphs"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_storedFonts"),
	HX_CSTRING("ZERO_POINT"),
	HX_CSTRING("store"),
	HX_CSTRING("fetch"),
	HX_CSTRING("clearStorage"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setCachedGraphics"),
	HX_CSTRING("get_numLetters"),
	HX_CSTRING("get_bgTileID"),
	HX_CSTRING("bgTileID"),
	HX_CSTRING("get_pixels"),
	HX_CSTRING("pixels"),
	HX_CSTRING("getFontHeight"),
	HX_CSTRING("getTextWidth"),
	HX_CSTRING("render"),
	HX_CSTRING("setGlyph"),
	HX_CSTRING("dispose"),
	HX_CSTRING("prepareAngelCodeBitmapData"),
	HX_CSTRING("preparePixelizerBitmapData"),
	HX_CSTRING("reset"),
	HX_CSTRING("updateGlyphData"),
	HX_CSTRING("loadAngelCode"),
	HX_CSTRING("loadPixelizer"),
	HX_CSTRING("cachedGraphics"),
	HX_CSTRING("_region"),
	HX_CSTRING("_symbols"),
	HX_CSTRING("_tileRects"),
	HX_CSTRING("_point"),
	HX_CSTRING("_maxHeight"),
	HX_CSTRING("_glyphString"),
	HX_CSTRING("_bgTileID"),
	HX_CSTRING("_num_letters"),
	HX_CSTRING("_glyphs"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PxBitmapFont_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PxBitmapFont_obj::_storedFonts,"_storedFonts");
	HX_MARK_MEMBER_NAME(PxBitmapFont_obj::ZERO_POINT,"ZERO_POINT");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PxBitmapFont_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PxBitmapFont_obj::_storedFonts,"_storedFonts");
	HX_VISIT_MEMBER_NAME(PxBitmapFont_obj::ZERO_POINT,"ZERO_POINT");
};

Class PxBitmapFont_obj::__mClass;

void PxBitmapFont_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.text.pxText.PxBitmapFont"), hx::TCanCast< PxBitmapFont_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PxBitmapFont_obj::__boot()
{
	_storedFonts= ::haxe::ds::StringMap_obj::__new();
	ZERO_POINT= ::flash::geom::Point_obj::__new(null(),null());
}

} // end namespace flixel
} // end namespace text
} // end namespace pxText
