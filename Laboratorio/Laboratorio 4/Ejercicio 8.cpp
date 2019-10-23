#include <string>
#include <iostream>

using namespace std;

int main()
{
    cout << "Digite numeros mayores a cero: ";
	int num;
	string cad = "";
	cin >> num;
	if(num > 0){
   	    while(num>0){
   	       if(num%2 == 0)
   	            cad = "0" + cad;
   	        else
   	            cad = "1" + cad;
   	            num = num/2;
   	    }
   	    cout <<"Su numero en binario es: " <<cad;
	}
	else{
   	    if(num == 0)
   	        cout << "0";
   	    else
   	     	  cout << "Solo digite valores positivos";
	}
	return 0;
}