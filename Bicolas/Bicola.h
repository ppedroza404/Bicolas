#pragma once
#include "NodoD.h"
class Bicola
{
private:
	NodoD* pFrente;
	NodoD* pFinal;
	int largo;

	//get y sets
	NodoD* getFrente();
	NodoD* getFinal();
	int getLargo();

	void setFrente(NodoD*);
	void setFinal(NodoD*);
	void setLargo(int);

public:
	Bicola();
	bool esVacia();
	void insertarDerecha(int);
	void insertarIzquierda(int);
	int desencolarDerecha();
	int desencolarIzquierda();
	void desplegar();
};

