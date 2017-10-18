/*
 * Pila.cpp
 *
 *  Created on: 17/10/2017
 *      Author: Sara
 */

#include <iostream>
#include <stdlib.h> /// biblioteca utilizada para el new
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};
Nodo *pila =NULL;
////Prototipo
void Push(Nodo *&, int);
void Pop(Nodo *&,  int&);
int main2() {
    int dato;

    cout<<"Ingrese un número ";
    cin>>dato;
    Push(pila, dato);
    cout<<"Ingrese un número ";
    cin>>dato;
    Push(pila, dato);
    cout<<"\nSacando elementos ";

    while((pila != NULL)){ // mientras no sea el final de la pila
    	Pop(pila, dato);
    	if(pila != NULL){
    		cout << dato<< ", ";
    	}else{
    		cout << dato << ".";
    	}
    }



	return 0;
}

void Push(Nodo *&pila, int num){
	Nodo *newNodo = new Nodo(); // creo un espacio en la memoria
	newNodo->dato=num; //carga valor dentro del nodo
	newNodo->siguiente= pila; //carga el puntero pila dentro del nodo
	pila = newNodo; //asigna el nuevo nodo a pila
}
void Pop(Nodo *&pila, int &n){
	Nodo *aux = pila;
	n=aux->dato;
	pila = aux->siguiente;
	delete aux;
}
