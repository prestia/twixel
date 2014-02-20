#include <hxcpp.h>

#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxTypedButton_FlxButtonEvent
#include <flixel/ui/_FlxTypedButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxTypedButton_GraphicButton
#include <flixel/ui/_FlxTypedButton/GraphicButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace ui{

Void FlxTypedButton_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick)
{
HX_STACK_PUSH("FlxTypedButton::new","flixel/ui/FlxTypedButton.hx",16);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(59)
	this->_pressedMouse = false;
	HX_STACK_LINE(55)
	this->_pressedTouch = null();
	HX_STACK_LINE(72)
	super::__construct(X,Y,null());
	HX_STACK_LINE(74)
	this->loadGraphic(hx::ClassOf< ::flixel::ui::_FlxTypedButton::GraphicButton >(),true,false,(int)80,(int)20,null(),null());
	HX_STACK_LINE(76)
	this->onUp = ::flixel::ui::_FlxTypedButton::FlxButtonEvent_obj::__new(OnClick,null());
	HX_STACK_LINE(77)
	this->onDown = ::flixel::ui::_FlxTypedButton::FlxButtonEvent_obj::__new(null(),null());
	HX_STACK_LINE(78)
	this->onOver = ::flixel::ui::_FlxTypedButton::FlxButtonEvent_obj::__new(null(),null());
	HX_STACK_LINE(79)
	this->onOut = ::flixel::ui::_FlxTypedButton::FlxButtonEvent_obj::__new(null(),null());
	HX_STACK_LINE(81)
	this->labelAlphas = Array_obj< Float >::__new().Add(0.8).Add(1.0).Add(0.5);
	HX_STACK_LINE(82)
	this->labelOffsets = Array_obj< ::Dynamic >::__new().Add(::flixel::util::FlxPoint_obj::__new(null(),null())).Add(::flixel::util::FlxPoint_obj::__new(null(),null())).Add(::flixel::util::FlxPoint_obj::__new((int)0,(int)1));
	HX_STACK_LINE(84)
	this->set_status((int)0);
	HX_STACK_LINE(87)
	this->scrollFactor->set(null(),null());
}
;
	return null();
}

FlxTypedButton_obj::~FlxTypedButton_obj() { }

Dynamic FlxTypedButton_obj::__CreateEmpty() { return  new FlxTypedButton_obj; }
hx::ObjectPtr< FlxTypedButton_obj > FlxTypedButton_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick)
{  hx::ObjectPtr< FlxTypedButton_obj > result = new FlxTypedButton_obj();
	result->__construct(__o_X,__o_Y,Label,OnClick);
	return result;}

Dynamic FlxTypedButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedButton_obj > result = new FlxTypedButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void FlxTypedButton_obj::onOutHandler( ){
{
		HX_STACK_PUSH("FlxTypedButton::onOutHandler","flixel/ui/FlxTypedButton.hx",321);
		HX_STACK_THIS(this);
		HX_STACK_LINE(322)
		this->set_status((int)0);
		HX_STACK_LINE(323)
		{
			HX_STACK_LINE(323)
			::flixel::ui::_FlxTypedButton::FlxButtonEvent _this = this->onOut;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(323)
			if (((_this->callback != null()))){
				HX_STACK_LINE(323)
				_this->callback();
			}
			HX_STACK_LINE(323)
			if (((_this->sound != null()))){
				HX_STACK_LINE(323)
				_this->sound->play(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onOutHandler,(void))

Void FlxTypedButton_obj::onOverHandler( ){
{
		HX_STACK_PUSH("FlxTypedButton::onOverHandler","flixel/ui/FlxTypedButton.hx",311);
		HX_STACK_THIS(this);
		HX_STACK_LINE(312)
		this->set_status((int)1);
		HX_STACK_LINE(313)
		{
			HX_STACK_LINE(313)
			::flixel::ui::_FlxTypedButton::FlxButtonEvent _this = this->onOver;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(313)
			if (((_this->callback != null()))){
				HX_STACK_LINE(313)
				_this->callback();
			}
			HX_STACK_LINE(313)
			if (((_this->sound != null()))){
				HX_STACK_LINE(313)
				_this->sound->play(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onOverHandler,(void))

Void FlxTypedButton_obj::onDownHandler( ){
{
		HX_STACK_PUSH("FlxTypedButton::onDownHandler","flixel/ui/FlxTypedButton.hx",301);
		HX_STACK_THIS(this);
		HX_STACK_LINE(302)
		this->set_status((int)2);
		HX_STACK_LINE(303)
		{
			HX_STACK_LINE(303)
			::flixel::ui::_FlxTypedButton::FlxButtonEvent _this = this->onDown;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(303)
			if (((_this->callback != null()))){
				HX_STACK_LINE(303)
				_this->callback();
			}
			HX_STACK_LINE(303)
			if (((_this->sound != null()))){
				HX_STACK_LINE(303)
				_this->sound->play(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onDownHandler,(void))

Void FlxTypedButton_obj::onUpHandler( ){
{
		HX_STACK_PUSH("FlxTypedButton::onUpHandler","flixel/ui/FlxTypedButton.hx",289);
		HX_STACK_THIS(this);
		HX_STACK_LINE(290)
		this->set_status((int)0);
		HX_STACK_LINE(291)
		this->_pressedMouse = false;
		HX_STACK_LINE(292)
		this->_pressedTouch = null();
		HX_STACK_LINE(293)
		{
			HX_STACK_LINE(293)
			::flixel::ui::_FlxTypedButton::FlxButtonEvent _this = this->onUp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(293)
			if (((_this->callback != null()))){
				HX_STACK_LINE(293)
				_this->callback();
			}
			HX_STACK_LINE(293)
			if (((_this->sound != null()))){
				HX_STACK_LINE(293)
				_this->sound->play(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onUpHandler,(void))

int FlxTypedButton_obj::set_status( int Value){
	HX_STACK_PUSH("FlxTypedButton::set_status","flixel/ui/FlxTypedButton.hx",277);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Value,"Value");
	HX_STACK_LINE(278)
	if (((bool(((this->labelAlphas->length - (int)1) >= Value)) && bool((this->label != null()))))){
		HX_STACK_LINE(278)
		this->label->__Field(HX_CSTRING("set_alpha"),true)(this->labelAlphas->__get(Value));
	}
	HX_STACK_LINE(281)
	return this->status = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,set_status,return )

Void FlxTypedButton_obj::updateStatus( bool Overlap,bool JustPressed,bool Pressed,::flixel::input::touch::FlxTouch Touch){
{
		HX_STACK_PUSH("FlxTypedButton::updateStatus","flixel/ui/FlxTypedButton.hx",236);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Overlap,"Overlap");
		HX_STACK_ARG(JustPressed,"JustPressed");
		HX_STACK_ARG(Pressed,"Pressed");
		HX_STACK_ARG(Touch,"Touch");
		HX_STACK_LINE(237)
		if ((Overlap)){
			HX_STACK_LINE(238)
			if ((JustPressed)){
				HX_STACK_LINE(241)
				this->_pressedTouch = Touch;
				HX_STACK_LINE(242)
				if (((Touch == null()))){
					HX_STACK_LINE(242)
					this->_pressedMouse = true;
				}
				HX_STACK_LINE(245)
				this->onDownHandler();
			}
			else{
				HX_STACK_LINE(247)
				if (((this->status == (int)0))){
					HX_STACK_LINE(248)
					if ((Pressed)){
						HX_STACK_LINE(250)
						this->onDownHandler();
					}
					else{
						HX_STACK_LINE(253)
						this->onOverHandler();
					}
				}
			}
		}
		else{
			HX_STACK_LINE(258)
			if (((this->status != (int)0))){
				HX_STACK_LINE(259)
				this->onOutHandler();
			}
		}
		HX_STACK_LINE(264)
		if (((bool((this->_pressedTouch != null())) && bool((this->_pressedTouch->_current == (int)-1))))){
			HX_STACK_LINE(265)
			this->onUpHandler();
		}
		else{
			struct _Function_2_1{
				inline static bool Block( ){
					HX_STACK_PUSH("*::closure","flixel/ui/FlxTypedButton.hx",269);
					{
						HX_STACK_LINE(269)
						::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(269)
						return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
					}
					return null();
				}
			};
			HX_STACK_LINE(269)
			if (((bool(this->_pressedMouse) && bool(_Function_2_1::Block())))){
				HX_STACK_LINE(270)
				this->onUpHandler();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedButton_obj,updateStatus,(void))

Void FlxTypedButton_obj::updateButton( ){
{
		HX_STACK_PUSH("FlxTypedButton::updateButton","flixel/ui/FlxTypedButton.hx",184);
		HX_STACK_THIS(this);
		HX_STACK_LINE(185)
		if (((this->cameras == null()))){
			HX_STACK_LINE(185)
			this->cameras = ::flixel::FlxG_obj::cameras->list;
		}
		HX_STACK_LINE(190)
		bool overlapFound = false;		HX_STACK_VAR(overlapFound,"overlapFound");
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->cameras;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(193)
			while(((_g < _g1->length))){
				HX_STACK_LINE(193)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(193)
				++(_g);
				HX_STACK_LINE(196)
				::flixel::FlxG_obj::mouse->getWorldPosition(camera,this->_point);
				HX_STACK_LINE(198)
				if ((this->overlapsPoint(this->_point,true,camera))){
					HX_STACK_LINE(200)
					overlapFound = true;
					struct _Function_4_1{
						inline static bool Block( ){
							HX_STACK_PUSH("*::closure","flixel/ui/FlxTypedButton.hx",201);
							{
								HX_STACK_LINE(201)
								::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(201)
								return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
							}
							return null();
						}
					};
					HX_STACK_LINE(201)
					this->updateStatus(true,_Function_4_1::Block(),(::flixel::FlxG_obj::mouse->_leftButton->current > (int)0),null());
					HX_STACK_LINE(202)
					break;
				}
				HX_STACK_LINE(207)
				{
					HX_STACK_LINE(207)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					Array< ::Dynamic > _g3 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(207)
					while(((_g2 < _g3->length))){
						HX_STACK_LINE(207)
						::flixel::input::touch::FlxTouch touch = _g3->__get(_g2).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
						HX_STACK_LINE(207)
						++(_g2);
						HX_STACK_LINE(209)
						touch->getWorldPosition(camera,this->_point);
						HX_STACK_LINE(211)
						if ((this->overlapsPoint(this->_point,true,camera))){
							HX_STACK_LINE(213)
							overlapFound = true;
							HX_STACK_LINE(214)
							this->updateStatus(true,(touch->_current == (int)2),(touch->_current > (int)0),touch);
							HX_STACK_LINE(215)
							break;
						}
					}
				}
			}
		}
		HX_STACK_LINE(221)
		if ((!(overlapFound))){
			HX_STACK_LINE(222)
			this->updateStatus(false,false,false,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,updateButton,(void))

Void FlxTypedButton_obj::draw( ){
{
		HX_STACK_PUSH("FlxTypedButton::draw","flixel/ui/FlxTypedButton.hx",155);
		HX_STACK_THIS(this);
		HX_STACK_LINE(156)
		this->super::draw();
		HX_STACK_LINE(158)
		if (((this->label != null()))){
			HX_STACK_LINE(160)
			this->label->__FieldRef(HX_CSTRING("cameras")) = this->cameras;
			HX_STACK_LINE(161)
			this->label->__Field(HX_CSTRING("draw"),true)();
		}
	}
return null();
}


Void FlxTypedButton_obj::update( ){
{
		HX_STACK_PUSH("FlxTypedButton::update","flixel/ui/FlxTypedButton.hx",113);
		HX_STACK_THIS(this);
		HX_STACK_LINE(114)
		this->super::update();
		HX_STACK_LINE(116)
		if ((!(this->visible))){
			HX_STACK_LINE(116)
			return null();
		}
		HX_STACK_LINE(122)
		this->updateButton();
		HX_STACK_LINE(126)
		if (((this->label != null()))){
			HX_STACK_LINE(128)
			this->label->__Field(HX_CSTRING("set_x"),true)(this->x);
			HX_STACK_LINE(129)
			this->label->__Field(HX_CSTRING("set_y"),true)(this->y);
			HX_STACK_LINE(131)
			{
				HX_STACK_LINE(131)
				Dynamic _g = this->label;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(131)
				_g->__Field(HX_CSTRING("set_x"),true)((_g->__Field(HX_CSTRING("x"),true) + this->labelOffsets->__get(this->status).StaticCast< ::flixel::util::FlxPoint >()->x));
			}
			HX_STACK_LINE(132)
			{
				HX_STACK_LINE(132)
				Dynamic _g = this->label;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(132)
				_g->__Field(HX_CSTRING("set_y"),true)((_g->__Field(HX_CSTRING("y"),true) + this->labelOffsets->__get(this->status).StaticCast< ::flixel::util::FlxPoint >()->y));
			}
			HX_STACK_LINE(134)
			this->label->__FieldRef(HX_CSTRING("scrollFactor")) = this->scrollFactor;
		}
		HX_STACK_LINE(139)
		int nextFrame = this->status;		HX_STACK_VAR(nextFrame,"nextFrame");
		HX_STACK_LINE(143)
		if (((nextFrame == (int)1))){
			HX_STACK_LINE(143)
			nextFrame = (int)0;
		}
		HX_STACK_LINE(148)
		this->set_frame(this->framesData->frames->__get(nextFrame).StaticCast< ::flixel::system::layer::frames::FlxFrame >());
	}
return null();
}


Void FlxTypedButton_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTypedButton::destroy","flixel/ui/FlxTypedButton.hx",94);
		HX_STACK_THIS(this);
		HX_STACK_LINE(95)
		this->label = ::flixel::FlxG_obj::safeDestroy(this->label);
		HX_STACK_LINE(97)
		this->onUp = ::flixel::FlxG_obj::safeDestroy(this->onUp);
		HX_STACK_LINE(98)
		this->onDown = ::flixel::FlxG_obj::safeDestroy(this->onDown);
		HX_STACK_LINE(99)
		this->onOver = ::flixel::FlxG_obj::safeDestroy(this->onOver);
		HX_STACK_LINE(100)
		this->onOut = ::flixel::FlxG_obj::safeDestroy(this->onOut);
		HX_STACK_LINE(102)
		this->labelOffsets = null();
		HX_STACK_LINE(103)
		this->labelAlphas = null();
		HX_STACK_LINE(104)
		this->_pressedTouch = null();
		HX_STACK_LINE(106)
		this->super::destroy();
	}
return null();
}



FlxTypedButton_obj::FlxTypedButton_obj()
{
}

void FlxTypedButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedButton);
	HX_MARK_MEMBER_NAME(_pressedMouse,"_pressedMouse");
	HX_MARK_MEMBER_NAME(_pressedTouch,"_pressedTouch");
	HX_MARK_MEMBER_NAME(onOut,"onOut");
	HX_MARK_MEMBER_NAME(onOver,"onOver");
	HX_MARK_MEMBER_NAME(onDown,"onDown");
	HX_MARK_MEMBER_NAME(onUp,"onUp");
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(labelAlphas,"labelAlphas");
	HX_MARK_MEMBER_NAME(labelOffsets,"labelOffsets");
	HX_MARK_MEMBER_NAME(label,"label");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pressedMouse,"_pressedMouse");
	HX_VISIT_MEMBER_NAME(_pressedTouch,"_pressedTouch");
	HX_VISIT_MEMBER_NAME(onOut,"onOut");
	HX_VISIT_MEMBER_NAME(onOver,"onOver");
	HX_VISIT_MEMBER_NAME(onDown,"onDown");
	HX_VISIT_MEMBER_NAME(onUp,"onUp");
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(labelAlphas,"labelAlphas");
	HX_VISIT_MEMBER_NAME(labelOffsets,"labelOffsets");
	HX_VISIT_MEMBER_NAME(label,"label");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypedButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"onUp") ) { return onUp; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"onOut") ) { return onOut; }
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"onOver") ) { return onOver; }
		if (HX_FIELD_EQ(inName,"onDown") ) { return onDown; }
		if (HX_FIELD_EQ(inName,"status") ) { return status; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_status") ) { return set_status_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onUpHandler") ) { return onUpHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"labelAlphas") ) { return labelAlphas; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onOutHandler") ) { return onOutHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"updateStatus") ) { return updateStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"updateButton") ) { return updateButton_dyn(); }
		if (HX_FIELD_EQ(inName,"labelOffsets") ) { return labelOffsets; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onOverHandler") ) { return onOverHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"onDownHandler") ) { return onDownHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"_pressedMouse") ) { return _pressedMouse; }
		if (HX_FIELD_EQ(inName,"_pressedTouch") ) { return _pressedTouch; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"onUp") ) { onUp=inValue.Cast< ::flixel::ui::_FlxTypedButton::FlxButtonEvent >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"onOut") ) { onOut=inValue.Cast< ::flixel::ui::_FlxTypedButton::FlxButtonEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onOver") ) { onOver=inValue.Cast< ::flixel::ui::_FlxTypedButton::FlxButtonEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDown") ) { onDown=inValue.Cast< ::flixel::ui::_FlxTypedButton::FlxButtonEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"status") ) { if (inCallProp) return set_status(inValue);status=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"labelAlphas") ) { labelAlphas=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"labelOffsets") ) { labelOffsets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pressedMouse") ) { _pressedMouse=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pressedTouch") ) { _pressedTouch=inValue.Cast< ::flixel::input::touch::FlxTouch >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_pressedMouse"));
	outFields->push(HX_CSTRING("_pressedTouch"));
	outFields->push(HX_CSTRING("onOut"));
	outFields->push(HX_CSTRING("onOver"));
	outFields->push(HX_CSTRING("onDown"));
	outFields->push(HX_CSTRING("onUp"));
	outFields->push(HX_CSTRING("status"));
	outFields->push(HX_CSTRING("labelAlphas"));
	outFields->push(HX_CSTRING("labelOffsets"));
	outFields->push(HX_CSTRING("label"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onOutHandler"),
	HX_CSTRING("onOverHandler"),
	HX_CSTRING("onDownHandler"),
	HX_CSTRING("onUpHandler"),
	HX_CSTRING("set_status"),
	HX_CSTRING("updateStatus"),
	HX_CSTRING("updateButton"),
	HX_CSTRING("draw"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_pressedMouse"),
	HX_CSTRING("_pressedTouch"),
	HX_CSTRING("onOut"),
	HX_CSTRING("onOver"),
	HX_CSTRING("onDown"),
	HX_CSTRING("onUp"),
	HX_CSTRING("status"),
	HX_CSTRING("labelAlphas"),
	HX_CSTRING("labelOffsets"),
	HX_CSTRING("label"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedButton_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedButton_obj::__mClass,"__mClass");
};

Class FlxTypedButton_obj::__mClass;

void FlxTypedButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.ui.FlxTypedButton"), hx::TCanCast< FlxTypedButton_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTypedButton_obj::__boot()
{
}

} // end namespace flixel
} // end namespace ui
