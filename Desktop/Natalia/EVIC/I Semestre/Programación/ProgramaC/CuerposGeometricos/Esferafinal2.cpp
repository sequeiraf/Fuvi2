
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float a;
	float h;
	float numeropi;
	float r;
	float rm;
	float v;
	// Declaracion de variables
	numeropi = 3.1416;
	// Area
	// Datos de entrada.
	cout << "Bienvenido (a) te ayudare a calcular area, volumen, zona esferica y casquete esferico de una esfera." << endl;
	cout << "Area." << endl;
	cout << "Ingrese el valor de radio (r).";
	cin >> r;
	// Procedimiento
	a = 4*numeropi*pow(r,2);
	// Datos salida
	cout << "Area = " << a << endl;
	cout << "************************" << endl;
	
	// Volumen
	// Datos entrada.
	cout << "Volumen." << endl;
	cout << "Ingrese el valor del radio";
	cin >> r;
	// Procedimiento
	v = 4/3*(numeropi)*pow(r,3);
	// Datos salida
	cout << "Volumen = " << v << endl;
	cout << "************************" << endl;
	
	// AreaZonaEsferica
	// Datos entrada.
	cout << "Area zona esferica." << endl;
	cout << "Ingrese el valor de radio mayor (Rm).";
	cin >> rm;
	cout << "Ingrese el valor de altura (h).";
	cin >> h;
	// Procedimiento
	a = 2*numeropi*rm*h;
	// Datos salida
	cout << "Area zona esferica = " << a << endl;
	cout << "************************" << endl;
	
	// VolumenZonaEsferica
	// Datos de entrada.
	cout << "Volumen zona esferica." << endl;
	cout << "Ingrese el valor del radio (r).";
	cin >> r;
	cout << "Ingrese el valor del altura (h).";
	cin >> h;
	// Procedimiento
	v = (numeropi*h)*((pow(h,2))+(3*pow(r,2))+(3*r+2))/6;
	// Datos salida
	cout << "Volumen zona esferica = " << v << endl;
	cout << "************************" << endl;
	
	// AreaCasqueteEsferico
	// Datos de entrada.
	cout << "Area casquete esferico." << endl;
	cout << "Ingrese el valor de radio mayor (Rm).";
	cin >> rm;
	cout << "Ingrese el valor de altura (h).";
	cin >> h;
	// Procedimiento
	a = 2*numeropi*rm*h;
	// Datos salida
	cout << "Area casquete esferico = " << a << endl;
	cout << "************************" << endl;
	// VolumenCasqueteEsferico
	// Datos de entrada.
	cout << "Volumen casquete esférico." << endl;
	cout << "Ingrese el valor del radio (r).";
	cin >> r;
	cout << "Ingrese el valor del radio mayor (Rm).";
	cin >> rm;
	cout << "Ingrese el valor del altura (h).";
	cin >> h;
	// Procedimiento
	v = numeropi*pow(h,2)*(3*rm-h)/3;
	// Datos salida
	cout << "Volumen casquete esférico = " << v << endl;
	cout << "************************" << endl;
	return 0;
}

