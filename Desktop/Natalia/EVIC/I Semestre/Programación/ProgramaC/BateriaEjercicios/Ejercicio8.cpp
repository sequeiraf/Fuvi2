
#include<iostream>
using namespace std;


int main() {
	int valor1;
	cout << "Introduce un valor numerico.";
	cin >> valor1;
	if ((valor1==0)) {
		cout << "El numero " << valor1 << " que usted ingreso, no es par ni impar." << endl;
	} else {
		if ((valor1%2==0)) {
			cout << "El numero " << valor1 << " que usted ingreso es par." << endl;
		} else {
			cout << "El numero " << valor1 << " que usted ingreso es impar." << endl;
		}
	}
	cout << "Fin del algoritmo." << endl;
	return 0;
}

