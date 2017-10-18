/*
 * Cola.cpp
 *
 *  Created on: 17/10/2017
 *      Author: Sara
 */

#include <iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//Prototipos funcion
void enqueue(Nodo *&, Nodo*&, int);
bool ValidarVacia(Nodo *);
void dequeue(Nodo *&, Nodo*&,  int);
int main() {

	Nodo *frente =NULL;
	Nodo *fin =NULL;

	int dato;

	 cout<<"Ingrese un número ";
	 cin>>dato;
	 enqueue(frente,  fin, dato);

	 while (frente != NULL){
		 dequeue(frente, fin, dato);

		 if (frente !=NULL){
			 cout << dato << " ,";
		 }else{
			 cout << dato << ".";
		 }
	 }


	return 0;
}
//funcion para insertar elementos en una cola
void enqueue (Nodo *&frente, Nodo *&fin, int a){
	Nodo *nd = new Nodo();
	nd->dato= a;
	nd->siguiente =NULL;

	if(ValidarVacia(frente)){
		frente = nd;
	}else{
		fin->siguiente = nd;
	}
	fin = nd;
}

void dequeue(Nodo *&frente, Nodo *&fin, int a){
	a = frente->dato;
	Nodo *aux=frente;
	if(frente == fin){
		frente = NULL;
		fin == NULL;
	}else{
		frente = frente->siguiente;
	}
	delete aux;

}

//función para determinar si la cola esta vacía

bool ValidarVacia(Nodo *frente){
	if(frente == NULL){
		return true;
	}else{
		return false;
	}
}

