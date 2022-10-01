#include <iostream>

using namespace std;

int main()
{

	char nome[100];

	cout << "Digite um texto: ";

	int i = 0;

	do
	{
		cin.getline(nome, 100);
	} while (nome[i] != '@');

	cout << nome << endl;

	return 0;
}