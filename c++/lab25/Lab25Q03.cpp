#include <iostream>

using namespace std;

int Locate(int* vet, int tam, int num)
{
	int posicao = 0;
	int tmp;
	for (int i = 0; i < tam; i++) {
		if (vet[i] > vet[i + 1]) {
			tmp = vet[i + 1];
			vet[i + 1] = vet[i];
			vet[i] = tmp;
		}
		else {

		}
	}

	return posicao;
}

int main()
{
	cout << "Digite 10 valores: \n";

	int tmpVetor[10];
	int vetor[10];
	int posicao = 0;

	for (int i = 0; i < 10; i++) {
		cin >> tmpVetor[i];
	}

	for (int c = 0; c < 10; c++) {
		posicao = Locate(tmpVetor, 10, tmpVetor[c]);
		vetor[c] = tmpVetor[posicao];
		cout << vetor[c] << " ";
	}

	


	//Não consegui interpretar essa questão direito :(


	return 0;
}