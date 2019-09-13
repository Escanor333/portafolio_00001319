#include <iostream>
using namespace std;

int num_digitos(int num);

int main()
{
	cout << "Digite un numero: ";
	int num;
	cin >> num;
	
	cout << "El numero tiene " << num_digitos(num) << " digitos" << endl;
	
	return 0;   
}

int num_digitos(int num)
{
	return num < 10 ? 1 : 1 + num_digitos(num / 10);
}