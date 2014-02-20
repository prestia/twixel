#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_display_StageAlign
#include <flash/display/StageAlign.h>
#endif
#ifndef INCLUDED_flash_display_StageScaleMode
#include <flash/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_plugin_FlxPlugin
#include <flixel/plugin/FlxPlugin.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSplash
#include <flixel/system/FlxSplash.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxFocusLostScreen
#include <flixel/system/ui/FlxFocusLostScreen.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#include <flixel/system/ui/FlxSoundTray.h>
#endif
#ifndef INCLUDED_flixel_text_pxText_PxBitmapFont
#include <flixel/text/pxText/PxBitmapFont.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
namespace flixel{

Void FlxGame_obj::__construct(int GameSizeX,int GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_UpdateFramerate,hx::Null< int >  __o_DrawFramerate,hx::Null< bool >  __o_SkipSplash,hx::Null< bool >  __o_StartFullscreen)
{
HX_STACK_PUSH("FlxGame::new","flixel/FlxGame.hx",38);
Float Zoom = __o_Zoom.Default(1);
int UpdateFramerate = __o_UpdateFramerate.Default(60);
int DrawFramerate = __o_DrawFramerate.Default(60);
bool SkipSplash = __o_SkipSplash.Default(false);
bool StartFullscreen = __o_StartFullscreen.Default(false);
{
	HX_STACK_LINE(185)
	this->_skipSplash = false;
	HX_STACK_LINE(180)
	this->_customFocusLostScreen = hx::ClassOf< ::flixel::system::ui::FlxFocusLostScreen >();
	HX_STACK_LINE(173)
	this->_customSoundTray = hx::ClassOf< ::flixel::system::ui::FlxSoundTray >();
	HX_STACK_LINE(159)
	this->_onFocusFiredOnce = false;
	HX_STACK_LINE(152)
	this->_lostFocus = false;
	HX_STACK_LINE(143)
	this->_total = (int)0;
	HX_STACK_LINE(134)
	this->_gameJustStarted = false;
	HX_STACK_LINE(84)
	this->resetState = false;
	HX_STACK_LINE(80)
	this->requestedState = null();
	HX_STACK_LINE(71)
	this->focusLostFramerate = (int)10;
	HX_STACK_LINE(47)
	this->state = null();
	HX_STACK_LINE(43)
	this->ticks = (int)0;
	HX_STACK_LINE(201)
	super::__construct();
	HX_STACK_LINE(208)
	this->inputContainer = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(211)
	::flixel::FlxG_obj::init(hx::ObjectPtr<OBJ_>(this),GameSizeX,GameSizeY,Zoom);
	HX_STACK_LINE(213)
	::flixel::FlxG_obj::set_updateFramerate(UpdateFramerate);
	HX_STACK_LINE(214)
	::flixel::FlxG_obj::set_drawFramerate(DrawFramerate);
	HX_STACK_LINE(215)
	this->_accumulator = this->stepMS;
	HX_STACK_LINE(216)
	this->_skipSplash = SkipSplash;
	HX_STACK_LINE(223)
	this->_iState = InitialState;
	HX_STACK_LINE(225)
	this->addEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->create_dyn(),null(),null(),null());
}
;
	return null();
}

FlxGame_obj::~FlxGame_obj() { }

Dynamic FlxGame_obj::__CreateEmpty() { return  new FlxGame_obj; }
hx::ObjectPtr< FlxGame_obj > FlxGame_obj::__new(int GameSizeX,int GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_UpdateFramerate,hx::Null< int >  __o_DrawFramerate,hx::Null< bool >  __o_SkipSplash,hx::Null< bool >  __o_StartFullscreen)
{  hx::ObjectPtr< FlxGame_obj > result = new FlxGame_obj();
	result->__construct(GameSizeX,GameSizeY,InitialState,__o_Zoom,__o_UpdateFramerate,__o_DrawFramerate,__o_SkipSplash,__o_StartFullscreen);
	return result;}

Dynamic FlxGame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGame_obj > result = new FlxGame_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

Void FlxGame_obj::draw( ){
{
		HX_STACK_PUSH("FlxGame::draw","flixel/FlxGame.hx",745);
		HX_STACK_THIS(this);
		HX_STACK_LINE(755)
		::flixel::system::layer::TileSheetExt_obj::_DRAWCALLS = (int)0;
		HX_STACK_LINE(758)
		{
			HX_STACK_LINE(758)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(758)
			while(((_g < _g1->length))){
				HX_STACK_LINE(758)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(758)
				++(_g);
				HX_STACK_LINE(758)
				if (((bool((bool((camera == null())) || bool(!(camera->exists)))) || bool(!(camera->visible))))){
					HX_STACK_LINE(758)
					continue;
				}
				HX_STACK_LINE(758)
				camera->clearDrawStack();
				HX_STACK_LINE(758)
				camera->canvas->get_graphics()->clear();
				HX_STACK_LINE(758)
				camera->fill((int(camera->bgColor) & int((int)16777215)),camera->useBgAlphaBlending,(Float(((int((int(camera->bgColor) >> int((int)24))) & int((int)255)))) / Float((int)255)),null());
			}
		}
		HX_STACK_LINE(760)
		{
			HX_STACK_LINE(760)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::plugins->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(760)
			while(((_g < _g1->length))){
				HX_STACK_LINE(760)
				::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(760)
				++(_g);
				HX_STACK_LINE(760)
				if (((bool(plugin->exists) && bool(plugin->visible)))){
					HX_STACK_LINE(760)
					plugin->draw();
				}
			}
		}
		HX_STACK_LINE(769)
		this->state->draw();
		HX_STACK_LINE(779)
		{
			HX_STACK_LINE(779)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(779)
			while(((_g < _g1->length))){
				HX_STACK_LINE(779)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(779)
				++(_g);
				HX_STACK_LINE(779)
				if (((bool((bool((camera != null())) && bool(camera->exists))) && bool(camera->visible)))){
					HX_STACK_LINE(779)
					camera->render();
				}
			}
		}
		HX_STACK_LINE(786)
		{
			HX_STACK_LINE(786)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(786)
			while(((_g < _g1->length))){
				HX_STACK_LINE(786)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(786)
				++(_g);
				HX_STACK_LINE(786)
				if (((bool((bool((camera == null())) || bool(!(camera->exists)))) || bool(!(camera->visible))))){
					HX_STACK_LINE(786)
					continue;
				}
				HX_STACK_LINE(786)
				camera->drawFX();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,draw,(void))

Void FlxGame_obj::updateInput( ){
{
		HX_STACK_PUSH("FlxGame::updateInput","flixel/FlxGame.hx",683);
		HX_STACK_THIS(this);
		HX_STACK_LINE(726)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(726)
		while(((_g < _g1->length))){
			HX_STACK_LINE(726)
			::flixel::interfaces::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::interfaces::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(726)
			++(_g);
			HX_STACK_LINE(726)
			input->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,updateInput,(void))

Void FlxGame_obj::update( ){
{
		HX_STACK_PUSH("FlxGame::update","flixel/FlxGame.hx",636);
		HX_STACK_THIS(this);
		HX_STACK_LINE(637)
		if (((this->state != this->requestedState))){
			HX_STACK_LINE(638)
			this->switchState();
		}
		HX_STACK_LINE(649)
		if ((::flixel::FlxG_obj::fixedTimestep)){
			HX_STACK_LINE(650)
			::flixel::FlxG_obj::elapsed = (::flixel::FlxG_obj::timeScale * this->stepSeconds);
		}
		else{
			HX_STACK_LINE(654)
			::flixel::FlxG_obj::elapsed = (::flixel::FlxG_obj::timeScale * ((Float(this->elapsedMS) / Float((int)1000))));
		}
		HX_STACK_LINE(658)
		this->updateInput();
		HX_STACK_LINE(661)
		::flixel::FlxG_obj::sound->update();
		HX_STACK_LINE(663)
		{
			HX_STACK_LINE(663)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::plugins->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(663)
			while(((_g < _g1->length))){
				HX_STACK_LINE(663)
				::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(663)
				++(_g);
				HX_STACK_LINE(663)
				if (((bool(plugin->exists) && bool(plugin->active)))){
					HX_STACK_LINE(663)
					plugin->update();
				}
			}
		}
		HX_STACK_LINE(665)
		this->state->tryUpdate();
		HX_STACK_LINE(667)
		{
			HX_STACK_LINE(667)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(667)
			while(((_g < _g1->length))){
				HX_STACK_LINE(667)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(667)
				++(_g);
				HX_STACK_LINE(667)
				if (((bool((camera != null())) && bool(camera->exists)))){
					HX_STACK_LINE(667)
					if ((camera->active)){
						HX_STACK_LINE(667)
						camera->update();
					}
					HX_STACK_LINE(667)
					if (((camera->target == null()))){
						HX_STACK_LINE(667)
						camera->flashSprite->set_x((camera->x + camera->flashOffsetX));
						HX_STACK_LINE(667)
						camera->flashSprite->set_y((camera->y + camera->flashOffsetY));
					}
					HX_STACK_LINE(667)
					camera->flashSprite->set_visible(camera->visible);
				}
			}
		}
		HX_STACK_LINE(674)
		{
			HX_STACK_LINE(674)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::swipes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(674)
			while(((_g < _g1->length))){
				HX_STACK_LINE(674)
				::flixel::input::FlxSwipe swipe = _g1->__get(_g).StaticCast< ::flixel::input::FlxSwipe >();		HX_STACK_VAR(swipe,"swipe");
				HX_STACK_LINE(674)
				++(_g);
				HX_STACK_LINE(676)
				swipe = null();
			}
		}
		HX_STACK_LINE(678)
		::flixel::FlxG_obj::swipes = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,update,(void))

Void FlxGame_obj::step( ){
{
		HX_STACK_PUSH("FlxGame::step","flixel/FlxGame.hx",584);
		HX_STACK_THIS(this);
		HX_STACK_LINE(586)
		if ((this->resetState)){
			HX_STACK_LINE(588)
			{
				HX_STACK_LINE(588)
				if ((this->_skipSplash)){
					HX_STACK_LINE(588)
					this->requestedState = ::Type_obj::createInstance(this->_iState,Dynamic( Array_obj<Dynamic>::__new()));
					HX_STACK_LINE(588)
					this->_gameJustStarted = true;
				}
				else{
					HX_STACK_LINE(588)
					this->requestedState = ::flixel::system::FlxSplash_obj::__new(this->_iState);
					HX_STACK_LINE(588)
					this->_skipSplash = true;
				}
				HX_STACK_LINE(588)
				::flixel::FlxG_obj::reset();
			}
			HX_STACK_LINE(589)
			this->resetState = false;
		}
		HX_STACK_LINE(624)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,step,(void))

Void FlxGame_obj::gameStart( ){
{
		HX_STACK_PUSH("FlxGame::gameStart","flixel/FlxGame.hx",570);
		HX_STACK_THIS(this);
		HX_STACK_LINE(572)
		::flixel::FlxG_obj::mouse->onGameStart();
		HX_STACK_LINE(574)
		this->_gameJustStarted = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,gameStart,(void))

Void FlxGame_obj::switchState( ){
{
		HX_STACK_PUSH("FlxGame::switchState","flixel/FlxGame.hx",525);
		HX_STACK_THIS(this);
		HX_STACK_LINE(527)
		::flixel::text::pxText::PxBitmapFont_obj::clearStorage();
		HX_STACK_LINE(528)
		::flixel::FlxG_obj::bitmap->clearCache();
		HX_STACK_LINE(529)
		::flixel::FlxG_obj::cameras->reset(null());
		HX_STACK_LINE(530)
		::flixel::FlxG_obj::inputs->reset();
		HX_STACK_LINE(532)
		::flixel::FlxG_obj::sound->destroy(null());
		HX_STACK_LINE(534)
		{
			HX_STACK_LINE(534)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::plugins->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(534)
			while(((_g < _g1->length))){
				HX_STACK_LINE(534)
				::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(534)
				++(_g);
				HX_STACK_LINE(534)
				if ((plugin->exists)){
					HX_STACK_LINE(534)
					plugin->onStateSwitch();
				}
			}
		}
		HX_STACK_LINE(549)
		if (((this->state != null()))){
			HX_STACK_LINE(550)
			this->state->destroy();
		}
		HX_STACK_LINE(555)
		this->state = this->requestedState;
		HX_STACK_LINE(557)
		this->state->create();
		HX_STACK_LINE(559)
		if ((this->_gameJustStarted)){
			HX_STACK_LINE(560)
			this->gameStart();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,switchState,(void))

Void FlxGame_obj::resetGame( ){
{
		HX_STACK_PUSH("FlxGame::resetGame","flixel/FlxGame.hx",492);
		HX_STACK_THIS(this);
		HX_STACK_LINE(497)
		if ((this->_skipSplash)){
			HX_STACK_LINE(499)
			this->requestedState = ::Type_obj::createInstance(this->_iState,Dynamic( Array_obj<Dynamic>::__new()));
			HX_STACK_LINE(500)
			this->_gameJustStarted = true;
		}
		else{
			HX_STACK_LINE(504)
			this->requestedState = ::flixel::system::FlxSplash_obj::__new(this->_iState);
			HX_STACK_LINE(505)
			this->_skipSplash = true;
		}
		HX_STACK_LINE(516)
		::flixel::FlxG_obj::reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,resetGame,(void))

Void FlxGame_obj::onEnterFrame( ::flash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onEnterFrame","flixel/FlxGame.hx",424);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(425)
		this->ticks = ::flash::Lib_obj::getTimer();
		HX_STACK_LINE(426)
		this->elapsedMS = (this->ticks - this->_total);
		HX_STACK_LINE(427)
		this->_total = this->ticks;
		HX_STACK_LINE(430)
		if (((bool((this->soundTray != null())) && bool(this->soundTray->active)))){
			HX_STACK_LINE(431)
			this->soundTray->update(this->elapsedMS);
		}
		HX_STACK_LINE(436)
		if (((bool(!(this->_lostFocus)) || bool(!(::flixel::FlxG_obj::autoPause))))){
			HX_STACK_LINE(438)
			if ((::flixel::FlxG_obj::vcr->paused)){
				HX_STACK_LINE(439)
				if ((::flixel::FlxG_obj::vcr->stepRequested)){
					HX_STACK_LINE(441)
					::flixel::FlxG_obj::vcr->stepRequested = false;
				}
				else{
					HX_STACK_LINE(444)
					if (((this->state == this->requestedState))){
						HX_STACK_LINE(445)
						return null();
					}
				}
			}
			HX_STACK_LINE(450)
			if ((::flixel::FlxG_obj::fixedTimestep)){
				HX_STACK_LINE(452)
				hx::AddEq(this->_accumulator,this->elapsedMS);
				HX_STACK_LINE(453)
				if (((this->_accumulator > this->maxAccumulation))){
					HX_STACK_LINE(454)
					this->_accumulator = this->maxAccumulation;
				}
				HX_STACK_LINE(458)
				while(((this->_accumulator > this->stepMS))){
					HX_STACK_LINE(461)
					this->step();
					HX_STACK_LINE(462)
					this->_accumulator = (this->_accumulator - this->stepMS);
				}
			}
			else{
				HX_STACK_LINE(466)
				this->step();
			}
			HX_STACK_LINE(474)
			this->draw();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onEnterFrame,(void))

Void FlxGame_obj::onResize( ::flash::events::Event E){
{
		HX_STACK_PUSH("FlxGame::onResize","flixel/FlxGame.hx",384);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(385)
		int width = ::flash::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(386)
		int height = ::flash::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(389)
		::flixel::FlxG_obj::bitmap->onContext();
		HX_STACK_LINE(392)
		::flixel::FlxG_obj::_scaleMode->onMeasure(width,height);
		HX_STACK_LINE(394)
		this->state->onResize(width,height);
		HX_STACK_LINE(395)
		{
			HX_STACK_LINE(395)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::plugins->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(395)
			while(((_g < _g1->length))){
				HX_STACK_LINE(395)
				::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(395)
				++(_g);
				HX_STACK_LINE(395)
				if ((plugin->exists)){
					HX_STACK_LINE(395)
					plugin->onResize(width,height);
				}
			}
		}
		HX_STACK_LINE(402)
		if (((this->_focusLostScreen != null()))){
			HX_STACK_LINE(403)
			this->_focusLostScreen->draw();
		}
		HX_STACK_LINE(409)
		if (((this->soundTray != null()))){
			HX_STACK_LINE(410)
			this->soundTray->screenCenter();
		}
		HX_STACK_LINE(415)
		this->inputContainer->set_scaleX((Float((int)1) / Float(::flixel::FlxG_obj::game->get_scaleX())));
		HX_STACK_LINE(416)
		this->inputContainer->set_scaleY((Float((int)1) / Float(::flixel::FlxG_obj::game->get_scaleY())));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onResize,(void))

Void FlxGame_obj::onFocusLost( ::flash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onFocusLost","flixel/FlxGame.hx",349);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(357)
		this->_lostFocus = true;
		HX_STACK_LINE(359)
		if ((!(::flixel::FlxG_obj::autoPause))){
			HX_STACK_LINE(361)
			this->state->onFocusLost();
			HX_STACK_LINE(362)
			return null();
		}
		HX_STACK_LINE(366)
		if (((this->_focusLostScreen != null()))){
			HX_STACK_LINE(367)
			this->_focusLostScreen->set_visible(true);
		}
		HX_STACK_LINE(376)
		this->get_stage()->set_frameRate(this->focusLostFramerate);
		HX_STACK_LINE(378)
		::flixel::FlxG_obj::sound->onFocusLost();
		HX_STACK_LINE(380)
		{
			HX_STACK_LINE(380)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(380)
			while(((_g < _g1->length))){
				HX_STACK_LINE(380)
				::flixel::interfaces::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::interfaces::IFlxInput >();		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(380)
				++(_g);
				HX_STACK_LINE(380)
				input->onFocusLost();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocusLost,(void))

Void FlxGame_obj::onFocus( ::flash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onFocus","flixel/FlxGame.hx",302);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(312)
		if ((!(this->_onFocusFiredOnce))){
			HX_STACK_LINE(314)
			this->_onFocusFiredOnce = true;
			HX_STACK_LINE(315)
			return null();
		}
		HX_STACK_LINE(319)
		this->_lostFocus = false;
		HX_STACK_LINE(321)
		if ((!(::flixel::FlxG_obj::autoPause))){
			HX_STACK_LINE(323)
			this->state->onFocus();
			HX_STACK_LINE(324)
			return null();
		}
		HX_STACK_LINE(328)
		if (((this->_focusLostScreen != null()))){
			HX_STACK_LINE(329)
			this->_focusLostScreen->set_visible(false);
		}
		HX_STACK_LINE(338)
		this->get_stage()->set_frameRate(this->drawFramerate);
		HX_STACK_LINE(340)
		::flixel::FlxG_obj::sound->onFocus();
		HX_STACK_LINE(342)
		{
			HX_STACK_LINE(342)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(342)
			while(((_g < _g1->length))){
				HX_STACK_LINE(342)
				::flixel::interfaces::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::interfaces::IFlxInput >();		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(342)
				++(_g);
				HX_STACK_LINE(342)
				input->onFocus();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocus,(void))

Void FlxGame_obj::create( ::flash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::create","flixel/FlxGame.hx",232);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(233)
		if (((this->get_stage() == null()))){
			HX_STACK_LINE(234)
			return null();
		}
		HX_STACK_LINE(237)
		this->removeEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->create_dyn(),null());
		HX_STACK_LINE(239)
		this->_total = ::flash::Lib_obj::getTimer();
		HX_STACK_LINE(246)
		this->get_stage()->set_scaleMode(::flash::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(247)
		this->get_stage()->set_align(::flash::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(248)
		this->get_stage()->set_frameRate(this->drawFramerate);
		HX_STACK_LINE(250)
		this->addChild(this->inputContainer);
		HX_STACK_LINE(277)
		this->get_stage()->addEventListener(::flash::events::Event_obj::DEACTIVATE,this->onFocusLost_dyn(),null(),null(),null());
		HX_STACK_LINE(278)
		this->get_stage()->addEventListener(::flash::events::Event_obj::ACTIVATE,this->onFocus_dyn(),null(),null(),null());
		HX_STACK_LINE(282)
		{
			HX_STACK_LINE(282)
			if ((this->_skipSplash)){
				HX_STACK_LINE(282)
				this->requestedState = ::Type_obj::createInstance(this->_iState,Dynamic( Array_obj<Dynamic>::__new()));
				HX_STACK_LINE(282)
				this->_gameJustStarted = true;
			}
			else{
				HX_STACK_LINE(282)
				this->requestedState = ::flixel::system::FlxSplash_obj::__new(this->_iState);
				HX_STACK_LINE(282)
				this->_skipSplash = true;
			}
			HX_STACK_LINE(282)
			::flixel::FlxG_obj::reset();
		}
		HX_STACK_LINE(283)
		this->switchState();
		HX_STACK_LINE(285)
		if (((::Std_obj::_int((Float((int)1000) / Float(::flixel::FlxG_obj::game->stepMS))) < ::flixel::FlxG_obj::get_drawFramerate()))){
			HX_STACK_LINE(286)
			Dynamic();
		}
		HX_STACK_LINE(291)
		this->get_stage()->addEventListener(::flash::events::Event_obj::ENTER_FRAME,this->onEnterFrame_dyn(),null(),null(),null());
		HX_STACK_LINE(295)
		this->get_stage()->addEventListener(::flash::events::Event_obj::RESIZE,this->onResize_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,create,(void))


FlxGame_obj::FlxGame_obj()
{
}

void FlxGame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGame);
	HX_MARK_MEMBER_NAME(_skipSplash,"_skipSplash");
	HX_MARK_MEMBER_NAME(_customFocusLostScreen,"_customFocusLostScreen");
	HX_MARK_MEMBER_NAME(_customSoundTray,"_customSoundTray");
	HX_MARK_MEMBER_NAME(_focusLostScreen,"_focusLostScreen");
	HX_MARK_MEMBER_NAME(_onFocusFiredOnce,"_onFocusFiredOnce");
	HX_MARK_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_MARK_MEMBER_NAME(_accumulator,"_accumulator");
	HX_MARK_MEMBER_NAME(_total,"_total");
	HX_MARK_MEMBER_NAME(_iState,"_iState");
	HX_MARK_MEMBER_NAME(_gameJustStarted,"_gameJustStarted");
	HX_MARK_MEMBER_NAME(soundTray,"soundTray");
	HX_MARK_MEMBER_NAME(resetState,"resetState");
	HX_MARK_MEMBER_NAME(requestedState,"requestedState");
	HX_MARK_MEMBER_NAME(maxAccumulation,"maxAccumulation");
	HX_MARK_MEMBER_NAME(focusLostFramerate,"focusLostFramerate");
	HX_MARK_MEMBER_NAME(drawFramerate,"drawFramerate");
	HX_MARK_MEMBER_NAME(stepSeconds,"stepSeconds");
	HX_MARK_MEMBER_NAME(stepMS,"stepMS");
	HX_MARK_MEMBER_NAME(elapsedMS,"elapsedMS");
	HX_MARK_MEMBER_NAME(inputContainer,"inputContainer");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(ticks,"ticks");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxGame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_skipSplash,"_skipSplash");
	HX_VISIT_MEMBER_NAME(_customFocusLostScreen,"_customFocusLostScreen");
	HX_VISIT_MEMBER_NAME(_customSoundTray,"_customSoundTray");
	HX_VISIT_MEMBER_NAME(_focusLostScreen,"_focusLostScreen");
	HX_VISIT_MEMBER_NAME(_onFocusFiredOnce,"_onFocusFiredOnce");
	HX_VISIT_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_VISIT_MEMBER_NAME(_accumulator,"_accumulator");
	HX_VISIT_MEMBER_NAME(_total,"_total");
	HX_VISIT_MEMBER_NAME(_iState,"_iState");
	HX_VISIT_MEMBER_NAME(_gameJustStarted,"_gameJustStarted");
	HX_VISIT_MEMBER_NAME(soundTray,"soundTray");
	HX_VISIT_MEMBER_NAME(resetState,"resetState");
	HX_VISIT_MEMBER_NAME(requestedState,"requestedState");
	HX_VISIT_MEMBER_NAME(maxAccumulation,"maxAccumulation");
	HX_VISIT_MEMBER_NAME(focusLostFramerate,"focusLostFramerate");
	HX_VISIT_MEMBER_NAME(drawFramerate,"drawFramerate");
	HX_VISIT_MEMBER_NAME(stepSeconds,"stepSeconds");
	HX_VISIT_MEMBER_NAME(stepMS,"stepMS");
	HX_VISIT_MEMBER_NAME(elapsedMS,"elapsedMS");
	HX_VISIT_MEMBER_NAME(inputContainer,"inputContainer");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(ticks,"ticks");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxGame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"ticks") ) { return ticks; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"_total") ) { return _total; }
		if (HX_FIELD_EQ(inName,"stepMS") ) { return stepMS; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"_iState") ) { return _iState; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameStart") ) { return gameStart_dyn(); }
		if (HX_FIELD_EQ(inName,"resetGame") ) { return resetGame_dyn(); }
		if (HX_FIELD_EQ(inName,"soundTray") ) { return soundTray; }
		if (HX_FIELD_EQ(inName,"elapsedMS") ) { return elapsedMS; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { return _lostFocus; }
		if (HX_FIELD_EQ(inName,"resetState") ) { return resetState; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateInput") ) { return updateInput_dyn(); }
		if (HX_FIELD_EQ(inName,"switchState") ) { return switchState_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"_skipSplash") ) { return _skipSplash; }
		if (HX_FIELD_EQ(inName,"stepSeconds") ) { return stepSeconds; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"_accumulator") ) { return _accumulator; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawFramerate") ) { return drawFramerate; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestedState") ) { return requestedState; }
		if (HX_FIELD_EQ(inName,"inputContainer") ) { return inputContainer; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"maxAccumulation") ) { return maxAccumulation; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_customSoundTray") ) { return _customSoundTray; }
		if (HX_FIELD_EQ(inName,"_focusLostScreen") ) { return _focusLostScreen; }
		if (HX_FIELD_EQ(inName,"_gameJustStarted") ) { return _gameJustStarted; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onFocusFiredOnce") ) { return _onFocusFiredOnce; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"focusLostFramerate") ) { return focusLostFramerate; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_customFocusLostScreen") ) { return _customFocusLostScreen; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::flixel::FlxState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ticks") ) { ticks=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_total") ) { _total=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepMS") ) { stepMS=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_iState") ) { _iState=inValue.Cast< ::Class >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"soundTray") ) { soundTray=inValue.Cast< ::flixel::system::ui::FlxSoundTray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"elapsedMS") ) { elapsedMS=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { _lostFocus=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resetState") ) { resetState=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_skipSplash") ) { _skipSplash=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepSeconds") ) { stepSeconds=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_accumulator") ) { _accumulator=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawFramerate") ) { drawFramerate=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestedState") ) { requestedState=inValue.Cast< ::flixel::FlxState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputContainer") ) { inputContainer=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"maxAccumulation") ) { maxAccumulation=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_customSoundTray") ) { _customSoundTray=inValue.Cast< ::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_focusLostScreen") ) { _focusLostScreen=inValue.Cast< ::flixel::system::ui::FlxFocusLostScreen >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_gameJustStarted") ) { _gameJustStarted=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onFocusFiredOnce") ) { _onFocusFiredOnce=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"focusLostFramerate") ) { focusLostFramerate=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_customFocusLostScreen") ) { _customFocusLostScreen=inValue.Cast< ::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_skipSplash"));
	outFields->push(HX_CSTRING("_customFocusLostScreen"));
	outFields->push(HX_CSTRING("_customSoundTray"));
	outFields->push(HX_CSTRING("_focusLostScreen"));
	outFields->push(HX_CSTRING("_onFocusFiredOnce"));
	outFields->push(HX_CSTRING("_lostFocus"));
	outFields->push(HX_CSTRING("_accumulator"));
	outFields->push(HX_CSTRING("_total"));
	outFields->push(HX_CSTRING("_iState"));
	outFields->push(HX_CSTRING("_gameJustStarted"));
	outFields->push(HX_CSTRING("soundTray"));
	outFields->push(HX_CSTRING("resetState"));
	outFields->push(HX_CSTRING("requestedState"));
	outFields->push(HX_CSTRING("maxAccumulation"));
	outFields->push(HX_CSTRING("focusLostFramerate"));
	outFields->push(HX_CSTRING("drawFramerate"));
	outFields->push(HX_CSTRING("stepSeconds"));
	outFields->push(HX_CSTRING("stepMS"));
	outFields->push(HX_CSTRING("elapsedMS"));
	outFields->push(HX_CSTRING("inputContainer"));
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("ticks"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	HX_CSTRING("updateInput"),
	HX_CSTRING("update"),
	HX_CSTRING("step"),
	HX_CSTRING("gameStart"),
	HX_CSTRING("switchState"),
	HX_CSTRING("resetGame"),
	HX_CSTRING("onEnterFrame"),
	HX_CSTRING("onResize"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("create"),
	HX_CSTRING("_skipSplash"),
	HX_CSTRING("_customFocusLostScreen"),
	HX_CSTRING("_customSoundTray"),
	HX_CSTRING("_focusLostScreen"),
	HX_CSTRING("_onFocusFiredOnce"),
	HX_CSTRING("_lostFocus"),
	HX_CSTRING("_accumulator"),
	HX_CSTRING("_total"),
	HX_CSTRING("_iState"),
	HX_CSTRING("_gameJustStarted"),
	HX_CSTRING("soundTray"),
	HX_CSTRING("resetState"),
	HX_CSTRING("requestedState"),
	HX_CSTRING("maxAccumulation"),
	HX_CSTRING("focusLostFramerate"),
	HX_CSTRING("drawFramerate"),
	HX_CSTRING("stepSeconds"),
	HX_CSTRING("stepMS"),
	HX_CSTRING("elapsedMS"),
	HX_CSTRING("inputContainer"),
	HX_CSTRING("state"),
	HX_CSTRING("ticks"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGame_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGame_obj::__mClass,"__mClass");
};

Class FlxGame_obj::__mClass;

void FlxGame_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxGame"), hx::TCanCast< FlxGame_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxGame_obj::__boot()
{
}

} // end namespace flixel
