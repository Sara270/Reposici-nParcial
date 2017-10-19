/*
 * Pila.h
 *
 *  Created on: 18/10/2017
 *      Author: Sara
 */
#include "Nodo.h"
#ifndef PILA_H_
#define PILA_H_

class Pila {

public:
	Pila ();
    ~Pila ();

		Node_ *pila;

		void Push(Node_ *&, int);
		void Pop(Node_ *&,  int&);

};

#endif /* PILA_H_ */
