#include <iostream>
#include <string>
#include <stack>
using namespace std;

struct libro{
    string libro;
    int Cantidad_Pag;
};

void BuscarLibro(stack<libro> libros, string titulo){
	if (libros.empty()){
		cout << "El libro no ha sido encontrado :(" << endl;
	}else{
        if(libros.top().libro == titulo){
    	    cout << "Cantidad de paginas del libro que buscas: " << libros.top().Cantidad_Pag << endl;
        }else{
            libros.pop();
            BuscarLibro(libros, titulo);
        }
	}
}

int main()
{
	stack<libro> libros;
        
    libro lib1, lib2, lib3, lib4, lib5;
    
    lib1.libro = "Sombra";
    lib1.Cantidad_Pag = 135;
    
    lib2.libro = "Parodia";
    lib2.Cantidad_Pag = 218;
    
    lib3.libro = "Muerte";
    lib3.Cantidad_Pag = 100;
    
    lib4.libro = "Agonia";
    lib4.Cantidad_Pag = 326;
    
    lib5.libro = "Soledad";
    lib5.Cantidad_Pag = 46;
    
	libros.push(lib1);
	libros.push(lib2);
	libros.push(lib3);
	libros.push(lib4);
	libros.push(lib5);

    string libro;
    cout << "Escribe el nombre del libro: " << endl;
    cin >> libro;
    
    BuscarLibro(libros, libro);
    
    return 0;
}