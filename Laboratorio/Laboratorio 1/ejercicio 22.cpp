#include<iostream>
using namespace std;
int main() {

    int matriz[4][4];
    
        int n=5;
    for(int i=0;i<n;i++){
        cout<<"ingrese fila 1: ";
        cin>>matriz[i][0];
        
    }
    for(int i=0;i<n;i++){
        cout<<"ingrese fila 2: ";
        cin>>matriz[i][1];
        
    }
    for(int i=0;i<n;i++){
        cout<<"ingrese fila 3: ";
        cin>>matriz[i][2];
        
    }
    for(int i=0;i<n;i++){
        cout<<"ingrese fila 4: ";
        cin>>matriz[i][3];
        
    }
    for(int i=0;i<n;i++){
        cout<<"ingrese fila 5: ";
        cin>>matriz[i][4];
    }
    cout << matriz[0][0] << " " << matriz[0][1] << " "<< matriz[0][2] << " "<< matriz[0][3] << " " << matriz[0][4]<<endl;
    cout << matriz[1][0] << " " << matriz[1][1] << " "<< matriz[1][2] << " "<< matriz[1][3] << " " << matriz[1][4]<<endl;
    cout << matriz[2][0] << " " << matriz[2][1] << " "<< matriz[2][2] << " "<< matriz[2][3] << " " << matriz[2][4]<<endl;
    cout << matriz[3][0] << " " << matriz[3][1] << " "<< matriz[3][2] << " "<< matriz[3][3] << " " << matriz[3][4]<<endl;
    cout << matriz[4][0] << " " << matriz[4][1] << " "<< matriz[4][2] << " "<< matriz[4][3] << " " << matriz[4][4]<<endl;
    return 0;
}