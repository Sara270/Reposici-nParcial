//============================================================================
// Name        : Parcial_Rep.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Pila.h"
#include "Cola.h"
#include "ListaEnlazada.h"
#include "ListaCircular1.h"
using namespace std;

int main() {
	cout << "---> REPOSICIÓN PARCIAL <---" << endl;
	ListaEnlazada le;
	Cola c;
	int opcion;
			do{
					cout<<"MENU\n";
					cout<<"1. Cola\n";
					cout<<"2. Lista Enlazada\n";
					cout<<"3. Salir\n";
					cout<<"Opcion: ";
					cin >> opcion;

					switch(opcion){
					case 1:
						c.Menu1();
						 break;
					case 2:
						le.Menu();

						    break;
					}
				}while(opcion != 3);

	}

