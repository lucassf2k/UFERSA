#include <iostream>

using namespace std;

double mult_vetores(double valores[3]) {
	return (valores[0] * valores[2]) - valores[1];
}

int main()
{
	double valores[3] = { 0, 0, 0 };

	cout << "Valor 01: ";
	cin >> valores[0];

	cout << endl;

	cout << "Valor 02: ";
	cin >> valores[1];

	cout << endl;

	cout << "Valor 03: ";
	cin >> valores[2];

	cout << endl;

	cout << "Valor = " << mult_vetores(valores);

	return 0;
}