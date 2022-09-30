#include <iostream>

using namespace std;

#define PRECO_PAO 0.30;
#define PRECO_PASTEL 0.25;

int main()
{
	cout << "Paes&Cia" << endl;

	int quantidadePao, quantidadePastel;

	cout << "Quantos paes? ";
	cin >> quantidadePao;

	cout << endl;

	cout << "Quantos pasteis? ";
	cin >> quantidadePastel;

	cout << endl;

	float precoTotalPaes, precoTotalPasteis, precoTotal;

	precoTotalPaes = quantidadePao * PRECO_PAO;
	precoTotalPasteis = quantidadePastel * PRECO_PASTEL;


	precoTotal = precoTotalPaes  + precoTotalPasteis;


	cout << "O total das compras foram de: R$" << precoTotal;

	return 0;
}