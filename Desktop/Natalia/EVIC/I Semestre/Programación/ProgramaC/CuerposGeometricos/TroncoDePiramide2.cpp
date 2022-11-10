
#include<iostream>
using namespace std;

int main() {
	float ab;
	float ab1;
	float al;
	float ap;
	float at;
	float g;
	float h;
	float numeropi;
	float pb;
	float pb1;
	float r;
	float rm;
	float v;
	// Declaración de variables.
	numeropi = 3.1416;
	// AreaLateral
	// Datos de entrada.
	cout << "Bienvenido (a) te ayudare a calcular área lateral, área total y volumen de un cono." << endl;
	cout << "Area lateral." << endl;
	cout << "Ingrese el valor del Perimetro base mayor ";
	cin >> pb1;
	cout << "Ingrese el valor del Perimetro base menor ";
	cin >> pb;
	cout << "Ingrese el valor de Apotema Piramide";
	cin >> ap;
	// Procedimiento
	al = pb+pb*(ap)/2;
	cin >> al;
	// AreaTotal
	// Datos de entrada.
	cout << "Ingrese el valor de Area Lateral";
	cin >> al;
	cout << "Ingrese el valor de Area base mayor";
	cin >> ab1;
	cout << "Ingrese el valor de Area base menor";
	cin >> ab;
	// Procedimiento
	at = al+ab1+ab;
	cin >> at
	
	;
	return 0;
}

