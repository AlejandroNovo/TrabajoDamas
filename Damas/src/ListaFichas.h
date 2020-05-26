#pragma once
#define MAX_FICHAS 16
#include "Ficha.h"

class ListaFichas
{
private:
	Ficha* lista[MAX_FICHAS];
	int numero;

public:
	ListaFichas();
	virtual ~ListaFichas();
	void destruirContenido();

	bool agregar(Ficha* f);
	void eliminar(int index);
	void eliminar(Ficha* f);

	void dibuja();
	//void mueve(float t);

	Ficha* operator [] (int i);

	int getNumero()
	{
		return numero;
	}

	void setColor(char r, char g, char b);
};


