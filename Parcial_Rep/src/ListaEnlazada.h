/*
 * ListaEnlazada.h
 *
 *  Created on: 17/10/2017
 *      Author: Sara
 */

#ifndef LISTAENLAZADA_H_
#define LISTAENLAZADA_H_
#include "Nodo1.h"
#include <iostream>

class ListaEnlazada {
public:
	ListaEnlazada ();
		    ~ListaEnlazada ();

		Nodo1 *lista;
		void AddLinkedList(int n);
		void ShowLinkedList(Nodo1 *lista);
		void BuscarLinkedList(Nodo1 *lista, int n);
		void EliminarNodo(Nodo1 *&lista, int n);
		void Menu();
};

#endif /* LISTAENLAZADA_H_ */
