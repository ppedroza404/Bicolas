// Bicolas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Bicola.h"
using namespace std;

void menuEntrada() {
	cout << "Menu1";
}

void menuSalida() {
	cout << "Bicolas con restriccion de entrada";
	cout << "1-Encolar final" << endl;
	cout << "2-Desencolar frente" << endl;
	cout << "3-Desencolar final" << endl;

}

int main()
{
    int opcion;
    int nodo;
    bool repetir = true;
    Bicola* queue = new Bicola();
    do {

        cout << "\n\n************************" << endl;
        cout << "**  Menu de Principal**" << endl;
        cout << "************************" << endl;
        cout << "1. Bicolas con restriccion de entrada" << endl;
        cout << "2. Bicolas con restriccion de salida" << endl;

        cout << "\nIngrese una opcion: ";
        cin >> opcion;

        if (opcion == 1) {

            //Texto del menú que se verá cada vez
            cout << "\n\n************************" << endl;
            cout << "**  Menu de Bicola con restriccion de entrada**" << endl;
            cout << "************************" << endl;
            cout << "1. Encolar final" << endl;
            cout << "2. Desencolar frente" << endl;
            cout << "3. Desencolar final" << endl;
            cout << "4. Ver lista" << endl;
            cout << "0. SALIR" << endl;

            cout << "\nIngrese una opcion: ";
            cin >> opcion;
            system("CLS");

            switch (opcion) {
            case 1:
                //Agrega un Nodo al inicio de la lista
                cout << "\nIngrese el dato: ";
                cin >> nodo;
                queue->insertarDerecha(nodo);
                break;

            case 2:
                cout << "EL ELEMENTO ELIMINADO FUE: "<< queue->desencolarIzquierda() << endl;
                queue->desplegar();
                break;
            case 3:
                cout << "EL ELEMENTO ELIMINADO FUE: " << queue->desencolarDerecha() << endl;
                queue->desplegar();
                break;
            case 4:
                queue->desplegar();
                break;
            case 0:
                repetir = false;
                break;
            }



        }
        else if (opcion == 2) {

            cout << "\n\n************************" << endl;
            cout << "**  Menu de Bicola con restriccion de salida**" << endl;
            cout << "************************" << endl;
            cout << "1. Encolar frente" << endl;
            cout << "2. Encolar final" << endl;
            cout << "3. Desencolar frente" << endl;
            cout << "4. Ver lista" << endl;
            cout << "0. SALIR" << endl;

            cout << "\nIngrese una opcion: ";
            cin >> opcion;
            system("CLS");

            switch (opcion) {
            case 1:
                //Agrega un Nodo al inicio de la lista
                cout << "\nIngrese el dato: ";
                cin >> nodo;
                queue->insertarIzquierda(nodo);
                break;

            case 2:
                //Agrega un Nodo al inicio de la lista
                cout << "\nIngrese el dato: ";
                cin >> nodo;
                queue->insertarDerecha(nodo);
                break;
            case 3:
                cout << queue->desencolarIzquierda();
                queue->desplegar();
            case 4:
                queue->desplegar();
                break;
            case 0:
                repetir = false;
                break;
            }
        }

    } while (repetir);
   
}
