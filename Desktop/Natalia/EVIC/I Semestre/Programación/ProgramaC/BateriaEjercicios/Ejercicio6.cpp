

#include<iostream>
using namespace std;



int main() {
	float cantidadninas;
	float cantidadninos;
	float cantidadtotal;
	float porcentajeninas;
	float porcentajeninos;
	
	cout << "Ingrese la cantidad total de ninos: " << endl;
	cin >> cantidadninos;
	cout << "Ingrese la cantidad total de ninas: " << endl;
	cin >> cantidadninas;
	cantidadtotal = cantidadninos+cantidadninas;
	porcentajeninos = (cantidadninos*100)/cantidadtotal;
	porcentajeninas = (cantidadninas*100)/cantidadtotal;
	cout << "La cantidada total de nin@s es = " << cantidadtotal << endl;
	cout << "El porcentaje de ninos es = " << porcentajeninos << "%" << endl;
	cout << "El porcentaje de ninas es = " << porcentajeninas << "%" << endl;
	return 0;
}

