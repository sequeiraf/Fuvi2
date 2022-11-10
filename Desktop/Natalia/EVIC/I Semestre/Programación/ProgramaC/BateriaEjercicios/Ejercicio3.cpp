

#include<iostream>
using namespace std;

int main() {
	float numero1;
	float numero2;
	float numero3;
	cout << "Ingrese el valor de numero 1: " << endl;
	cin >> numero1;
	cout << "Ingrese el valor de numero 2: " << endl;
	cin >> numero2;
	cout << "Ingrese el valor de numero 3: " << endl;
	cin >> numero3;
	if ((numero1>numero2 && numero1>numero3)) {
		cout << "El Numero 1: " << numero1 << " es el mayor." << endl;
	} else {
		if ((numero2>numero1 && numero2>numero3)) {
			cout << "El Numero 2: " << numero2 << " es el mayor." << endl;
		} else {
			if ((numero3>numero1 && numero3>numero2)) {
				cout << " El Numero 3: " << numero3 << " es el mayor." << endl;
			}
		}
	}
	return 0;
}

