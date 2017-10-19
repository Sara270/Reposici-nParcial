/*
 * Nodo.h
 *
 *  Created on: 18/10/2017
 *      Author: Sara
 */
//#include "stdafx.h"
#ifndef NODO_H_
#define NODO_H_
#include <iostream>

class Node_ {
public:
	Node_ (int dato);
    ~Node_ ();
	int dato;
	Node_ *siguiente;
};

#endif
