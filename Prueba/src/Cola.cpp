/*
 * Cola.cpp
 *
 *  Created on: 18/10/2017
 *      Author: Sara
 */

#include "Cola.h"
#include <iostream>
using namespace std;

Cola::Cola (){
	this-> frente = new Node_(0);
	this-> fin = new Node_(0);
}
	Cola::~Cola(){

}
//función para determinar si la cola esta vacía

bool Cola :: ValidarVacia(Node_ *frente){
	if(frente == NULL ){ // NULL
		return true;
	}else{
		return false;
	}
}

void Cola :: enqueue (Node_ *&frente, Node_ *&fin, int a){
	Node_ *nd = new Node_(0);
	nd->dato= a;
	nd->siguiente =NULL;//NULL

	if(ValidarVacia(frente)){
		frente = nd;
	}else{
		fin->siguiente = nd;
	}
	fin = nd;
}

void Cola :: dequeue(Node_ *&frente, Node_ *&fin, int a){
	a = frente->dato;
	Node_ *aux=frente;
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}else{
		frente = frente->siguiente;
	}
	delete aux;
}



