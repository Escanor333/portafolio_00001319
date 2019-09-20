//ejercicio 2 para imprimir el ultimo valor que esta ingresado en la pila
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    bool empty();

    s.push(24);
    s.push(2);
    s.push(34);
    s.push(78);

    if(s.empty() == true){
        cout << "Esta vacia" << endl;
    }
    else{
        cout << "Tiene valores dentro" << endl;
    }

    s.pop();
    s.pop();
    s.pop();

    cout << s.top() << endl;
    s.push(2);
    s.push(34);
    s.push(78);



return 0;

}