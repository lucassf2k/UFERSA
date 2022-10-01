#include <iostream>
#include <random>

using namespace std;

int main()
{
	random_device rd;
	mt19937 mt(rd());
	uniform_int_distribution<int> dist(0, 200);

	int vetor[5] = { dist(mt),  dist(mt), dist(mt), dist(mt), dist(mt) };

	cout << "Vetor: " << vetor[0] << " " << vetor[1] << " " << vetor[2] << " " << vetor[3] << " " << vetor[4] << endl;

	cout << "------------------" << endl;

	cout << "Alterar a posicao: ";
	int posicao;
	cin >> posicao;

	cout << endl;

	cout << "Novo valor: ";
	int novoValor;
	cin >> novoValor;

	cout << endl;

	cout << "-----------------" << endl;

	if (posicao == 1)
		vetor[0] = novoValor;
	else if (posicao == 2)
		vetor[1] = novoValor;
	else if (posicao == 3)
		vetor[2] = novoValor;
	else if (posicao == 4)
		vetor[3] = novoValor;
	else if (posicao == 5)
		vetor[4] = novoValor; 

	cout << "Vetor: " << vetor[0] << " " << vetor[1] << " " << vetor[2] << " " << vetor[3] << " " << vetor[4] << endl;

	return 0;
}