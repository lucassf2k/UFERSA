#include <iostream>
#include <cmath>
using namespace std;

int Absoluto(int num);

int main()
{
	cout << "Digite um numero: ";
	int numero;
	cin >> numero;

	cout << endl;

	int resultado;

	resultado = Absoluto(numero);

	cout << "O valor absoluto e: " << resultado;

	return 0;
}

int Absoluto(int num)
{
	int numAbsoluto;

	numAbsoluto = sqrt(pow(num, 2));

	return numAbsoluto;
}