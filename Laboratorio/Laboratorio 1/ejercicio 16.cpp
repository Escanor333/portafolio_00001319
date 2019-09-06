#include <stdio.h>
#include <iostream>
#define DIM 10
 
 using namespace std;
 
int main (void)
{
    //Declaración de variables
    int vector[DIM]; 
    int i=0;
    int total = 0;
    int prom;
    
    //Petición de datos al usuario
    for(i=0; i<DIM; i++)
     {
      printf("Introduce el numero %d:", i+1);
      scanf("%d", &vector[i]);
      }
     
     //La suma
     for ( i = 0; i < DIM; i++ ) {
      total += vector[i];
      
   } 
   
     //EL promedio
     for ( i = 0; i < DIM; i++ ) {
      prom=total/10;
      
   } 
     
   cout <<"el total es:"<< total<<endl;
   cout <<"el promedio es:"<< prom;
 
return 0;
}