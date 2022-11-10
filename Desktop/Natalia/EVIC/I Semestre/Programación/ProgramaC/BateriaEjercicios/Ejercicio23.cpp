

#include<iostream>
using namespace std;


int main() {
	float bocadillojamon;
	float cantbocadillojamon;
	float cantcerveza;
	float cantrefresco;
	float cantresfresco;
	float cerveza;
	float refresco;
	float total;
	float totalbocadillojamon;
	float totalcerveza;
	float totalrefresco;
	float totalresfresco;
	bocadillojamon = 1.5;
	refresco = 1.05;
	cerveza = 0.75;
	cout << "Ingrese la cantidad total de bocadillos de jamon: " << endl;
	cin >> cantbocadillojamon;
	cout << "Ingrese la cantidad total refrescos: " << endl;
	cin >> cantrefresco;
	cout << "Ingrese la cantidad total cervezas: " << endl;
	cin >> cantcerveza;
	if ((cantbocadillojamon>0)) {
		totalbocadillojamon = cantbocadillojamon*bocadillojamon;
	}
	if ((cantrefresco>0)) {
		totalrefresco = cantrefresco*refresco;
	}
	if ((cantcerveza>0)) {
		totalcerveza = cantcerveza*cerveza;
	}
	cout << "El valor total de bocadillos de jamon = " << totalbocadillojamon << endl;
	cout << "El valor total de refrescos = " << totalrefresco << endl;
	cout << "El valor total de cervezas = " << totalcerveza << endl;
	return 0;
}

