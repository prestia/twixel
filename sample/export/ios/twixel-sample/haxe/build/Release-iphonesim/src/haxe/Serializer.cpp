#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace haxe{

Void Serializer_obj::__construct()
{
HX_STACK_PUSH("Serializer::new","/usr/lib/haxe/std/haxe/Serializer.hx",99);
{
	HX_STACK_LINE(100)
	this->buf = ::StringBuf_obj::__new();
	HX_STACK_LINE(101)
	this->cache = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(102)
	this->useCache = ::haxe::Serializer_obj::USE_CACHE;
	HX_STACK_LINE(103)
	this->useEnumIndex = ::haxe::Serializer_obj::USE_ENUM_INDEX;
	HX_STACK_LINE(104)
	this->shash = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(105)
	this->scount = (int)0;
}
;
	return null();
}

Serializer_obj::~Serializer_obj() { }

Dynamic Serializer_obj::__CreateEmpty() { return  new Serializer_obj; }
hx::ObjectPtr< Serializer_obj > Serializer_obj::__new()
{  hx::ObjectPtr< Serializer_obj > result = new Serializer_obj();
	result->__construct();
	return result;}

Dynamic Serializer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Serializer_obj > result = new Serializer_obj();
	result->__construct();
	return result;}

Void Serializer_obj::serialize( Dynamic v){
{
		HX_STACK_PUSH("Serializer::serialize","/usr/lib/haxe/std/haxe/Serializer.hx",223);
		HX_STACK_THIS(this);
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(224)
		::ValueType _g = ::Type_obj::_typeof(v);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(224)
		{
			::ValueType _switch_1 = (_g);
			switch((_switch_1)->GetIndex()){
				case 0: {
					HX_STACK_LINE(225)
					this->buf->add(HX_CSTRING("n"));
				}
				;break;
				case 1: {
					HX_STACK_LINE(228)
					if (((v == (int)0))){
						HX_STACK_LINE(229)
						this->buf->add(HX_CSTRING("z"));
						HX_STACK_LINE(230)
						return null();
					}
					HX_STACK_LINE(232)
					this->buf->add(HX_CSTRING("i"));
					HX_STACK_LINE(233)
					this->buf->add(v);
				}
				;break;
				case 2: {
					HX_STACK_LINE(234)
					if ((::Math_obj::isNaN(v))){
						HX_STACK_LINE(236)
						this->buf->add(HX_CSTRING("k"));
					}
					else{
						HX_STACK_LINE(237)
						if ((!(::Math_obj::isFinite(v)))){
							HX_STACK_LINE(238)
							this->buf->add((  (((v < (int)0))) ? Dynamic(HX_CSTRING("m")) : Dynamic(HX_CSTRING("p")) ));
						}
						else{
							HX_STACK_LINE(240)
							this->buf->add(HX_CSTRING("d"));
							HX_STACK_LINE(241)
							this->buf->add(v);
						}
					}
				}
				;break;
				case 3: {
					HX_STACK_LINE(243)
					this->buf->add((  ((v)) ? Dynamic(HX_CSTRING("t")) : Dynamic(HX_CSTRING("f")) ));
				}
				;break;
				case 6: {
					::Class c = _switch_1->__Param(0);
{
						HX_STACK_LINE(246)
						if (((c == hx::ClassOf< ::String >()))){
							HX_STACK_LINE(247)
							this->serializeString(v);
							HX_STACK_LINE(248)
							return null();
						}
						HX_STACK_LINE(250)
						if (((bool(this->useCache) && bool(this->serializeRef(v))))){
							HX_STACK_LINE(251)
							return null();
						}
						HX_STACK_LINE(252)
						::Class _switch_2 = (c);
						if (  ( _switch_2==hx::ClassOf< Array<int> >())){
							HX_STACK_LINE(254)
							int ucount = (int)0;		HX_STACK_VAR(ucount,"ucount");
							HX_STACK_LINE(255)
							this->buf->add(HX_CSTRING("a"));
							HX_STACK_LINE(259)
							int l = v->__length();		HX_STACK_VAR(l,"l");
							HX_STACK_LINE(260)
							{
								HX_STACK_LINE(260)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(260)
								while(((_g1 < l))){
									HX_STACK_LINE(260)
									int i = (_g1)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(261)
									if (((v->__GetItem(i) == null()))){
										HX_STACK_LINE(262)
										(ucount)++;
									}
									else{
										HX_STACK_LINE(264)
										if (((ucount > (int)0))){
											HX_STACK_LINE(265)
											if (((ucount == (int)1))){
												HX_STACK_LINE(266)
												this->buf->add(HX_CSTRING("n"));
											}
											else{
												HX_STACK_LINE(268)
												this->buf->add(HX_CSTRING("u"));
												HX_STACK_LINE(269)
												this->buf->add(ucount);
											}
											HX_STACK_LINE(271)
											ucount = (int)0;
										}
										HX_STACK_LINE(273)
										this->serialize(v->__GetItem(i));
									}
								}
							}
							HX_STACK_LINE(276)
							if (((ucount > (int)0))){
								HX_STACK_LINE(276)
								if (((ucount == (int)1))){
									HX_STACK_LINE(278)
									this->buf->add(HX_CSTRING("n"));
								}
								else{
									HX_STACK_LINE(280)
									this->buf->add(HX_CSTRING("u"));
									HX_STACK_LINE(281)
									this->buf->add(ucount);
								}
							}
							HX_STACK_LINE(284)
							this->buf->add(HX_CSTRING("h"));
						}
						else if (  ( _switch_2==hx::ClassOf< ::List >())){
							HX_STACK_LINE(286)
							this->buf->add(HX_CSTRING("l"));
							HX_STACK_LINE(287)
							::List v1 = v;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(288)
							for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(v1->iterator());  __it->hasNext(); ){
								Dynamic i = __it->next();
								this->serialize(i);
							}
							HX_STACK_LINE(290)
							this->buf->add(HX_CSTRING("h"));
						}
						else if (  ( _switch_2==hx::ClassOf< ::Date >())){
							HX_STACK_LINE(292)
							::Date d = v;		HX_STACK_VAR(d,"d");
							HX_STACK_LINE(293)
							this->buf->add(HX_CSTRING("v"));
							HX_STACK_LINE(294)
							this->buf->add(d->toString());
						}
						else if (  ( _switch_2==hx::ClassOf< ::haxe::ds::StringMap >())){
							HX_STACK_LINE(296)
							this->buf->add(HX_CSTRING("b"));
							HX_STACK_LINE(297)
							::haxe::ds::StringMap v1 = v;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(298)
							for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(v1->keys());  __it->hasNext(); ){
								::String k = __it->next();
								{
									HX_STACK_LINE(299)
									this->serializeString(k);
									HX_STACK_LINE(300)
									this->serialize(v1->get(k));
								}
;
							}
							HX_STACK_LINE(302)
							this->buf->add(HX_CSTRING("h"));
						}
						else if (  ( _switch_2==hx::ClassOf< ::haxe::ds::IntMap >())){
							HX_STACK_LINE(304)
							this->buf->add(HX_CSTRING("q"));
							HX_STACK_LINE(305)
							::haxe::ds::IntMap v1 = v;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(306)
							for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(v1->keys());  __it->hasNext(); ){
								int k = __it->next();
								{
									HX_STACK_LINE(307)
									this->buf->add(HX_CSTRING(":"));
									HX_STACK_LINE(308)
									this->buf->add(k);
									HX_STACK_LINE(309)
									this->serialize(v1->get(k));
								}
;
							}
							HX_STACK_LINE(311)
							this->buf->add(HX_CSTRING("h"));
						}
						else if (  ( _switch_2==hx::ClassOf< ::haxe::ds::ObjectMap >())){
							HX_STACK_LINE(313)
							this->buf->add(HX_CSTRING("M"));
							HX_STACK_LINE(314)
							::haxe::ds::ObjectMap v1 = v;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(315)
							for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(v1->keys());  __it->hasNext(); ){
								Dynamic k = __it->next();
								{
									HX_STACK_LINE(322)
									this->serialize(k);
									HX_STACK_LINE(324)
									this->serialize(v1->get(k));
								}
;
							}
							HX_STACK_LINE(326)
							this->buf->add(HX_CSTRING("h"));
						}
						else if (  ( _switch_2==hx::ClassOf< ::haxe::io::Bytes >())){
							HX_STACK_LINE(328)
							::haxe::io::Bytes v1 = v;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(332)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(333)
							int max = (v1->length - (int)2);		HX_STACK_VAR(max,"max");
							HX_STACK_LINE(334)
							::StringBuf charsBuf = ::StringBuf_obj::__new();		HX_STACK_VAR(charsBuf,"charsBuf");
							HX_STACK_LINE(335)
							::String b64 = ::haxe::Serializer_obj::BASE64;		HX_STACK_VAR(b64,"b64");
							HX_STACK_LINE(336)
							while(((i < max))){
								HX_STACK_LINE(337)
								int b1 = v1->b->__get((i)++);		HX_STACK_VAR(b1,"b1");
								HX_STACK_LINE(338)
								int b2 = v1->b->__get((i)++);		HX_STACK_VAR(b2,"b2");
								HX_STACK_LINE(339)
								int b3 = v1->b->__get((i)++);		HX_STACK_VAR(b3,"b3");
								HX_STACK_LINE(341)
								charsBuf->add(b64.charAt((int(b1) >> int((int)2))));
								HX_STACK_LINE(342)
								charsBuf->add(b64.charAt((int(((int((int(b1) << int((int)4))) | int((int(b2) >> int((int)4)))))) & int((int)63))));
								HX_STACK_LINE(343)
								charsBuf->add(b64.charAt((int(((int((int(b2) << int((int)2))) | int((int(b3) >> int((int)6)))))) & int((int)63))));
								HX_STACK_LINE(344)
								charsBuf->add(b64.charAt((int(b3) & int((int)63))));
							}
							HX_STACK_LINE(346)
							if (((i == max))){
								HX_STACK_LINE(347)
								int b1 = v1->b->__get((i)++);		HX_STACK_VAR(b1,"b1");
								HX_STACK_LINE(348)
								int b2 = v1->b->__get((i)++);		HX_STACK_VAR(b2,"b2");
								HX_STACK_LINE(349)
								charsBuf->add(b64.charAt((int(b1) >> int((int)2))));
								HX_STACK_LINE(350)
								charsBuf->add(b64.charAt((int(((int((int(b1) << int((int)4))) | int((int(b2) >> int((int)4)))))) & int((int)63))));
								HX_STACK_LINE(351)
								charsBuf->add(b64.charAt((int((int(b2) << int((int)2))) & int((int)63))));
							}
							else{
								HX_STACK_LINE(352)
								if (((i == (max + (int)1)))){
									HX_STACK_LINE(353)
									int b1 = v1->b->__get((i)++);		HX_STACK_VAR(b1,"b1");
									HX_STACK_LINE(354)
									charsBuf->add(b64.charAt((int(b1) >> int((int)2))));
									HX_STACK_LINE(355)
									charsBuf->add(b64.charAt((int((int(b1) << int((int)4))) & int((int)63))));
								}
							}
							HX_STACK_LINE(357)
							::String chars = charsBuf->b->join(HX_CSTRING(""));		HX_STACK_VAR(chars,"chars");
							HX_STACK_LINE(359)
							this->buf->add(HX_CSTRING("s"));
							HX_STACK_LINE(360)
							this->buf->add(chars.length);
							HX_STACK_LINE(361)
							this->buf->add(HX_CSTRING(":"));
							HX_STACK_LINE(362)
							this->buf->add(chars);
						}
						else  {
							HX_STACK_LINE(364)
							this->cache->__Field(HX_CSTRING("pop"),true)();
							HX_STACK_LINE(365)
							if (((v->__Field(HX_CSTRING("hxSerialize"),true) != null()))){
								HX_STACK_LINE(366)
								this->buf->add(HX_CSTRING("C"));
								HX_STACK_LINE(367)
								this->serializeString(::Type_obj::getClassName(c));
								HX_STACK_LINE(368)
								this->cache->__Field(HX_CSTRING("push"),true)(v);
								HX_STACK_LINE(369)
								v->__Field(HX_CSTRING("hxSerialize"),true)(hx::ObjectPtr<OBJ_>(this));
								HX_STACK_LINE(370)
								this->buf->add(HX_CSTRING("g"));
							}
							else{
								HX_STACK_LINE(372)
								this->buf->add(HX_CSTRING("c"));
								HX_STACK_LINE(373)
								this->serializeString(::Type_obj::getClassName(c));
								HX_STACK_LINE(374)
								this->cache->__Field(HX_CSTRING("push"),true)(v);
								HX_STACK_LINE(378)
								this->serializeFields(v);
							}
						}
;
;
					}
				}
				;break;
				case 4: {
					HX_STACK_LINE(383)
					if (((bool(this->useCache) && bool(this->serializeRef(v))))){
						HX_STACK_LINE(384)
						return null();
					}
					HX_STACK_LINE(385)
					this->buf->add(HX_CSTRING("o"));
					HX_STACK_LINE(386)
					this->serializeFields(v);
				}
				;break;
				case 7: {
					::Enum e = _switch_1->__Param(0);
{
						HX_STACK_LINE(388)
						if (((bool(this->useCache) && bool(this->serializeRef(v))))){
							HX_STACK_LINE(389)
							return null();
						}
						HX_STACK_LINE(390)
						this->cache->__Field(HX_CSTRING("pop"),true)();
						HX_STACK_LINE(391)
						this->buf->add((  ((this->useEnumIndex)) ? Dynamic(HX_CSTRING("j")) : Dynamic(HX_CSTRING("w")) ));
						HX_STACK_LINE(392)
						this->serializeString(::Type_obj::getEnumName(e));
						HX_STACK_LINE(424)
						if ((this->useEnumIndex)){
							HX_STACK_LINE(425)
							this->buf->add(HX_CSTRING(":"));
							HX_STACK_LINE(426)
							this->buf->add(v->__Index());
						}
						else{
							HX_STACK_LINE(428)
							this->serializeString(v->__Tag());
						}
						HX_STACK_LINE(429)
						this->buf->add(HX_CSTRING(":"));
						HX_STACK_LINE(430)
						Dynamic pl = v->__EnumParams();		HX_STACK_VAR(pl,"pl");
						HX_STACK_LINE(431)
						if (((pl == null()))){
							HX_STACK_LINE(432)
							this->buf->add((int)0);
						}
						else{
							HX_STACK_LINE(434)
							this->buf->add(pl->__Field(HX_CSTRING("length"),true));
							HX_STACK_LINE(435)
							{
								HX_STACK_LINE(435)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(435)
								while(((_g1 < pl->__Field(HX_CSTRING("length"),true)))){
									HX_STACK_LINE(435)
									Dynamic p = pl->__GetItem(_g1);		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(435)
									++(_g1);
									HX_STACK_LINE(436)
									this->serialize(p);
								}
							}
						}
						HX_STACK_LINE(482)
						this->cache->__Field(HX_CSTRING("push"),true)(v);
					}
				}
				;break;
				case 5: {
					HX_STACK_LINE(483)
					hx::Throw (HX_CSTRING("Cannot serialize function"));
				}
				;break;
				default: {
					HX_STACK_LINE(485)
					hx::Throw ((HX_CSTRING("Cannot serialize ") + ::Std_obj::string(v)));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,serialize,(void))

Void Serializer_obj::serializeFields( Dynamic v){
{
		HX_STACK_PUSH("Serializer::serializeFields","/usr/lib/haxe/std/haxe/Serializer.hx",205);
		HX_STACK_THIS(this);
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(206)
		{
			HX_STACK_LINE(206)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::String > _g1 = ::Reflect_obj::fields(v);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(206)
			while(((_g < _g1->length))){
				HX_STACK_LINE(206)
				::String f = _g1->__get(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(206)
				++(_g);
				HX_STACK_LINE(207)
				this->serializeString(f);
				HX_STACK_LINE(208)
				this->serialize(::Reflect_obj::field(v,f));
			}
		}
		HX_STACK_LINE(210)
		this->buf->add(HX_CSTRING("g"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,serializeFields,(void))

bool Serializer_obj::serializeRef( Dynamic v){
	HX_STACK_PUSH("Serializer::serializeRef","/usr/lib/haxe/std/haxe/Serializer.hx",168);
	HX_STACK_THIS(this);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(172)
	{
		HX_STACK_LINE(172)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->cache->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(172)
		while(((_g1 < _g))){
			HX_STACK_LINE(172)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(177)
			if (((this->cache->__GetItem(i) == v))){
				HX_STACK_LINE(179)
				this->buf->add(HX_CSTRING("r"));
				HX_STACK_LINE(180)
				this->buf->add(i);
				HX_STACK_LINE(181)
				return true;
			}
		}
	}
	HX_STACK_LINE(184)
	this->cache->__Field(HX_CSTRING("push"),true)(v);
	HX_STACK_LINE(185)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,serializeRef,return )

Void Serializer_obj::serializeString( ::String s){
{
		HX_STACK_PUSH("Serializer::serializeString","/usr/lib/haxe/std/haxe/Serializer.hx",149);
		HX_STACK_THIS(this);
		HX_STACK_ARG(s,"s");
		HX_STACK_LINE(150)
		Dynamic x = this->shash->get(s);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(151)
		if (((x != null()))){
			HX_STACK_LINE(152)
			this->buf->add(HX_CSTRING("R"));
			HX_STACK_LINE(153)
			this->buf->add(x);
			HX_STACK_LINE(154)
			return null();
		}
		HX_STACK_LINE(156)
		this->shash->set(s,(this->scount)++);
		HX_STACK_LINE(161)
		this->buf->add(HX_CSTRING("y"));
		HX_STACK_LINE(162)
		s = ::StringTools_obj::urlEncode(s);
		HX_STACK_LINE(163)
		this->buf->add(s.length);
		HX_STACK_LINE(164)
		this->buf->add(HX_CSTRING(":"));
		HX_STACK_LINE(165)
		this->buf->add(s);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,serializeString,(void))

::String Serializer_obj::toString( ){
	HX_STACK_PUSH("Serializer::toString","/usr/lib/haxe/std/haxe/Serializer.hx",114);
	HX_STACK_THIS(this);
	HX_STACK_LINE(114)
	return this->buf->b->join(HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC0(Serializer_obj,toString,return )

bool Serializer_obj::USE_CACHE;

bool Serializer_obj::USE_ENUM_INDEX;

::String Serializer_obj::BASE64;

::String Serializer_obj::run( Dynamic v){
	HX_STACK_PUSH("Serializer::run","/usr/lib/haxe/std/haxe/Serializer.hx",520);
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(521)
	::haxe::Serializer s = ::haxe::Serializer_obj::__new();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(522)
	s->serialize(v);
	HX_STACK_LINE(523)
	return s->toString();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Serializer_obj,run,return )


Serializer_obj::Serializer_obj()
{
}

void Serializer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Serializer);
	HX_MARK_MEMBER_NAME(useEnumIndex,"useEnumIndex");
	HX_MARK_MEMBER_NAME(useCache,"useCache");
	HX_MARK_MEMBER_NAME(scount,"scount");
	HX_MARK_MEMBER_NAME(shash,"shash");
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_END_CLASS();
}

void Serializer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(useEnumIndex,"useEnumIndex");
	HX_VISIT_MEMBER_NAME(useCache,"useCache");
	HX_VISIT_MEMBER_NAME(scount,"scount");
	HX_VISIT_MEMBER_NAME(shash,"shash");
	HX_VISIT_MEMBER_NAME(cache,"cache");
	HX_VISIT_MEMBER_NAME(buf,"buf");
}

Dynamic Serializer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		if (HX_FIELD_EQ(inName,"buf") ) { return buf; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shash") ) { return shash; }
		if (HX_FIELD_EQ(inName,"cache") ) { return cache; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BASE64") ) { return BASE64; }
		if (HX_FIELD_EQ(inName,"scount") ) { return scount; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"useCache") ) { return useCache; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"USE_CACHE") ) { return USE_CACHE; }
		if (HX_FIELD_EQ(inName,"serialize") ) { return serialize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"serializeRef") ) { return serializeRef_dyn(); }
		if (HX_FIELD_EQ(inName,"useEnumIndex") ) { return useEnumIndex; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"USE_ENUM_INDEX") ) { return USE_ENUM_INDEX; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"serializeFields") ) { return serializeFields_dyn(); }
		if (HX_FIELD_EQ(inName,"serializeString") ) { return serializeString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Serializer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast< ::StringBuf >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shash") ) { shash=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BASE64") ) { BASE64=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scount") ) { scount=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"useCache") ) { useCache=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"USE_CACHE") ) { USE_CACHE=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useEnumIndex") ) { useEnumIndex=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"USE_ENUM_INDEX") ) { USE_ENUM_INDEX=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Serializer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("useEnumIndex"));
	outFields->push(HX_CSTRING("useCache"));
	outFields->push(HX_CSTRING("scount"));
	outFields->push(HX_CSTRING("shash"));
	outFields->push(HX_CSTRING("cache"));
	outFields->push(HX_CSTRING("buf"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("USE_CACHE"),
	HX_CSTRING("USE_ENUM_INDEX"),
	HX_CSTRING("BASE64"),
	HX_CSTRING("run"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("serialize"),
	HX_CSTRING("serializeFields"),
	HX_CSTRING("serializeRef"),
	HX_CSTRING("serializeString"),
	HX_CSTRING("toString"),
	HX_CSTRING("useEnumIndex"),
	HX_CSTRING("useCache"),
	HX_CSTRING("scount"),
	HX_CSTRING("shash"),
	HX_CSTRING("cache"),
	HX_CSTRING("buf"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Serializer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Serializer_obj::USE_CACHE,"USE_CACHE");
	HX_MARK_MEMBER_NAME(Serializer_obj::USE_ENUM_INDEX,"USE_ENUM_INDEX");
	HX_MARK_MEMBER_NAME(Serializer_obj::BASE64,"BASE64");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Serializer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Serializer_obj::USE_CACHE,"USE_CACHE");
	HX_VISIT_MEMBER_NAME(Serializer_obj::USE_ENUM_INDEX,"USE_ENUM_INDEX");
	HX_VISIT_MEMBER_NAME(Serializer_obj::BASE64,"BASE64");
};

Class Serializer_obj::__mClass;

void Serializer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.Serializer"), hx::TCanCast< Serializer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Serializer_obj::__boot()
{
	USE_CACHE= false;
	USE_ENUM_INDEX= false;
	BASE64= HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789%:");
}

} // end namespace haxe
