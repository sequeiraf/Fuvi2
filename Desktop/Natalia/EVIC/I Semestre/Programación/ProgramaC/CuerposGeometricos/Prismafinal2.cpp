
#include<iostream>
using namespace std;


int main() {
	float ab;
	float al;
	float ap;
	float at;
	float h;
	float l;
	float n;
	float nl;
	float p;
	float pb;
	float v;
	n = 5;
	
	// Area Lateral.
	// Datos entrada.
	cout << "Bienvenido (a) te ayudare a calcular area lateral, area total y volumen de un prisma." << endl;
	cout << "Area lateral." << endl;
	cout << "Ingrese el valor de arista lateral (l).";
	cin >> l;
	cout << "Ingrese el valor de altura (h).";
	cin >> h;
	// Procedimiento.
	pb = n*l;
	al = pb*h;
	// Datos salida.
	cout << "Perimetro base = " << pb << endl;
	cout << "Altura = " << h << endl;
	cout << "Area lateral = " << al << endl;
	cout << "************************" << endl;
	
	// AreaTotal
	// Datos de entrada.
	cout << "Area total." << endl;
	cout << "Ingrese el valor de area lateral (AL).";
	cin >> al;
	cout << "Ingrese el valor de perimetro (P).";
	cin >> p;
	cout << "Ingrese el valor de apotema base (ap).";
	cin >> ap;
	// Procedimiento
	ab = (p*ap)/2;
	at = (al+ab)*2;
	// Datos salida
	cout << "Area base = " << ab << endl;
	cout << "Area lateral = " << al << endl;
	cout << "Area total = " << at << endl;
	cout << "************************" << endl;
	
	// Volumen.
	// Datos entrada.
	cout << "Volumen." << endl;
	cout << "Ingrese el valor de altura (h).";
	cin >> h;
	cout << "Ingrese el valor de perimetro (P).";
	cin >> p;
	cout << "Ingrese el valor de apotema base (ap).";
	cin >> ap;
	// Procedimiento.
	ab = (p*ap)/2;
	v = (ab*h);
	// Datos salida.
	cout << "Area base = " << ab << endl;
	cout << "Altura = " << h << endl;
	cout << "Volumen = " << v << endl;
	cout << "************************" << endl;
	cout << "Fin del algoritmo." << endl;
	return 0;
}

