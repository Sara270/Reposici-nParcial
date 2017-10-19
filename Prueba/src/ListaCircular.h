/*
 * ListaCircular.h
 *
 *  Created on: 18/10/2017
 *      Author: Sara
 */

#ifndef LISTACIRCULAR_H_
#define LISTACIRCULAR_H_
#include "Nodo.h"

class ListaCircular {
public:

	ListaCircular ();
	    ~ListaCircular ();

	Node_ *head;
	Node_ *tail;

	bool Vacio();
	void AddFirst(int dato);
	void AddLast(int dato);
	void RemoveFirst(int dato);
	void RemoveLast(int dato);
	void MostrarLista();
};

#endif /* LISTACIRCULAR_H_ */
