#pragma once
class Vector2D
{
public:
	float x;
	float y;

public:
	Vector2D(float xv = 0.0f, float yv = 0.0f);
	virtual ~Vector2D();

	float modulo();
	float argumento();
	Vector2D unitario();

	Vector2D operator + (Vector2D&); //Se hace por referencia porque es un poco más rápido
	Vector2D operator - (Vector2D&);
	Vector2D operator + (float real); //Suma de un escalar

	float operator *  (Vector2D&); //Producto escalar
	Vector2D operator * (float); //Vector * un escalar
};

