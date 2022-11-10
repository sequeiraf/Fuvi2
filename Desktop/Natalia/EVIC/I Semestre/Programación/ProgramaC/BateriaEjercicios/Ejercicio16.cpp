
#include<iostream>
using namespace std;

int main() {
	float cont;
	float max;
	float media;
	float min;
	float num;
	float suma;
	cout << "Ingrese un numero cualquiera." << endl;
	cin >> num;
	min = num;
	max = num;
	suma = 0;
	while ((num!=0)) {
		if ((num>max)) {
			max = num;
		}
		if ((num<min)) {
			min = num;
		}
		suma = suma+num;
		cont = cont+1;
		cin >> num;
	}
	media = suma/(cont);
	cout << "El numero maximo = " << max << endl;
	cout << "El numero minimo = " << min << endl;
	cout << "El numero media = " << media << endl;
	cout << "Fin del algoritmo." << endl;
	return 0;
}

