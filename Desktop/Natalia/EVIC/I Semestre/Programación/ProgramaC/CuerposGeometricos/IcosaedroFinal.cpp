
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float a;
	float ar;
	float v;
	
	// Area total
	// Datos de entrada.
	cout << "Bienvenido (a) te ayudare a calcular area total y volumen de un icosaedro." << endl;
	cout << "Area total" << endl;
	cout << "Ingrese el valor de su arista." << endl;
	cin >> ar;
	// Procesamiento
	a = (5*pow(ar,2))*(sqrtf(3));
	// Datos salida
	cout << "Area total = " << a << endl;
	cout << "************************" << endl;
	
	// Volumen
	// Datos entrada
	cout << "Volumen." << endl;
	cout << "Ingrese el valor de su arista." << endl;
	cin >> ar;
	// Procesamiento
	v = (5/12)*(3+(sqrtf(5)))*pow(ar,3);
	// Datos salida
	cout << "Volumen = " << v << endl;
	cout << "************************" << endl;
	cout << "Fin del algoritmo." << endl;
	return 0;
}

