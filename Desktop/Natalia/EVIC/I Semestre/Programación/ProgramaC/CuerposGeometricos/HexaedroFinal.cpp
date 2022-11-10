

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float a;
	float ar;
	float d;
	float v;
	// Definir Variables
	// Area total
	// Datos de entrada.
	cout << "Bienvenido (a) te ayudare a calcular area total, volumen y diagonal de un hexaedro." << endl;
	cout << "Area total" << endl;
	cout << "Ingrese el valor de su arista." << endl;
	cin >> ar;
	// Procesamiento
	a = (6)*(pow(ar,2));
	// Datos salida
	cout << "Area total = " << a << endl;
	cout << "************************" << endl;
	// Volumen
	// Datos entrada
	cout << "Volumen." << endl;
	cout << "Ingrese el valor de su arista." << endl;
	cin >> ar;
	// Procesamiento
	v = pow(ar,3);
	// Datos salida
	cout << "Volumen = " << v << endl;
	cout << "************************" << endl;
	// Diagonal
	// Datos entrada
	cout << "Diagonal" << endl;
	cout << "Ingrese el valor de su arista." << endl;
	cin >> ar;
	// Procesamiento
	d = (a)*(sqrtf(3));
	// Datos salida
	cout << "Diagonal = " << d << endl;
	cout << "************************" << endl;
	cout << "Fin del algoritmo." << endl;
	return 0;
}

