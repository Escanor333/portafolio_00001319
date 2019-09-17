#include <iostream>
using namespace std;

void TorrHanoi(int disco,int Inicio,int Auxiliar, int Destino){
    if(disco==1)
      cout<<"Sujeta el disco de la torre "<<Inicio<<" y colocalo en la torre "<<Destino<<endl;
    else{
      TorrHanoi(disco-1,Inicio,Destino,Auxiliar);
      cout<<"Sujeta el disco de la torre "<<Inicio<<" y colocalo en la torre "<<Destino<<endl;
      TorrHanoi(disco-1,Auxiliar,Inicio,Destino);
    }
    
}

int main()
{
  int disco=0,Inicio=1,Auxiliar=2,Destino=3;
  cout<<"Ingrese el numero de discos: ";cin>>disco;
  cout<<"Para resolver la torre: "<<disco<<" debe de:\n";
  TorrHanoi(disco,Inicio,Auxiliar,Destino);
 
    return 0;
}