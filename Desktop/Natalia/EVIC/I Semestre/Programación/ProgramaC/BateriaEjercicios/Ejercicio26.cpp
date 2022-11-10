
#include<iostream>
using namespace std;

int main() {
	int num1;
	int producto;
	int resultado;
	cout << "Para finalizar el algoritmo ingrese un 1: " << endl;
	num1 = 1;
	producto = 0;
	resultado = 1;
	while ((num1 = 0)) {
		cout << "Ingrese un número cualquiera: " << endl;
		cin >> num1;
		if ((num1!=0)) {
			resultado = resultado*num1;
			producto = resultado;
		}
	}
	cout << "El producto de los numeros es: " << producto << endl;
	return 0;
}

