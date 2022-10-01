#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Lab12Q03.h"

using namespace std;

/*
struct Palavra 
{
	char portugues[20];
	char ingles[20];
	char espanhol[20];
};

*/

Palavra ler()
{
	Palavra p;
	cin >> p.portugues;
	cin >> p.ingles;
	cin >> p.espanhol;
	return p;
}

void exibir(Palavra d[])
{
	for (int i = 0; i < 3; i++)
	{
		cout << d[i].portugues << ", "
			 << d[i].ingles << ", "
			 << d[i].espanhol << endl;
	}
}

int main()
{
	Palavra dicionario[10] = { { "Gato", "Cat", "Gato" }, { "Cachorro", "Dog", "Cachorro" } };
	Palavra valor;

	cout << "Digite a mesma palavra em portugues, ingles, espanhol respectivamente: ";
	valor = ler();

	strcpy(dicionario[2].portugues, valor.portugues);
	strcpy(dicionario[2].ingles, valor.ingles);
	strcpy(dicionario[2].espanhol , valor.espanhol);

	exibir(dicionario);

	cout << endl;

	exibir_palavra(valor);

	return 0;
}