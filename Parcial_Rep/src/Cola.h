/*
 * Cola.h
 *
 *  Created on: 17/10/2017
 *      Author: Sara
 */


#ifndef COLA_H_
#define COLA_H_
#include "Nodo1.h"

class Cola {
 	public:

	Cola ();
	~Cola ();

	Nodo1 *frente;
	Nodo1 *fin;

	bool ValidarVacia(Nodo1 *frente);
	void enqueue (Nodo1 *&frente, Nodo1 *&fin, int a);
	void dequeue(Nodo1 *&frente, Nodo1 *&fin, int &a);
	void Menu1();
};

#endif /* COLA_H_ */
