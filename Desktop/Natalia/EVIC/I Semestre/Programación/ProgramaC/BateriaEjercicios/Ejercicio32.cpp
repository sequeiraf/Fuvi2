

#include<iostream>
using namespace std;

int main() {
	int maximocomun;
	int num1;
	int num2;
	cout << "Ingrese el valor de num 1: " << endl;
	cin >> num1;
	cout << "Ingrese el valor de num 2: " << endl;
	cin >> num2;
	if ((num1>0 && num2>0)) {
		maximocomun = num1*num2;
		cout << "El maximo comun divisor de num 1 = " << num1 << " y num 2 = " << num2 << " es = " << maximocomun << endl;
	} else {
		cout << "Debes ingresar numeros positivos: " << endl;
	}
	cout << "Fin del algoritmo." << endl;
	return 0;
}

