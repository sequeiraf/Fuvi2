

#include<iostream>
using namespace std;

int main() {
	int n;
	float suma;
	float x;
	cout << "Para conocer la suma de los primeros N numeros naturales, ingrese cualquier numero: " << endl;
	cin >> n;
	suma = 0;
	for (x=1;x<=n;x++) {
		cout << x << endl;
		suma = suma+x;
	}
	cout << "La suma de los primeros numeros naturales es = " << suma << endl;
	return 0;
}

