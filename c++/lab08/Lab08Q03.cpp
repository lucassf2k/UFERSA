#include <iostream>

using namespace std;

int main()
{

	float valor01 = 5.56874f;

	float valor02 = 5.5687f + 1.0f;

	float valor03 = 0.8547f;

	float valor04 = 7.2f;

	float valor05 = 8.5544f;

	cout << fixed; cout.precision(8);

	cout << "Valor 01: " << valor01 << endl;
	cout << "Valor 02: " << valor02 << endl;
	cout << "Valor 03: " << valor03 << endl;
	cout << "Valor 04: " << valor04 << endl;
	cout << "Valor 05: " << valor05 << endl;

	return 0;
}