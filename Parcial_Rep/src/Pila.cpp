/*
 * Pila.cpp
 *
 *  Created on: 17/10/2017
 *      Author: Sara
 */

#include "Pila.h"
#include <iostream>

Pila::Pila (){
	this->pila= new Nodo1(0);
}
Pila::~Pila(){
}

//Metodo de pila que agrega
void Pila :: Push(Nodo1 *&pila, int num){
	Nodo1 *newNodo = new Nodo1(num);       // creo un espacio en la memoria
	newNodo->dato=num;                     //carga valor dentro del nodo
	newNodo->siguiente= pila;              //carga el puntero pila dentro del nodo
	pila = newNodo;                        //asigna el nuevo nodo a pila
}
//Metodo de pila que saca
void Pila :: Pop(Nodo1 *&pila, int &n){
	Nodo1 *aux = pila;
	n=aux->dato;
	pila = aux->siguiente;
	delete aux;
}
//////////////// PROBLEMA 2  ///////////////////////
Nodo1 Pila :: retornar(Nodo1 *&p, int nuevo, int viejo){
    Nodo1 *tmp = new Nodo1(0);
    Nodo1 *aux = new Nodo1(0);
    aux = p;                     //// variable que sirve para modificar el puntero
    tmp = aux->siguiente;        //// variable que sirve para modificar el valor

    if(aux-> dato == viejo){
    	aux->dato = nuevo;
    	//return aux;
    }
    while(tmp != NULL){
    	if(tmp -> dato == viejo){
    		tmp->dato=nuevo;
    		aux->siguiente=tmp;
    		//return p;             //// retornara la pila modificada
    	}else{
    		tmp = tmp->siguiente;
    		aux = aux->siguiente;
    	}
    }
  //return p;                      //// en caso de no encontrar el valor viejo, retornara la pila original

}

