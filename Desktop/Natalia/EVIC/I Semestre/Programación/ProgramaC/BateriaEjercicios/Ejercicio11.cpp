

#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int num;
	float res;
	cout << "Para conocer el cuadrado de los primeros numeros naturales, presione 1." << endl;
	cin >> num;
	if ((num==1)) {
		for (num=1;num<=9;num++) {
			res = pow(num,2);
			cout << num << " = " << res << endl;
		}
	} else {
		cout << "Fin del agoritmo." << endl;
	}
	return 0;
}

