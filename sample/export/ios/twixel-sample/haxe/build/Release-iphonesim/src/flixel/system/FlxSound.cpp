#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flash_media_ID3Info
#include <flash/media/ID3Info.h>
#endif
#ifndef INCLUDED_flash_media_Sound
#include <flash/media/Sound.h>
#endif
#ifndef INCLUDED_flash_media_SoundChannel
#include <flash/media/SoundChannel.h>
#endif
#ifndef INCLUDED_flash_media_SoundLoaderContext
#include <flash/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_flash_media_SoundTransform
#include <flash/media/SoundTransform.h>
#endif
#ifndef INCLUDED_flash_net_URLRequest
#include <flash/net/URLRequest.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace system{

Void FlxSound_obj::__construct()
{
HX_STACK_PUSH("FlxSound::new","flixel/system/FlxSound.hx",20);
{
	HX_STACK_LINE(127)
	this->_alreadyPaused = false;
	HX_STACK_LINE(107)
	this->_volumeAdjust = 1.0;
	HX_STACK_LINE(134)
	super::__construct();
	HX_STACK_LINE(135)
	this->reset();
}
;
	return null();
}

FlxSound_obj::~FlxSound_obj() { }

Dynamic FlxSound_obj::__CreateEmpty() { return  new FlxSound_obj; }
hx::ObjectPtr< FlxSound_obj > FlxSound_obj::__new()
{  hx::ObjectPtr< FlxSound_obj > result = new FlxSound_obj();
	result->__construct();
	return result;}

Dynamic FlxSound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSound_obj > result = new FlxSound_obj();
	result->__construct();
	return result;}

Void FlxSound_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_PUSH("FlxSound::setPosition","flixel/system/FlxSound.hx",597);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
{
		HX_STACK_LINE(598)
		this->x = X;
		HX_STACK_LINE(599)
		this->y = Y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSound_obj,setPosition,(void))

Void FlxSound_obj::onFocusLost( ){
{
		HX_STACK_PUSH("FlxSound::onFocusLost","flixel/system/FlxSound.hx",584);
		HX_STACK_THIS(this);
		HX_STACK_LINE(585)
		this->_alreadyPaused = this->_paused;
		HX_STACK_LINE(586)
		this->pause();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,onFocusLost,(void))

Void FlxSound_obj::onFocus( ){
{
		HX_STACK_PUSH("FlxSound::onFocus","flixel/system/FlxSound.hx",575);
		HX_STACK_THIS(this);
		HX_STACK_LINE(575)
		if ((!(this->_alreadyPaused))){
			HX_STACK_LINE(577)
			this->resume();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,onFocus,(void))

Void FlxSound_obj::gotID3( ::flash::events::Event event){
{
		HX_STACK_PUSH("FlxSound::gotID3","flixel/system/FlxSound.hx",566);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(568)
		this->name = this->_sound->get_id3()->songName;
		HX_STACK_LINE(569)
		this->artist = this->_sound->get_id3()->artist;
		HX_STACK_LINE(570)
		this->_sound->removeEventListener(::flash::events::Event_obj::ID3,this->gotID3_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,gotID3,(void))

Void FlxSound_obj::cleanup( bool destroySound,hx::Null< bool >  __o_resetPosition,hx::Null< bool >  __o_resetFading){
bool resetPosition = __o_resetPosition.Default(true);
bool resetFading = __o_resetFading.Default(true);
	HX_STACK_PUSH("FlxSound::cleanup","flixel/system/FlxSound.hx",538);
	HX_STACK_THIS(this);
	HX_STACK_ARG(destroySound,"destroySound");
	HX_STACK_ARG(resetPosition,"resetPosition");
	HX_STACK_ARG(resetFading,"resetFading");
{
		HX_STACK_LINE(539)
		if ((destroySound)){
			HX_STACK_LINE(541)
			this->reset();
			HX_STACK_LINE(542)
			return null();
		}
		HX_STACK_LINE(545)
		if (((this->_channel != null()))){
			HX_STACK_LINE(547)
			this->_channel->removeEventListener(::flash::events::Event_obj::SOUND_COMPLETE,this->stopped_dyn(),null());
			HX_STACK_LINE(548)
			this->_channel->stop();
			HX_STACK_LINE(549)
			this->_channel = null();
		}
		HX_STACK_LINE(552)
		this->set_active(false);
		HX_STACK_LINE(554)
		if ((resetPosition)){
			HX_STACK_LINE(556)
			this->_position = (int)0;
			HX_STACK_LINE(557)
			this->_paused = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSound_obj,cleanup,(void))

Void FlxSound_obj::stopped( ::flash::events::Event event){
{
		HX_STACK_PUSH("FlxSound::stopped","flixel/system/FlxSound.hx",513);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(514)
		if (((this->onComplete_dyn() != null()))){
			HX_STACK_LINE(515)
			this->onComplete();
		}
		HX_STACK_LINE(519)
		if ((this->_looped)){
			HX_STACK_LINE(521)
			this->cleanup(false,null(),null());
			HX_STACK_LINE(522)
			this->play(null());
		}
		else{
			HX_STACK_LINE(525)
			this->cleanup(this->autoDestroy,null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,stopped,(void))

Void FlxSound_obj::startSound( Float Position){
{
		HX_STACK_PUSH("FlxSound::startSound","flixel/system/FlxSound.hx",491);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Position,"Position");
		HX_STACK_LINE(492)
		int numLoops = (  (((bool(this->_looped) && bool((Position == (int)0))))) ? int((int)9999) : int((int)0) );		HX_STACK_VAR(numLoops,"numLoops");
		HX_STACK_LINE(493)
		this->_position = Position;
		HX_STACK_LINE(494)
		this->_paused = false;
		HX_STACK_LINE(495)
		this->_channel = this->_sound->play(this->_position,numLoops,this->_transform);
		HX_STACK_LINE(496)
		if (((this->_channel != null()))){
			HX_STACK_LINE(498)
			this->_channel->addEventListener(::flash::events::Event_obj::SOUND_COMPLETE,this->stopped_dyn(),null(),null(),null());
			HX_STACK_LINE(499)
			this->set_active(true);
		}
		else{
			HX_STACK_LINE(503)
			this->set_exists(false);
			HX_STACK_LINE(504)
			this->set_active(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,startSound,(void))

Void FlxSound_obj::updateTransform( ){
{
		HX_STACK_PUSH("FlxSound::updateTransform","flixel/system/FlxSound.hx",479);
		HX_STACK_THIS(this);
		HX_STACK_LINE(480)
		this->_transform->volume = (((((  ((::flixel::FlxG_obj::sound->muted)) ? int((int)0) : int((int)1) )) * ::flixel::FlxG_obj::sound->volume) * this->_volume) * this->_volumeAdjust);
		HX_STACK_LINE(481)
		if (((this->_channel != null()))){
			HX_STACK_LINE(482)
			this->_channel->set_soundTransform(this->_transform);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,updateTransform,(void))

Float FlxSound_obj::getActualVolume( ){
	HX_STACK_PUSH("FlxSound::getActualVolume","flixel/system/FlxSound.hx",471);
	HX_STACK_THIS(this);
	HX_STACK_LINE(471)
	return (this->_volume * this->_volumeAdjust);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,getActualVolume,return )

Float FlxSound_obj::set_volume( Float Volume){
	HX_STACK_PUSH("FlxSound::set_volume","flixel/system/FlxSound.hx",452);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Volume,"Volume");
	HX_STACK_LINE(453)
	this->_volume = Volume;
	HX_STACK_LINE(454)
	if (((this->_volume < (int)0))){
		HX_STACK_LINE(455)
		this->_volume = (int)0;
	}
	else{
		HX_STACK_LINE(458)
		if (((this->_volume > (int)1))){
			HX_STACK_LINE(459)
			this->_volume = (int)1;
		}
	}
	HX_STACK_LINE(462)
	this->updateTransform();
	HX_STACK_LINE(463)
	return Volume;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,set_volume,return )

Float FlxSound_obj::get_volume( ){
	HX_STACK_PUSH("FlxSound::get_volume","flixel/system/FlxSound.hx",445);
	HX_STACK_THIS(this);
	HX_STACK_LINE(445)
	return this->_volume;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_volume,return )

bool FlxSound_obj::get_playing( ){
	HX_STACK_PUSH("FlxSound::get_playing","flixel/system/FlxSound.hx",435);
	HX_STACK_THIS(this);
	HX_STACK_LINE(435)
	return (this->_channel != null());
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_playing,return )

Void FlxSound_obj::fadeIn( Float Duration,hx::Null< Float >  __o_From,hx::Null< Float >  __o_To){
Float From = __o_From.Default(0);
Float To = __o_To.Default(1);
	HX_STACK_PUSH("FlxSound::fadeIn","flixel/system/FlxSound.hx",424);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(From,"From");
	HX_STACK_ARG(To,"To");
{
		HX_STACK_LINE(425)
		this->set_volume(From);
		HX_STACK_LINE(426)
		::flixel::tweens::FlxTween_obj::singleVar(hx::ObjectPtr<OBJ_>(this),HX_CSTRING("volume"),To,Duration,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxSound_obj,fadeIn,(void))

Void FlxSound_obj::fadeOut( Float Duration,Dynamic __o_To){
Dynamic To = __o_To.Default(0);
	HX_STACK_PUSH("FlxSound::fadeOut","flixel/system/FlxSound.hx",412);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Duration,"Duration");
	HX_STACK_ARG(To,"To");
{
		HX_STACK_LINE(412)
		::flixel::tweens::FlxTween_obj::singleVar(hx::ObjectPtr<OBJ_>(this),HX_CSTRING("volume"),To,Duration,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxSound_obj,fadeOut,(void))

Void FlxSound_obj::stop( ){
{
		HX_STACK_PUSH("FlxSound::stop","flixel/system/FlxSound.hx",401);
		HX_STACK_THIS(this);
		HX_STACK_LINE(401)
		this->cleanup(this->autoDestroy,true,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,stop,(void))

Void FlxSound_obj::pause( ){
{
		HX_STACK_PUSH("FlxSound::pause","flixel/system/FlxSound.hx",387);
		HX_STACK_THIS(this);
		HX_STACK_LINE(388)
		if ((!(this->get_playing()))){
			HX_STACK_LINE(389)
			return null();
		}
		HX_STACK_LINE(392)
		this->_position = this->_channel->get_position();
		HX_STACK_LINE(393)
		this->_paused = true;
		HX_STACK_LINE(394)
		this->cleanup(false,false,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,pause,(void))

Void FlxSound_obj::resume( ){
{
		HX_STACK_PUSH("FlxSound::resume","flixel/system/FlxSound.hx",376);
		HX_STACK_THIS(this);
		HX_STACK_LINE(376)
		if ((this->_paused)){
			HX_STACK_LINE(378)
			this->startSound(this->_position);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,resume,(void))

Void FlxSound_obj::play( hx::Null< bool >  __o_ForceRestart){
bool ForceRestart = __o_ForceRestart.Default(false);
	HX_STACK_PUSH("FlxSound::play","flixel/system/FlxSound.hx",347);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ForceRestart,"ForceRestart");
{
		HX_STACK_LINE(348)
		if ((!(this->exists))){
			HX_STACK_LINE(349)
			return null();
		}
		HX_STACK_LINE(352)
		if ((ForceRestart)){
			HX_STACK_LINE(353)
			this->cleanup(false,true,true);
		}
		else{
			HX_STACK_LINE(356)
			if ((this->get_playing())){
				HX_STACK_LINE(357)
				return null();
			}
		}
		HX_STACK_LINE(362)
		if ((this->_paused)){
			HX_STACK_LINE(363)
			this->resume();
		}
		else{
			HX_STACK_LINE(367)
			this->startSound((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,play,(void))

::flixel::system::FlxSound FlxSound_obj::proximity( Float X,Float Y,::flixel::FlxObject TargetObject,Float Radius,hx::Null< bool >  __o_Pan){
bool Pan = __o_Pan.Default(true);
	HX_STACK_PUSH("FlxSound::proximity","flixel/system/FlxSound.hx",333);
	HX_STACK_THIS(this);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(TargetObject,"TargetObject");
	HX_STACK_ARG(Radius,"Radius");
	HX_STACK_ARG(Pan,"Pan");
{
		HX_STACK_LINE(334)
		this->x = X;
		HX_STACK_LINE(335)
		this->y = Y;
		HX_STACK_LINE(336)
		this->_target = TargetObject;
		HX_STACK_LINE(337)
		this->_radius = Radius;
		HX_STACK_LINE(338)
		this->_proximityPan = Pan;
		HX_STACK_LINE(339)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxSound_obj,proximity,return )

::flixel::system::FlxSound FlxSound_obj::loadStream( ::String SoundURL,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(false);
	HX_STACK_PUSH("FlxSound::loadStream","flixel/system/FlxSound.hx",306);
	HX_STACK_THIS(this);
	HX_STACK_ARG(SoundURL,"SoundURL");
	HX_STACK_ARG(Looped,"Looped");
	HX_STACK_ARG(AutoDestroy,"AutoDestroy");
	HX_STACK_ARG(OnComplete,"OnComplete");
{
		HX_STACK_LINE(307)
		this->cleanup(true,null(),null());
		HX_STACK_LINE(309)
		this->_sound = ::flash::media::Sound_obj::__new(null(),null(),null());
		HX_STACK_LINE(310)
		this->_sound->addEventListener(::flash::events::Event_obj::ID3,this->gotID3_dyn(),null(),null(),null());
		HX_STACK_LINE(311)
		this->_sound->load(::flash::net::URLRequest_obj::__new(SoundURL),null(),null());
		HX_STACK_LINE(312)
		this->_looped = Looped;
		HX_STACK_LINE(313)
		this->autoDestroy = AutoDestroy;
		HX_STACK_LINE(314)
		this->updateTransform();
		HX_STACK_LINE(315)
		this->set_exists(true);
		HX_STACK_LINE(316)
		this->onComplete = OnComplete;
		HX_STACK_LINE(317)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSound_obj,loadStream,return )

::flixel::system::FlxSound FlxSound_obj::loadEmbedded( Dynamic EmbeddedSound,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(false);
	HX_STACK_PUSH("FlxSound::loadEmbedded","flixel/system/FlxSound.hx",271);
	HX_STACK_THIS(this);
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound");
	HX_STACK_ARG(Looped,"Looped");
	HX_STACK_ARG(AutoDestroy,"AutoDestroy");
	HX_STACK_ARG(OnComplete,"OnComplete");
{
		HX_STACK_LINE(272)
		this->cleanup(true,null(),null());
		HX_STACK_LINE(274)
		if ((::Std_obj::is(EmbeddedSound,hx::ClassOf< ::flash::media::Sound >()))){
			HX_STACK_LINE(275)
			this->_sound = EmbeddedSound;
		}
		else{
			HX_STACK_LINE(278)
			if ((::Std_obj::is(EmbeddedSound,hx::ClassOf< ::Class >()))){
				HX_STACK_LINE(279)
				this->_sound = ::Type_obj::createInstance(EmbeddedSound,Dynamic( Array_obj<Dynamic>::__new()));
			}
			else{
				HX_STACK_LINE(282)
				if ((::Std_obj::is(EmbeddedSound,hx::ClassOf< ::String >()))){
					HX_STACK_LINE(283)
					this->_sound = ::openfl::Assets_obj::getSound(EmbeddedSound,null());
				}
			}
		}
		HX_STACK_LINE(288)
		this->_looped = Looped;
		HX_STACK_LINE(289)
		this->autoDestroy = AutoDestroy;
		HX_STACK_LINE(290)
		this->updateTransform();
		HX_STACK_LINE(291)
		this->set_exists(true);
		HX_STACK_LINE(292)
		this->onComplete = OnComplete;
		HX_STACK_LINE(293)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxSound_obj,loadEmbedded,return )

Void FlxSound_obj::kill( ){
{
		HX_STACK_PUSH("FlxSound::kill","flixel/system/FlxSound.hx",256);
		HX_STACK_THIS(this);
		HX_STACK_LINE(257)
		this->super::kill();
		HX_STACK_LINE(258)
		this->cleanup(false,null(),null());
	}
return null();
}


Void FlxSound_obj::update( ){
{
		HX_STACK_PUSH("FlxSound::update","flixel/system/FlxSound.hx",203);
		HX_STACK_THIS(this);
		HX_STACK_LINE(204)
		if ((!(this->get_playing()))){
			HX_STACK_LINE(205)
			return null();
		}
		HX_STACK_LINE(209)
		this->_position = this->_channel->get_position();
		HX_STACK_LINE(211)
		Float radialMultiplier = 1.0;		HX_STACK_VAR(radialMultiplier,"radialMultiplier");
		HX_STACK_LINE(212)
		Float fadeMultiplier = 1.0;		HX_STACK_VAR(fadeMultiplier,"fadeMultiplier");
		HX_STACK_LINE(215)
		if (((this->_target != null()))){
			struct _Function_2_1{
				inline static Float Block( ::flixel::system::FlxSound_obj *__this){
					HX_STACK_PUSH("*::closure","flixel/system/FlxSound.hx",217);
					{
						HX_STACK_LINE(217)
						::flixel::util::FlxPoint Point1 = ::flixel::util::FlxPoint_obj::__new(__this->_target->x,__this->_target->y);		HX_STACK_VAR(Point1,"Point1");
						::flixel::util::FlxPoint Point2 = ::flixel::util::FlxPoint_obj::__new(__this->x,__this->y);		HX_STACK_VAR(Point2,"Point2");
						HX_STACK_LINE(217)
						Float dx = (Point1->x - Point2->x);		HX_STACK_VAR(dx,"dx");
						HX_STACK_LINE(217)
						Float dy = (Point1->y - Point2->y);		HX_STACK_VAR(dy,"dy");
						HX_STACK_LINE(217)
						return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
					}
					return null();
				}
			};
			HX_STACK_LINE(217)
			radialMultiplier = (Float(_Function_2_1::Block(this)) / Float(this->_radius));
			HX_STACK_LINE(218)
			if (((radialMultiplier < (int)0))){
				HX_STACK_LINE(218)
				radialMultiplier = (int)0;
			}
			HX_STACK_LINE(219)
			if (((radialMultiplier > (int)1))){
				HX_STACK_LINE(219)
				radialMultiplier = (int)1;
			}
			HX_STACK_LINE(221)
			radialMultiplier = ((int)1 - radialMultiplier);
			HX_STACK_LINE(223)
			if ((this->_proximityPan)){
				HX_STACK_LINE(225)
				Float d = (Float(((this->x - this->_target->x))) / Float(this->_radius));		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(226)
				if (((d < (int)-1))){
					HX_STACK_LINE(227)
					d = (int)-1;
				}
				else{
					HX_STACK_LINE(230)
					if (((d > (int)1))){
						HX_STACK_LINE(231)
						d = (int)1;
					}
				}
				HX_STACK_LINE(234)
				this->_transform->pan = d;
			}
		}
		HX_STACK_LINE(238)
		this->_volumeAdjust = (radialMultiplier * fadeMultiplier);
		HX_STACK_LINE(239)
		this->updateTransform();
		HX_STACK_LINE(241)
		if (((this->_transform->volume > (int)0))){
			HX_STACK_LINE(243)
			this->amplitudeLeft = (Float(this->_channel->get_leftPeak()) / Float(this->_transform->volume));
			HX_STACK_LINE(244)
			this->amplitudeRight = (Float(this->_channel->get_rightPeak()) / Float(this->_transform->volume));
			HX_STACK_LINE(245)
			this->amplitude = (((this->amplitudeLeft + this->amplitudeRight)) * 0.5);
		}
		else{
			HX_STACK_LINE(249)
			this->amplitudeLeft = (int)0;
			HX_STACK_LINE(250)
			this->amplitudeRight = (int)0;
			HX_STACK_LINE(251)
			this->amplitude = (int)0;
		}
	}
return null();
}


Void FlxSound_obj::destroy( ){
{
		HX_STACK_PUSH("FlxSound::destroy","flixel/system/FlxSound.hx",173);
		HX_STACK_THIS(this);
		HX_STACK_LINE(174)
		this->_transform = null();
		HX_STACK_LINE(175)
		this->set_exists(false);
		HX_STACK_LINE(176)
		this->set_active(false);
		HX_STACK_LINE(177)
		this->_target = null();
		HX_STACK_LINE(178)
		this->name = null();
		HX_STACK_LINE(179)
		this->artist = null();
		HX_STACK_LINE(181)
		if (((this->_channel != null()))){
			HX_STACK_LINE(183)
			this->_channel->removeEventListener(::flash::events::Event_obj::SOUND_COMPLETE,this->stopped_dyn(),null());
			HX_STACK_LINE(184)
			this->_channel->stop();
			HX_STACK_LINE(185)
			this->_channel = null();
		}
		HX_STACK_LINE(188)
		if (((this->_sound != null()))){
			HX_STACK_LINE(190)
			this->_sound->removeEventListener(::flash::events::Event_obj::ID3,this->gotID3_dyn(),null());
			HX_STACK_LINE(191)
			this->_sound = null();
		}
		HX_STACK_LINE(194)
		this->onComplete = null();
		HX_STACK_LINE(196)
		this->super::destroy();
	}
return null();
}


Void FlxSound_obj::reset( ){
{
		HX_STACK_PUSH("FlxSound::reset","flixel/system/FlxSound.hx",142);
		HX_STACK_THIS(this);
		HX_STACK_LINE(143)
		this->destroy();
		HX_STACK_LINE(145)
		this->x = (int)0;
		HX_STACK_LINE(146)
		this->y = (int)0;
		HX_STACK_LINE(148)
		this->_position = (int)0;
		HX_STACK_LINE(149)
		this->_paused = false;
		HX_STACK_LINE(150)
		this->_volume = 1.0;
		HX_STACK_LINE(151)
		this->_volumeAdjust = 1.0;
		HX_STACK_LINE(152)
		this->_looped = false;
		HX_STACK_LINE(153)
		this->_target = null();
		HX_STACK_LINE(154)
		this->_radius = (int)0;
		HX_STACK_LINE(155)
		this->_proximityPan = false;
		HX_STACK_LINE(156)
		this->set_visible(false);
		HX_STACK_LINE(157)
		this->amplitude = (int)0;
		HX_STACK_LINE(158)
		this->amplitudeLeft = (int)0;
		HX_STACK_LINE(159)
		this->amplitudeRight = (int)0;
		HX_STACK_LINE(160)
		this->autoDestroy = false;
		HX_STACK_LINE(162)
		if (((this->_transform == null()))){
			HX_STACK_LINE(163)
			this->_transform = ::flash::media::SoundTransform_obj::__new(null(),null());
		}
		HX_STACK_LINE(166)
		this->_transform->pan = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,reset,(void))

Float FlxSound_obj::set_pan( Float pan){
	HX_STACK_PUSH("FlxSound::set_pan","flixel/system/FlxSound.hx",76);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pan,"pan");
	HX_STACK_LINE(76)
	return this->_transform->pan = pan;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSound_obj,set_pan,return )

Float FlxSound_obj::get_pan( ){
	HX_STACK_PUSH("FlxSound::get_pan","flixel/system/FlxSound.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_LINE(72)
	return this->_transform->pan;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSound_obj,get_pan,return )


FlxSound_obj::FlxSound_obj()
{
}

void FlxSound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSound);
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(_alreadyPaused,"_alreadyPaused");
	HX_MARK_MEMBER_NAME(_proximityPan,"_proximityPan");
	HX_MARK_MEMBER_NAME(_radius,"_radius");
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_looped,"_looped");
	HX_MARK_MEMBER_NAME(_volumeAdjust,"_volumeAdjust");
	HX_MARK_MEMBER_NAME(_volume,"_volume");
	HX_MARK_MEMBER_NAME(_position,"_position");
	HX_MARK_MEMBER_NAME(_paused,"_paused");
	HX_MARK_MEMBER_NAME(_transform,"_transform");
	HX_MARK_MEMBER_NAME(_channel,"_channel");
	HX_MARK_MEMBER_NAME(_sound,"_sound");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(autoDestroy,"autoDestroy");
	HX_MARK_MEMBER_NAME(amplitudeRight,"amplitudeRight");
	HX_MARK_MEMBER_NAME(amplitudeLeft,"amplitudeLeft");
	HX_MARK_MEMBER_NAME(amplitude,"amplitude");
	HX_MARK_MEMBER_NAME(artist,"artist");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(survive,"survive");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(_alreadyPaused,"_alreadyPaused");
	HX_VISIT_MEMBER_NAME(_proximityPan,"_proximityPan");
	HX_VISIT_MEMBER_NAME(_radius,"_radius");
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_looped,"_looped");
	HX_VISIT_MEMBER_NAME(_volumeAdjust,"_volumeAdjust");
	HX_VISIT_MEMBER_NAME(_volume,"_volume");
	HX_VISIT_MEMBER_NAME(_position,"_position");
	HX_VISIT_MEMBER_NAME(_paused,"_paused");
	HX_VISIT_MEMBER_NAME(_transform,"_transform");
	HX_VISIT_MEMBER_NAME(_channel,"_channel");
	HX_VISIT_MEMBER_NAME(_sound,"_sound");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(autoDestroy,"autoDestroy");
	HX_VISIT_MEMBER_NAME(amplitudeRight,"amplitudeRight");
	HX_VISIT_MEMBER_NAME(amplitudeLeft,"amplitudeLeft");
	HX_VISIT_MEMBER_NAME(amplitude,"amplitude");
	HX_VISIT_MEMBER_NAME(artist,"artist");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(survive,"survive");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSound_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return get_pan(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"gotID3") ) { return gotID3_dyn(); }
		if (HX_FIELD_EQ(inName,"volume") ) { return get_volume(); }
		if (HX_FIELD_EQ(inName,"fadeIn") ) { return fadeIn_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_sound") ) { return _sound; }
		if (HX_FIELD_EQ(inName,"artist") ) { return artist; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"cleanup") ) { return cleanup_dyn(); }
		if (HX_FIELD_EQ(inName,"stopped") ) { return stopped_dyn(); }
		if (HX_FIELD_EQ(inName,"playing") ) { return inCallProp ? get_playing() : playing; }
		if (HX_FIELD_EQ(inName,"fadeOut") ) { return fadeOut_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_radius") ) { return _radius; }
		if (HX_FIELD_EQ(inName,"_target") ) { return _target; }
		if (HX_FIELD_EQ(inName,"_looped") ) { return _looped; }
		if (HX_FIELD_EQ(inName,"_volume") ) { return _volume; }
		if (HX_FIELD_EQ(inName,"_paused") ) { return _paused; }
		if (HX_FIELD_EQ(inName,"set_pan") ) { return set_pan_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pan") ) { return get_pan_dyn(); }
		if (HX_FIELD_EQ(inName,"survive") ) { return survive; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_channel") ) { return _channel; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"proximity") ) { return proximity_dyn(); }
		if (HX_FIELD_EQ(inName,"_position") ) { return _position; }
		if (HX_FIELD_EQ(inName,"amplitude") ) { return amplitude; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startSound") ) { return startSound_dyn(); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"get_volume") ) { return get_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"loadStream") ) { return loadStream_dyn(); }
		if (HX_FIELD_EQ(inName,"_transform") ) { return _transform; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"get_playing") ) { return get_playing_dyn(); }
		if (HX_FIELD_EQ(inName,"autoDestroy") ) { return autoDestroy; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadEmbedded") ) { return loadEmbedded_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_proximityPan") ) { return _proximityPan; }
		if (HX_FIELD_EQ(inName,"_volumeAdjust") ) { return _volumeAdjust; }
		if (HX_FIELD_EQ(inName,"amplitudeLeft") ) { return amplitudeLeft; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_alreadyPaused") ) { return _alreadyPaused; }
		if (HX_FIELD_EQ(inName,"amplitudeRight") ) { return amplitudeRight; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateTransform") ) { return updateTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"getActualVolume") ) { return getActualVolume_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSound_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return set_pan(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return set_volume(inValue); }
		if (HX_FIELD_EQ(inName,"_sound") ) { _sound=inValue.Cast< ::flash::media::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"artist") ) { artist=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_looped") ) { _looped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_volume") ) { _volume=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_paused") ) { _paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"survive") ) { survive=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_channel") ) { _channel=inValue.Cast< ::flash::media::SoundChannel >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_position") ) { _position=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"amplitude") ) { amplitude=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_transform") ) { _transform=inValue.Cast< ::flash::media::SoundTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"autoDestroy") ) { autoDestroy=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_proximityPan") ) { _proximityPan=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_volumeAdjust") ) { _volumeAdjust=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"amplitudeLeft") ) { amplitudeLeft=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_alreadyPaused") ) { _alreadyPaused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"amplitudeRight") ) { amplitudeRight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("volume"));
	outFields->push(HX_CSTRING("playing"));
	outFields->push(HX_CSTRING("_alreadyPaused"));
	outFields->push(HX_CSTRING("_proximityPan"));
	outFields->push(HX_CSTRING("_radius"));
	outFields->push(HX_CSTRING("_target"));
	outFields->push(HX_CSTRING("_looped"));
	outFields->push(HX_CSTRING("_volumeAdjust"));
	outFields->push(HX_CSTRING("_volume"));
	outFields->push(HX_CSTRING("_position"));
	outFields->push(HX_CSTRING("_paused"));
	outFields->push(HX_CSTRING("_transform"));
	outFields->push(HX_CSTRING("_channel"));
	outFields->push(HX_CSTRING("_sound"));
	outFields->push(HX_CSTRING("pan"));
	outFields->push(HX_CSTRING("autoDestroy"));
	outFields->push(HX_CSTRING("amplitudeRight"));
	outFields->push(HX_CSTRING("amplitudeLeft"));
	outFields->push(HX_CSTRING("amplitude"));
	outFields->push(HX_CSTRING("artist"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("survive"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setPosition"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("gotID3"),
	HX_CSTRING("cleanup"),
	HX_CSTRING("stopped"),
	HX_CSTRING("startSound"),
	HX_CSTRING("updateTransform"),
	HX_CSTRING("getActualVolume"),
	HX_CSTRING("set_volume"),
	HX_CSTRING("get_volume"),
	HX_CSTRING("get_playing"),
	HX_CSTRING("playing"),
	HX_CSTRING("fadeIn"),
	HX_CSTRING("fadeOut"),
	HX_CSTRING("stop"),
	HX_CSTRING("pause"),
	HX_CSTRING("resume"),
	HX_CSTRING("play"),
	HX_CSTRING("proximity"),
	HX_CSTRING("loadStream"),
	HX_CSTRING("loadEmbedded"),
	HX_CSTRING("kill"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("reset"),
	HX_CSTRING("_alreadyPaused"),
	HX_CSTRING("_proximityPan"),
	HX_CSTRING("_radius"),
	HX_CSTRING("_target"),
	HX_CSTRING("_looped"),
	HX_CSTRING("_volumeAdjust"),
	HX_CSTRING("_volume"),
	HX_CSTRING("_position"),
	HX_CSTRING("_paused"),
	HX_CSTRING("_transform"),
	HX_CSTRING("_channel"),
	HX_CSTRING("_sound"),
	HX_CSTRING("set_pan"),
	HX_CSTRING("get_pan"),
	HX_CSTRING("onComplete"),
	HX_CSTRING("autoDestroy"),
	HX_CSTRING("amplitudeRight"),
	HX_CSTRING("amplitudeLeft"),
	HX_CSTRING("amplitude"),
	HX_CSTRING("artist"),
	HX_CSTRING("name"),
	HX_CSTRING("survive"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSound_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSound_obj::__mClass,"__mClass");
};

Class FlxSound_obj::__mClass;

void FlxSound_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.FlxSound"), hx::TCanCast< FlxSound_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxSound_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
