
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float ab;
	float al;
	float ap;
	float at;
	float h;
	float pb;
	float r;
	float v;
	
	
	// Datos de entrada.
	cout << "Bienvenido (a) te ayudare a calcular area lateral, area total y volumen de una piramide." << endl;
	cout << "Area lateral." << endl;
	cout << "Ingrese el valor de perimetro base (Pb). ";
	cin >> pb;
	cout << "Ingrese el valor de altura (h).";
	cin >> h;
	cout << "Ingrese el valor de apotema base (ap).";
	cin >> ap;
	// Procedimiento
	ap = sqrtf(h+ap);
	al = (pb*ap)/2;
	// Datos salida
	cout << "Apotema piramide = " << ap << endl;
	cout << "Perimetro base = " << pb << endl;
	cout << "Area lateral = " << al << endl;
	cout << "************************" << endl;
	
	// AreaTotal
	// Datos de entrada.
	cout << "Area total." << endl;
	cout << "Ingrese el valor de area lateral (AL).";
	cin >> al;
	cout << "Ingrese el valor de area base (Ab).";
	cin >> ab;
	// Procedimiento
	at = al+ab;
	// Datos salida
	cout << "Area Lateral = " << al << endl;
	cout << "Area base = " << ab << endl;
	cout << "Area total = " << at << endl;
	cout << "************************" << endl;
	
	// Volumen
	// Datos de entrada.
	cout << "Volumen." << endl;
	cout << "Ingrese el valor de altura (h).";
	cin >> h;
	cout << "Ingrese el valor de area base (Ab).";
	cin >> ab;
	// Procedimiento
	v = (ab*h)/3;
	// Datos salida 
	cout << "Volumen = " << v << endl;
	cout << "************************" << endl;
	cout << "Fin del algoritmo." << endl;
	return 0;
}

