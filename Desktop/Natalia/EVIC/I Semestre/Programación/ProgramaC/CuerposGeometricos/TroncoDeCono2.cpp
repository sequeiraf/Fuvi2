
#include<iostream>
#include<cmath>
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
	float r;
	float rm;
	float v;
	numeropi = 3.1416;
	
	// AreaLateral
	// Datos de entrada.
	cout << "Bienvenido (a) te ayudare a calcular area lateral, area total y volumen de un tronco de cono." << endl;
	cout << "Area lateral." << endl;
	cout << "Ingrese el valor de la altura (h).";
	cin >> h;
	cout << "Ingrese el valor del radio mayor (Rm).";
	cin >> rm;
	cout << "Ingrese el valor radio (r).";
	cin >> r;
	// Procedimiento
	g = sqrtf(h+r);
	al = numeropi*g*(rm+r);
	// Datos salida
	cout << "Generatriz = " << g << endl;
	cout << "Area lateral = " << endl;
	cout << "************************" << endl;
	
	// AreaTotal
	// Datos de entrada.
	cout << "Area total." << endl;
	cout << "Ingrese el valor de area lateral (AL).";
	cin >> al;
	cout << "Ingrese el valor de area base mayor (ab1).";
	cin >> ab1;
	cout << "Ingrese el valor de area base menor (ab).";
	cin >> ab;
	// Procedimiento
	at = al+ab1+ab;
	// Datos salida
	cout << "Generatriz = " << g << endl;
	cout << "Area lateral = " << al << endl;
	cout << "************************" << endl;
	
	// Volumen
	// Datos de entrada.
	cout << "Volumen." << endl;
	cout << "Ingrese el valor de altura (h).";
	cin >> h;
	cout << "Ingrese el valor de radio mayor (Rm)";
	cin >> rm;
	cout << "Ingrese el valor de radio (r).";
	cin >> r;
	// Procedimiento 
	v = (1/3)*(numeropi*h)*(pow(rm,2)+pow(r,2)+(rm*r));
	// Datos salida 
	cout << "Volumen= " << v << endl;
	cout << "************************" << endl;
	cout << "Fin del algoritmo." << endl;
	return 0;
}

