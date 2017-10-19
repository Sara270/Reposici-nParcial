/*
 * ListaEnlazada.h
 *
 *  Created on: 18/10/2017
 *      Author: Sara
 */

#ifndef LISTAENLAZADA_H_
#define LISTAENLAZADA_H_
#include "Nodo.h"

class ListaEnlazada {
public:
	ListaEnlazada ();
		    ~ListaEnlazada ();

		Node_ *lista;
		void AddLinkedList(Node_ *&lista, int n);
		void ShowLinkedList(Node_ *lista);
		void BuscarLinkedList(Node_ *lista, int n);
		void EliminarNodo(Node_ *&lista, int n);
		void Menu();
};

#endif /* LISTAENLAZADA_H_ */
