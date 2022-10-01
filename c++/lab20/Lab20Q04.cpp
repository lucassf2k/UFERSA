#include <iostream>

using namespace std;

int main()
{
	int valor01 = 0;
	int valor02 = 0;
	cout << "Digite um numero inteiro: ";
	cin >> valor01;
	cout << "Digite outro numero inteiro: ";
	cin >> valor02;

	int soma = 0;
	if (valor01 < valor02) {
		for (int i = valor01 + 1; i < valor02; i++)
			soma += i;

		cout << "A soma de todos dos valores entre " << valor01 << " e " << valor02 << ": " << soma << ".";
	}
	else if (valor01 > valor02) {
		for (int i = valor02 + 1; i < valor01; i++)
			soma += i;

		cout << "A soma de todos dos valores entre " << valor02 << " e " << valor01 << ": " << soma << ".";
	}
	else {
		soma = 0;
		cout << "A soma de todos dos valores entre " << valor02 << " e " << valor01 << ": " << soma << ".";
	}


	return 0;
}