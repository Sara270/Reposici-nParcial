/*
 * Nodo2.h
 *
 *  Created on: 18/10/2017
 *      Author: Sara
 */

#ifndef NODO2_H_
#define NODO2_H_

class Nodo2 {
public:
	Nodo2 (int dato);
    ~Nodo2 ();
	int dato;
	Nodo2 *head;
	Nodo2 *tail;
};

#endif /* NODO2_H_ */
