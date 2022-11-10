
#include<iostream>
using namespace std;

int main() {
	float cont;
	float num;
	float num2;
	float num3;
	cont = 1;
	num2 = 0;
	num3 = 0;
	for (num=1;num<=100;num++) {
		if ((cont == 2)) {
			cout << "Multiplo de dos = " << cont << endl;
			num2 = num2+1;
		}
		if ((cont == 3)) {
			cout << "Multiplo de tres = " << cont << endl;
			num3 = num3+1;
		}
		cont = cont+1;
	}
	cout << "Fin del algoritmo." << endl;
	return 0;
}

