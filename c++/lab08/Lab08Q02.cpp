#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float valor;

	valor = 1 * pow(2, (200 - 127)) * (1 + 1 / pow(2, 2) + 1 / pow(2, 3) + 1 / pow(2, 7) + 1 / pow(2, 9));

	cout << "Valor: " << valor;

	return 0;
}