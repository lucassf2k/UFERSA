#include <iostream>

using namespace std;

int main()
{

	const char* meses[12] =
	{
		"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto",
		"Setembro", "Outubro", "Novembro", "Dezembro"
	};

	int livros_vendidos[3][12];

	for (int i = 0; i < 3; i++)
	{
		cout << "Digite o numero de livros vendidos " << i << " ano: \n";
		for (int j = 0; j < 12; j++) {
			cout << meses[j] << ": ";
			cin >> livros_vendidos[i][j];
		}

	}

	cout << "\nTotal de vendas\n";

	int soma[3] = { 0, 0, 0};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 12; j++) 
			soma[i] += livros_vendidos[i][j];

		cout << (i == 0 ? 1 : i) << "ano: " << soma[i] << endl;
	}

	cout << "Nos tres anos foram vendidos " << (soma[0] + soma[1] + soma[2]) << " livros.";
	return 0;
}