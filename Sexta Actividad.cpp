#include <iostream>

using namespace std;

bool bBinaria(int r[], int base, int tope, int e){
    int aux;
    aux = (base+tope)/2;

    if(r[aux]!=e && (base==tope)) return false;
    if(r[aux]==e) return true;
    if(r[aux]<e) return bBinaria(r, aux+1, tope, e);
    if(r[aux]>e) return bBinaria(r, base, aux-1, e);
}

int main(){
    int n=8, e;
    cout << "Proporcione el numero"<<endl;
    cin >> e;
    int a[]={1,3,4,5,17,18,31,33};

    if(bBinaria(a, 0, n-1, e)) cout << "El  numero si se encuentra en el arreglo"<<endl;
    else cout << "El  numero no se encuentra en el arreglo" <<endl;

    return 0;
}

