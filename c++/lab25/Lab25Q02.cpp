#include <iostream>
#include <fstream>

using namespace std;

struct Resposta {
	int menorNumero;
	int maiorNumero;
	int posicaoMenorNumero;
	int posicaoMaiorNumero;
};


Resposta encontraOMenorEMaiorNumero(const int* vet, int tam)
{
	Resposta res;

	res.maiorNumero = vet[0]; res.menorNumero = vet[0]; res.posicaoMaiorNumero = 0; res.posicaoMenorNumero = 0;

	for (int i = 0; i < tam; i++)
	{
		if (res.menorNumero > vet[i])
			res.menorNumero = res.menorNumero;
		else {
			res.menorNumero = vet[i];
			res.posicaoMenorNumero = i;
		}

		if (res.maiorNumero < vet[i])
			res.maiorNumero = res.maiorNumero;
		else {
			res.maiorNumero = vet[i];
			res.posicaoMaiorNumero = i;
		}
	}

	return res;
}

int main()
{

	ifstream fin;

	cout << "Arquivo: ";
	char arquivo[30];
	cin >> arquivo;

	fin.open(arquivo);

	int num[100];

	int cont = 0;
	char ignore;
	while (fin >> num[cont]) {
		cont++;
	}

	fin.close();
	Resposta resultado = encontraOMenorEMaiorNumero(num, 100);

	cout << "A posicao " << resultado.posicaoMenorNumero << " contem o menor numero (" << resultado.menorNumero << ")\n";
	cout << "A posicao " << resultado.posicaoMaiorNumero << " contem o maior numero (" << resultado.maiorNumero << ")\n";

	return 0;
}

