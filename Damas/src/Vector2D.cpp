#include "Vector2D.h"
#include <math.h>

Vector2D::Vector2D(float xv, float yv)
{
	x = xv;
	y = yv;
}
Vector2D::~Vector2D()
{
}

///CÁLCULO FUNCIONES///
float Vector2D::modulo()
{
	return (float)sqrt(x * x + y * y); //Se hace una conversion forzada para evitar warning, ya que sqrt devolvería double
}
float Vector2D::argumento()
{
	return (float)atan2(y, x);
}
Vector2D Vector2D::unitario()
{
	Vector2D retorno(x, y);
	float mod = modulo();

	if (mod > 0.00001)
	{
		retorno.x /= mod; //Lo mismo que poner retorno.x = x/mod;
		retorno.y /= mod;
	}
	return retorno;
}

///OPERADORES///
float Vector2D:: operator *  (Vector2D& v)
{
	return x * v.x + y * v.y;
}
Vector2D Vector2D::operator * (float op)
{
	Vector2D resultado;
	resultado.x = x * op;
	resultado.y = y * op;
	return resultado;
}
Vector2D Vector2D::operator + (Vector2D& v)
{
	Vector2D resultado;
	resultado.x = x + v.x;
	resultado.y = y + v.y;
	return resultado;
}
Vector2D Vector2D::operator - (Vector2D& v)
{
	Vector2D resultado;
	resultado.x = x - v.x;
	resultado.y = y - v.y;
	return resultado;
}
Vector2D Vector2D::operator + (float real)
{
	Vector2D resultado;
	resultado.x = x + real;
	resultado.y = y;
	return resultado;
}

bool Vector2D :: operator== (Vector2D v) {

	if (v.x == x && v.y==y)
		return true;
	else
		 return false;
}

