#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxCollisionType
#include <flixel/system/FlxCollisionType.h>
#endif
#ifndef INCLUDED_flixel_system_FlxList
#include <flixel/system/FlxList.h>
#endif
#ifndef INCLUDED_flixel_system_FlxQuadTree
#include <flixel/system/FlxQuadTree.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace system{

Void FlxQuadTree_obj::__construct(Float X,Float Y,Float Width,Float Height,::flixel::system::FlxQuadTree Parent)
{
HX_STACK_PUSH("FlxQuadTree::new","flixel/system/FlxQuadTree.hx",199);
{
	HX_STACK_LINE(200)
	super::__construct(X,Y,Width,Height);
	HX_STACK_LINE(201)
	this->reset(X,Y,Width,Height,Parent);
}
;
	return null();
}

FlxQuadTree_obj::~FlxQuadTree_obj() { }

Dynamic FlxQuadTree_obj::__CreateEmpty() { return  new FlxQuadTree_obj; }
hx::ObjectPtr< FlxQuadTree_obj > FlxQuadTree_obj::__new(Float X,Float Y,Float Width,Float Height,::flixel::system::FlxQuadTree Parent)
{  hx::ObjectPtr< FlxQuadTree_obj > result = new FlxQuadTree_obj();
	result->__construct(X,Y,Width,Height,Parent);
	return result;}

Dynamic FlxQuadTree_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxQuadTree_obj > result = new FlxQuadTree_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

bool FlxQuadTree_obj::overlapNode( ){
	HX_STACK_PUSH("FlxQuadTree::overlapNode","flixel/system/FlxQuadTree.hx",657);
	HX_STACK_THIS(this);
	HX_STACK_LINE(659)
	bool overlapProcessed = false;		HX_STACK_VAR(overlapProcessed,"overlapProcessed");
	HX_STACK_LINE(660)
	::flixel::FlxObject checkObject;		HX_STACK_VAR(checkObject,"checkObject");
	HX_STACK_LINE(661)
	while(((::flixel::system::FlxQuadTree_obj::_iterator != null()))){
		HX_STACK_LINE(663)
		if (((bool((::flixel::system::FlxQuadTree_obj::_object == null())) || bool(((bool(!(::flixel::system::FlxQuadTree_obj::_object->exists)) || bool((::flixel::system::FlxQuadTree_obj::_object->allowCollisions <= (int)0)))))))){
			HX_STACK_LINE(664)
			break;
		}
		HX_STACK_LINE(668)
		checkObject = ::flixel::system::FlxQuadTree_obj::_iterator->object;
		HX_STACK_LINE(669)
		if (((bool((bool((::flixel::system::FlxQuadTree_obj::_object == checkObject)) || bool(!(checkObject->exists)))) || bool((checkObject->allowCollisions <= (int)0))))){
			HX_STACK_LINE(671)
			::flixel::system::FlxQuadTree_obj::_iterator = ::flixel::system::FlxQuadTree_obj::_iterator->next;
			HX_STACK_LINE(672)
			continue;
		}
		HX_STACK_LINE(676)
		::flixel::system::FlxQuadTree_obj::_objectHullX = (  (((::flixel::system::FlxQuadTree_obj::_object->x < ::flixel::system::FlxQuadTree_obj::_object->last->x))) ? Float(::flixel::system::FlxQuadTree_obj::_object->x) : Float(::flixel::system::FlxQuadTree_obj::_object->last->x) );
		HX_STACK_LINE(677)
		::flixel::system::FlxQuadTree_obj::_objectHullY = (  (((::flixel::system::FlxQuadTree_obj::_object->y < ::flixel::system::FlxQuadTree_obj::_object->last->y))) ? Float(::flixel::system::FlxQuadTree_obj::_object->y) : Float(::flixel::system::FlxQuadTree_obj::_object->last->y) );
		HX_STACK_LINE(678)
		::flixel::system::FlxQuadTree_obj::_objectHullWidth = (::flixel::system::FlxQuadTree_obj::_object->x - ::flixel::system::FlxQuadTree_obj::_object->last->x);
		HX_STACK_LINE(679)
		::flixel::system::FlxQuadTree_obj::_objectHullWidth = (::flixel::system::FlxQuadTree_obj::_object->get_width() + ((  (((::flixel::system::FlxQuadTree_obj::_objectHullWidth > (int)0))) ? Float(::flixel::system::FlxQuadTree_obj::_objectHullWidth) : Float(-(::flixel::system::FlxQuadTree_obj::_objectHullWidth)) )));
		HX_STACK_LINE(680)
		::flixel::system::FlxQuadTree_obj::_objectHullHeight = (::flixel::system::FlxQuadTree_obj::_object->y - ::flixel::system::FlxQuadTree_obj::_object->last->y);
		HX_STACK_LINE(681)
		::flixel::system::FlxQuadTree_obj::_objectHullHeight = (::flixel::system::FlxQuadTree_obj::_object->get_height() + ((  (((::flixel::system::FlxQuadTree_obj::_objectHullHeight > (int)0))) ? Float(::flixel::system::FlxQuadTree_obj::_objectHullHeight) : Float(-(::flixel::system::FlxQuadTree_obj::_objectHullHeight)) )));
		HX_STACK_LINE(684)
		::flixel::system::FlxQuadTree_obj::_checkObjectHullX = (  (((checkObject->x < checkObject->last->x))) ? Float(checkObject->x) : Float(checkObject->last->x) );
		HX_STACK_LINE(685)
		::flixel::system::FlxQuadTree_obj::_checkObjectHullY = (  (((checkObject->y < checkObject->last->y))) ? Float(checkObject->y) : Float(checkObject->last->y) );
		HX_STACK_LINE(686)
		::flixel::system::FlxQuadTree_obj::_checkObjectHullWidth = (checkObject->x - checkObject->last->x);
		HX_STACK_LINE(687)
		::flixel::system::FlxQuadTree_obj::_checkObjectHullWidth = (checkObject->get_width() + ((  (((::flixel::system::FlxQuadTree_obj::_checkObjectHullWidth > (int)0))) ? Float(::flixel::system::FlxQuadTree_obj::_checkObjectHullWidth) : Float(-(::flixel::system::FlxQuadTree_obj::_checkObjectHullWidth)) )));
		HX_STACK_LINE(688)
		::flixel::system::FlxQuadTree_obj::_checkObjectHullHeight = (checkObject->y - checkObject->last->y);
		HX_STACK_LINE(689)
		::flixel::system::FlxQuadTree_obj::_checkObjectHullHeight = (checkObject->get_height() + ((  (((::flixel::system::FlxQuadTree_obj::_checkObjectHullHeight > (int)0))) ? Float(::flixel::system::FlxQuadTree_obj::_checkObjectHullHeight) : Float(-(::flixel::system::FlxQuadTree_obj::_checkObjectHullHeight)) )));
		HX_STACK_LINE(692)
		if (((bool((bool((bool(((::flixel::system::FlxQuadTree_obj::_objectHullX + ::flixel::system::FlxQuadTree_obj::_objectHullWidth) > ::flixel::system::FlxQuadTree_obj::_checkObjectHullX)) && bool((::flixel::system::FlxQuadTree_obj::_objectHullX < (::flixel::system::FlxQuadTree_obj::_checkObjectHullX + ::flixel::system::FlxQuadTree_obj::_checkObjectHullWidth))))) && bool(((::flixel::system::FlxQuadTree_obj::_objectHullY + ::flixel::system::FlxQuadTree_obj::_objectHullHeight) > ::flixel::system::FlxQuadTree_obj::_checkObjectHullY)))) && bool((::flixel::system::FlxQuadTree_obj::_objectHullY < (::flixel::system::FlxQuadTree_obj::_checkObjectHullY + ::flixel::system::FlxQuadTree_obj::_checkObjectHullHeight)))))){
			HX_STACK_LINE(696)
			if (((bool((::flixel::system::FlxQuadTree_obj::_processingCallback_dyn() == null())) || bool(::flixel::system::FlxQuadTree_obj::_processingCallback(::flixel::system::FlxQuadTree_obj::_object,checkObject))))){
				HX_STACK_LINE(700)
				overlapProcessed = true;
				HX_STACK_LINE(701)
				if (((::flixel::system::FlxQuadTree_obj::_notifyCallback_dyn() != null()))){
					HX_STACK_LINE(702)
					::flixel::system::FlxQuadTree_obj::_notifyCallback(::flixel::system::FlxQuadTree_obj::_object,checkObject);
				}
			}
		}
		HX_STACK_LINE(707)
		if (((::flixel::system::FlxQuadTree_obj::_iterator != null()))){
			HX_STACK_LINE(708)
			::flixel::system::FlxQuadTree_obj::_iterator = ::flixel::system::FlxQuadTree_obj::_iterator->next;
		}
	}
	HX_STACK_LINE(713)
	return overlapProcessed;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,overlapNode,return )

bool FlxQuadTree_obj::execute( ){
	HX_STACK_PUSH("FlxQuadTree::execute","flixel/system/FlxQuadTree.hx",603);
	HX_STACK_THIS(this);
	HX_STACK_LINE(604)
	bool overlapProcessed = false;		HX_STACK_VAR(overlapProcessed,"overlapProcessed");
	HX_STACK_LINE(605)
	::flixel::system::FlxList iterator;		HX_STACK_VAR(iterator,"iterator");
	HX_STACK_LINE(607)
	if (((this->_headA->object != null()))){
		HX_STACK_LINE(609)
		iterator = this->_headA;
		HX_STACK_LINE(610)
		while(((iterator != null()))){
			HX_STACK_LINE(612)
			::flixel::system::FlxQuadTree_obj::_object = iterator->object;
			HX_STACK_LINE(613)
			if ((::flixel::system::FlxQuadTree_obj::_useBothLists)){
				HX_STACK_LINE(614)
				::flixel::system::FlxQuadTree_obj::_iterator = this->_headB;
			}
			else{
				HX_STACK_LINE(618)
				::flixel::system::FlxQuadTree_obj::_iterator = iterator->next;
			}
			HX_STACK_LINE(621)
			if (((bool((bool((bool((bool((bool(::flixel::system::FlxQuadTree_obj::_object->exists) && bool((::flixel::system::FlxQuadTree_obj::_object->allowCollisions > (int)0)))) && bool((::flixel::system::FlxQuadTree_obj::_iterator != null())))) && bool((::flixel::system::FlxQuadTree_obj::_iterator->object != null())))) && bool(::flixel::system::FlxQuadTree_obj::_iterator->object->exists))) && bool(this->overlapNode())))){
				HX_STACK_LINE(624)
				overlapProcessed = true;
			}
			HX_STACK_LINE(627)
			iterator = iterator->next;
		}
	}
	HX_STACK_LINE(632)
	if (((bool((this->_northWestTree != null())) && bool(this->_northWestTree->execute())))){
		HX_STACK_LINE(633)
		overlapProcessed = true;
	}
	HX_STACK_LINE(636)
	if (((bool((this->_northEastTree != null())) && bool(this->_northEastTree->execute())))){
		HX_STACK_LINE(637)
		overlapProcessed = true;
	}
	HX_STACK_LINE(640)
	if (((bool((this->_southEastTree != null())) && bool(this->_southEastTree->execute())))){
		HX_STACK_LINE(641)
		overlapProcessed = true;
	}
	HX_STACK_LINE(644)
	if (((bool((this->_southWestTree != null())) && bool(this->_southWestTree->execute())))){
		HX_STACK_LINE(645)
		overlapProcessed = true;
	}
	HX_STACK_LINE(649)
	return overlapProcessed;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,execute,return )

Void FlxQuadTree_obj::addToList( ){
{
		HX_STACK_PUSH("FlxQuadTree::addToList","flixel/system/FlxQuadTree.hx",553);
		HX_STACK_THIS(this);
		HX_STACK_LINE(554)
		::flixel::system::FlxList ot;		HX_STACK_VAR(ot,"ot");
		HX_STACK_LINE(555)
		if (((::flixel::system::FlxQuadTree_obj::_list == (int)0))){
			HX_STACK_LINE(557)
			if (((this->_tailA->object != null()))){
				HX_STACK_LINE(559)
				ot = this->_tailA;
				HX_STACK_LINE(560)
				this->_tailA = ::flixel::system::FlxList_obj::recycle();
				HX_STACK_LINE(561)
				ot->next = this->_tailA;
			}
			HX_STACK_LINE(563)
			this->_tailA->object = ::flixel::system::FlxQuadTree_obj::_object;
		}
		else{
			HX_STACK_LINE(567)
			if (((this->_tailB->object != null()))){
				HX_STACK_LINE(569)
				ot = this->_tailB;
				HX_STACK_LINE(570)
				this->_tailB = ::flixel::system::FlxList_obj::recycle();
				HX_STACK_LINE(571)
				ot->next = this->_tailB;
			}
			HX_STACK_LINE(573)
			this->_tailB->object = ::flixel::system::FlxQuadTree_obj::_object;
		}
		HX_STACK_LINE(575)
		if ((!(this->_canSubdivide))){
			HX_STACK_LINE(576)
			return null();
		}
		HX_STACK_LINE(579)
		if (((this->_northWestTree != null()))){
			HX_STACK_LINE(580)
			this->_northWestTree->addToList();
		}
		HX_STACK_LINE(583)
		if (((this->_northEastTree != null()))){
			HX_STACK_LINE(584)
			this->_northEastTree->addToList();
		}
		HX_STACK_LINE(587)
		if (((this->_southEastTree != null()))){
			HX_STACK_LINE(588)
			this->_southEastTree->addToList();
		}
		HX_STACK_LINE(591)
		if (((this->_southWestTree != null()))){
			HX_STACK_LINE(592)
			this->_southWestTree->addToList();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,addToList,(void))

Void FlxQuadTree_obj::addObject( ){
{
		HX_STACK_PUSH("FlxQuadTree::addObject","flixel/system/FlxQuadTree.hx",462);
		HX_STACK_THIS(this);
		HX_STACK_LINE(464)
		if (((bool(!(this->_canSubdivide)) || bool((bool((bool((bool((this->_leftEdge >= ::flixel::system::FlxQuadTree_obj::_objectLeftEdge)) && bool((this->_rightEdge <= ::flixel::system::FlxQuadTree_obj::_objectRightEdge)))) && bool((this->_topEdge >= ::flixel::system::FlxQuadTree_obj::_objectTopEdge)))) && bool((this->_bottomEdge <= ::flixel::system::FlxQuadTree_obj::_objectBottomEdge))))))){
			HX_STACK_LINE(466)
			this->addToList();
			HX_STACK_LINE(467)
			return null();
		}
		HX_STACK_LINE(471)
		if (((bool((::flixel::system::FlxQuadTree_obj::_objectLeftEdge > this->_leftEdge)) && bool((::flixel::system::FlxQuadTree_obj::_objectRightEdge < this->_midpointX))))){
			HX_STACK_LINE(473)
			if (((bool((::flixel::system::FlxQuadTree_obj::_objectTopEdge > this->_topEdge)) && bool((::flixel::system::FlxQuadTree_obj::_objectBottomEdge < this->_midpointY))))){
				HX_STACK_LINE(475)
				if (((this->_northWestTree == null()))){
					HX_STACK_LINE(476)
					this->_northWestTree = ::flixel::system::FlxQuadTree_obj::recycle(this->_leftEdge,this->_topEdge,this->_halfWidth,this->_halfHeight,hx::ObjectPtr<OBJ_>(this));
				}
				HX_STACK_LINE(479)
				this->_northWestTree->addObject();
				HX_STACK_LINE(480)
				return null();
			}
			HX_STACK_LINE(482)
			if (((bool((::flixel::system::FlxQuadTree_obj::_objectTopEdge > this->_midpointY)) && bool((::flixel::system::FlxQuadTree_obj::_objectBottomEdge < this->_bottomEdge))))){
				HX_STACK_LINE(484)
				if (((this->_southWestTree == null()))){
					HX_STACK_LINE(485)
					this->_southWestTree = ::flixel::system::FlxQuadTree_obj::recycle(this->_leftEdge,this->_midpointY,this->_halfWidth,this->_halfHeight,hx::ObjectPtr<OBJ_>(this));
				}
				HX_STACK_LINE(488)
				this->_southWestTree->addObject();
				HX_STACK_LINE(489)
				return null();
			}
		}
		HX_STACK_LINE(492)
		if (((bool((::flixel::system::FlxQuadTree_obj::_objectLeftEdge > this->_midpointX)) && bool((::flixel::system::FlxQuadTree_obj::_objectRightEdge < this->_rightEdge))))){
			HX_STACK_LINE(494)
			if (((bool((::flixel::system::FlxQuadTree_obj::_objectTopEdge > this->_topEdge)) && bool((::flixel::system::FlxQuadTree_obj::_objectBottomEdge < this->_midpointY))))){
				HX_STACK_LINE(496)
				if (((this->_northEastTree == null()))){
					HX_STACK_LINE(497)
					this->_northEastTree = ::flixel::system::FlxQuadTree_obj::recycle(this->_midpointX,this->_topEdge,this->_halfWidth,this->_halfHeight,hx::ObjectPtr<OBJ_>(this));
				}
				HX_STACK_LINE(500)
				this->_northEastTree->addObject();
				HX_STACK_LINE(501)
				return null();
			}
			HX_STACK_LINE(503)
			if (((bool((::flixel::system::FlxQuadTree_obj::_objectTopEdge > this->_midpointY)) && bool((::flixel::system::FlxQuadTree_obj::_objectBottomEdge < this->_bottomEdge))))){
				HX_STACK_LINE(505)
				if (((this->_southEastTree == null()))){
					HX_STACK_LINE(506)
					this->_southEastTree = ::flixel::system::FlxQuadTree_obj::recycle(this->_midpointX,this->_midpointY,this->_halfWidth,this->_halfHeight,hx::ObjectPtr<OBJ_>(this));
				}
				HX_STACK_LINE(509)
				this->_southEastTree->addObject();
				HX_STACK_LINE(510)
				return null();
			}
		}
		HX_STACK_LINE(515)
		if (((bool((bool((bool((::flixel::system::FlxQuadTree_obj::_objectRightEdge > this->_leftEdge)) && bool((::flixel::system::FlxQuadTree_obj::_objectLeftEdge < this->_midpointX)))) && bool((::flixel::system::FlxQuadTree_obj::_objectBottomEdge > this->_topEdge)))) && bool((::flixel::system::FlxQuadTree_obj::_objectTopEdge < this->_midpointY))))){
			HX_STACK_LINE(517)
			if (((this->_northWestTree == null()))){
				HX_STACK_LINE(518)
				this->_northWestTree = ::flixel::system::FlxQuadTree_obj::recycle(this->_leftEdge,this->_topEdge,this->_halfWidth,this->_halfHeight,hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(521)
			this->_northWestTree->addObject();
		}
		HX_STACK_LINE(523)
		if (((bool((bool((bool((::flixel::system::FlxQuadTree_obj::_objectRightEdge > this->_midpointX)) && bool((::flixel::system::FlxQuadTree_obj::_objectLeftEdge < this->_rightEdge)))) && bool((::flixel::system::FlxQuadTree_obj::_objectBottomEdge > this->_topEdge)))) && bool((::flixel::system::FlxQuadTree_obj::_objectTopEdge < this->_midpointY))))){
			HX_STACK_LINE(525)
			if (((this->_northEastTree == null()))){
				HX_STACK_LINE(526)
				this->_northEastTree = ::flixel::system::FlxQuadTree_obj::recycle(this->_midpointX,this->_topEdge,this->_halfWidth,this->_halfHeight,hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(529)
			this->_northEastTree->addObject();
		}
		HX_STACK_LINE(531)
		if (((bool((bool((bool((::flixel::system::FlxQuadTree_obj::_objectRightEdge > this->_midpointX)) && bool((::flixel::system::FlxQuadTree_obj::_objectLeftEdge < this->_rightEdge)))) && bool((::flixel::system::FlxQuadTree_obj::_objectBottomEdge > this->_midpointY)))) && bool((::flixel::system::FlxQuadTree_obj::_objectTopEdge < this->_bottomEdge))))){
			HX_STACK_LINE(533)
			if (((this->_southEastTree == null()))){
				HX_STACK_LINE(534)
				this->_southEastTree = ::flixel::system::FlxQuadTree_obj::recycle(this->_midpointX,this->_midpointY,this->_halfWidth,this->_halfHeight,hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(537)
			this->_southEastTree->addObject();
		}
		HX_STACK_LINE(539)
		if (((bool((bool((bool((::flixel::system::FlxQuadTree_obj::_objectRightEdge > this->_leftEdge)) && bool((::flixel::system::FlxQuadTree_obj::_objectLeftEdge < this->_midpointX)))) && bool((::flixel::system::FlxQuadTree_obj::_objectBottomEdge > this->_midpointY)))) && bool((::flixel::system::FlxQuadTree_obj::_objectTopEdge < this->_bottomEdge))))){
			HX_STACK_LINE(541)
			if (((this->_southWestTree == null()))){
				HX_STACK_LINE(542)
				this->_southWestTree = ::flixel::system::FlxQuadTree_obj::recycle(this->_leftEdge,this->_midpointY,this->_halfWidth,this->_halfHeight,hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(545)
			this->_southWestTree->addObject();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,addObject,(void))

Void FlxQuadTree_obj::add( ::flixel::FlxBasic ObjectOrGroup,int list){
{
		HX_STACK_PUSH("FlxQuadTree::add","flixel/system/FlxQuadTree.hx",397);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup");
		HX_STACK_ARG(list,"list");
		HX_STACK_LINE(398)
		::flixel::system::FlxQuadTree_obj::_list = list;
		HX_STACK_LINE(400)
		if (((ObjectOrGroup->collisionType == ::flixel::system::FlxCollisionType_obj::SPRITEGROUP))){
			HX_STACK_LINE(401)
			ObjectOrGroup = ::Reflect_obj::field(ObjectOrGroup,HX_CSTRING("group"));
		}
		HX_STACK_LINE(405)
		if (((ObjectOrGroup->collisionType == ::flixel::system::FlxCollisionType_obj::GROUP))){
			HX_STACK_LINE(407)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(408)
			::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(409)
			::flixel::system::FlxCollisionType collisionType;		HX_STACK_VAR(collisionType,"collisionType");
			HX_STACK_LINE(410)
			::flixel::group::FlxTypedGroup group = ObjectOrGroup;		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(411)
			Array< ::Dynamic > members = group->get_members();		HX_STACK_VAR(members,"members");
			HX_STACK_LINE(412)
			int l = group->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(413)
			while(((i < l))){
				HX_STACK_LINE(415)
				basic = members->__get((i)++).StaticCast< ::flixel::FlxBasic >();
				HX_STACK_LINE(416)
				if (((bool((basic != null())) && bool(basic->exists)))){
					HX_STACK_LINE(418)
					collisionType = basic->collisionType;
					HX_STACK_LINE(419)
					if (((collisionType == ::flixel::system::FlxCollisionType_obj::SPRITEGROUP))){
						HX_STACK_LINE(420)
						basic = ::Reflect_obj::field(ObjectOrGroup,HX_CSTRING("group"));
					}
					HX_STACK_LINE(424)
					if (((collisionType == ::flixel::system::FlxCollisionType_obj::GROUP))){
						HX_STACK_LINE(425)
						this->add(basic,list);
					}
					else{
						HX_STACK_LINE(428)
						if (((bool((collisionType == ::flixel::system::FlxCollisionType_obj::OBJECT)) || bool((collisionType == ::flixel::system::FlxCollisionType_obj::TILEMAP))))){
							HX_STACK_LINE(430)
							::flixel::system::FlxQuadTree_obj::_object = hx::TCast< flixel::FlxObject >::cast(basic);
							HX_STACK_LINE(431)
							if (((bool(::flixel::system::FlxQuadTree_obj::_object->exists) && bool((::flixel::system::FlxQuadTree_obj::_object->allowCollisions != (int)0))))){
								HX_STACK_LINE(433)
								::flixel::system::FlxQuadTree_obj::_objectLeftEdge = ::flixel::system::FlxQuadTree_obj::_object->x;
								HX_STACK_LINE(434)
								::flixel::system::FlxQuadTree_obj::_objectTopEdge = ::flixel::system::FlxQuadTree_obj::_object->y;
								HX_STACK_LINE(435)
								::flixel::system::FlxQuadTree_obj::_objectRightEdge = (::flixel::system::FlxQuadTree_obj::_object->x + ::flixel::system::FlxQuadTree_obj::_object->get_width());
								HX_STACK_LINE(436)
								::flixel::system::FlxQuadTree_obj::_objectBottomEdge = (::flixel::system::FlxQuadTree_obj::_object->y + ::flixel::system::FlxQuadTree_obj::_object->get_height());
								HX_STACK_LINE(437)
								this->addObject();
							}
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(445)
			::flixel::system::FlxQuadTree_obj::_object = hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup);
			HX_STACK_LINE(446)
			if (((bool(::flixel::system::FlxQuadTree_obj::_object->exists) && bool((::flixel::system::FlxQuadTree_obj::_object->allowCollisions != (int)0))))){
				HX_STACK_LINE(448)
				::flixel::system::FlxQuadTree_obj::_objectLeftEdge = ::flixel::system::FlxQuadTree_obj::_object->x;
				HX_STACK_LINE(449)
				::flixel::system::FlxQuadTree_obj::_objectTopEdge = ::flixel::system::FlxQuadTree_obj::_object->y;
				HX_STACK_LINE(450)
				::flixel::system::FlxQuadTree_obj::_objectRightEdge = (::flixel::system::FlxQuadTree_obj::_object->x + ::flixel::system::FlxQuadTree_obj::_object->get_width());
				HX_STACK_LINE(451)
				::flixel::system::FlxQuadTree_obj::_objectBottomEdge = (::flixel::system::FlxQuadTree_obj::_object->y + ::flixel::system::FlxQuadTree_obj::_object->get_height());
				HX_STACK_LINE(452)
				this->addObject();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxQuadTree_obj,add,(void))

Void FlxQuadTree_obj::load( ::flixel::FlxBasic ObjectOrGroup1,::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback,Dynamic ProcessCallback){
{
		HX_STACK_PUSH("FlxQuadTree::load","flixel/system/FlxQuadTree.hx",374);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ObjectOrGroup1,"ObjectOrGroup1");
		HX_STACK_ARG(ObjectOrGroup2,"ObjectOrGroup2");
		HX_STACK_ARG(NotifyCallback,"NotifyCallback");
		HX_STACK_ARG(ProcessCallback,"ProcessCallback");
		HX_STACK_LINE(375)
		this->add(ObjectOrGroup1,(int)0);
		HX_STACK_LINE(376)
		if (((ObjectOrGroup2 != null()))){
			HX_STACK_LINE(378)
			this->add(ObjectOrGroup2,(int)1);
			HX_STACK_LINE(379)
			::flixel::system::FlxQuadTree_obj::_useBothLists = true;
		}
		else{
			HX_STACK_LINE(382)
			::flixel::system::FlxQuadTree_obj::_useBothLists = false;
		}
		HX_STACK_LINE(385)
		::flixel::system::FlxQuadTree_obj::_notifyCallback = NotifyCallback;
		HX_STACK_LINE(386)
		::flixel::system::FlxQuadTree_obj::_processingCallback = ProcessCallback;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxQuadTree_obj,load,(void))

Void FlxQuadTree_obj::destroy( ){
{
		HX_STACK_PUSH("FlxQuadTree::destroy","flixel/system/FlxQuadTree.hx",311);
		HX_STACK_THIS(this);
		HX_STACK_LINE(312)
		if (((this->_headA != null()))){
			HX_STACK_LINE(313)
			this->_headA->destroy();
		}
		HX_STACK_LINE(316)
		this->_headA = null();
		HX_STACK_LINE(317)
		if (((this->_tailA != null()))){
			HX_STACK_LINE(318)
			this->_tailA->destroy();
		}
		HX_STACK_LINE(321)
		this->_tailA = null();
		HX_STACK_LINE(322)
		if (((this->_headB != null()))){
			HX_STACK_LINE(323)
			this->_headB->destroy();
		}
		HX_STACK_LINE(326)
		this->_headB = null();
		HX_STACK_LINE(327)
		if (((this->_tailB != null()))){
			HX_STACK_LINE(328)
			this->_tailB->destroy();
		}
		HX_STACK_LINE(331)
		this->_tailB = null();
		HX_STACK_LINE(333)
		if (((this->_northWestTree != null()))){
			HX_STACK_LINE(334)
			this->_northWestTree->destroy();
		}
		HX_STACK_LINE(337)
		this->_northWestTree = null();
		HX_STACK_LINE(338)
		if (((this->_northEastTree != null()))){
			HX_STACK_LINE(339)
			this->_northEastTree->destroy();
		}
		HX_STACK_LINE(342)
		this->_northEastTree = null();
		HX_STACK_LINE(343)
		if (((this->_southEastTree != null()))){
			HX_STACK_LINE(344)
			this->_southEastTree->destroy();
		}
		HX_STACK_LINE(347)
		this->_southEastTree = null();
		HX_STACK_LINE(348)
		if (((this->_southWestTree != null()))){
			HX_STACK_LINE(349)
			this->_southWestTree->destroy();
		}
		HX_STACK_LINE(352)
		this->_southWestTree = null();
		HX_STACK_LINE(354)
		::flixel::system::FlxQuadTree_obj::_object = null();
		HX_STACK_LINE(355)
		::flixel::system::FlxQuadTree_obj::_processingCallback = null();
		HX_STACK_LINE(356)
		::flixel::system::FlxQuadTree_obj::_notifyCallback = null();
		HX_STACK_LINE(358)
		this->exists = false;
		HX_STACK_LINE(361)
		this->next = ::flixel::system::FlxQuadTree_obj::_cachedTreesHead;
		HX_STACK_LINE(362)
		::flixel::system::FlxQuadTree_obj::_cachedTreesHead = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(363)
		(::flixel::system::FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,destroy,(void))

Void FlxQuadTree_obj::reset( Float X,Float Y,Float Width,Float Height,::flixel::system::FlxQuadTree Parent){
{
		HX_STACK_PUSH("FlxQuadTree::reset","flixel/system/FlxQuadTree.hx",242);
		HX_STACK_THIS(this);
		HX_STACK_ARG(X,"X");
		HX_STACK_ARG(Y,"Y");
		HX_STACK_ARG(Width,"Width");
		HX_STACK_ARG(Height,"Height");
		HX_STACK_ARG(Parent,"Parent");
		HX_STACK_LINE(243)
		this->exists = true;
		HX_STACK_LINE(245)
		{
			HX_STACK_LINE(245)
			this->x = X;
			HX_STACK_LINE(245)
			this->y = Y;
			HX_STACK_LINE(245)
			this->width = Width;
			HX_STACK_LINE(245)
			this->height = Height;
			HX_STACK_LINE(245)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(247)
		this->_headA = this->_tailA = ::flixel::system::FlxList_obj::recycle();
		HX_STACK_LINE(248)
		this->_headB = this->_tailB = ::flixel::system::FlxList_obj::recycle();
		HX_STACK_LINE(251)
		if (((Parent != null()))){
			HX_STACK_LINE(253)
			::flixel::system::FlxList iterator;		HX_STACK_VAR(iterator,"iterator");
			HX_STACK_LINE(254)
			::flixel::system::FlxList ot;		HX_STACK_VAR(ot,"ot");
			HX_STACK_LINE(255)
			if (((Parent->_headA->object != null()))){
				HX_STACK_LINE(257)
				iterator = Parent->_headA;
				HX_STACK_LINE(258)
				while(((iterator != null()))){
					HX_STACK_LINE(260)
					if (((this->_tailA->object != null()))){
						HX_STACK_LINE(262)
						ot = this->_tailA;
						HX_STACK_LINE(263)
						this->_tailA = ::flixel::system::FlxList_obj::recycle();
						HX_STACK_LINE(264)
						ot->next = this->_tailA;
					}
					HX_STACK_LINE(266)
					this->_tailA->object = iterator->object;
					HX_STACK_LINE(267)
					iterator = iterator->next;
				}
			}
			HX_STACK_LINE(270)
			if (((Parent->_headB->object != null()))){
				HX_STACK_LINE(272)
				iterator = Parent->_headB;
				HX_STACK_LINE(273)
				while(((iterator != null()))){
					HX_STACK_LINE(275)
					if (((this->_tailB->object != null()))){
						HX_STACK_LINE(277)
						ot = this->_tailB;
						HX_STACK_LINE(278)
						this->_tailB = ::flixel::system::FlxList_obj::recycle();
						HX_STACK_LINE(279)
						ot->next = this->_tailB;
					}
					HX_STACK_LINE(281)
					this->_tailB->object = iterator->object;
					HX_STACK_LINE(282)
					iterator = iterator->next;
				}
			}
		}
		else{
			HX_STACK_LINE(287)
			::flixel::system::FlxQuadTree_obj::_min = ::Math_obj::floor((Float(((this->width + this->height))) / Float((((int)2 * ::flixel::system::FlxQuadTree_obj::divisions)))));
		}
		HX_STACK_LINE(290)
		this->_canSubdivide = (bool((this->width > ::flixel::system::FlxQuadTree_obj::_min)) || bool((this->height > ::flixel::system::FlxQuadTree_obj::_min)));
		HX_STACK_LINE(293)
		this->_northWestTree = null();
		HX_STACK_LINE(294)
		this->_northEastTree = null();
		HX_STACK_LINE(295)
		this->_southEastTree = null();
		HX_STACK_LINE(296)
		this->_southWestTree = null();
		HX_STACK_LINE(297)
		this->_leftEdge = this->x;
		HX_STACK_LINE(298)
		this->_rightEdge = (this->x + this->width);
		HX_STACK_LINE(299)
		this->_halfWidth = (Float(this->width) / Float((int)2));
		HX_STACK_LINE(300)
		this->_midpointX = (this->_leftEdge + this->_halfWidth);
		HX_STACK_LINE(301)
		this->_topEdge = this->y;
		HX_STACK_LINE(302)
		this->_bottomEdge = (this->y + this->height);
		HX_STACK_LINE(303)
		this->_halfHeight = (Float(this->height) / Float((int)2));
		HX_STACK_LINE(304)
		this->_midpointY = (this->_topEdge + this->_halfHeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxQuadTree_obj,reset,(void))

int FlxQuadTree_obj::A_LIST;

int FlxQuadTree_obj::B_LIST;

int FlxQuadTree_obj::divisions;

int FlxQuadTree_obj::_min;

::flixel::FlxObject FlxQuadTree_obj::_object;

Float FlxQuadTree_obj::_objectLeftEdge;

Float FlxQuadTree_obj::_objectTopEdge;

Float FlxQuadTree_obj::_objectRightEdge;

Float FlxQuadTree_obj::_objectBottomEdge;

int FlxQuadTree_obj::_list;

bool FlxQuadTree_obj::_useBothLists;

Dynamic FlxQuadTree_obj::_processingCallback;

Dynamic FlxQuadTree_obj::_notifyCallback;

::flixel::system::FlxList FlxQuadTree_obj::_iterator;

Float FlxQuadTree_obj::_objectHullX;

Float FlxQuadTree_obj::_objectHullY;

Float FlxQuadTree_obj::_objectHullWidth;

Float FlxQuadTree_obj::_objectHullHeight;

Float FlxQuadTree_obj::_checkObjectHullX;

Float FlxQuadTree_obj::_checkObjectHullY;

Float FlxQuadTree_obj::_checkObjectHullWidth;

Float FlxQuadTree_obj::_checkObjectHullHeight;

int FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES;

::flixel::system::FlxQuadTree FlxQuadTree_obj::_cachedTreesHead;

::flixel::system::FlxQuadTree FlxQuadTree_obj::recycle( Float X,Float Y,Float Width,Float Height,::flixel::system::FlxQuadTree Parent){
	HX_STACK_PUSH("FlxQuadTree::recycle","flixel/system/FlxQuadTree.hx",213);
	HX_STACK_ARG(X,"X");
	HX_STACK_ARG(Y,"Y");
	HX_STACK_ARG(Width,"Width");
	HX_STACK_ARG(Height,"Height");
	HX_STACK_ARG(Parent,"Parent");
	HX_STACK_LINE(213)
	if (((::flixel::system::FlxQuadTree_obj::_cachedTreesHead != null()))){
		HX_STACK_LINE(216)
		::flixel::system::FlxQuadTree cachedTree = ::flixel::system::FlxQuadTree_obj::_cachedTreesHead;		HX_STACK_VAR(cachedTree,"cachedTree");
		HX_STACK_LINE(217)
		::flixel::system::FlxQuadTree_obj::_cachedTreesHead = ::flixel::system::FlxQuadTree_obj::_cachedTreesHead->next;
		HX_STACK_LINE(218)
		(::flixel::system::FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES)--;
		HX_STACK_LINE(220)
		cachedTree->reset(X,Y,Width,Height,Parent);
		HX_STACK_LINE(221)
		return cachedTree;
	}
	else{
		HX_STACK_LINE(224)
		return ::flixel::system::FlxQuadTree_obj::__new(X,Y,Width,Height,Parent);
	}
	HX_STACK_LINE(213)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxQuadTree_obj,recycle,return )

Void FlxQuadTree_obj::clearCache( ){
{
		HX_STACK_PUSH("FlxQuadTree::clearCache","flixel/system/FlxQuadTree.hx",230);
		HX_STACK_LINE(232)
		while(((::flixel::system::FlxQuadTree_obj::_cachedTreesHead != null()))){
			HX_STACK_LINE(234)
			::flixel::system::FlxQuadTree node = ::flixel::system::FlxQuadTree_obj::_cachedTreesHead;		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(235)
			::flixel::system::FlxQuadTree_obj::_cachedTreesHead = ::flixel::system::FlxQuadTree_obj::_cachedTreesHead->next;
			HX_STACK_LINE(236)
			node->next = null();
		}
		HX_STACK_LINE(238)
		::flixel::system::FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxQuadTree_obj,clearCache,(void))


FlxQuadTree_obj::FlxQuadTree_obj()
{
}

void FlxQuadTree_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxQuadTree);
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(_midpointY,"_midpointY");
	HX_MARK_MEMBER_NAME(_midpointX,"_midpointX");
	HX_MARK_MEMBER_NAME(_halfHeight,"_halfHeight");
	HX_MARK_MEMBER_NAME(_halfWidth,"_halfWidth");
	HX_MARK_MEMBER_NAME(_bottomEdge,"_bottomEdge");
	HX_MARK_MEMBER_NAME(_topEdge,"_topEdge");
	HX_MARK_MEMBER_NAME(_rightEdge,"_rightEdge");
	HX_MARK_MEMBER_NAME(_leftEdge,"_leftEdge");
	HX_MARK_MEMBER_NAME(_southWestTree,"_southWestTree");
	HX_MARK_MEMBER_NAME(_southEastTree,"_southEastTree");
	HX_MARK_MEMBER_NAME(_northEastTree,"_northEastTree");
	HX_MARK_MEMBER_NAME(_northWestTree,"_northWestTree");
	HX_MARK_MEMBER_NAME(_tailB,"_tailB");
	HX_MARK_MEMBER_NAME(_headB,"_headB");
	HX_MARK_MEMBER_NAME(_tailA,"_tailA");
	HX_MARK_MEMBER_NAME(_headA,"_headA");
	HX_MARK_MEMBER_NAME(_canSubdivide,"_canSubdivide");
	HX_MARK_MEMBER_NAME(exists,"exists");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxQuadTree_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(_midpointY,"_midpointY");
	HX_VISIT_MEMBER_NAME(_midpointX,"_midpointX");
	HX_VISIT_MEMBER_NAME(_halfHeight,"_halfHeight");
	HX_VISIT_MEMBER_NAME(_halfWidth,"_halfWidth");
	HX_VISIT_MEMBER_NAME(_bottomEdge,"_bottomEdge");
	HX_VISIT_MEMBER_NAME(_topEdge,"_topEdge");
	HX_VISIT_MEMBER_NAME(_rightEdge,"_rightEdge");
	HX_VISIT_MEMBER_NAME(_leftEdge,"_leftEdge");
	HX_VISIT_MEMBER_NAME(_southWestTree,"_southWestTree");
	HX_VISIT_MEMBER_NAME(_southEastTree,"_southEastTree");
	HX_VISIT_MEMBER_NAME(_northEastTree,"_northEastTree");
	HX_VISIT_MEMBER_NAME(_northWestTree,"_northWestTree");
	HX_VISIT_MEMBER_NAME(_tailB,"_tailB");
	HX_VISIT_MEMBER_NAME(_headB,"_headB");
	HX_VISIT_MEMBER_NAME(_tailA,"_tailA");
	HX_VISIT_MEMBER_NAME(_headA,"_headA");
	HX_VISIT_MEMBER_NAME(_canSubdivide,"_canSubdivide");
	HX_VISIT_MEMBER_NAME(exists,"exists");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxQuadTree_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_min") ) { return _min; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { return _list; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_tailB") ) { return _tailB; }
		if (HX_FIELD_EQ(inName,"_headB") ) { return _headB; }
		if (HX_FIELD_EQ(inName,"_tailA") ) { return _tailA; }
		if (HX_FIELD_EQ(inName,"_headA") ) { return _headA; }
		if (HX_FIELD_EQ(inName,"exists") ) { return exists; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { return _object; }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_topEdge") ) { return _topEdge; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"divisions") ) { return divisions; }
		if (HX_FIELD_EQ(inName,"_iterator") ) { return _iterator; }
		if (HX_FIELD_EQ(inName,"addToList") ) { return addToList_dyn(); }
		if (HX_FIELD_EQ(inName,"addObject") ) { return addObject_dyn(); }
		if (HX_FIELD_EQ(inName,"_leftEdge") ) { return _leftEdge; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { return clearCache_dyn(); }
		if (HX_FIELD_EQ(inName,"_midpointY") ) { return _midpointY; }
		if (HX_FIELD_EQ(inName,"_midpointX") ) { return _midpointX; }
		if (HX_FIELD_EQ(inName,"_halfWidth") ) { return _halfWidth; }
		if (HX_FIELD_EQ(inName,"_rightEdge") ) { return _rightEdge; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"overlapNode") ) { return overlapNode_dyn(); }
		if (HX_FIELD_EQ(inName,"_halfHeight") ) { return _halfHeight; }
		if (HX_FIELD_EQ(inName,"_bottomEdge") ) { return _bottomEdge; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_objectHullX") ) { return _objectHullX; }
		if (HX_FIELD_EQ(inName,"_objectHullY") ) { return _objectHullY; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_useBothLists") ) { return _useBothLists; }
		if (HX_FIELD_EQ(inName,"_canSubdivide") ) { return _canSubdivide; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_objectTopEdge") ) { return _objectTopEdge; }
		if (HX_FIELD_EQ(inName,"_southWestTree") ) { return _southWestTree; }
		if (HX_FIELD_EQ(inName,"_southEastTree") ) { return _southEastTree; }
		if (HX_FIELD_EQ(inName,"_northEastTree") ) { return _northEastTree; }
		if (HX_FIELD_EQ(inName,"_northWestTree") ) { return _northWestTree; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_objectLeftEdge") ) { return _objectLeftEdge; }
		if (HX_FIELD_EQ(inName,"_notifyCallback") ) { return _notifyCallback; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_objectRightEdge") ) { return _objectRightEdge; }
		if (HX_FIELD_EQ(inName,"_objectHullWidth") ) { return _objectHullWidth; }
		if (HX_FIELD_EQ(inName,"_cachedTreesHead") ) { return _cachedTreesHead; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_objectBottomEdge") ) { return _objectBottomEdge; }
		if (HX_FIELD_EQ(inName,"_objectHullHeight") ) { return _objectHullHeight; }
		if (HX_FIELD_EQ(inName,"_checkObjectHullX") ) { return _checkObjectHullX; }
		if (HX_FIELD_EQ(inName,"_checkObjectHullY") ) { return _checkObjectHullY; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_processingCallback") ) { return _processingCallback; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_checkObjectHullWidth") ) { return _checkObjectHullWidth; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_checkObjectHullHeight") ) { return _checkObjectHullHeight; }
		if (HX_FIELD_EQ(inName,"_NUM_CACHED_QUAD_TREES") ) { return _NUM_CACHED_QUAD_TREES; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxQuadTree_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_min") ) { _min=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::flixel::system::FlxQuadTree >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { _list=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_tailB") ) { _tailB=inValue.Cast< ::flixel::system::FlxList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headB") ) { _headB=inValue.Cast< ::flixel::system::FlxList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tailA") ) { _tailA=inValue.Cast< ::flixel::system::FlxList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headA") ) { _headA=inValue.Cast< ::flixel::system::FlxList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exists") ) { exists=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_topEdge") ) { _topEdge=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"divisions") ) { divisions=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_iterator") ) { _iterator=inValue.Cast< ::flixel::system::FlxList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_leftEdge") ) { _leftEdge=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_midpointY") ) { _midpointY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_midpointX") ) { _midpointX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfWidth") ) { _halfWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rightEdge") ) { _rightEdge=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_halfHeight") ) { _halfHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bottomEdge") ) { _bottomEdge=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_objectHullX") ) { _objectHullX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_objectHullY") ) { _objectHullY=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_useBothLists") ) { _useBothLists=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_canSubdivide") ) { _canSubdivide=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_objectTopEdge") ) { _objectTopEdge=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_southWestTree") ) { _southWestTree=inValue.Cast< ::flixel::system::FlxQuadTree >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_southEastTree") ) { _southEastTree=inValue.Cast< ::flixel::system::FlxQuadTree >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_northEastTree") ) { _northEastTree=inValue.Cast< ::flixel::system::FlxQuadTree >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_northWestTree") ) { _northWestTree=inValue.Cast< ::flixel::system::FlxQuadTree >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_objectLeftEdge") ) { _objectLeftEdge=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_notifyCallback") ) { _notifyCallback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_objectRightEdge") ) { _objectRightEdge=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_objectHullWidth") ) { _objectHullWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cachedTreesHead") ) { _cachedTreesHead=inValue.Cast< ::flixel::system::FlxQuadTree >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_objectBottomEdge") ) { _objectBottomEdge=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_objectHullHeight") ) { _objectHullHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_checkObjectHullX") ) { _checkObjectHullX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_checkObjectHullY") ) { _checkObjectHullY=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_processingCallback") ) { _processingCallback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_checkObjectHullWidth") ) { _checkObjectHullWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_checkObjectHullHeight") ) { _checkObjectHullHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_NUM_CACHED_QUAD_TREES") ) { _NUM_CACHED_QUAD_TREES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxQuadTree_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("_midpointY"));
	outFields->push(HX_CSTRING("_midpointX"));
	outFields->push(HX_CSTRING("_halfHeight"));
	outFields->push(HX_CSTRING("_halfWidth"));
	outFields->push(HX_CSTRING("_bottomEdge"));
	outFields->push(HX_CSTRING("_topEdge"));
	outFields->push(HX_CSTRING("_rightEdge"));
	outFields->push(HX_CSTRING("_leftEdge"));
	outFields->push(HX_CSTRING("_southWestTree"));
	outFields->push(HX_CSTRING("_southEastTree"));
	outFields->push(HX_CSTRING("_northEastTree"));
	outFields->push(HX_CSTRING("_northWestTree"));
	outFields->push(HX_CSTRING("_tailB"));
	outFields->push(HX_CSTRING("_headB"));
	outFields->push(HX_CSTRING("_tailA"));
	outFields->push(HX_CSTRING("_headA"));
	outFields->push(HX_CSTRING("_canSubdivide"));
	outFields->push(HX_CSTRING("exists"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("A_LIST"),
	HX_CSTRING("B_LIST"),
	HX_CSTRING("divisions"),
	HX_CSTRING("_min"),
	HX_CSTRING("_object"),
	HX_CSTRING("_objectLeftEdge"),
	HX_CSTRING("_objectTopEdge"),
	HX_CSTRING("_objectRightEdge"),
	HX_CSTRING("_objectBottomEdge"),
	HX_CSTRING("_list"),
	HX_CSTRING("_useBothLists"),
	HX_CSTRING("_processingCallback"),
	HX_CSTRING("_notifyCallback"),
	HX_CSTRING("_iterator"),
	HX_CSTRING("_objectHullX"),
	HX_CSTRING("_objectHullY"),
	HX_CSTRING("_objectHullWidth"),
	HX_CSTRING("_objectHullHeight"),
	HX_CSTRING("_checkObjectHullX"),
	HX_CSTRING("_checkObjectHullY"),
	HX_CSTRING("_checkObjectHullWidth"),
	HX_CSTRING("_checkObjectHullHeight"),
	HX_CSTRING("_NUM_CACHED_QUAD_TREES"),
	HX_CSTRING("_cachedTreesHead"),
	HX_CSTRING("recycle"),
	HX_CSTRING("clearCache"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("overlapNode"),
	HX_CSTRING("execute"),
	HX_CSTRING("addToList"),
	HX_CSTRING("addObject"),
	HX_CSTRING("add"),
	HX_CSTRING("load"),
	HX_CSTRING("destroy"),
	HX_CSTRING("reset"),
	HX_CSTRING("next"),
	HX_CSTRING("_midpointY"),
	HX_CSTRING("_midpointX"),
	HX_CSTRING("_halfHeight"),
	HX_CSTRING("_halfWidth"),
	HX_CSTRING("_bottomEdge"),
	HX_CSTRING("_topEdge"),
	HX_CSTRING("_rightEdge"),
	HX_CSTRING("_leftEdge"),
	HX_CSTRING("_southWestTree"),
	HX_CSTRING("_southEastTree"),
	HX_CSTRING("_northEastTree"),
	HX_CSTRING("_northWestTree"),
	HX_CSTRING("_tailB"),
	HX_CSTRING("_headB"),
	HX_CSTRING("_tailA"),
	HX_CSTRING("_headA"),
	HX_CSTRING("_canSubdivide"),
	HX_CSTRING("exists"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::A_LIST,"A_LIST");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::B_LIST,"B_LIST");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::divisions,"divisions");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_min,"_min");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_object,"_object");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectLeftEdge,"_objectLeftEdge");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectTopEdge,"_objectTopEdge");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectRightEdge,"_objectRightEdge");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectBottomEdge,"_objectBottomEdge");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_list,"_list");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_useBothLists,"_useBothLists");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_processingCallback,"_processingCallback");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_notifyCallback,"_notifyCallback");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_iterator,"_iterator");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectHullX,"_objectHullX");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectHullY,"_objectHullY");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectHullWidth,"_objectHullWidth");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_objectHullHeight,"_objectHullHeight");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullX,"_checkObjectHullX");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullY,"_checkObjectHullY");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullWidth,"_checkObjectHullWidth");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullHeight,"_checkObjectHullHeight");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES,"_NUM_CACHED_QUAD_TREES");
	HX_MARK_MEMBER_NAME(FlxQuadTree_obj::_cachedTreesHead,"_cachedTreesHead");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::A_LIST,"A_LIST");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::B_LIST,"B_LIST");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::divisions,"divisions");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_min,"_min");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_object,"_object");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectLeftEdge,"_objectLeftEdge");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectTopEdge,"_objectTopEdge");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectRightEdge,"_objectRightEdge");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectBottomEdge,"_objectBottomEdge");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_list,"_list");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_useBothLists,"_useBothLists");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_processingCallback,"_processingCallback");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_notifyCallback,"_notifyCallback");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_iterator,"_iterator");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectHullX,"_objectHullX");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectHullY,"_objectHullY");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectHullWidth,"_objectHullWidth");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_objectHullHeight,"_objectHullHeight");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullX,"_checkObjectHullX");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullY,"_checkObjectHullY");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullWidth,"_checkObjectHullWidth");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_checkObjectHullHeight,"_checkObjectHullHeight");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_NUM_CACHED_QUAD_TREES,"_NUM_CACHED_QUAD_TREES");
	HX_VISIT_MEMBER_NAME(FlxQuadTree_obj::_cachedTreesHead,"_cachedTreesHead");
};

Class FlxQuadTree_obj::__mClass;

void FlxQuadTree_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.FlxQuadTree"), hx::TCanCast< FlxQuadTree_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxQuadTree_obj::__boot()
{
	A_LIST= (int)0;
	B_LIST= (int)1;
	_NUM_CACHED_QUAD_TREES= (int)0;
}

} // end namespace flixel
} // end namespace system
