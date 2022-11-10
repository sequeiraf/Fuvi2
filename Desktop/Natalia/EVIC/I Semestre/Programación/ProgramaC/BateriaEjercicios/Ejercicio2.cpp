
#include<iostream>
using namespace std;

int main() {
	float numero1;
	float numero2;
	cout << "Ingrese el valor de Numero 1: " << endl;
	cin >> numero1;
	cout << "Ingrese el valor de Numero 2: " << endl;
	cin >> numero2;
	if ((numero1<numero2)) {
		cout << "Numero1: " << numero1 << " es menor que Numero2: " << numero2 << endl;
	} else {
		if ((numero1>numero2)) {
			cout << "Numero1: " << numero1 << " es menor que Numero2: " << numero2 << endl;
		} else {
			if ((numero1==numero2)) {
				cout << "Numero1: " << numero1 << " es igual que Numero2: " << numero2 << endl;
			} else {
				cout << "Fin del algoritmo." << endl;
			}
		}
	}
	return 0;
}

