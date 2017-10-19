/*
 * ListaCircular.cpp
 *
 *  Created on: 18/10/2017
 *      Author: Sara
 */

#include "ListaCircular.h"
#include <iostream>
using namespace std;

ListaCircular::ListaCircular (){
	this->head= new Node_(0);
	this->tail= new Node_(0);
}
ListaCircular::~ListaCircular(){

}



bool ListaCircular :: Vacio(){
	return (head == NULL);
}

void ListaCircular :: AddFirst(int elemento){
	Node_ *tmp =new Node_(elemento);
	if (Vacio() == true){
		head = tail = tmp;
		head->siguiente = head;
	}else{
		tail->siguiente=tmp;
		tmp->siguiente=head;
		head=tmp;
	}
}
void ListaCircular :: AddLast(int elemento){
	Node_ *tmp= new Node_(elemento);
	if(Vacio()==true){
		head=tail=tmp;
		tail->siguiente=head;
	}else{
		tail->siguiente=tmp;
		tail = tmp;
		tmp->siguiente=head;
	}
}
void ListaCircular:: RemoveFirst (int elemento){
	if(Vacio()==true){
		cout<<"No hay elementos en la lista";
	}else{
		if(head==tail){
			tail=head=NULL;
			cout<<"Eliminado";
		}else{
			Node_ *tmp=head;
			head=head->siguiente;
			tail->siguiente=head;
			delete tmp;
			cout<<"Elemento Eliminado";
		}
	}
}
void ListaCircular::RemoveLast(int elemento){
	if(Vacio()==true){
			cout<<"No hay elementos en la lista";
		}else if(head==tail){
			head=tail=NULL;
			cout<<"Elemento Eliminado";
		}else{
			bool seguir = true;
			Node_ *aux=head;
			while(seguir){
				if(aux->siguiente==tail){
					Node_ *tmp=tail;
					tail=aux;
					tail->siguiente=head;
					delete tmp;
					cout<<"Elemento Eliminado";
					seguir=false;
				}else{
					aux=aux->siguiente;
				}
			}
		}
}
void ListaCircular::MostrarLista(){
	if(Vacio()==true){
		cout<<"Elemento Eliminado";
	}else{
		Node_ *aux=head;
		bool seguir=true;
		while(seguir){
			cout<<aux->dato<<endl;
		    if(aux==tail){
		    	seguir = false;
		    }
		    aux=aux->siguiente;
		}
	}
}


