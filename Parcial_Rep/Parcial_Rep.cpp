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
void Menu(){
	int opcion, dato;
	do{
			cout<<" MENU ";
			cout<<"1. Insertar elementos\n";
			cout<<"2. Modificar elementos\n";
			cout<<"3. Salir";
			cout<<"Opcion: ";
			cin >> opcion;

			switch(opcion){
			case 1:
				cout << "\nDigite un numero: ";
				cin >> dato;
				AddLinkedList(lista, dato);
				cout<<"\n";
				system("pause");
				 break;
			case 2: ShowLinkedList(lista);
				cout<<"\n";
				system("pause");
				break;
			case 3:
				 break;
			}
		system("cls");
		}while(opcion != 3);


}
