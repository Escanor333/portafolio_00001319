#include <iostream>

using namespace std;
struct var{
    string real;
    string imaginaria;
};

int main()
{
   struct var obtener;
   
   cout <<"Ingrese el numero real: " << endl;
   cin >> obtener.real;
    cout <<"Ingrese el numero imaginario con su signo: " << endl;
   cin >> obtener.imaginaria;
   
  if(obtener.imaginaria[0] == '+'){
      obtener.imaginaria[0]='-';
  }else{
      obtener.imaginaria[0]='+';
  }
    std::cout << "el cojudao del numero complejo es:" << obtener.real <<" "<<obtener.imaginaria << std::endl;
   

    return 0;
}