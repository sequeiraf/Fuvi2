

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float numero1;
	float potencia1;
	float raiz1;
	cout << "Ingrese el valor de Numero 1: " << endl;
	cin >> numero1;
	if ((numero1>0)) {
		potencia1 = pow(numero1,2);
		raiz1 = sqrtf(numero1);
		cout << "La potencia del numero es: " << potencia1 << endl;
		cout << "La raiz del numero es : " << raiz1 << endl;
	} else {
		cout << "Fin del algoritmo." << endl;
	}
	return 0;
}

