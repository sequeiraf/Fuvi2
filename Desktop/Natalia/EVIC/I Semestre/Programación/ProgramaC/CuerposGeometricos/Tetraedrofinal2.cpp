

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float a;
	float ar;
	float h;
	float v;


	// Area total
	// Datos de entrada.
	cout << "Bienvenido (a) te ayudare a calcular area total, volumen y altura de un tetraedro." << endl;
	cout << "Area total" << endl;
	cout << "Ingrese el valor de su arista." << endl;
	cin >> ar;
	// Procesamiento
	a = (pow(ar,2))*sqrtf(3);
	// Datos salida
	cout << "Area total = " << a << endl;
	cout << "************************" << endl;
	
	// Volumen
	// Datos entrada
	cout << "Volumen." << endl;
	cout << "Ingrese el valor de su arista." << endl;
	cin >> ar;
	// Procesamiento
	v = (sqrtf(2)/12)*(pow(ar,3));
	// Datos salida
	cout << "Volumen = " << v << endl;
	cout << "************************" << endl;
	
	// Altura
	// Datos entrada
	cout << "Altura." << endl;
	cout << "Ingrese el valor de su arista." << endl;
	cin >> ar;
	// Procesamiento
	h = (ar)*(sqrtf(6)/3);
	// Datos salida
	cout << "Altura = " << h << endl;
	cout << "************************" << endl;
	cout << "Fin del algoritmo." << endl;
	return 0;
}

