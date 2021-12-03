#include "Bicola.h"
#include "stdlib.h"

Bicola::Bicola()
{
    pFrente = NULL;
    pFinal = NULL;
    largo = 0;
}

NodoD* Bicola::getFrente()
{
    return pFrente;
}

NodoD* Bicola::getFinal()
{
    return pFinal;
}

int Bicola::getLargo()
{
    return largo;
}

void Bicola::setFrente(NodoD* aux)
{
    this->pFrente = aux;
}

void Bicola::setFinal(NodoD* aux)
{
    this->pFinal = aux;
}

void Bicola::setLargo(int dato)
{
    this->largo = dato;
}

bool Bicola::esVacia()
{
    return largo == 0;
}

void Bicola::insertarDerecha(int dato)
{
    NodoD* nuevo = new NodoD(dato);
    if (esVacia()) {
        pFrente = nuevo;
    }
    else {
        pFinal->setSgte(nuevo);
        nuevo->setAnterior(pFinal);
    }
    pFinal = nuevo;
    setLargo(getLargo() + 1);
}

void Bicola::insertarIzquierda(int dato)
{
    NodoD* nuevo = new NodoD(dato);
    if (esVacia()) {
        pFrente = nuevo;
    }
    else {
        nuevo->setSgte(pFrente);
        pFrente->setAnterior(nuevo);
    }
    pFrente = nuevo;
    setLargo(getLargo() + 1);
}

int Bicola::desencolarDerecha()
{
    int dato = 0;

    if (!esVacia()) {
        dato = pFinal->getDato();
        //elimina el nodo que esta en el frente
        NodoD* aux = pFinal;
        pFinal = pFinal->getAnterior();
        pFinal->setSgte(NULL);
        delete aux;
        setLargo(getLargo() - 1);
        if (largo == 0) {
            pFinal = NULL;
        }

    }

    return dato;
}

int Bicola::desencolarIzquierda()
{
    int dato = 0;

    if (!esVacia()) {
        dato = pFrente->getDato();
        //elimina el nodo que esta en el frente
        NodoD* aux = pFrente;
        pFrente = pFrente->getSgte();
        pFrente->setAnterior(NULL);
        delete aux;     
        setLargo(getLargo() - 1);
        if (largo == 0) {
            pFinal = NULL;
        }

    }

    return dato;
}

void Bicola::desplegar()
{
    NodoD* aux = pFrente;
    cout << "ELEMENTOS EN LA BICOLA: " << endl;
    while (aux != NULL) {
        cout << aux->getDato() << "-> ";
        aux = aux->getSgte();
    }
    cout << "Final \n\n\n";

}
