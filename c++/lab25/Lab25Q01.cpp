#include <iostream>

using namespace std;

int quantElementos(const int* inicio, const int* fim, int n)
{
	int quant = 0;
	while (inicio != fim) {
		if ((*inicio) == n)
			quant++;

		inicio++;
	}

	return quant;
}

int main()
{
	const int tam = 11;

	int elementos[tam] = { 0, 1, 0, 1, 0, 1, 1, 1, 0, 1 };

	int quantDeZeros = quantElementos(elementos, elementos + tam, 0);
	int quantDeUns = quantElementos(elementos, elementos + tam, 1);

	cout << "Existem " << quantDeZeros << " de zeros e  " << quantDeUns << " de uns nessa faixa indicada\n";

	return 0;
}