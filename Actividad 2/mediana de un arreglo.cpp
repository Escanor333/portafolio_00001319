#include <iostream>

using namespace std;

float mediana(int *puntero, int tamano){
        float suma=0;
        for(int i=0; i<tamano;i++)
          suma += *(puntero+i);
          return suma / tamano;
}
int main()
{
    float sum;
    int numeros[5];

    numeros[0]=5;
    numeros[1]=10;
    numeros[2]=15;
    numeros[3]=20;
    numeros[4]=25;

    int i;
    sum=0;
    for(i=0; i<5;i++)

    {
        sum+=numeros[i];
    }

    cout<<"La mediana es:"<<sum/5<<endl;

    return 0;


}
