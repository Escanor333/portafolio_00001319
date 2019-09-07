#include <iostream>
using namespace std;
void Conteo(int x, int y);
int main(void)
{
   int c;
   int cont = 0;
   cout<<"Ingrese un numero: "<<endl;
   cin>> c;
   
   Conteo(c, cont);
}
void Conteo(int x, int y){
    
    y++;
    if(x==y){
        cout<<y;
    }else{
        cout<<y;
        Conteo(x,y);
        cout<<y;
    }
}