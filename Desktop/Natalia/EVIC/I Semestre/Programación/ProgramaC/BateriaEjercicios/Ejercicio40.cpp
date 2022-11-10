
#include<iostream>
using namespace std;

int main() {
	float a;
	float b;
	float total;
	cout << "Ingrese el valor de A: " << endl;
	cin >> a;
	cout << "Ingrese el valor de B: " << endl;
	cin >> b;
	if ((a>0 && b>0)) {
		total = a/((a-b)*b);
		cout << "El total = " << total << endl;
	} else {
		cout << "No se permiten numeros negativos." << endl;
	}
	cout << "Fin del algoritmo." << endl;
	return 0;
}

