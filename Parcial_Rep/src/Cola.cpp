/*
 * Cola.cpp
 *
 *  Created on: 17/10/2017
 *      Author: Sara
 */
#include "Cola.h"
#include <iostream>
using namespace std;

Cola::Cola (){
	this-> frente = new Nodo1(0);
	this-> fin = new Nodo1(0);
}
	Cola::~Cola(){

}
//función para determinar si la cola esta vacía

bool Cola :: ValidarVacia(Nodo1 *frente){
	if(frente == NULL ){ // NULL
		return true;
	}else{
		return false;
	}
}
// Metodo para encolar
void Cola :: enqueue (Nodo1 *&frente, Nodo1 *&fin, int a){
	Nodo1 *nd = new Nodo1(0);
	nd->dato= a;
	nd->siguiente =NULL;//NULL

	if(ValidarVacia(frente)){
		frente = nd;
	}else{
		fin->siguiente = nd;
	}
	fin = nd;
}
// Metodo para desencoclar
void Cola :: dequeue(Nodo1 *&frente, Nodo1 *&fin, int &a){
	a = frente->dato;
	Nodo1 *aux=frente;
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}else{
		frente = frente->siguiente;
	}
	delete aux;
}
void Cola :: Menu1(){
	int opcion, dato;
		do{
				cout<<"MENU\n";
				cout<<"1. Encolar elementos\n";
				cout<<"2. Desencolar elementos\n";
				cout<<"3. Salir\n";
				cout<<"Opcion: ";
				cin >> opcion;

				switch(opcion){
				case 1:
					cout << "\nDigite el número: ";
					cin >> dato;
					enqueue(frente, fin , dato);
					cout<<"\n";
					system("pause");
					 break;
				case 2: cout<<"\nMostrando Dato: ";
				while(frente!=NULL){
					dequeue(frente, fin,  dato);
					if(frente!=NULL){
						cout<<dato<<" , ";
					}else{
						cout<<dato<<".";
					}
				}
						system("pause");
					    break;
				}
			system("cls");
			}while(opcion != 3);

}
