/*
 * ListaEnlazada.cpp
 *
 *  Created on: 18/10/2017
 *      Author: Sara
 */

#include "ListaEnlazada.h"
#include <iostream>
using namespace std;

ListaEnlazada::ListaEnlazada (){
	this->lista= new Node_(0);
}
ListaEnlazada::~ListaEnlazada(){

}

void ListaEnlazada :: AddLinkedList(Node_ *&lista, int n){
	Node_ *nuevo = new Node_(0);
	nuevo->dato=n;

	Node_ *aux1 = lista;
	Node_ *aux2;

	while((aux1!= NULL) && (aux1->dato < n)){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	if(lista == aux1){
		lista = nuevo;
	}else{
		aux2 ->siguiente = nuevo;
	}
	nuevo->siguiente = aux1;
    cout <<"\tElemento " <<n<<" insertado ";
}
void ListaEnlazada :: ShowLinkedList(Node_ *lista){
	Node_ *actual = new Node_(0);
	actual = lista;

	while (actual != NULL){
		cout<<actual->dato<<" -> ";
		actual = actual-> siguiente;
	}
}
void ListaEnlazada :: BuscarLinkedList(Node_ *lista, int n){
	Node_ *actual = new Node_(0);
	bool var = false;
	actual = lista;
	while((actual != NULL) && (actual-> dato <= n)){
		if(actual-> dato == n){
			var = true;
		}
		actual=actual->siguiente;
	}
	if(var==true){
		cout<< "Elemento encontrado";
	}else{
		cout<< "Elemento no encontrado";
	}
}
void ListaEnlazada :: EliminarNodo(Node_ *&lista, int n){
	//verifico si la lista esta vacía
	if(lista != NULL){
		Node_ *aux_borrar;
		Node_ *anterior = NULL;
		aux_borrar = lista;

		// Recorrer la lista
		while ((aux_borrar != NULL) && (aux_borrar->dato != n)){
			anterior = aux_borrar;
			aux_borrar = aux_borrar->siguiente;
		}

		// si el elemento no ha sido encontrado

		if(aux_borrar==NULL){
			cout<<"El elemento no se encontro!";
		} // el primer elemento es el que vamos a eliminar
		else if(anterior == NULL){
			lista = lista->siguiente;
			delete aux_borrar;
		}// esta en la lista pero no es el primer nodo
		else{
			anterior->siguiente = aux_borrar->siguiente;
			delete aux_borrar;
		}

	}
}

void ListaEnlazada :: Menu(){
	int opcion, dato;
	do{
			cout<<"MENU\n";
			cout<<"1. Insertar elementos\n";
			cout<<"2. Mostrar elementos\n";
			cout<<"3. Buscar un elemento en la lista\n";
			cout<<"4. Eliminar element\n";
			cout<<"5. Salir\n";
			cout<<"Opcion: ";
			cin >> opcion;

			switch(opcion){
			case 1:
				cout << "\nDigite un número: ";
				cin >> dato;
				AddLinkedList(lista, dato);
				cout<<"\n";
				system("pause");
				 break;
			case 2: ShowLinkedList(lista);
				cout<<"\n";
				system("pause");
				break;
			case 3: cout<<"\nDigite el número que desea encontrar: ";
					cin>> dato;
					BuscarLinkedList(lista, dato);
					cout<<"\n";
					system("pause");
				    break;
			case 4: cout<<"\nDigite el número que desea eliminar: ";
					cin>> dato;
					EliminarNodo(lista,dato);
					cout<<"\n";
					system("pause");
					break;
			}
		system("cls");
		}while(opcion != 5);

}
