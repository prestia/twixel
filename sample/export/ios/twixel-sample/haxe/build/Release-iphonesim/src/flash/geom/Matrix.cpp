#include <hxcpp.h>

#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Vector3D
#include <flash/geom/Vector3D.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flash{
namespace geom{

Void Matrix_obj::__construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{
HX_STACK_PUSH("Matrix::new","flash/geom/Matrix.hx",15);
Float a = __o_a.Default(1);
Float b = __o_b.Default(0);
Float c = __o_c.Default(0);
Float d = __o_d.Default(1);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
{
	HX_STACK_LINE(17)
	this->a = a;
	HX_STACK_LINE(18)
	this->b = b;
	HX_STACK_LINE(19)
	this->c = c;
	HX_STACK_LINE(20)
	this->d = d;
	HX_STACK_LINE(21)
	this->tx = tx;
	HX_STACK_LINE(22)
	this->ty = ty;
}
;
	return null();
}

Matrix_obj::~Matrix_obj() { }

Dynamic Matrix_obj::__CreateEmpty() { return  new Matrix_obj; }
hx::ObjectPtr< Matrix_obj > Matrix_obj::__new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{  hx::ObjectPtr< Matrix_obj > result = new Matrix_obj();
	result->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return result;}

Dynamic Matrix_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix_obj > result = new Matrix_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void Matrix_obj::translate( Float x,Float y){
{
		HX_STACK_PUSH("Matrix::translate","flash/geom/Matrix.hx",345);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(347)
		hx::AddEq(this->tx,x);
		HX_STACK_LINE(348)
		hx::AddEq(this->ty,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,translate,(void))

::flash::geom::Point Matrix_obj::transformPoint( ::flash::geom::Point point){
	HX_STACK_PUSH("Matrix::transformPoint","flash/geom/Matrix.hx",338);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(338)
	return ::flash::geom::Point_obj::__new((((point->x * this->a) + (point->y * this->c)) + this->tx),(((point->x * this->b) + (point->y * this->d)) + this->ty));
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,transformPoint,return )

::String Matrix_obj::toString( ){
	HX_STACK_PUSH("Matrix::toString","flash/geom/Matrix.hx",331);
	HX_STACK_THIS(this);
	HX_STACK_LINE(331)
	return ((((((((((((HX_CSTRING("(a=") + this->a) + HX_CSTRING(", b=")) + this->b) + HX_CSTRING(", c=")) + this->c) + HX_CSTRING(", d=")) + this->d) + HX_CSTRING(", tx=")) + this->tx) + HX_CSTRING(", ty=")) + this->ty) + HX_CSTRING(")"));
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,toString,return )

Void Matrix_obj::setTo( Float a,Float b,Float c,Float d,Float tx,Float ty){
{
		HX_STACK_PUSH("Matrix::setTo","flash/geom/Matrix.hx",319);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(b,"b");
		HX_STACK_ARG(c,"c");
		HX_STACK_ARG(d,"d");
		HX_STACK_ARG(tx,"tx");
		HX_STACK_ARG(ty,"ty");
		HX_STACK_LINE(321)
		this->a = a;
		HX_STACK_LINE(322)
		this->b = b;
		HX_STACK_LINE(323)
		this->c = c;
		HX_STACK_LINE(324)
		this->d = d;
		HX_STACK_LINE(325)
		this->tx = tx;
		HX_STACK_LINE(326)
		this->ty = ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Matrix_obj,setTo,(void))

Void Matrix_obj::setRotation( Float angle,hx::Null< Float >  __o_scale){
Float scale = __o_scale.Default(1);
	HX_STACK_PUSH("Matrix::setRotation","flash/geom/Matrix.hx",309);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(scale,"scale");
{
		HX_STACK_LINE(311)
		this->a = (::Math_obj::cos(angle) * scale);
		HX_STACK_LINE(312)
		this->c = (::Math_obj::sin(angle) * scale);
		HX_STACK_LINE(313)
		this->b = -(this->c);
		HX_STACK_LINE(314)
		this->d = this->a;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,setRotation,(void))

Void Matrix_obj::scale( Float x,Float y){
{
		HX_STACK_PUSH("Matrix::scale","flash/geom/Matrix.hx",295);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(297)
		hx::MultEq(this->a,x);
		HX_STACK_LINE(298)
		hx::MultEq(this->b,y);
		HX_STACK_LINE(300)
		hx::MultEq(this->c,x);
		HX_STACK_LINE(301)
		hx::MultEq(this->d,y);
		HX_STACK_LINE(303)
		hx::MultEq(this->tx,x);
		HX_STACK_LINE(304)
		hx::MultEq(this->ty,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,scale,(void))

Void Matrix_obj::rotate( Float angle){
{
		HX_STACK_PUSH("Matrix::rotate","flash/geom/Matrix.hx",275);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angle,"angle");
		HX_STACK_LINE(277)
		Float cos = ::Math_obj::cos(angle);		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(278)
		Float sin = ::Math_obj::sin(angle);		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(280)
		Float a1 = ((this->a * cos) - (this->b * sin));		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(281)
		this->b = ((this->a * sin) + (this->b * cos));
		HX_STACK_LINE(282)
		this->a = a1;
		HX_STACK_LINE(284)
		Float c1 = ((this->c * cos) - (this->d * sin));		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(285)
		this->d = ((this->c * sin) + (this->d * cos));
		HX_STACK_LINE(286)
		this->c = c1;
		HX_STACK_LINE(288)
		Float tx1 = ((this->tx * cos) - (this->ty * sin));		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(289)
		this->ty = ((this->tx * sin) + (this->ty * cos));
		HX_STACK_LINE(290)
		this->tx = tx1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,rotate,(void))

::flash::geom::Matrix Matrix_obj::mult( ::flash::geom::Matrix m){
	HX_STACK_PUSH("Matrix::mult","flash/geom/Matrix.hx",258);
	HX_STACK_THIS(this);
	HX_STACK_ARG(m,"m");
	HX_STACK_LINE(260)
	::flash::geom::Matrix result = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(262)
	result->a = ((this->a * m->a) + (this->b * m->c));
	HX_STACK_LINE(263)
	result->b = ((this->a * m->b) + (this->b * m->d));
	HX_STACK_LINE(264)
	result->c = ((this->c * m->a) + (this->d * m->c));
	HX_STACK_LINE(265)
	result->d = ((this->c * m->b) + (this->d * m->d));
	HX_STACK_LINE(267)
	result->tx = (((this->tx * m->a) + (this->ty * m->c)) + m->tx);
	HX_STACK_LINE(268)
	result->ty = (((this->tx * m->b) + (this->ty * m->d)) + m->ty);
	HX_STACK_LINE(270)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,mult,return )

::flash::geom::Matrix Matrix_obj::invert( ){
	HX_STACK_PUSH("Matrix::invert","flash/geom/Matrix.hx",228);
	HX_STACK_THIS(this);
	HX_STACK_LINE(230)
	Float norm = ((this->a * this->d) - (this->b * this->c));		HX_STACK_VAR(norm,"norm");
	HX_STACK_LINE(232)
	if (((norm == (int)0))){
		HX_STACK_LINE(234)
		this->a = this->b = this->c = this->d = (int)0;
		HX_STACK_LINE(235)
		this->tx = -(this->tx);
		HX_STACK_LINE(236)
		this->ty = -(this->ty);
	}
	else{
		HX_STACK_LINE(240)
		norm = (Float(1.0) / Float(norm));
		HX_STACK_LINE(241)
		Float a1 = (this->d * norm);		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(242)
		this->d = (this->a * norm);
		HX_STACK_LINE(243)
		this->a = a1;
		HX_STACK_LINE(244)
		hx::MultEq(this->b,-(norm));
		HX_STACK_LINE(245)
		hx::MultEq(this->c,-(norm));
		HX_STACK_LINE(247)
		Float tx1 = ((-(this->a) * this->tx) - (this->c * this->ty));		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(248)
		this->ty = ((-(this->b) * this->tx) - (this->d * this->ty));
		HX_STACK_LINE(249)
		this->tx = tx1;
	}
	HX_STACK_LINE(253)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,invert,return )

Void Matrix_obj::identity( ){
{
		HX_STACK_PUSH("Matrix::identity","flash/geom/Matrix.hx",216);
		HX_STACK_THIS(this);
		HX_STACK_LINE(218)
		this->a = (int)1;
		HX_STACK_LINE(219)
		this->b = (int)0;
		HX_STACK_LINE(220)
		this->c = (int)0;
		HX_STACK_LINE(221)
		this->d = (int)1;
		HX_STACK_LINE(222)
		this->tx = (int)0;
		HX_STACK_LINE(223)
		this->ty = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,identity,(void))

::flash::geom::Point Matrix_obj::deltaTransformPoint( ::flash::geom::Point point){
	HX_STACK_PUSH("Matrix::deltaTransformPoint","flash/geom/Matrix.hx",209);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(209)
	return ::flash::geom::Point_obj::__new(((point->x * this->a) + (point->y * this->c)),((point->x * this->b) + (point->y * this->d)));
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,deltaTransformPoint,return )

Void Matrix_obj::createGradientBox( Float width,Float height,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
	HX_STACK_PUSH("Matrix::createGradientBox","flash/geom/Matrix.hx",183);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(rotation,"rotation");
	HX_STACK_ARG(tx,"tx");
	HX_STACK_ARG(ty,"ty");
{
		HX_STACK_LINE(185)
		this->a = (Float(width) / Float(1638.4));
		HX_STACK_LINE(186)
		this->d = (Float(height) / Float(1638.4));
		HX_STACK_LINE(188)
		if (((rotation != 0.0))){
			HX_STACK_LINE(190)
			Float cos = ::Math_obj::cos(rotation);		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(191)
			Float sin = ::Math_obj::sin(rotation);		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(192)
			this->b = (sin * this->d);
			HX_STACK_LINE(193)
			this->c = (-(sin) * this->a);
			HX_STACK_LINE(194)
			hx::MultEq(this->a,cos);
			HX_STACK_LINE(195)
			hx::MultEq(this->d,cos);
		}
		else{
			HX_STACK_LINE(197)
			this->b = this->c = (int)0;
		}
		HX_STACK_LINE(203)
		this->tx = (tx + (Float(width) / Float((int)2)));
		HX_STACK_LINE(204)
		this->ty = (ty + (Float(height) / Float((int)2)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createGradientBox,(void))

Void Matrix_obj::createBox( Float scaleX,Float scaleY,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
	HX_STACK_PUSH("Matrix::createBox","flash/geom/Matrix.hx",172);
	HX_STACK_THIS(this);
	HX_STACK_ARG(scaleX,"scaleX");
	HX_STACK_ARG(scaleY,"scaleY");
	HX_STACK_ARG(rotation,"rotation");
	HX_STACK_ARG(tx,"tx");
	HX_STACK_ARG(ty,"ty");
{
		HX_STACK_LINE(174)
		this->a = scaleX;
		HX_STACK_LINE(175)
		this->d = scaleY;
		HX_STACK_LINE(176)
		this->b = rotation;
		HX_STACK_LINE(177)
		this->tx = tx;
		HX_STACK_LINE(178)
		this->ty = ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createBox,(void))

Void Matrix_obj::copyRowTo( int row,::flash::geom::Vector3D vector3D){
{
		HX_STACK_PUSH("Matrix::copyRowTo","flash/geom/Matrix.hx",145);
		HX_STACK_THIS(this);
		HX_STACK_ARG(row,"row");
		HX_STACK_ARG(vector3D,"vector3D");
		HX_STACK_LINE(145)
		if (((row > (int)2))){
			HX_STACK_LINE(147)
			hx::Throw (((HX_CSTRING("Row ") + row) + HX_CSTRING(" out of bounds (2)")));
		}
		else{
			HX_STACK_LINE(151)
			if (((row == (int)0))){
				HX_STACK_LINE(153)
				vector3D->x = this->a;
				HX_STACK_LINE(154)
				vector3D->y = this->b;
				HX_STACK_LINE(155)
				vector3D->z = this->tx;
			}
			else{
				HX_STACK_LINE(157)
				if (((row == (int)1))){
					HX_STACK_LINE(159)
					vector3D->x = this->c;
					HX_STACK_LINE(160)
					vector3D->y = this->d;
					HX_STACK_LINE(161)
					vector3D->z = this->ty;
				}
				else{
					HX_STACK_LINE(165)
					vector3D->x = (int)0;
					HX_STACK_LINE(165)
					vector3D->y = (int)0;
					HX_STACK_LINE(165)
					vector3D->z = (int)1;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyRowTo,(void))

Void Matrix_obj::copyRowFrom( int row,::flash::geom::Vector3D vector3D){
{
		HX_STACK_PUSH("Matrix::copyRowFrom","flash/geom/Matrix.hx",119);
		HX_STACK_THIS(this);
		HX_STACK_ARG(row,"row");
		HX_STACK_ARG(vector3D,"vector3D");
		HX_STACK_LINE(119)
		if (((row > (int)2))){
			HX_STACK_LINE(121)
			hx::Throw (((HX_CSTRING("Row ") + row) + HX_CSTRING(" out of bounds (2)")));
		}
		else{
			HX_STACK_LINE(125)
			if (((row == (int)0))){
				HX_STACK_LINE(127)
				this->a = vector3D->x;
				HX_STACK_LINE(128)
				this->c = vector3D->y;
			}
			else{
				HX_STACK_LINE(130)
				if (((row == (int)1))){
					HX_STACK_LINE(132)
					this->b = vector3D->x;
					HX_STACK_LINE(133)
					this->d = vector3D->y;
				}
				else{
					HX_STACK_LINE(137)
					this->tx = vector3D->x;
					HX_STACK_LINE(138)
					this->ty = vector3D->y;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyRowFrom,(void))

Void Matrix_obj::copyFrom( ::flash::geom::Matrix other){
{
		HX_STACK_PUSH("Matrix::copyFrom","flash/geom/Matrix.hx",107);
		HX_STACK_THIS(this);
		HX_STACK_ARG(other,"other");
		HX_STACK_LINE(109)
		this->a = other->a;
		HX_STACK_LINE(110)
		this->b = other->b;
		HX_STACK_LINE(111)
		this->c = other->c;
		HX_STACK_LINE(112)
		this->d = other->d;
		HX_STACK_LINE(113)
		this->tx = other->tx;
		HX_STACK_LINE(114)
		this->ty = other->ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,copyFrom,(void))

Void Matrix_obj::copyColumnTo( int column,::flash::geom::Vector3D vector3D){
{
		HX_STACK_PUSH("Matrix::copyColumnTo","flash/geom/Matrix.hx",78);
		HX_STACK_THIS(this);
		HX_STACK_ARG(column,"column");
		HX_STACK_ARG(vector3D,"vector3D");
		HX_STACK_LINE(78)
		if (((column > (int)2))){
			HX_STACK_LINE(80)
			hx::Throw (((HX_CSTRING("Column ") + column) + HX_CSTRING(" out of bounds (2)")));
		}
		else{
			HX_STACK_LINE(84)
			if (((column == (int)0))){
				HX_STACK_LINE(86)
				vector3D->x = this->a;
				HX_STACK_LINE(87)
				vector3D->y = this->c;
				HX_STACK_LINE(88)
				vector3D->z = (int)0;
			}
			else{
				HX_STACK_LINE(90)
				if (((column == (int)1))){
					HX_STACK_LINE(92)
					vector3D->x = this->b;
					HX_STACK_LINE(93)
					vector3D->y = this->d;
					HX_STACK_LINE(94)
					vector3D->z = (int)0;
				}
				else{
					HX_STACK_LINE(98)
					vector3D->x = this->tx;
					HX_STACK_LINE(99)
					vector3D->y = this->ty;
					HX_STACK_LINE(100)
					vector3D->z = (int)1;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyColumnTo,(void))

Void Matrix_obj::copyColumnFrom( int column,::flash::geom::Vector3D vector3D){
{
		HX_STACK_PUSH("Matrix::copyColumnFrom","flash/geom/Matrix.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_ARG(column,"column");
		HX_STACK_ARG(vector3D,"vector3D");
		HX_STACK_LINE(52)
		if (((column > (int)2))){
			HX_STACK_LINE(54)
			hx::Throw (((HX_CSTRING("Column ") + column) + HX_CSTRING(" out of bounds (2)")));
		}
		else{
			HX_STACK_LINE(58)
			if (((column == (int)0))){
				HX_STACK_LINE(60)
				this->a = vector3D->x;
				HX_STACK_LINE(61)
				this->c = vector3D->y;
			}
			else{
				HX_STACK_LINE(63)
				if (((column == (int)1))){
					HX_STACK_LINE(65)
					this->b = vector3D->x;
					HX_STACK_LINE(66)
					this->d = vector3D->y;
				}
				else{
					HX_STACK_LINE(70)
					this->tx = vector3D->x;
					HX_STACK_LINE(71)
					this->ty = vector3D->y;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyColumnFrom,(void))

Void Matrix_obj::concat( ::flash::geom::Matrix m){
{
		HX_STACK_PUSH("Matrix::concat","flash/geom/Matrix.hx",34);
		HX_STACK_THIS(this);
		HX_STACK_ARG(m,"m");
		HX_STACK_LINE(36)
		Float a1 = ((this->a * m->a) + (this->b * m->c));		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(37)
		this->b = ((this->a * m->b) + (this->b * m->d));
		HX_STACK_LINE(38)
		this->a = a1;
		HX_STACK_LINE(40)
		Float c1 = ((this->c * m->a) + (this->d * m->c));		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(41)
		this->d = ((this->c * m->b) + (this->d * m->d));
		HX_STACK_LINE(43)
		this->c = c1;
		HX_STACK_LINE(45)
		Float tx1 = (((this->tx * m->a) + (this->ty * m->c)) + m->tx);		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(46)
		this->ty = (((this->tx * m->b) + (this->ty * m->d)) + m->ty);
		HX_STACK_LINE(47)
		this->tx = tx1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,concat,(void))

::flash::geom::Matrix Matrix_obj::clone( ){
	HX_STACK_PUSH("Matrix::clone","flash/geom/Matrix.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_LINE(27)
	return ::flash::geom::Matrix_obj::__new(this->a,this->b,this->c,this->d,this->tx,this->ty);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,clone,return )


Matrix_obj::Matrix_obj()
{
}

void Matrix_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Matrix);
	HX_MARK_MEMBER_NAME(ty,"ty");
	HX_MARK_MEMBER_NAME(tx,"tx");
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(c,"c");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_END_CLASS();
}

void Matrix_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ty,"ty");
	HX_VISIT_MEMBER_NAME(tx,"tx");
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(c,"c");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(a,"a");
}

Dynamic Matrix_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { return d; }
		if (HX_FIELD_EQ(inName,"c") ) { return c; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ty") ) { return ty; }
		if (HX_FIELD_EQ(inName,"tx") ) { return tx; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return mult_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"setTo") ) { return setTo_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		if (HX_FIELD_EQ(inName,"createBox") ) { return createBox_dyn(); }
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { return copyRowTo_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setRotation") ) { return setRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { return copyRowFrom_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { return copyColumnTo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"transformPoint") ) { return transformPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { return copyColumnFrom_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBox") ) { return createGradientBox_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"deltaTransformPoint") ) { return deltaTransformPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

static int __id_translate = __hxcpp_field_to_id("translate");
static int __id_transformPoint = __hxcpp_field_to_id("transformPoint");
static int __id_toString = __hxcpp_field_to_id("toString");
static int __id_setTo = __hxcpp_field_to_id("setTo");
static int __id_setRotation = __hxcpp_field_to_id("setRotation");
static int __id_scale = __hxcpp_field_to_id("scale");
static int __id_rotate = __hxcpp_field_to_id("rotate");
static int __id_mult = __hxcpp_field_to_id("mult");
static int __id_invert = __hxcpp_field_to_id("invert");
static int __id_identity = __hxcpp_field_to_id("identity");
static int __id_deltaTransformPoint = __hxcpp_field_to_id("deltaTransformPoint");
static int __id_createGradientBox = __hxcpp_field_to_id("createGradientBox");
static int __id_createBox = __hxcpp_field_to_id("createBox");
static int __id_copyRowTo = __hxcpp_field_to_id("copyRowTo");
static int __id_copyRowFrom = __hxcpp_field_to_id("copyRowFrom");
static int __id_copyFrom = __hxcpp_field_to_id("copyFrom");
static int __id_copyColumnTo = __hxcpp_field_to_id("copyColumnTo");
static int __id_copyColumnFrom = __hxcpp_field_to_id("copyColumnFrom");
static int __id_concat = __hxcpp_field_to_id("concat");
static int __id_clone = __hxcpp_field_to_id("clone");
static int __id_ty = __hxcpp_field_to_id("ty");
static int __id_tx = __hxcpp_field_to_id("tx");
static int __id_d = __hxcpp_field_to_id("d");
static int __id_c = __hxcpp_field_to_id("c");
static int __id_b = __hxcpp_field_to_id("b");
static int __id_a = __hxcpp_field_to_id("a");


double Matrix_obj::__INumField(int inFieldID)
{
	if (inFieldID==__id_ty) return ty;
	if (inFieldID==__id_tx) return tx;
	if (inFieldID==__id_d) return d;
	if (inFieldID==__id_c) return c;
	if (inFieldID==__id_b) return b;
	if (inFieldID==__id_a) return a;
	return super::__INumField(inFieldID);
}

Dynamic Matrix_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Matrix_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ty"));
	outFields->push(HX_CSTRING("tx"));
	outFields->push(HX_CSTRING("d"));
	outFields->push(HX_CSTRING("c"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("a"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("translate"),
	HX_CSTRING("transformPoint"),
	HX_CSTRING("toString"),
	HX_CSTRING("setTo"),
	HX_CSTRING("setRotation"),
	HX_CSTRING("scale"),
	HX_CSTRING("rotate"),
	HX_CSTRING("mult"),
	HX_CSTRING("invert"),
	HX_CSTRING("identity"),
	HX_CSTRING("deltaTransformPoint"),
	HX_CSTRING("createGradientBox"),
	HX_CSTRING("createBox"),
	HX_CSTRING("copyRowTo"),
	HX_CSTRING("copyRowFrom"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("copyColumnTo"),
	HX_CSTRING("copyColumnFrom"),
	HX_CSTRING("concat"),
	HX_CSTRING("clone"),
	HX_CSTRING("ty"),
	HX_CSTRING("tx"),
	HX_CSTRING("d"),
	HX_CSTRING("c"),
	HX_CSTRING("b"),
	HX_CSTRING("a"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
};

Class Matrix_obj::__mClass;

void Matrix_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.geom.Matrix"), hx::TCanCast< Matrix_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Matrix_obj::__boot()
{
}

} // end namespace flash
} // end namespace geom
