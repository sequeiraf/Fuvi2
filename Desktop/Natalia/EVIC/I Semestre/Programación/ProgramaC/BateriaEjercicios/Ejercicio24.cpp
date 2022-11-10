
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float a;
	float b;
	float c;
	float cont;
	float raizcua;
	float total1;
	float total2;
	cout << "Escriba el valor de A: " << endl;
	cin >> a;
	cout << "Escribir el valor de B: " << endl;
	cin >> b;
	cout << "Escribir el valor de C: " << endl;
	cin >> c;
	cont = -b;
	raizcua = pow((pow(b,2)-4*a*c),0.5);
	if (raizcua<=0) {
		cout << "La ecuacion que usted ingreso no se puede resolver." << endl;
	} else {
		total1 = (cont+raizcua)/(2*a);
		total2 = (cont-raizcua)/(2*a);
		cout << "Total 1 = " << total1 << endl;
		cout << "Total 2 = " << total2 << endl;
	}
	cout << "Fin del algoritmo." << endl;
	return 0;
}

