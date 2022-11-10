

#include<iostream>
using namespace std;

int main() {
	float impares;
	float mediaimpares;
	float mediapares;
	float n;
	float num;
	float pares;
	float sumaimpares;
	float sumapares;
	float x;
	for (x=1;x<=10;x++) {
		cout << "Ingrese los numeros: " << endl;
		cin >> num;
		if ((n=0)) {
			sumapares = sumapares+num;
			pares = pares+1;
		} else {
			sumaimpares = sumaimpares+num;
			impares = impares+1;
		}
	}
	mediapares = sumapares/pares;
	mediaimpares = sumaimpares/impares;
	cout << "Los numeros pares son: " << pares << endl;
	cout << "Los numeros impares son:" << impares << endl;
	cout << "La media de pares es: " << mediapares << endl;
	cout << "La media de impares es: " << mediaimpares << endl;
	cout << "Fin del algoritmo." << endl;
	return 0;
}

