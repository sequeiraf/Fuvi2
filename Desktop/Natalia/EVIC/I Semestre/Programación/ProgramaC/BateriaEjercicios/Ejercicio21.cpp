

#include<iostream>
using namespace std;


int main() {
	int asterisco;
	int espacio;
	int lado;
	cout << "Ingrese un numero: " << endl;
	cin >> lado;
	for (asterisco=1;asterisco<=lado;asterisco++) {
		for (espacio=1;espacio<=lado;espacio++) {
			if ((asterisco<lado && espacio<lado)) {
				cout << "* ";
			} else {
				cout << "* ";
			}
		}
		cout << " " << endl;
		lado = lado-1;
	}
	cout << "Fin del algoritmo." << endl;
	return 0;
}

