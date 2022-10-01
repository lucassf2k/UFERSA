#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char nomeCompleto[100];

	cout << "Digite seu nome e sobrenome: \n";
	cin.getline(nomeCompleto, 100);

	cout << endl;

	char nome[20];
	char sobrenome[20];
	char ch = ' ';
	char chQ = '\0';

	for (int i = 0; i < strlen(nomeCompleto); i++) {

		if (nomeCompleto[i] == ch) {
			nomeCompleto[i] = chQ;
			strcpy(nome, nomeCompleto);
			nomeCompleto[i] = ch;
			strcpy(sobrenome, nomeCompleto);
		}
	}



	cout << "Bom dia senhor, " << sobrenome << ". " << "Ou devo chama-lo de " << nome;

	return 0;
}