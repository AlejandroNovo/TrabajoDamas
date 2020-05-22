#include "ListaFichas.h"

///CONSTRUCTORES Y DESTRUCTORES///
ListaFichas::ListaFichas()
{
	numero = 0;
	for (int i = 0; i < MAX_FICHAS; i++)
	{
		lista[i] = 0; //Por ahora los 100 valores del puntero no apuntan a nada
	}
}

ListaFichas::~ListaFichas()
{
}

///AGREGAR - DESTRUIR///
bool ListaFichas::agregar(Ficha* f)
{
	if (numero < MAX_FICHAS)
		lista[numero++] = f;
	else
		return false;

	return true;

	numero = 0;
	for (int i = 0; i < numero; i++)
	{
		for (int j = 0; j < numero; j++)
			if ((lista[i]) == (lista[j]))
			{
				return false;
			}
	}
}
void ListaFichas::destruirContenido()
{
	for (int i = 0; i < numero; i++)
	{
		delete lista[i];
	}
	numero = 0;
}
void ListaFichas::eliminar(int index)
{
	if ((index < 0) || (index >= numero))
		return;
	delete lista[index];
	numero--;
	for (int i = index; i < numero; i++)
		lista[i] = lista[i + 1];

}
void ListaFichas::eliminar(Ficha* f)
{
	for (int i = 0; i < numero; i++)
		if (lista[i] == f)
		{
			eliminar(i);
			return;
		}
}

void ListaFichas::dibuja()
{
	for (int i = 0; i < numero; i++)
		lista[i]-> dibuja();
}

Ficha* ListaFichas::operator[](int i)
{
	if (i >= numero) //si me paso devuelvo la ultima
		i = numero - 1;
	if (i < 0) //si el indice es negativo, devuelvo la primera
		i = 0;
	return lista[i];
}
