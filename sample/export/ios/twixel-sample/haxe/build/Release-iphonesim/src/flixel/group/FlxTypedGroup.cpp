#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxCollisionType
#include <flixel/system/FlxCollisionType.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace group{

Void FlxTypedGroup_obj::__construct(hx::Null< int >  __o_MaxSize)
{
HX_STACK_PUSH("FlxTypedGroup::new","flixel/group/FlxTypedGroup.hx",14);
int MaxSize = __o_MaxSize.Default(0);
{
	HX_STACK_LINE(32)
	this->_marker = (int)0;
	HX_STACK_LINE(28)
	this->length = (int)0;
	HX_STACK_LINE(50)
	super::__construct();
	HX_STACK_LINE(52)
	this->set_maxSize(::Std_obj::_int(::Math_obj::abs(MaxSize)));
	HX_STACK_LINE(54)
	this->_members = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(55)
	this->_basics = this->_members;
	HX_STACK_LINE(56)
	this->collisionType = ::flixel::system::FlxCollisionType_obj::GROUP;
}
;
	return null();
}

FlxTypedGroup_obj::~FlxTypedGroup_obj() { }

Dynamic FlxTypedGroup_obj::__CreateEmpty() { return  new FlxTypedGroup_obj; }
hx::ObjectPtr< FlxTypedGroup_obj > FlxTypedGroup_obj::__new(hx::Null< int >  __o_MaxSize)
{  hx::ObjectPtr< FlxTypedGroup_obj > result = new FlxTypedGroup_obj();
	result->__construct(__o_MaxSize);
	return result;}

Dynamic FlxTypedGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedGroup_obj > result = new FlxTypedGroup_obj();
	result->__construct(inArgs[0]);
	return result;}

Dynamic FlxTypedGroup_obj::get_members( ){
	HX_STACK_PUSH("FlxTypedGroup::get_members","flixel/group/FlxTypedGroup.hx",796);
	HX_STACK_THIS(this);
	HX_STACK_LINE(796)
	return this->_members;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,get_members,return )

int FlxTypedGroup_obj::set_maxSize( int Size){
	HX_STACK_PUSH("FlxTypedGroup::set_maxSize","flixel/group/FlxTypedGroup.hx",762);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Size,"Size");
	HX_STACK_LINE(763)
	this->maxSize = ::Std_obj::_int(::Math_obj::abs(Size));
	HX_STACK_LINE(765)
	if (((this->_marker >= this->maxSize))){
		HX_STACK_LINE(766)
		this->_marker = (int)0;
	}
	HX_STACK_LINE(769)
	if (((bool((bool((this->maxSize == (int)0)) || bool((this->_members == null())))) || bool((this->maxSize >= this->_members->__Field(HX_CSTRING("length"),true)))))){
		HX_STACK_LINE(770)
		return this->maxSize;
	}
	HX_STACK_LINE(775)
	int i = this->maxSize;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(776)
	int l = this->_members->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(777)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(779)
	while(((i < l))){
		HX_STACK_LINE(781)
		basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
		HX_STACK_LINE(783)
		if (((basic != null()))){
			HX_STACK_LINE(784)
			basic->destroy();
		}
	}
	HX_STACK_LINE(789)
	this->length = this->maxSize;
	HX_STACK_LINE(790)
	::flixel::util::FlxArrayUtil_obj::setLength_flixel_group_FlxTypedGroup_T(this->_members,this->maxSize);
	HX_STACK_LINE(792)
	return this->maxSize;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,set_maxSize,return )

Void FlxTypedGroup_obj::forEachExists( Dynamic Function){
{
		HX_STACK_PUSH("FlxTypedGroup::forEachExists","flixel/group/FlxTypedGroup.hx",746);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Function,"Function");
		HX_STACK_LINE(747)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(748)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(750)
		while(((i < this->length))){
			HX_STACK_LINE(752)
			basic = this->_basics->__get(i).StaticCast< ::flixel::FlxBasic >();
			HX_STACK_LINE(753)
			if (((bool((basic != null())) && bool(basic->exists)))){
				HX_STACK_LINE(754)
				Function(this->_members->__GetItem(i)).Cast< Void >();
			}
			HX_STACK_LINE(757)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,forEachExists,(void))

Void FlxTypedGroup_obj::forEachDead( Dynamic Function){
{
		HX_STACK_PUSH("FlxTypedGroup::forEachDead","flixel/group/FlxTypedGroup.hx",725);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Function,"Function");
		HX_STACK_LINE(726)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(727)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(729)
		while(((i < this->length))){
			HX_STACK_LINE(731)
			basic = this->_basics->__get(i).StaticCast< ::flixel::FlxBasic >();
			HX_STACK_LINE(732)
			if (((bool((basic != null())) && bool(!(basic->alive))))){
				HX_STACK_LINE(733)
				Function(this->_members->__GetItem(i)).Cast< Void >();
			}
			HX_STACK_LINE(736)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,forEachDead,(void))

Void FlxTypedGroup_obj::forEachAlive( Dynamic Function){
{
		HX_STACK_PUSH("FlxTypedGroup::forEachAlive","flixel/group/FlxTypedGroup.hx",704);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Function,"Function");
		HX_STACK_LINE(705)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(706)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(708)
		while(((i < this->length))){
			HX_STACK_LINE(710)
			basic = this->_basics->__get(i).StaticCast< ::flixel::FlxBasic >();
			HX_STACK_LINE(711)
			if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(basic->alive)))){
				HX_STACK_LINE(712)
				Function(this->_members->__GetItem(i)).Cast< Void >();
			}
			HX_STACK_LINE(715)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,forEachAlive,(void))

Void FlxTypedGroup_obj::forEach( Dynamic Function){
{
		HX_STACK_PUSH("FlxTypedGroup::forEach","flixel/group/FlxTypedGroup.hx",688);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Function,"Function");
		HX_STACK_LINE(689)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Dynamic _g1 = this->_members;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(689)
		while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(689)
			Dynamic member = _g1->__GetItem(_g);		HX_STACK_VAR(member,"member");
			HX_STACK_LINE(689)
			++(_g);
			HX_STACK_LINE(691)
			if (((member != null()))){
				HX_STACK_LINE(692)
				Function(member).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,forEach,(void))

::flixel::group::FlxTypedGroupIterator FlxTypedGroup_obj::iterator( Dynamic filter){
	HX_STACK_PUSH("FlxTypedGroup::iterator","flixel/group/FlxTypedGroup.hx",678);
	HX_STACK_THIS(this);
	HX_STACK_ARG(filter,"filter");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	bool run(Dynamic m){
		HX_STACK_PUSH("*::_Function_1_1","flixel/group/FlxTypedGroup.hx",679);
		HX_STACK_ARG(m,"m");
		{
			HX_STACK_LINE(679)
			return true;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(678)
	return ::flixel::group::FlxTypedGroupIterator_obj::__new(this->_members,(  (((filter == null()))) ? Dynamic( Dynamic(new _Function_1_1())) : Dynamic(filter) ));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,iterator,return )

Void FlxTypedGroup_obj::kill( ){
{
		HX_STACK_PUSH("FlxTypedGroup::kill","flixel/group/FlxTypedGroup.hx",655);
		HX_STACK_THIS(this);
		HX_STACK_LINE(656)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(657)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(659)
		while(((i < this->length))){
			HX_STACK_LINE(661)
			basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
			HX_STACK_LINE(663)
			if (((bool((basic != null())) && bool(basic->exists)))){
				HX_STACK_LINE(664)
				basic->kill();
			}
		}
		HX_STACK_LINE(669)
		this->super::kill();
	}
return null();
}


Void FlxTypedGroup_obj::clear( ){
{
		HX_STACK_PUSH("FlxTypedGroup::clear","flixel/group/FlxTypedGroup.hx",645);
		HX_STACK_THIS(this);
		HX_STACK_LINE(646)
		this->length = (int)0;
		HX_STACK_LINE(647)
		this->_members->__Field(HX_CSTRING("splice"),true)((int)0,this->_members->__Field(HX_CSTRING("length"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,clear,(void))

Dynamic FlxTypedGroup_obj::getRandom( hx::Null< int >  __o_StartIndex,hx::Null< int >  __o_Length){
int StartIndex = __o_StartIndex.Default(0);
int Length = __o_Length.Default(0);
	HX_STACK_PUSH("FlxTypedGroup::getRandom","flixel/group/FlxTypedGroup.hx",627);
	HX_STACK_THIS(this);
	HX_STACK_ARG(StartIndex,"StartIndex");
	HX_STACK_ARG(Length,"Length");
{
		HX_STACK_LINE(628)
		if (((StartIndex < (int)0))){
			HX_STACK_LINE(629)
			StartIndex = (int)0;
		}
		HX_STACK_LINE(632)
		if (((Length <= (int)0))){
			HX_STACK_LINE(633)
			Length = this->length;
		}
		HX_STACK_LINE(637)
		return ::flixel::util::FlxRandom_obj::getObject_getRandom_T(this->_members,StartIndex,Length);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getRandom,return )

int FlxTypedGroup_obj::countDead( ){
	HX_STACK_PUSH("FlxTypedGroup::countDead","flixel/group/FlxTypedGroup.hx",594);
	HX_STACK_THIS(this);
	HX_STACK_LINE(595)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(596)
	int count = (int)-1;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(597)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(599)
	while(((i < this->length))){
		HX_STACK_LINE(601)
		basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
		HX_STACK_LINE(603)
		if (((basic != null()))){
			HX_STACK_LINE(605)
			if (((count < (int)0))){
				HX_STACK_LINE(606)
				count = (int)0;
			}
			HX_STACK_LINE(609)
			if ((!(basic->alive))){
				HX_STACK_LINE(610)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(616)
	return count;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countDead,return )

int FlxTypedGroup_obj::countLiving( ){
	HX_STACK_PUSH("FlxTypedGroup::countLiving","flixel/group/FlxTypedGroup.hx",563);
	HX_STACK_THIS(this);
	HX_STACK_LINE(564)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(565)
	int count = (int)-1;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(566)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(568)
	while(((i < this->length))){
		HX_STACK_LINE(570)
		basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
		HX_STACK_LINE(572)
		if (((basic != null()))){
			HX_STACK_LINE(574)
			if (((count < (int)0))){
				HX_STACK_LINE(575)
				count = (int)0;
			}
			HX_STACK_LINE(578)
			if (((bool(basic->exists) && bool(basic->alive)))){
				HX_STACK_LINE(579)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(585)
	return count;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countLiving,return )

Dynamic FlxTypedGroup_obj::getFirstDead( ){
	HX_STACK_PUSH("FlxTypedGroup::getFirstDead","flixel/group/FlxTypedGroup.hx",540);
	HX_STACK_THIS(this);
	HX_STACK_LINE(541)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(542)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(544)
	while(((i < this->length))){
		HX_STACK_LINE(546)
		basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
		HX_STACK_LINE(548)
		if (((bool((basic != null())) && bool(!(basic->alive))))){
			HX_STACK_LINE(549)
			return this->_members->__GetItem((i - (int)1));
		}
	}
	HX_STACK_LINE(554)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstDead,return )

Dynamic FlxTypedGroup_obj::getFirstAlive( ){
	HX_STACK_PUSH("FlxTypedGroup::getFirstAlive","flixel/group/FlxTypedGroup.hx",516);
	HX_STACK_THIS(this);
	HX_STACK_LINE(517)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(518)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(520)
	while(((i < this->length))){
		HX_STACK_LINE(522)
		basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
		HX_STACK_LINE(524)
		if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(basic->alive)))){
			HX_STACK_LINE(525)
			return this->_members->__GetItem((i - (int)1));
		}
	}
	HX_STACK_LINE(530)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstAlive,return )

Dynamic FlxTypedGroup_obj::getFirstExisting( ){
	HX_STACK_PUSH("FlxTypedGroup::getFirstExisting","flixel/group/FlxTypedGroup.hx",492);
	HX_STACK_THIS(this);
	HX_STACK_LINE(493)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(494)
	::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
	HX_STACK_LINE(496)
	while(((i < this->length))){
		HX_STACK_LINE(498)
		basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
		HX_STACK_LINE(500)
		if (((bool((basic != null())) && bool(basic->exists)))){
			HX_STACK_LINE(501)
			return this->_members->__GetItem((i - (int)1));
		}
	}
	HX_STACK_LINE(506)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstExisting,return )

int FlxTypedGroup_obj::getFirstNull( ){
	HX_STACK_PUSH("FlxTypedGroup::getFirstNull","flixel/group/FlxTypedGroup.hx",466);
	HX_STACK_THIS(this);
	HX_STACK_LINE(467)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(468)
	int l = this->_members->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(470)
	while(((i < l))){
		HX_STACK_LINE(471)
		if (((this->_members->__GetItem(i) == null()))){
			HX_STACK_LINE(473)
			return i;
		}
		else{
			HX_STACK_LINE(477)
			(i)++;
		}
	}
	HX_STACK_LINE(482)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstNull,return )

Dynamic FlxTypedGroup_obj::getFirstAvailable( ::Class ObjectClass,hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_PUSH("FlxTypedGroup::getFirstAvailable","flixel/group/FlxTypedGroup.hx",438);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjectClass,"ObjectClass");
	HX_STACK_ARG(Force,"Force");
{
		HX_STACK_LINE(439)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(440)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(442)
		while(((i < this->length))){
			HX_STACK_LINE(444)
			basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
			HX_STACK_LINE(446)
			if (((bool((bool((basic != null())) && bool(!(basic->exists)))) && bool(((bool((ObjectClass == null())) || bool(::Std_obj::is(basic,ObjectClass)))))))){
				HX_STACK_LINE(448)
				if (((bool(Force) && bool((::Type_obj::getClassName(::Type_obj::getClass(basic)) != ::Type_obj::getClassName(ObjectClass)))))){
					HX_STACK_LINE(449)
					continue;
				}
				HX_STACK_LINE(452)
				return this->_members->__GetItem((i - (int)1));
			}
		}
		HX_STACK_LINE(456)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getFirstAvailable,return )

Void FlxTypedGroup_obj::callAll( ::String FunctionName,Dynamic Args,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(true);
	HX_STACK_PUSH("FlxTypedGroup::callAll","flixel/group/FlxTypedGroup.hx",404);
	HX_STACK_THIS(this);
	HX_STACK_ARG(FunctionName,"FunctionName");
	HX_STACK_ARG(Args,"Args");
	HX_STACK_ARG(Recurse,"Recurse");
{
		HX_STACK_LINE(405)
		if (((Args == null()))){
			HX_STACK_LINE(406)
			Args = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(408)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(409)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(411)
		while(((i < this->length))){
			HX_STACK_LINE(413)
			basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
			HX_STACK_LINE(415)
			if (((basic != null()))){
				HX_STACK_LINE(416)
				if (((bool(Recurse) && bool((basic->collisionType == ::flixel::system::FlxCollisionType_obj::GROUP))))){
					HX_STACK_LINE(418)
					(hx::TCast< flixel::group::FlxTypedGroup >::cast(basic))->callAll(FunctionName,Args,Recurse);
				}
				else{
					HX_STACK_LINE(422)
					::Reflect_obj::callMethod(basic,(  (((basic == null()))) ? Dynamic(null()) : Dynamic(basic->__Field(FunctionName,true)) ),Args);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedGroup_obj,callAll,(void))

Void FlxTypedGroup_obj::setAll( ::String VariableName,Dynamic Value,hx::Null< bool >  __o_Recurse){
bool Recurse = __o_Recurse.Default(true);
	HX_STACK_PUSH("FlxTypedGroup::setAll","flixel/group/FlxTypedGroup.hx",374);
	HX_STACK_THIS(this);
	HX_STACK_ARG(VariableName,"VariableName");
	HX_STACK_ARG(Value,"Value");
	HX_STACK_ARG(Recurse,"Recurse");
{
		HX_STACK_LINE(375)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(376)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(378)
		while(((i < this->length))){
			HX_STACK_LINE(380)
			basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
			HX_STACK_LINE(382)
			if (((basic != null()))){
				HX_STACK_LINE(383)
				if (((bool(Recurse) && bool((basic->collisionType == ::flixel::system::FlxCollisionType_obj::GROUP))))){
					HX_STACK_LINE(385)
					basic->__Field(HX_CSTRING("setAll"),true)(VariableName,Value,Recurse);
				}
				else{
					HX_STACK_LINE(389)
					if (((basic != null()))){
						HX_STACK_LINE(390)
						basic->__SetField(VariableName,Value,true);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedGroup_obj,setAll,(void))

Void FlxTypedGroup_obj::sort( Dynamic Function,hx::Null< int >  __o_Order){
int Order = __o_Order.Default(-1);
	HX_STACK_PUSH("FlxTypedGroup::sort","flixel/group/FlxTypedGroup.hx",362);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Function,"Function");
	HX_STACK_ARG(Order,"Order");
{
		struct _Function_1_1{
			inline static Dynamic Block( int &Order,Dynamic &Function){
				HX_STACK_PUSH("*::closure","flixel/group/FlxTypedGroup.hx",363);
				{
					HX_STACK_LINE(363)
					Dynamic f = Dynamic( Array_obj<Dynamic>::__new().Add(Function));		HX_STACK_VAR(f,"f");
					Array< int > a1 = Array_obj< int >::__new().Add(Order);		HX_STACK_VAR(a1,"a1");

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< int >,a1,Dynamic,f)
					int run(Dynamic a2,Dynamic a3){
						HX_STACK_PUSH("*::_Function_2_1","flixel/group/FlxTypedGroup.hx",363);
						HX_STACK_ARG(a2,"a2");
						HX_STACK_ARG(a3,"a3");
						{
							HX_STACK_LINE(363)
							return f->__GetItem((int)0)(a1->__get((int)0),a2,a3).Cast< int >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC2(return)

					HX_STACK_LINE(363)
					return  Dynamic(new _Function_2_1(a1,f));
				}
				return null();
			}
		};
		HX_STACK_LINE(362)
		this->_members->__Field(HX_CSTRING("sort"),true)(_Function_1_1::Block(Order,Function));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,sort,(void))

Dynamic FlxTypedGroup_obj::replace( Dynamic OldObject,Dynamic NewObject){
	HX_STACK_PUSH("FlxTypedGroup::replace","flixel/group/FlxTypedGroup.hx",341);
	HX_STACK_THIS(this);
	HX_STACK_ARG(OldObject,"OldObject");
	HX_STACK_ARG(NewObject,"NewObject");
	HX_STACK_LINE(342)
	int index = ::flixel::util::FlxArrayUtil_obj::indexOf_flixel_group_FlxTypedGroup_T(this->_members,OldObject,null());		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(344)
	if (((bool((index < (int)0)) || bool((index >= this->_members->__Field(HX_CSTRING("length"),true)))))){
		HX_STACK_LINE(345)
		return null();
	}
	HX_STACK_LINE(349)
	hx::IndexRef((this->_members).mPtr,index) = NewObject;
	HX_STACK_LINE(351)
	return NewObject;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,replace,return )

Dynamic FlxTypedGroup_obj::remove( Dynamic Object,hx::Null< bool >  __o_Splice){
bool Splice = __o_Splice.Default(false);
	HX_STACK_PUSH("FlxTypedGroup::remove","flixel/group/FlxTypedGroup.hx",309);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_ARG(Splice,"Splice");
{
		HX_STACK_LINE(310)
		if (((this->_members == null()))){
			HX_STACK_LINE(311)
			return null();
		}
		HX_STACK_LINE(315)
		int index = ::flixel::util::FlxArrayUtil_obj::indexOf_flixel_group_FlxTypedGroup_T(this->_members,Object,null());		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(317)
		if (((bool((index < (int)0)) || bool((index >= this->_members->__Field(HX_CSTRING("length"),true)))))){
			HX_STACK_LINE(318)
			return null();
		}
		HX_STACK_LINE(321)
		if ((Splice)){
			HX_STACK_LINE(322)
			this->_members->__Field(HX_CSTRING("splice"),true)(index,(int)1);
		}
		else{
			HX_STACK_LINE(326)
			hx::IndexRef((this->_members).mPtr,index) = null();
		}
		HX_STACK_LINE(330)
		return Object;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,remove,return )

Dynamic FlxTypedGroup_obj::recycle( ::Class ObjectClass,Dynamic ContructorArgs,hx::Null< bool >  __o_Force,hx::Null< bool >  __o_Revive){
bool Force = __o_Force.Default(false);
bool Revive = __o_Revive.Default(true);
	HX_STACK_PUSH("FlxTypedGroup::recycle","flixel/group/FlxTypedGroup.hx",240);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ObjectClass,"ObjectClass");
	HX_STACK_ARG(ContructorArgs,"ContructorArgs");
	HX_STACK_ARG(Force,"Force");
	HX_STACK_ARG(Revive,"Revive");
{
		HX_STACK_LINE(241)
		if (((ContructorArgs == null()))){
			HX_STACK_LINE(242)
			ContructorArgs = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(246)
		Dynamic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(249)
		if (((this->maxSize > (int)0))){
			HX_STACK_LINE(250)
			if (((this->length < this->maxSize))){
				HX_STACK_LINE(254)
				if (((ObjectClass == null()))){
					HX_STACK_LINE(255)
					return null();
				}
				HX_STACK_LINE(259)
				return this->add(::Type_obj::createInstance(ObjectClass,ContructorArgs));
			}
			else{
				HX_STACK_LINE(264)
				basic = this->_members->__GetItem((this->_marker)++);
				HX_STACK_LINE(266)
				if (((this->_marker >= this->maxSize))){
					HX_STACK_LINE(267)
					this->_marker = (int)0;
				}
				HX_STACK_LINE(271)
				if ((Revive)){
					HX_STACK_LINE(272)
					basic->__Field(HX_CSTRING("revive"),true)();
				}
				HX_STACK_LINE(276)
				return basic;
			}
		}
		else{
			HX_STACK_LINE(282)
			basic = this->getFirstAvailable(ObjectClass,Force);
			HX_STACK_LINE(284)
			if (((basic != null()))){
				HX_STACK_LINE(286)
				if ((Revive)){
					HX_STACK_LINE(287)
					basic->__Field(HX_CSTRING("revive"),true)();
				}
				HX_STACK_LINE(290)
				return basic;
			}
			HX_STACK_LINE(292)
			if (((ObjectClass == null()))){
				HX_STACK_LINE(293)
				return null();
			}
			HX_STACK_LINE(297)
			return this->add(::Type_obj::createInstance(ObjectClass,ContructorArgs));
		}
		HX_STACK_LINE(249)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedGroup_obj,recycle,return )

Dynamic FlxTypedGroup_obj::add( Dynamic Object){
	HX_STACK_PUSH("FlxTypedGroup::add","flixel/group/FlxTypedGroup.hx",157);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Object,"Object");
	HX_STACK_LINE(158)
	if (((Object == null()))){
		HX_STACK_LINE(159)
		return null();
	}
	HX_STACK_LINE(165)
	if (((::flixel::util::FlxArrayUtil_obj::indexOf_flixel_group_FlxTypedGroup_T(this->_members,Object,null()) >= (int)0))){
		HX_STACK_LINE(166)
		return Object;
	}
	HX_STACK_LINE(171)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(172)
	int l = this->_members->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(174)
	while(((i < l))){
		HX_STACK_LINE(176)
		if (((this->_members->__GetItem(i) == null()))){
			HX_STACK_LINE(178)
			hx::IndexRef((this->_members).mPtr,i) = Object;
			HX_STACK_LINE(180)
			if (((i >= this->length))){
				HX_STACK_LINE(181)
				this->length = (i + (int)1);
			}
			HX_STACK_LINE(185)
			return Object;
		}
		HX_STACK_LINE(187)
		(i)++;
	}
	HX_STACK_LINE(191)
	if (((this->maxSize > (int)0))){
		HX_STACK_LINE(192)
		if (((this->_members->__Field(HX_CSTRING("length"),true) >= this->maxSize))){
			HX_STACK_LINE(194)
			return Object;
		}
		else{
			HX_STACK_LINE(197)
			if ((((this->_members->__Field(HX_CSTRING("length"),true) * (int)2) <= this->maxSize))){
				HX_STACK_LINE(198)
				::flixel::util::FlxArrayUtil_obj::setLength_flixel_group_FlxTypedGroup_T(this->_members,(this->_members->__Field(HX_CSTRING("length"),true) * (int)2));
			}
			else{
				HX_STACK_LINE(202)
				::flixel::util::FlxArrayUtil_obj::setLength_flixel_group_FlxTypedGroup_T(this->_members,this->maxSize);
			}
		}
	}
	else{
		HX_STACK_LINE(207)
		::flixel::util::FlxArrayUtil_obj::setLength_flixel_group_FlxTypedGroup_T(this->_members,(this->_members->__Field(HX_CSTRING("length"),true) * (int)2));
	}
	HX_STACK_LINE(213)
	hx::IndexRef((this->_members).mPtr,i) = Object;
	HX_STACK_LINE(214)
	this->length = (i + (int)1);
	HX_STACK_LINE(216)
	return Object;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,add,return )

Void FlxTypedGroup_obj::draw( ){
{
		HX_STACK_PUSH("FlxTypedGroup::draw","flixel/group/FlxTypedGroup.hx",112);
		HX_STACK_THIS(this);
		HX_STACK_LINE(113)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(114)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(116)
		while(((i < this->length))){
			HX_STACK_LINE(118)
			basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
			HX_STACK_LINE(120)
			if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(basic->visible)))){
				HX_STACK_LINE(121)
				basic->draw();
			}
		}
	}
return null();
}


Void FlxTypedGroup_obj::update( ){
{
		HX_STACK_PUSH("FlxTypedGroup::update","flixel/group/FlxTypedGroup.hx",93);
		HX_STACK_THIS(this);
		HX_STACK_LINE(94)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(95)
		::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
		HX_STACK_LINE(97)
		while(((i < this->length))){
			HX_STACK_LINE(99)
			basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
			HX_STACK_LINE(101)
			if (((bool((bool((basic != null())) && bool(basic->exists))) && bool(basic->active)))){
				HX_STACK_LINE(102)
				basic->update();
			}
		}
	}
return null();
}


Void FlxTypedGroup_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTypedGroup::destroy","flixel/group/FlxTypedGroup.hx",66);
		HX_STACK_THIS(this);
		HX_STACK_LINE(67)
		this->super::destroy();
		HX_STACK_LINE(69)
		if (((this->_basics != null()))){
			HX_STACK_LINE(71)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(72)
			::flixel::FlxBasic basic = null();		HX_STACK_VAR(basic,"basic");
			HX_STACK_LINE(74)
			while(((i < this->length))){
				HX_STACK_LINE(76)
				basic = this->_basics->__get((i)++).StaticCast< ::flixel::FlxBasic >();
				HX_STACK_LINE(78)
				if (((basic != null()))){
					HX_STACK_LINE(79)
					basic->destroy();
				}
			}
			HX_STACK_LINE(84)
			this->_basics = null();
			HX_STACK_LINE(85)
			this->_members = null();
		}
	}
return null();
}



FlxTypedGroup_obj::FlxTypedGroup_obj()
{
}

void FlxTypedGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedGroup);
	HX_MARK_MEMBER_NAME(_members,"_members");
	HX_MARK_MEMBER_NAME(_basics,"_basics");
	HX_MARK_MEMBER_NAME(_marker,"_marker");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_members,"_members");
	HX_VISIT_MEMBER_NAME(_basics,"_basics");
	HX_VISIT_MEMBER_NAME(_marker,"_marker");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypedGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"setAll") ) { return setAll_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"forEach") ) { return forEach_dyn(); }
		if (HX_FIELD_EQ(inName,"callAll") ) { return callAll_dyn(); }
		if (HX_FIELD_EQ(inName,"replace") ) { return replace_dyn(); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_basics") ) { return _basics; }
		if (HX_FIELD_EQ(inName,"_marker") ) { return _marker; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return maxSize; }
		if (HX_FIELD_EQ(inName,"members") ) { return get_members(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"_members") ) { return _members; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getRandom") ) { return getRandom_dyn(); }
		if (HX_FIELD_EQ(inName,"countDead") ) { return countDead_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_members") ) { return get_members_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxSize") ) { return set_maxSize_dyn(); }
		if (HX_FIELD_EQ(inName,"forEachDead") ) { return forEachDead_dyn(); }
		if (HX_FIELD_EQ(inName,"countLiving") ) { return countLiving_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"forEachAlive") ) { return forEachAlive_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstDead") ) { return getFirstDead_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstNull") ) { return getFirstNull_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"forEachExists") ) { return forEachExists_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstAlive") ) { return getFirstAlive_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getFirstExisting") ) { return getFirstExisting_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFirstAvailable") ) { return getFirstAvailable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_basics") ) { _basics=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_marker") ) { _marker=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp) return set_maxSize(inValue);maxSize=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_members") ) { _members=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_members"));
	outFields->push(HX_CSTRING("_basics"));
	outFields->push(HX_CSTRING("_marker"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("maxSize"));
	outFields->push(HX_CSTRING("members"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("get_members"),
	HX_CSTRING("set_maxSize"),
	HX_CSTRING("forEachExists"),
	HX_CSTRING("forEachDead"),
	HX_CSTRING("forEachAlive"),
	HX_CSTRING("forEach"),
	HX_CSTRING("iterator"),
	HX_CSTRING("kill"),
	HX_CSTRING("clear"),
	HX_CSTRING("getRandom"),
	HX_CSTRING("countDead"),
	HX_CSTRING("countLiving"),
	HX_CSTRING("getFirstDead"),
	HX_CSTRING("getFirstAlive"),
	HX_CSTRING("getFirstExisting"),
	HX_CSTRING("getFirstNull"),
	HX_CSTRING("getFirstAvailable"),
	HX_CSTRING("callAll"),
	HX_CSTRING("setAll"),
	HX_CSTRING("sort"),
	HX_CSTRING("replace"),
	HX_CSTRING("remove"),
	HX_CSTRING("recycle"),
	HX_CSTRING("add"),
	HX_CSTRING("draw"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_members"),
	HX_CSTRING("_basics"),
	HX_CSTRING("_marker"),
	HX_CSTRING("length"),
	HX_CSTRING("maxSize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedGroup_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedGroup_obj::__mClass,"__mClass");
};

Class FlxTypedGroup_obj::__mClass;

void FlxTypedGroup_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.group.FlxTypedGroup"), hx::TCanCast< FlxTypedGroup_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTypedGroup_obj::__boot()
{
}

} // end namespace flixel
} // end namespace group
