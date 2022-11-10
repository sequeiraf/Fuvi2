
#include<iostream>
using namespace std;

int main() {
	float celsius;
	float fahrenheit;
	float temperatura;
	cout << "A qué unidad de temperatura desea convertir (Presione 1 si de Fahrenheit = Celsius o presione 2 si de Celsius = Fahrenheit): " << endl;
	cin >> temperatura;
	if ((temperatura==1)) {
		cout << "Ingrese la cantidad de Fahrenheit: " << endl;
		cin >> fahrenheit;
		celsius = (fahrenheit-32)/1.8;
		cout << "De grados Fahrenheit a Celsius: " << celsius << endl;
	}
	if ((temperatura==2)) {
		cout << "Ingrese la cantidad de Celsius: " << endl;
		cin >> celsius;
		fahrenheit = (celsius*1.8)+32;
		cout << "De grados Celsius a Fahrenheit: " << fahrenheit << endl;
		cout << "Fin del algoritmo." << endl;
	}
	return 0;
}

