#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_Json
#include <haxe/Json.h>
#endif
namespace haxe{

Void Json_obj::__construct()
{
HX_STACK_PUSH("Json::new","/usr/lib/haxe/std/haxe/Json.hx",39);
{
}
;
	return null();
}

Json_obj::~Json_obj() { }

Dynamic Json_obj::__CreateEmpty() { return  new Json_obj; }
hx::ObjectPtr< Json_obj > Json_obj::__new()
{  hx::ObjectPtr< Json_obj > result = new Json_obj();
	result->__construct();
	return result;}

Dynamic Json_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Json_obj > result = new Json_obj();
	result->__construct();
	return result;}

Void Json_obj::invalidNumber( int start){
{
		HX_STACK_PUSH("Json::invalidNumber","/usr/lib/haxe/std/haxe/Json.hx",354);
		HX_STACK_THIS(this);
		HX_STACK_ARG(start,"start");
		HX_STACK_LINE(354)
		hx::Throw ((((HX_CSTRING("Invalid number at position ") + start) + HX_CSTRING(": ")) + this->str.substr(start,(this->pos - start))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Json_obj,invalidNumber,(void))

::String Json_obj::parseString( ){
	HX_STACK_PUSH("Json::parseString","/usr/lib/haxe/std/haxe/Json.hx",293);
	HX_STACK_THIS(this);
	HX_STACK_LINE(294)
	int start = this->pos;		HX_STACK_VAR(start,"start");
	HX_STACK_LINE(295)
	::StringBuf buf = ::StringBuf_obj::__new();		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(296)
	while((true)){
		HX_STACK_LINE(297)
		int c = this->str.cca((this->pos)++);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(298)
		if (((c == (int)34))){
			HX_STACK_LINE(299)
			break;
		}
		HX_STACK_LINE(300)
		if (((c == (int)92))){
			HX_STACK_LINE(301)
			buf->b->push(this->str.substr(start,((this->pos - start) - (int)1)));
			HX_STACK_LINE(302)
			c = this->str.cca((this->pos)++);
			HX_STACK_LINE(303)
			switch( (int)(c)){
				case (int)114: {
					HX_STACK_LINE(304)
					buf->b->push(HX_CSTRING("\r"));
				}
				;break;
				case (int)110: {
					HX_STACK_LINE(305)
					buf->b->push(HX_CSTRING("\n"));
				}
				;break;
				case (int)116: {
					HX_STACK_LINE(306)
					buf->b->push(HX_CSTRING("\t"));
				}
				;break;
				case (int)98: {
					HX_STACK_LINE(307)
					buf->b->push(HX_CSTRING("\x08"""));
				}
				;break;
				case (int)102: {
					HX_STACK_LINE(308)
					buf->b->push(HX_CSTRING("\x0c"""));
				}
				;break;
				case (int)47: case (int)92: case (int)34: {
					HX_STACK_LINE(309)
					buf->b->push(::String::fromCharCode(c));
				}
				;break;
				case (int)117: {
					HX_STACK_LINE(311)
					Dynamic uc = ::Std_obj::parseInt((HX_CSTRING("0x") + this->str.substr(this->pos,(int)4)));		HX_STACK_VAR(uc,"uc");
					HX_STACK_LINE(312)
					hx::AddEq(this->pos,(int)4);
					HX_STACK_LINE(314)
					if (((uc <= (int)127))){
						HX_STACK_LINE(315)
						int c1 = uc;		HX_STACK_VAR(c1,"c1");
						HX_STACK_LINE(315)
						buf->b->push(::String::fromCharCode(c1));
					}
					else{
						HX_STACK_LINE(316)
						if (((uc <= (int)2047))){
							HX_STACK_LINE(317)
							buf->b->push(::String::fromCharCode((int((int)192) | int((int(uc) >> int((int)6))))));
							HX_STACK_LINE(318)
							buf->b->push(::String::fromCharCode((int((int)128) | int((int(uc) & int((int)63))))));
						}
						else{
							HX_STACK_LINE(319)
							if (((uc <= (int)65535))){
								HX_STACK_LINE(320)
								buf->b->push(::String::fromCharCode((int((int)224) | int((int(uc) >> int((int)12))))));
								HX_STACK_LINE(321)
								buf->b->push(::String::fromCharCode((int((int)128) | int((int((int(uc) >> int((int)6))) & int((int)63))))));
								HX_STACK_LINE(322)
								buf->b->push(::String::fromCharCode((int((int)128) | int((int(uc) & int((int)63))))));
							}
							else{
								HX_STACK_LINE(324)
								buf->b->push(::String::fromCharCode((int((int)240) | int((int(uc) >> int((int)18))))));
								HX_STACK_LINE(325)
								buf->b->push(::String::fromCharCode((int((int)128) | int((int((int(uc) >> int((int)12))) & int((int)63))))));
								HX_STACK_LINE(326)
								buf->b->push(::String::fromCharCode((int((int)128) | int((int((int(uc) >> int((int)6))) & int((int)63))))));
								HX_STACK_LINE(327)
								buf->b->push(::String::fromCharCode((int((int)128) | int((int(uc) & int((int)63))))));
							}
						}
					}
				}
				;break;
				default: {
					HX_STACK_LINE(332)
					hx::Throw ((((HX_CSTRING("Invalid escape sequence \\") + ::String::fromCharCode(c)) + HX_CSTRING(" at position ")) + ((this->pos - (int)1))));
				}
			}
			HX_STACK_LINE(335)
			start = this->pos;
		}
		else{
			HX_STACK_LINE(339)
			if (((c >= (int)128))){
				HX_STACK_LINE(340)
				(this->pos)++;
				HX_STACK_LINE(341)
				if (((c >= (int)252))){
					HX_STACK_LINE(341)
					hx::AddEq(this->pos,(int)4);
				}
				else{
					HX_STACK_LINE(342)
					if (((c >= (int)248))){
						HX_STACK_LINE(342)
						hx::AddEq(this->pos,(int)3);
					}
					else{
						HX_STACK_LINE(343)
						if (((c >= (int)240))){
							HX_STACK_LINE(343)
							hx::AddEq(this->pos,(int)2);
						}
						else{
							HX_STACK_LINE(344)
							if (((c >= (int)224))){
								HX_STACK_LINE(344)
								(this->pos)++;
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(347)
				if (((c == (int)0))){
					HX_STACK_LINE(348)
					hx::Throw (HX_CSTRING("Unclosed string"));
				}
			}
		}
	}
	HX_STACK_LINE(350)
	buf->b->push(this->str.substr(start,((this->pos - start) - (int)1)));
	HX_STACK_LINE(351)
	return buf->b->join(HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC0(Json_obj,parseString,return )

Dynamic Json_obj::parseRec( ){
	HX_STACK_PUSH("Json::parseRec","/usr/lib/haxe/std/haxe/Json.hx",211);
	HX_STACK_THIS(this);
	HX_STACK_LINE(211)
	while((true)){
		HX_STACK_LINE(213)
		int c = this->str.cca((this->pos)++);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(214)
		switch( (int)(c)){
			case (int)32: case (int)13: case (int)10: case (int)9: {
			}
			;break;
			case (int)123: {
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_PUSH("*::closure","/usr/lib/haxe/std/haxe/Json.hx",218);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(218)
				Dynamic obj = _Function_3_1::Block();		HX_STACK_VAR(obj,"obj");
				::String field = null();		HX_STACK_VAR(field,"field");
				Dynamic comma = null();		HX_STACK_VAR(comma,"comma");
				HX_STACK_LINE(219)
				while((true)){
					HX_STACK_LINE(220)
					int c1 = this->str.cca((this->pos)++);		HX_STACK_VAR(c1,"c1");
					HX_STACK_LINE(221)
					switch( (int)(c1)){
						case (int)32: case (int)13: case (int)10: case (int)9: {
						}
						;break;
						case (int)125: {
							HX_STACK_LINE(225)
							if (((bool((field != null())) || bool((comma == false))))){
								HX_STACK_LINE(226)
								this->invalidChar();
							}
							HX_STACK_LINE(227)
							return obj;
						}
						;break;
						case (int)58: {
							HX_STACK_LINE(229)
							if (((field == null()))){
								HX_STACK_LINE(230)
								this->invalidChar();
							}
							HX_STACK_LINE(231)
							if (((obj != null()))){
								HX_STACK_LINE(231)
								obj->__SetField(field,this->parseRec(),false);
							}
							HX_STACK_LINE(232)
							field = null();
							HX_STACK_LINE(233)
							comma = true;
						}
						;break;
						case (int)44: {
							HX_STACK_LINE(234)
							if ((comma)){
								HX_STACK_LINE(235)
								comma = false;
							}
							else{
								HX_STACK_LINE(235)
								this->invalidChar();
							}
						}
						;break;
						case (int)34: {
							HX_STACK_LINE(237)
							if ((comma)){
								HX_STACK_LINE(237)
								this->invalidChar();
							}
							HX_STACK_LINE(238)
							field = this->parseString();
						}
						;break;
						default: {
							HX_STACK_LINE(239)
							this->invalidChar();
						}
					}
				}
			}
			;break;
			case (int)91: {
				HX_STACK_LINE(244)
				Dynamic arr = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(arr,"arr");
				Dynamic comma = null();		HX_STACK_VAR(comma,"comma");
				HX_STACK_LINE(245)
				while((true)){
					HX_STACK_LINE(246)
					int c1 = this->str.cca((this->pos)++);		HX_STACK_VAR(c1,"c1");
					HX_STACK_LINE(247)
					switch( (int)(c1)){
						case (int)32: case (int)13: case (int)10: case (int)9: {
						}
						;break;
						case (int)93: {
							HX_STACK_LINE(251)
							if (((comma == false))){
								HX_STACK_LINE(251)
								this->invalidChar();
							}
							HX_STACK_LINE(252)
							return arr;
						}
						;break;
						case (int)44: {
							HX_STACK_LINE(253)
							if ((comma)){
								HX_STACK_LINE(254)
								comma = false;
							}
							else{
								HX_STACK_LINE(254)
								this->invalidChar();
							}
						}
						;break;
						default: {
							HX_STACK_LINE(256)
							if ((comma)){
								HX_STACK_LINE(256)
								this->invalidChar();
							}
							HX_STACK_LINE(257)
							(this->pos)--;
							HX_STACK_LINE(258)
							arr->__Field(HX_CSTRING("push"),true)(this->parseRec());
							HX_STACK_LINE(259)
							comma = true;
						}
					}
				}
			}
			;break;
			case (int)116: {
				HX_STACK_LINE(263)
				int save = this->pos;		HX_STACK_VAR(save,"save");
				HX_STACK_LINE(264)
				if (((bool((bool((this->str.cca((this->pos)++) != (int)114)) || bool((this->str.cca((this->pos)++) != (int)117)))) || bool((this->str.cca((this->pos)++) != (int)101))))){
					HX_STACK_LINE(265)
					this->pos = save;
					HX_STACK_LINE(266)
					this->invalidChar();
				}
				HX_STACK_LINE(268)
				return true;
			}
			;break;
			case (int)102: {
				HX_STACK_LINE(270)
				int save = this->pos;		HX_STACK_VAR(save,"save");
				HX_STACK_LINE(271)
				if (((bool((bool((bool((this->str.cca((this->pos)++) != (int)97)) || bool((this->str.cca((this->pos)++) != (int)108)))) || bool((this->str.cca((this->pos)++) != (int)115)))) || bool((this->str.cca((this->pos)++) != (int)101))))){
					HX_STACK_LINE(272)
					this->pos = save;
					HX_STACK_LINE(273)
					this->invalidChar();
				}
				HX_STACK_LINE(275)
				return false;
			}
			;break;
			case (int)110: {
				HX_STACK_LINE(277)
				int save = this->pos;		HX_STACK_VAR(save,"save");
				HX_STACK_LINE(278)
				if (((bool((bool((this->str.cca((this->pos)++) != (int)117)) || bool((this->str.cca((this->pos)++) != (int)108)))) || bool((this->str.cca((this->pos)++) != (int)108))))){
					HX_STACK_LINE(279)
					this->pos = save;
					HX_STACK_LINE(280)
					this->invalidChar();
				}
				HX_STACK_LINE(282)
				return null();
			}
			;break;
			case (int)34: {
				HX_STACK_LINE(283)
				return this->parseString();
			}
			;break;
			case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: case (int)45: {
				struct _Function_3_1{
					inline static Float Block( int &c,::haxe::Json_obj *__this){
						HX_STACK_PUSH("*::closure","/usr/lib/haxe/std/haxe/Json.hx",286);
						{
							HX_STACK_LINE(286)
							int c1 = c;		HX_STACK_VAR(c1,"c1");
							HX_STACK_LINE(286)
							int start = (__this->pos - (int)1);		HX_STACK_VAR(start,"start");
							HX_STACK_LINE(286)
							bool minus = (c1 == (int)45);		HX_STACK_VAR(minus,"minus");
							bool digit = !(minus);		HX_STACK_VAR(digit,"digit");
							bool zero = (c1 == (int)48);		HX_STACK_VAR(zero,"zero");
							HX_STACK_LINE(286)
							bool point = false;		HX_STACK_VAR(point,"point");
							bool e = false;		HX_STACK_VAR(e,"e");
							bool pm = false;		HX_STACK_VAR(pm,"pm");
							bool end = false;		HX_STACK_VAR(end,"end");
							HX_STACK_LINE(286)
							while((true)){
								HX_STACK_LINE(286)
								c1 = __this->str.cca((__this->pos)++);
								HX_STACK_LINE(286)
								switch( (int)(c1)){
									case (int)48: {
										HX_STACK_LINE(286)
										if (((bool(zero) && bool(!(point))))){
											HX_STACK_LINE(286)
											__this->invalidNumber(start);
										}
										HX_STACK_LINE(286)
										if ((minus)){
											HX_STACK_LINE(286)
											minus = false;
											HX_STACK_LINE(286)
											zero = true;
										}
										HX_STACK_LINE(286)
										digit = true;
									}
									;break;
									case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
										HX_STACK_LINE(286)
										if (((bool(zero) && bool(!(point))))){
											HX_STACK_LINE(286)
											__this->invalidNumber(start);
										}
										HX_STACK_LINE(286)
										if ((minus)){
											HX_STACK_LINE(286)
											minus = false;
										}
										HX_STACK_LINE(286)
										digit = true;
										HX_STACK_LINE(286)
										zero = false;
									}
									;break;
									case (int)46: {
										HX_STACK_LINE(286)
										if (((bool(minus) || bool(point)))){
											HX_STACK_LINE(286)
											__this->invalidNumber(start);
										}
										HX_STACK_LINE(286)
										digit = false;
										HX_STACK_LINE(286)
										point = true;
									}
									;break;
									case (int)101: case (int)69: {
										HX_STACK_LINE(286)
										if (((bool((bool(minus) || bool(zero))) || bool(e)))){
											HX_STACK_LINE(286)
											__this->invalidNumber(start);
										}
										HX_STACK_LINE(286)
										digit = false;
										HX_STACK_LINE(286)
										e = true;
									}
									;break;
									case (int)43: case (int)45: {
										HX_STACK_LINE(286)
										if (((bool(!(e)) || bool(pm)))){
											HX_STACK_LINE(286)
											__this->invalidNumber(start);
										}
										HX_STACK_LINE(286)
										digit = false;
										HX_STACK_LINE(286)
										pm = true;
									}
									;break;
									default: {
										HX_STACK_LINE(286)
										if ((!(digit))){
											HX_STACK_LINE(286)
											__this->invalidNumber(start);
										}
										HX_STACK_LINE(286)
										(__this->pos)--;
										HX_STACK_LINE(286)
										end = true;
									}
								}
								HX_STACK_LINE(286)
								if ((end)){
									HX_STACK_LINE(286)
									break;
								}
							}
							HX_STACK_LINE(286)
							Float f = ::Std_obj::parseFloat(__this->str.substr(start,(__this->pos - start)));		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(286)
							int i = ::Std_obj::_int(f);		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(286)
							return (  (((i == f))) ? Float(i) : Float(f) );
						}
						return null();
					}
				};
				HX_STACK_LINE(285)
				return _Function_3_1::Block(c,this);
			}
			;break;
			default: {
				HX_STACK_LINE(287)
				this->invalidChar();
			}
		}
	}
	HX_STACK_LINE(211)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Json_obj,parseRec,return )

Void Json_obj::invalidChar( ){
{
		HX_STACK_PUSH("Json::invalidChar","/usr/lib/haxe/std/haxe/Json.hx",202);
		HX_STACK_THIS(this);
		HX_STACK_LINE(203)
		(this->pos)--;
		HX_STACK_LINE(204)
		hx::Throw ((((HX_CSTRING("Invalid char ") + this->str.cca(this->pos)) + HX_CSTRING(" at position ")) + this->pos));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Json_obj,invalidChar,(void))

Dynamic Json_obj::doParse( ::String str){
	HX_STACK_PUSH("Json::doParse","/usr/lib/haxe/std/haxe/Json.hx",196);
	HX_STACK_THIS(this);
	HX_STACK_ARG(str,"str");
	HX_STACK_LINE(197)
	this->str = str;
	HX_STACK_LINE(198)
	this->pos = (int)0;
	HX_STACK_LINE(199)
	return this->parseRec();
}


HX_DEFINE_DYNAMIC_FUNC1(Json_obj,doParse,return )

Dynamic Json_obj::parse( ::String text){
	HX_STACK_PUSH("Json::parse","/usr/lib/haxe/std/haxe/Json.hx",398);
	HX_STACK_ARG(text,"text");
	HX_STACK_LINE(398)
	return ::haxe::Json_obj::__new()->doParse(text);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Json_obj,parse,return )


Json_obj::Json_obj()
{
}

void Json_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Json);
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(str,"str");
	HX_MARK_END_CLASS();
}

void Json_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(str,"str");
}

Dynamic Json_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		if (HX_FIELD_EQ(inName,"str") ) { return str; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"doParse") ) { return doParse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"parseRec") ) { return parseRec_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"parseString") ) { return parseString_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidChar") ) { return invalidChar_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"invalidNumber") ) { return invalidNumber_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Json_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"str") ) { str=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Json_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pos"));
	outFields->push(HX_CSTRING("str"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("parse"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("invalidNumber"),
	HX_CSTRING("parseString"),
	HX_CSTRING("parseRec"),
	HX_CSTRING("invalidChar"),
	HX_CSTRING("doParse"),
	HX_CSTRING("pos"),
	HX_CSTRING("str"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Json_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Json_obj::__mClass,"__mClass");
};

Class Json_obj::__mClass;

void Json_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.Json"), hx::TCanCast< Json_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Json_obj::__boot()
{
}

} // end namespace haxe
