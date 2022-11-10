

#include<iostream>
using namespace std;

int main() {
	string clave;
	int cont;
	string Tuani;
	cont = 0;
	clave = Tuani;
	while ((cont<3)) {
		cout << "Introduzca la clave: " << endl;
		cin >> clave;
		if ((clave=="Tuani")) {
			cout << "La clave que usted ingreso esta correcta." << endl;
			cont = cont+1;
		} else {
			cout << "La clave que usted ingreso es incorrecta." << endl;
		}
	}
	if (cont==3) {
		cout << "Lo sentimos, usted ya agoto sus tres intentos." << endl;
	} else {
		cout << "Fin del algoritmo." << endl;
	}
	return 0;
}

