/*
 * Pila.h
 *
 *  Created on: 17/10/2017
 *      Author: Sara
 */

#include "Nodo1.h"
#ifndef PILA_H_
#define PILA_H_

class Pila {

public:
	Pila ();
    ~Pila ();

		Nodo1 *pila;

		void Push(Nodo1 *&, int);
		void Pop(Nodo1 *&,  int&);
		Nodo1 retornar(Nodo1*&p, int nuevo, int viejo);

};

#endif /* PILA_H_ */
