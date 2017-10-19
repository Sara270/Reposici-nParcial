/*
 * Cola.h
 *
 *  Created on: 18/10/2017
 *      Author: Sara
 */

#ifndef COLA_H_
#define COLA_H_
#include "Nodo.h"
class Cola {
 	public:

	Cola ();
	~Cola ();

	Node_ *frente;
	Node_ *fin;

	bool ValidarVacia(Node_ *frente);
	void enqueue (Node_ *&frente, Node_ *&fin, int a);
	void dequeue(Node_ *&frente, Node_ *&fin, int a);
};

#endif /* COLA_H_ */
