

#include<iostream>
using namespace std;

int main() {
	float descuento;
	float diasestancia;
	float distancia;
	float preciobillete;
	float preciobilletedes;
	float preciokilometros;
	descuento = 30/100;
	preciokilometros = 8.50;
	cout << "Ingrese la distancia a recorrer: " << endl;
	cin >> distancia;
	cout << "Ingrese los días de estancias: " << endl;
	cin >> diasestancia;
	if ((distancia>1000 && diasestancia>7)) {
		preciobilletedes = (distancia*preciokilometros)*descuento;
		cout << "El precio de su billete con descuento es = " << preciobilletedes << endl;
	} else {
		preciobillete = (distancia*preciokilometros);
		cout << "El precio del billete es = " << preciobillete << endl;
	}
	cout << "Fin del algoritmo." << endl;
	return 0;
}

