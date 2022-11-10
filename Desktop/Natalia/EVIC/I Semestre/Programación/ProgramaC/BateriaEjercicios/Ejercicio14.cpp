

#include<iostream>
using namespace std;

int main() {
	int cont;
	int num;
	int result;
	cout << "Para finalizar este algoritmo, solo ingrese un -1." << endl;
	cont = 0;
	result = 0;
	while ((num>-1)) {
		cout << "Ingrese el valor numerico: " << endl;
		cin >> num;
		if ((num!=-1)) {
			result = result+num;
			cont = result/num;
		}
	}
	cout << "La media aritmetica de los numeros es : " << cont << endl;
	cout << "Fin del algoritmo." << endl;
	return 0;
}

