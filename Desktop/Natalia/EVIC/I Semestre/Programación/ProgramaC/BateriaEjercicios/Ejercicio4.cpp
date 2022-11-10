
#include<iostream>
using namespace std;

int main() {
	float numero1;
	float numero2;
	float numero3;
	float resultado;
	cout << "Ingrese el valor de numero 1: " << endl;
	cin >> numero1;
	cout << "Ingrese el valor de numero 2: " << endl;
	cin >> numero2;
	cout << "Ingrese el valor de numero 3: " << endl;
	cin >> numero3;
	if ((numero1<0)) {
		resultado = numero1*numero2*numero3;
	} else {
		resultado = numero1+numero2+numero3;
	}
	cout << "El resultado es = " << resultado << endl;
	return 0;
}

