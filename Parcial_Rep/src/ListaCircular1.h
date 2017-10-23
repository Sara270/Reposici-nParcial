/*
 * ListaCircular1.h
 *
 *  Created on: 19/10/2017
 *      Author: Sara
 */

#ifndef LISTACIRCULAR_H_
#define LISTACIRCULAR_H_
#include "Nodo1.h"

class ListaCircular {
public:

	ListaCircular ();
	    ~ListaCircular ();

	Nodo1 *head;
	Nodo1 *tail;

	bool Vacio();
	void AddFirst(int dato);
	void AddLast(int dato);
	void RemoveFirst(int dato);
	void RemoveLast(int dato);
	void MostrarLista();
};

#endif /* LISTACIRCULAR_H_ */
