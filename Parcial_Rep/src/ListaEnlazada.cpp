/*
 * ListaEnlazada.cpp
 *
 *  Created on: 17/10/2017
 *      Author: Sara
 */

#include "ListaEnlazada.h"
#include <iostream>

using namespace std;

ListaEnlazada::ListaEnlazada (){
	this->lista= new Nodo1(0);
}
ListaEnlazada::~ListaEnlazada(){

}

void ListaEnlazada :: AddLinkedList(int n){
	//Nodo1 *nuevo = new Nodo1(0);
	//nuevo->dato=n;

	//Nodo1 *aux1 = lista;
	//Nodo1 *aux2;

	//while((aux1!= NULL) && (aux1->dato < n)){
	//	aux2=aux1;
	//	aux1=aux1->siguiente;
	//}
	//if(lista == aux1){
		//lista = nuevo;
	//}else{
	//	aux2 ->siguiente = nuevo;
	//}
	//nuevo->siguiente = aux1;
    //cout <<"\tElemento " <<n<<" insertado ";

	if(lista->siguiente == NULL){
		Nodo1 *Nodo = new Nodo1(0);
		Nodo->dato = n;
		lista->siguiente = Nodo;

	}else{
		Nodo1 *tmp = new Nodo1(0);
		tmp = lista;

		while(tmp->siguiente != NULL){
			tmp = tmp->siguiente;
		}

		Nodo1 *aux  = new Nodo1(0);
		tmp->siguiente = aux;
		aux->dato =n;
	}

}
void ListaEnlazada :: ShowLinkedList(Nodo1 *lista){
	Nodo1 *actual = new Nodo1(0);
	actual = lista;

	while (actual != NULL){
		cout<<actual->dato<<" -> ";
		actual = actual-> siguiente;
	}
}
void ListaEnlazada :: BuscarLinkedList(Nodo1 *lista,int n){
	Nodo1 *actual = new Nodo1(0);
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
void ListaEnlazada :: EliminarNodo(Nodo1 *&lista, int n){
	//verifico si la lista esta vacía
	if(lista != NULL){
		Nodo1 *aux_borrar;
		Nodo1 *anterior = NULL;
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
				AddLinkedList(dato);
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
