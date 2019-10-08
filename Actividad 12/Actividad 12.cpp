#include <iostream>
#include <vector>
using namespace std;

struct RPedido{
    int revueltas;
	int frijolConQueso;
	int queso;
	bool arroz;
};
typedef struct RPedido Pedido;

Pedido solicitarPedido(){
    RPedido p;
    cout << "Revueltas: "; cin >> p.revueltas;
    cout << "Frijol con queso: ";   cin >> p.frijolConQueso;
    cout << "Queso: "; cin >> p.queso;
    cout << "Arroz  (0=no)  (1=si ) "<<endl;
    int aux;
    cin>>aux;
    if(aux==1)
    p.arroz=true;
    else
    p.arroz=false;
    return p;
}

void mostrarPedido(Pedido p){
    cout << "Revueltas: " << p.revueltas << endl;
    cout << "Frijol con queso: " << p.frijolConQueso << endl;
	cout << "Queso: " << p.queso << endl;    
    cout << "Arroz: "   << endl;
    if(p.arroz==1)
    cout<<"Si";
    else
    cout<<"No";
    
    cout << endl;
}

vector<Pedido> lista;

void agregarPedido(){
    Pedido p = solicitarPedido();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: lista.insert(lista.begin(), p);
                continuar = false;
            break;
            case 2: lista.push_back(p);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    for (int i = 0; i < lista.size(); i++) 
        mostrarPedido(lista[i]);
}

int main(){
    cout << "Inicializando..." << endl;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar orden \n\t2) Ver ordenes"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarPedido();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}