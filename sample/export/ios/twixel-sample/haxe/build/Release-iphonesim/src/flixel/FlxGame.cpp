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

Void FlxGame_obj::__construct(hx::Null< int >  __o_GameSizeX,hx::Null< int >  __o_GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_UpdateFramerate,hx::Null< int >  __o_DrawFramerate,hx::Null< bool >  __o_SkipSplash,hx::Null< bool >  __o_StartFullscreen)
{
HX_STACK_PUSH("FlxGame::new","flixel/FlxGame.hx",36);
int GameSizeX = __o_GameSizeX.Default(640);
int GameSizeY = __o_GameSizeY.Default(480);
Float Zoom = __o_Zoom.Default(1);
int UpdateFramerate = __o_UpdateFramerate.Default(60);
int DrawFramerate = __o_DrawFramerate.Default(60);
bool SkipSplash = __o_SkipSplash.Default(false);
bool StartFullscreen = __o_StartFullscreen.Default(false);
{
	HX_STACK_LINE(172)
	this->_resetGame = false;
	HX_STACK_LINE(157)
	this->_skipSplash = false;
	HX_STACK_LINE(152)
	this->_customFocusLostScreen = hx::ClassOf< ::flixel::system::ui::FlxFocusLostScreen >();
	HX_STACK_LINE(145)
	this->_customSoundTray = hx::ClassOf< ::flixel::system::ui::FlxSoundTray >();
	HX_STACK_LINE(124)
	this->_onFocusFiredOnce = false;
	HX_STACK_LINE(117)
	this->_lostFocus = false;
	HX_STACK_LINE(90)
	this->_total = (int)0;
	HX_STACK_LINE(77)
	this->_gameJustStarted = false;
	HX_STACK_LINE(71)
	this->ticks = (int)0;
	HX_STACK_LINE(41)
	this->focusLostFramerate = (int)10;
	HX_STACK_LINE(203)
	super::__construct();
	HX_STACK_LINE(210)
	this->_inputContainer = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(213)
	::flixel::FlxG_obj::init(hx::ObjectPtr<OBJ_>(this),GameSizeX,GameSizeY,Zoom);
	HX_STACK_LINE(215)
	::flixel::FlxG_obj::set_updateFramerate(UpdateFramerate);
	HX_STACK_LINE(216)
	::flixel::FlxG_obj::set_drawFramerate(DrawFramerate);
	HX_STACK_LINE(217)
	this->_accumulator = this->_stepMS;
	HX_STACK_LINE(218)
	this->_skipSplash = SkipSplash;
	HX_STACK_LINE(225)
	this->_initialState = (  (((InitialState == null()))) ? ::Class(hx::ClassOf< ::flixel::FlxState >()) : ::Class(InitialState) );
	HX_STACK_LINE(227)
	this->addEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->create_dyn(),null(),null(),null());
}
;
	return null();
}

FlxGame_obj::~FlxGame_obj() { }

Dynamic FlxGame_obj::__CreateEmpty() { return  new FlxGame_obj; }
hx::ObjectPtr< FlxGame_obj > FlxGame_obj::__new(hx::Null< int >  __o_GameSizeX,hx::Null< int >  __o_GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_UpdateFramerate,hx::Null< int >  __o_DrawFramerate,hx::Null< bool >  __o_SkipSplash,hx::Null< bool >  __o_StartFullscreen)
{  hx::ObjectPtr< FlxGame_obj > result = new FlxGame_obj();
	result->__construct(__o_GameSizeX,__o_GameSizeY,InitialState,__o_Zoom,__o_UpdateFramerate,__o_DrawFramerate,__o_SkipSplash,__o_StartFullscreen);
	return result;}

Dynamic FlxGame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGame_obj > result = new FlxGame_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

Void FlxGame_obj::draw( ){
{
		HX_STACK_PUSH("FlxGame::draw","flixel/FlxGame.hx",741);
		HX_STACK_THIS(this);
		HX_STACK_LINE(751)
		::flixel::system::layer::TileSheetExt_obj::_DRAWCALLS = (int)0;
		HX_STACK_LINE(754)
		{
			HX_STACK_LINE(754)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(754)
			while(((_g < _g1->length))){
				HX_STACK_LINE(754)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(754)
				++(_g);
				HX_STACK_LINE(754)
				if (((bool((bool((camera == null())) || bool(!(camera->exists)))) || bool(!(camera->visible))))){
					HX_STACK_LINE(754)
					continue;
				}
				HX_STACK_LINE(754)
				camera->clearDrawStack();
				HX_STACK_LINE(754)
				camera->canvas->get_graphics()->clear();
				HX_STACK_LINE(754)
				camera->fill((int(camera->bgColor) & int((int)16777215)),camera->useBgAlphaBlending,(Float(((int((int(camera->bgColor) >> int((int)24))) & int((int)255)))) / Float((int)255)),null());
			}
		}
		HX_STACK_LINE(756)
		{
			HX_STACK_LINE(756)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::plugins->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(756)
			while(((_g < _g1->length))){
				HX_STACK_LINE(756)
				::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(756)
				++(_g);
				HX_STACK_LINE(756)
				if (((bool(plugin->exists) && bool(plugin->visible)))){
					HX_STACK_LINE(756)
					plugin->draw();
				}
			}
		}
		HX_STACK_LINE(765)
		this->_state->draw();
		HX_STACK_LINE(775)
		{
			HX_STACK_LINE(775)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(775)
			while(((_g < _g1->length))){
				HX_STACK_LINE(775)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(775)
				++(_g);
				HX_STACK_LINE(775)
				if (((bool((bool((camera != null())) && bool(camera->exists))) && bool(camera->visible)))){
					HX_STACK_LINE(775)
					camera->render();
				}
			}
		}
		HX_STACK_LINE(782)
		{
			HX_STACK_LINE(782)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(782)
			while(((_g < _g1->length))){
				HX_STACK_LINE(782)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(782)
				++(_g);
				HX_STACK_LINE(782)
				if (((bool((bool((camera == null())) || bool(!(camera->exists)))) || bool(!(camera->visible))))){
					HX_STACK_LINE(782)
					continue;
				}
				HX_STACK_LINE(782)
				camera->drawFX();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,draw,(void))

Void FlxGame_obj::updateInput( ){
{
		HX_STACK_PUSH("FlxGame::updateInput","flixel/FlxGame.hx",679);
		HX_STACK_THIS(this);
		HX_STACK_LINE(722)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(722)
		while(((_g < _g1->length))){
			HX_STACK_LINE(722)
			::flixel::interfaces::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::interfaces::IFlxInput >();		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(722)
			++(_g);
			HX_STACK_LINE(722)
			input->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,updateInput,(void))

Void FlxGame_obj::update( ){
{
		HX_STACK_PUSH("FlxGame::update","flixel/FlxGame.hx",632);
		HX_STACK_THIS(this);
		HX_STACK_LINE(633)
		if (((this->_state != this->_requestedState))){
			HX_STACK_LINE(634)
			this->switchState();
		}
		HX_STACK_LINE(645)
		if ((::flixel::FlxG_obj::fixedTimestep)){
			HX_STACK_LINE(646)
			::flixel::FlxG_obj::elapsed = (::flixel::FlxG_obj::timeScale * this->_stepSeconds);
		}
		else{
			HX_STACK_LINE(650)
			::flixel::FlxG_obj::elapsed = (::flixel::FlxG_obj::timeScale * ((Float(this->_elapsedMS) / Float((int)1000))));
		}
		HX_STACK_LINE(654)
		this->updateInput();
		HX_STACK_LINE(657)
		::flixel::FlxG_obj::sound->update();
		HX_STACK_LINE(659)
		{
			HX_STACK_LINE(659)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::plugins->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(659)
			while(((_g < _g1->length))){
				HX_STACK_LINE(659)
				::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(659)
				++(_g);
				HX_STACK_LINE(659)
				if (((bool(plugin->exists) && bool(plugin->active)))){
					HX_STACK_LINE(659)
					plugin->update();
				}
			}
		}
		HX_STACK_LINE(661)
		this->_state->tryUpdate();
		HX_STACK_LINE(663)
		{
			HX_STACK_LINE(663)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(663)
			while(((_g < _g1->length))){
				HX_STACK_LINE(663)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(663)
				++(_g);
				HX_STACK_LINE(663)
				if (((bool((camera != null())) && bool(camera->exists)))){
					HX_STACK_LINE(663)
					if ((camera->active)){
						HX_STACK_LINE(663)
						camera->update();
					}
					HX_STACK_LINE(663)
					if (((camera->target == null()))){
						HX_STACK_LINE(663)
						camera->flashSprite->set_x((camera->x + camera->_flashOffset->x));
						HX_STACK_LINE(663)
						camera->flashSprite->set_y((camera->y + camera->_flashOffset->y));
					}
					HX_STACK_LINE(663)
					camera->flashSprite->set_visible(camera->visible);
				}
			}
		}
		HX_STACK_LINE(670)
		{
			HX_STACK_LINE(670)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::swipes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(670)
			while(((_g < _g1->length))){
				HX_STACK_LINE(670)
				::flixel::input::FlxSwipe swipe = _g1->__get(_g).StaticCast< ::flixel::input::FlxSwipe >();		HX_STACK_VAR(swipe,"swipe");
				HX_STACK_LINE(670)
				++(_g);
				HX_STACK_LINE(672)
				swipe = null();
			}
		}
		HX_STACK_LINE(674)
		::flixel::FlxG_obj::swipes = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,update,(void))

Void FlxGame_obj::step( ){
{
		HX_STACK_PUSH("FlxGame::step","flixel/FlxGame.hx",580);
		HX_STACK_THIS(this);
		HX_STACK_LINE(582)
		if ((this->_resetGame)){
			HX_STACK_LINE(584)
			{
				HX_STACK_LINE(584)
				if ((this->_skipSplash)){
					HX_STACK_LINE(584)
					this->_requestedState = ::Type_obj::createInstance(this->_initialState,Dynamic( Array_obj<Dynamic>::__new()));
					HX_STACK_LINE(584)
					this->_gameJustStarted = true;
				}
				else{
					HX_STACK_LINE(584)
					this->_requestedState = ::flixel::system::FlxSplash_obj::__new(this->_initialState);
					HX_STACK_LINE(584)
					this->_skipSplash = true;
				}
				HX_STACK_LINE(584)
				::flixel::FlxG_obj::reset();
			}
			HX_STACK_LINE(585)
			this->_resetGame = false;
		}
		HX_STACK_LINE(620)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,step,(void))

Void FlxGame_obj::gameStart( ){
{
		HX_STACK_PUSH("FlxGame::gameStart","flixel/FlxGame.hx",566);
		HX_STACK_THIS(this);
		HX_STACK_LINE(568)
		::flixel::FlxG_obj::mouse->onGameStart();
		HX_STACK_LINE(570)
		this->_gameJustStarted = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,gameStart,(void))

Void FlxGame_obj::switchState( ){
{
		HX_STACK_PUSH("FlxGame::switchState","flixel/FlxGame.hx",521);
		HX_STACK_THIS(this);
		HX_STACK_LINE(523)
		::flixel::text::pxText::PxBitmapFont_obj::clearStorage();
		HX_STACK_LINE(524)
		::flixel::FlxG_obj::bitmap->clearCache();
		HX_STACK_LINE(525)
		::flixel::FlxG_obj::cameras->reset(null());
		HX_STACK_LINE(526)
		::flixel::FlxG_obj::inputs->reset();
		HX_STACK_LINE(528)
		::flixel::FlxG_obj::sound->destroy(null());
		HX_STACK_LINE(530)
		{
			HX_STACK_LINE(530)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::plugins->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(530)
			while(((_g < _g1->length))){
				HX_STACK_LINE(530)
				::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(530)
				++(_g);
				HX_STACK_LINE(530)
				if ((plugin->exists)){
					HX_STACK_LINE(530)
					plugin->onStateSwitch();
				}
			}
		}
		HX_STACK_LINE(545)
		if (((this->_state != null()))){
			HX_STACK_LINE(546)
			this->_state->destroy();
		}
		HX_STACK_LINE(551)
		this->_state = this->_requestedState;
		HX_STACK_LINE(553)
		this->_state->create();
		HX_STACK_LINE(555)
		if ((this->_gameJustStarted)){
			HX_STACK_LINE(556)
			this->gameStart();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,switchState,(void))

Void FlxGame_obj::resetGame( ){
{
		HX_STACK_PUSH("FlxGame::resetGame","flixel/FlxGame.hx",488);
		HX_STACK_THIS(this);
		HX_STACK_LINE(493)
		if ((this->_skipSplash)){
			HX_STACK_LINE(495)
			this->_requestedState = ::Type_obj::createInstance(this->_initialState,Dynamic( Array_obj<Dynamic>::__new()));
			HX_STACK_LINE(496)
			this->_gameJustStarted = true;
		}
		else{
			HX_STACK_LINE(500)
			this->_requestedState = ::flixel::system::FlxSplash_obj::__new(this->_initialState);
			HX_STACK_LINE(501)
			this->_skipSplash = true;
		}
		HX_STACK_LINE(512)
		::flixel::FlxG_obj::reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,resetGame,(void))

Void FlxGame_obj::onEnterFrame( ::flash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onEnterFrame","flixel/FlxGame.hx",420);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(421)
		this->ticks = ::flash::Lib_obj::getTimer();
		HX_STACK_LINE(422)
		this->_elapsedMS = (this->ticks - this->_total);
		HX_STACK_LINE(423)
		this->_total = this->ticks;
		HX_STACK_LINE(426)
		if (((bool((this->soundTray != null())) && bool(this->soundTray->active)))){
			HX_STACK_LINE(427)
			this->soundTray->update(this->_elapsedMS);
		}
		HX_STACK_LINE(432)
		if (((bool(!(this->_lostFocus)) || bool(!(::flixel::FlxG_obj::autoPause))))){
			HX_STACK_LINE(434)
			if ((::flixel::FlxG_obj::vcr->paused)){
				HX_STACK_LINE(435)
				if ((::flixel::FlxG_obj::vcr->stepRequested)){
					HX_STACK_LINE(437)
					::flixel::FlxG_obj::vcr->stepRequested = false;
				}
				else{
					HX_STACK_LINE(440)
					if (((this->_state == this->_requestedState))){
						HX_STACK_LINE(441)
						return null();
					}
				}
			}
			HX_STACK_LINE(446)
			if ((::flixel::FlxG_obj::fixedTimestep)){
				HX_STACK_LINE(448)
				hx::AddEq(this->_accumulator,this->_elapsedMS);
				HX_STACK_LINE(449)
				if (((this->_accumulator > this->_maxAccumulation))){
					HX_STACK_LINE(450)
					this->_accumulator = this->_maxAccumulation;
				}
				HX_STACK_LINE(454)
				while(((this->_accumulator > this->_stepMS))){
					HX_STACK_LINE(457)
					this->step();
					HX_STACK_LINE(458)
					this->_accumulator = (this->_accumulator - this->_stepMS);
				}
			}
			else{
				HX_STACK_LINE(462)
				this->step();
			}
			HX_STACK_LINE(470)
			this->draw();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onEnterFrame,(void))

Void FlxGame_obj::onResize( ::flash::events::Event E){
{
		HX_STACK_PUSH("FlxGame::onResize","flixel/FlxGame.hx",381);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(382)
		int width = ::flash::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(383)
		int height = ::flash::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(386)
		::flixel::FlxG_obj::bitmap->onContext();
		HX_STACK_LINE(389)
		::flixel::FlxG_obj::_scaleMode->onMeasure(width,height);
		HX_STACK_LINE(391)
		this->_state->onResize(width,height);
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::plugins->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(392)
			while(((_g < _g1->length))){
				HX_STACK_LINE(392)
				::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(392)
				++(_g);
				HX_STACK_LINE(392)
				if ((plugin->exists)){
					HX_STACK_LINE(392)
					plugin->onResize(width,height);
				}
			}
		}
		HX_STACK_LINE(399)
		if (((this->_focusLostScreen != null()))){
			HX_STACK_LINE(400)
			this->_focusLostScreen->draw();
		}
		HX_STACK_LINE(406)
		if (((this->soundTray != null()))){
			HX_STACK_LINE(407)
			this->soundTray->screenCenter();
		}
		HX_STACK_LINE(412)
		this->_inputContainer->set_scaleX((Float((int)1) / Float(::flixel::FlxG_obj::game->get_scaleX())));
		HX_STACK_LINE(413)
		this->_inputContainer->set_scaleY((Float((int)1) / Float(::flixel::FlxG_obj::game->get_scaleY())));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onResize,(void))

Void FlxGame_obj::onFocusLost( ::flash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onFocusLost","flixel/FlxGame.hx",345);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(353)
		this->_lostFocus = true;
		HX_STACK_LINE(355)
		if ((!(::flixel::FlxG_obj::autoPause))){
			HX_STACK_LINE(357)
			this->_state->onFocusLost();
			HX_STACK_LINE(358)
			return null();
		}
		HX_STACK_LINE(362)
		if (((this->_focusLostScreen != null()))){
			HX_STACK_LINE(363)
			this->_focusLostScreen->set_visible(true);
		}
		HX_STACK_LINE(372)
		this->get_stage()->set_frameRate(this->focusLostFramerate);
		HX_STACK_LINE(374)
		::flixel::FlxG_obj::sound->onFocusLost();
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(376)
			while(((_g < _g1->length))){
				HX_STACK_LINE(376)
				::flixel::interfaces::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::interfaces::IFlxInput >();		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(376)
				++(_g);
				HX_STACK_LINE(376)
				input->onFocusLost();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocusLost,(void))

Void FlxGame_obj::onFocus( ::flash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::onFocus","flixel/FlxGame.hx",301);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(318)
		this->_lostFocus = false;
		HX_STACK_LINE(320)
		if ((!(::flixel::FlxG_obj::autoPause))){
			HX_STACK_LINE(322)
			this->_state->onFocus();
			HX_STACK_LINE(323)
			return null();
		}
		HX_STACK_LINE(327)
		if (((this->_focusLostScreen != null()))){
			HX_STACK_LINE(328)
			this->_focusLostScreen->set_visible(false);
		}
		HX_STACK_LINE(337)
		this->get_stage()->set_frameRate(::flixel::FlxG_obj::drawFramerate);
		HX_STACK_LINE(339)
		::flixel::FlxG_obj::sound->onFocus();
		HX_STACK_LINE(341)
		{
			HX_STACK_LINE(341)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(341)
			while(((_g < _g1->length))){
				HX_STACK_LINE(341)
				::flixel::interfaces::IFlxInput input = _g1->__get(_g).StaticCast< ::flixel::interfaces::IFlxInput >();		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(341)
				++(_g);
				HX_STACK_LINE(341)
				input->onFocus();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocus,(void))

Void FlxGame_obj::create( ::flash::events::Event FlashEvent){
{
		HX_STACK_PUSH("FlxGame::create","flixel/FlxGame.hx",234);
		HX_STACK_THIS(this);
		HX_STACK_ARG(FlashEvent,"FlashEvent");
		HX_STACK_LINE(235)
		if (((this->get_stage() == null()))){
			HX_STACK_LINE(236)
			return null();
		}
		HX_STACK_LINE(239)
		this->removeEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->create_dyn(),null());
		HX_STACK_LINE(241)
		this->_total = ::flash::Lib_obj::getTimer();
		HX_STACK_LINE(248)
		this->get_stage()->set_scaleMode(::flash::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(249)
		this->get_stage()->set_align(::flash::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(250)
		this->get_stage()->set_frameRate(::flixel::FlxG_obj::drawFramerate);
		HX_STACK_LINE(252)
		this->addChild(this->_inputContainer);
		HX_STACK_LINE(279)
		this->get_stage()->addEventListener(::flash::events::Event_obj::DEACTIVATE,this->onFocusLost_dyn(),null(),null(),null());
		HX_STACK_LINE(280)
		this->get_stage()->addEventListener(::flash::events::Event_obj::ACTIVATE,this->onFocus_dyn(),null(),null(),null());
		HX_STACK_LINE(284)
		{
			HX_STACK_LINE(284)
			if ((this->_skipSplash)){
				HX_STACK_LINE(284)
				this->_requestedState = ::Type_obj::createInstance(this->_initialState,Dynamic( Array_obj<Dynamic>::__new()));
				HX_STACK_LINE(284)
				this->_gameJustStarted = true;
			}
			else{
				HX_STACK_LINE(284)
				this->_requestedState = ::flixel::system::FlxSplash_obj::__new(this->_initialState);
				HX_STACK_LINE(284)
				this->_skipSplash = true;
			}
			HX_STACK_LINE(284)
			::flixel::FlxG_obj::reset();
		}
		HX_STACK_LINE(285)
		this->switchState();
		HX_STACK_LINE(287)
		if (((::Std_obj::_int((Float((int)1000) / Float(::flixel::FlxG_obj::game->_stepMS))) < ::flixel::FlxG_obj::drawFramerate))){
			HX_STACK_LINE(288)
			Dynamic();
		}
		HX_STACK_LINE(293)
		this->get_stage()->addEventListener(::flash::events::Event_obj::ENTER_FRAME,this->onEnterFrame_dyn(),null(),null(),null());
		HX_STACK_LINE(297)
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
	HX_MARK_MEMBER_NAME(_resetGame,"_resetGame");
	HX_MARK_MEMBER_NAME(_requestedState,"_requestedState");
	HX_MARK_MEMBER_NAME(_skipSplash,"_skipSplash");
	HX_MARK_MEMBER_NAME(_customFocusLostScreen,"_customFocusLostScreen");
	HX_MARK_MEMBER_NAME(_customSoundTray,"_customSoundTray");
	HX_MARK_MEMBER_NAME(_inputContainer,"_inputContainer");
	HX_MARK_MEMBER_NAME(_focusLostScreen,"_focusLostScreen");
	HX_MARK_MEMBER_NAME(_onFocusFiredOnce,"_onFocusFiredOnce");
	HX_MARK_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_MARK_MEMBER_NAME(_maxAccumulation,"_maxAccumulation");
	HX_MARK_MEMBER_NAME(_stepSeconds,"_stepSeconds");
	HX_MARK_MEMBER_NAME(_stepMS,"_stepMS");
	HX_MARK_MEMBER_NAME(_elapsedMS,"_elapsedMS");
	HX_MARK_MEMBER_NAME(_accumulator,"_accumulator");
	HX_MARK_MEMBER_NAME(_total,"_total");
	HX_MARK_MEMBER_NAME(_state,"_state");
	HX_MARK_MEMBER_NAME(_initialState,"_initialState");
	HX_MARK_MEMBER_NAME(_gameJustStarted,"_gameJustStarted");
	HX_MARK_MEMBER_NAME(ticks,"ticks");
	HX_MARK_MEMBER_NAME(soundTray,"soundTray");
	HX_MARK_MEMBER_NAME(focusLostFramerate,"focusLostFramerate");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxGame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_resetGame,"_resetGame");
	HX_VISIT_MEMBER_NAME(_requestedState,"_requestedState");
	HX_VISIT_MEMBER_NAME(_skipSplash,"_skipSplash");
	HX_VISIT_MEMBER_NAME(_customFocusLostScreen,"_customFocusLostScreen");
	HX_VISIT_MEMBER_NAME(_customSoundTray,"_customSoundTray");
	HX_VISIT_MEMBER_NAME(_inputContainer,"_inputContainer");
	HX_VISIT_MEMBER_NAME(_focusLostScreen,"_focusLostScreen");
	HX_VISIT_MEMBER_NAME(_onFocusFiredOnce,"_onFocusFiredOnce");
	HX_VISIT_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_VISIT_MEMBER_NAME(_maxAccumulation,"_maxAccumulation");
	HX_VISIT_MEMBER_NAME(_stepSeconds,"_stepSeconds");
	HX_VISIT_MEMBER_NAME(_stepMS,"_stepMS");
	HX_VISIT_MEMBER_NAME(_elapsedMS,"_elapsedMS");
	HX_VISIT_MEMBER_NAME(_accumulator,"_accumulator");
	HX_VISIT_MEMBER_NAME(_total,"_total");
	HX_VISIT_MEMBER_NAME(_state,"_state");
	HX_VISIT_MEMBER_NAME(_initialState,"_initialState");
	HX_VISIT_MEMBER_NAME(_gameJustStarted,"_gameJustStarted");
	HX_VISIT_MEMBER_NAME(ticks,"ticks");
	HX_VISIT_MEMBER_NAME(soundTray,"soundTray");
	HX_VISIT_MEMBER_NAME(focusLostFramerate,"focusLostFramerate");
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
		if (HX_FIELD_EQ(inName,"ticks") ) { return ticks; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"_total") ) { return _total; }
		if (HX_FIELD_EQ(inName,"_state") ) { return _state; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"_stepMS") ) { return _stepMS; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameStart") ) { return gameStart_dyn(); }
		if (HX_FIELD_EQ(inName,"resetGame") ) { return resetGame_dyn(); }
		if (HX_FIELD_EQ(inName,"soundTray") ) { return soundTray; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_resetGame") ) { return _resetGame; }
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { return _lostFocus; }
		if (HX_FIELD_EQ(inName,"_elapsedMS") ) { return _elapsedMS; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateInput") ) { return updateInput_dyn(); }
		if (HX_FIELD_EQ(inName,"switchState") ) { return switchState_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"_skipSplash") ) { return _skipSplash; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"_stepSeconds") ) { return _stepSeconds; }
		if (HX_FIELD_EQ(inName,"_accumulator") ) { return _accumulator; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_initialState") ) { return _initialState; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_requestedState") ) { return _requestedState; }
		if (HX_FIELD_EQ(inName,"_inputContainer") ) { return _inputContainer; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_customSoundTray") ) { return _customSoundTray; }
		if (HX_FIELD_EQ(inName,"_focusLostScreen") ) { return _focusLostScreen; }
		if (HX_FIELD_EQ(inName,"_maxAccumulation") ) { return _maxAccumulation; }
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
		if (HX_FIELD_EQ(inName,"ticks") ) { ticks=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_total") ) { _total=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_state") ) { _state=inValue.Cast< ::flixel::FlxState >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_stepMS") ) { _stepMS=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"soundTray") ) { soundTray=inValue.Cast< ::flixel::system::ui::FlxSoundTray >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_resetGame") ) { _resetGame=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { _lostFocus=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_elapsedMS") ) { _elapsedMS=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_skipSplash") ) { _skipSplash=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_stepSeconds") ) { _stepSeconds=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_accumulator") ) { _accumulator=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_initialState") ) { _initialState=inValue.Cast< ::Class >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_requestedState") ) { _requestedState=inValue.Cast< ::flixel::FlxState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inputContainer") ) { _inputContainer=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_customSoundTray") ) { _customSoundTray=inValue.Cast< ::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_focusLostScreen") ) { _focusLostScreen=inValue.Cast< ::flixel::system::ui::FlxFocusLostScreen >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxAccumulation") ) { _maxAccumulation=inValue.Cast< int >(); return inValue; }
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
	outFields->push(HX_CSTRING("_resetGame"));
	outFields->push(HX_CSTRING("_requestedState"));
	outFields->push(HX_CSTRING("_skipSplash"));
	outFields->push(HX_CSTRING("_customFocusLostScreen"));
	outFields->push(HX_CSTRING("_customSoundTray"));
	outFields->push(HX_CSTRING("_inputContainer"));
	outFields->push(HX_CSTRING("_focusLostScreen"));
	outFields->push(HX_CSTRING("_onFocusFiredOnce"));
	outFields->push(HX_CSTRING("_lostFocus"));
	outFields->push(HX_CSTRING("_maxAccumulation"));
	outFields->push(HX_CSTRING("_stepSeconds"));
	outFields->push(HX_CSTRING("_stepMS"));
	outFields->push(HX_CSTRING("_elapsedMS"));
	outFields->push(HX_CSTRING("_accumulator"));
	outFields->push(HX_CSTRING("_total"));
	outFields->push(HX_CSTRING("_state"));
	outFields->push(HX_CSTRING("_initialState"));
	outFields->push(HX_CSTRING("_gameJustStarted"));
	outFields->push(HX_CSTRING("ticks"));
	outFields->push(HX_CSTRING("soundTray"));
	outFields->push(HX_CSTRING("focusLostFramerate"));
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
	HX_CSTRING("_resetGame"),
	HX_CSTRING("_requestedState"),
	HX_CSTRING("_skipSplash"),
	HX_CSTRING("_customFocusLostScreen"),
	HX_CSTRING("_customSoundTray"),
	HX_CSTRING("_inputContainer"),
	HX_CSTRING("_focusLostScreen"),
	HX_CSTRING("_onFocusFiredOnce"),
	HX_CSTRING("_lostFocus"),
	HX_CSTRING("_maxAccumulation"),
	HX_CSTRING("_stepSeconds"),
	HX_CSTRING("_stepMS"),
	HX_CSTRING("_elapsedMS"),
	HX_CSTRING("_accumulator"),
	HX_CSTRING("_total"),
	HX_CSTRING("_state"),
	HX_CSTRING("_initialState"),
	HX_CSTRING("_gameJustStarted"),
	HX_CSTRING("ticks"),
	HX_CSTRING("soundTray"),
	HX_CSTRING("focusLostFramerate"),
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
