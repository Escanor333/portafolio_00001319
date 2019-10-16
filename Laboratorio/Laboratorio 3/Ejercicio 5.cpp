#include <iostream>  
#include <conio.h>
using namespace std;

struct 	Nodo {
	int dato; 
	Nodo *siguiente ;
};


void mainMenu();
void insertarLista (Nodo *&, int);
void mostrarLista (Nodo *);

Nodo *lista = NULL ;
	
int main (){

	mainMenu();

	return 0;	
}
	void mainMenu (){
		int opcion;
		int dato;
		do{
			
			cout<< " \t MENU\n";
			cout << "1) Insertar elementos a la lista\n" ;
			cout << "2) Mostrar los elementos de la lista\n " ;
			cout << "3) Salir\n " ; 
			cout << "Opcion: " ;
			cin>> opcion ;
			
			switch (opcion){
				case 1:	
				cout << "digite un numero: ";
				cin >> dato;
				insertarLista (lista, dato);
				cout << "\n" ;
				break;
				case 2: 
				mostrarLista (lista);
				cout << "\n";
				break;
			}
			
		}while(opcion != 3);
		
	}
	
	void insertarLista(Nodo *&lista, int n){
		Nodo *nuevoNodo = new Nodo ();
		nuevoNodo->dato = n;
		
		Nodo *aux1 = lista ;
		Nodo *aux2;
		
		while ((aux1 != NULL ) && (aux1->dato < n)){
			aux2 = aux1 ;
			aux1 = aux1->siguiente ;
			
		}
		
		if ( lista == aux1){
			lista = nuevoNodo ;
			
		}else {
			aux2->siguiente = nuevoNodo;
			
		}
		nuevoNodo->siguiente = aux1;
		
	}
	
		void mostrarLista (Nodo *lista){
			Nodo *guia = new Nodo();
			guia = lista; 
			
			if (guia != NULL ){
			mostrarLista (guia->siguiente);
			cout <<guia->dato<< "->";
				
			}
		}