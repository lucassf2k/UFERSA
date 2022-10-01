#include <iostream>

using namespace std;

int quantDePalavras(const char* str)
{
	char palavra[20];
	unsigned quantPalavras = 0;

	while (*str) {
		if (*str == ' ') {
			quantPalavras++;
		}
		str++;
	}

	return quantPalavras + 1;
}

int main()
{

	char frase[200];

	cout << "Entre com uma frase: ";
	cin.getline(frase, 200);

	unsigned palavras = quantDePalavras(frase);

	cout << "Existem  " << palavras << " palavras nesta frase.";

	return 0;
}