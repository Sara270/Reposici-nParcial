//============================================================================
// Name        : Parcial_Rep.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//Prototipos
void AddLinkedList(Nodo *&, int);
void ShowLinkedList(Nodo *);
void BuscarLinkedList(Nodo*, int);
void EliminarNodo(Nodo*&, int);
void Menu();

Nodo *lista =NULL;

int main() {

	Menu();
	return 0;
}

void AddLinkedList(Nodo *&lista, int n){
	Nodo *nuevo = new Nodo();
	nuevo->dato=n;

	Nodo *aux1 = lista;
	Nodo *aux2;

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
void ShowLinkedList(Nodo *lista){
	Nodo *actual = new Nodo();
	actual = lista;

	while (actual != NULL){
		cout<<actual->dato<<" -> ";
		actual = actual-> siguiente;
	}
}
void BuscarLinkedList(Nodo *lista, int n){
	Nodo *actual = new Nodo();
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
void EliminarNodo(Nodo *&lista, int n){
	//verifico si la lista esta vacía
	if(lista != NULL){
		Nodo *aux_borrar;
		Nodo *anterior = NULL;
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
void Menu(){
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
