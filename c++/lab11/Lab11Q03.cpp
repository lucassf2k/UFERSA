#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char nome[20];
	char data[50];

	cout << "Nome: ";
	cin.getline(nome, 20);

	cout << endl;

	cout << "Data: ";
	cin >> data;

	cout << endl;

	char frase[50];

	strcat(frase, nome);
	strcat(frase, " esteve aqui em ");
	strcat(frase, data);

	cout << frase;

	return 0;
}