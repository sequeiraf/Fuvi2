

#include<iostream>
using namespace std;

int main() {
	float descuento;
	string mes;
	float totalcompra;
	float totalpago;
	descuento = 15;
	cout << "Bienvenid@ a nuestra tienda, por su compra en el mes de octubre se le aplicara un descuento." << endl;
	cout << "Ingrese el mes de su compra: " << endl;
	cin >> mes;
	cout << "Ingrese el total de su compra: " << endl;
	cin >> totalcompra;
	if ((mes=="Octubre")) {
		totalpago = (totalcompra)*(descuento / 100);
		cout << "El total a pagar con su descuento aplicado por ser el mes de octubre es de = " << totalpago << endl;
	} else {
		cout << "Su total a pagar es = " << totalcompra << endl;
		cout << "En este mes no se aplica el descuento." << endl;
	}
	return 0;
}

