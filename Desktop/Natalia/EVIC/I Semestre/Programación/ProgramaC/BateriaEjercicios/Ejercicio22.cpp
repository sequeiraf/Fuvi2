
#include<iostream>
using namespace std;

int main() {
	int ano;
	
	cout << "Introduzca un año: " << endl;
	cin >> ano;
	if ((ano%4==0 && ano%100!=0)) {
		cout << "El año que usted ingreso " << ano << " es bisiesto." << endl;
	} else {
		if ((ano%400==0 && ano%100==0)) {
			cout << "El año que usted ingreso " << ano << " es bisiesto." << endl;
		} else {
			cout << "El año que usted ingreso " << ano << " no es bisiesto." << endl;
		}
	}
	cout << "Fin del algoritmo." << endl;
	return 0;
}

