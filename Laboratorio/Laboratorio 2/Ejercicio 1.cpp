#include <iostream>
using namespace std;
int mcd(int mayor, int menor){
    
    if(mayor<menor)
    
     return mcd(mayor, menor);
     
     else if(menor==0)
     
     return mayor;
     
     else 
     return mcd(menor,(mayor%menor));
    }

int main()
{
  int menor;
  int mayor;
  int division;
 
  
  cout<<"Ingrese el mayor numero"<<endl;
  cin>>mayor;
  
  cout<<"Ingrese el menor numero"<<endl;
  cin>>menor;
  
 cout<<"El mcd es:"<<mcd(mayor, menor);
    return 0;
}
