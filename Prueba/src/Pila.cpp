/*
 * Pila.cpp
 *
 *  Created on: 18/10/2017
 *      Author: Sara
 */

#include "Pila.h"


Pila::Pila (){
	this->pila= new Node_(0);
}
Pila::~Pila(){
}

void Pila :: Push(Node_ *&pila, int num){
	Node_ *newNodo = new Node_(num); // creo un espacio en la memoria
	newNodo->dato=num;             //carga valor dentro del nodo
	newNodo->siguiente= pila;      //carga el puntero pila dentro del nodo
	pila = newNodo;                //asigna el nuevo nodo a pila
}
void Pila :: Pop(Node_ *&pila, int &n){
	Node_ *aux = pila;
	n=aux->dato;
	pila = aux->siguiente;
	delete aux;
}
