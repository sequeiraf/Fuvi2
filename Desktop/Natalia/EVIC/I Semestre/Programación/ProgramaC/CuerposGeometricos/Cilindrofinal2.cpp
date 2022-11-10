
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float ab;
	float al;
	float at;
	float h;
	float numeropi;
	float pi;
	float r;
	float v;
	numeropi = 3.1416;
	
	// AreaLateral
	// Datos de entrada.
	cout << "Bienvenido (a) te ayudare a calcular area lateral, area total y volumen de un cilindro." << endl;
	cout << "Area lateral." << endl;
	cout << "Ingrese el valor de radio (r).";
	cin >> r;
	cout << "Ingrese el valor de altura (h).";
	cin >> h;
	// Procedimiento
	al = 2*numeropi*r*h;
	// Datos salida
	cout << "Radio = " << r << endl;
	cout << "Altura = " << h << endl;
	cout << "Area lateral = " << al << endl;
	cout << "************************" << endl;
	
	// AreaTotal
	// Datos de entrada.
	cout << "Area total." << endl;
	cout << "Ingrese el valor de area lateral (AL).";
	cin >> al;
	cout << "Ingrese el valor de radio (r).";
	cin >> r;
	// Procedimiento
	ab = (numeropi*pow(r,2));
	at = (al+2)*ab;
	// Datos salida
	cout << "Area base = " << ab << endl;
	cout << "Area lateral = " << al << endl;
	cout << "Area total = " << at << endl;
	cout << "************************" << endl;
	
	// Volumen
	// Datos de entrada.
	cout << "Volumen." << endl;
	cout << "Ingrese el valor de altura (h).";
	cin >> h;
	cout << "Ingrese el valor de radio (r).";
	cin >> r;
	// Procedimiento
	ab = M_PI*pow(r,2);
	v = ab*h;
	// Datos salida
	cout << "Altura = " << h << endl;
	cout << "Area base = " << ab << endl;
	cout << "Volumen = " << v << endl;
	cout << "************************" << endl;
	cout << "Fin del algoritmo." << endl;
	return 0;
}

