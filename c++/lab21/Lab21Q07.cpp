#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

struct Nadador {
	char nome[30];
	int idade;
	char categoria[12];
};

int main()
{
	Nadador nadador;

	cout << "Digite seu nome: ";
	cin.getline(nadador.nome, 30);
	cout << "Digite sua idade: ";
	cin >> nadador.idade;

	if (nadador.idade >= 5 && nadador.idade <= 7)
		strcpy(nadador.categoria, "Infantil");
	else if (nadador.idade >= 8 && nadador.idade <= 10)
		strcpy(nadador.categoria, "Juvenil");
	else if (nadador.idade >= 11 && nadador.idade <= 15)
		strcpy(nadador.categoria, "Adolescente");
	else if (nadador.idade >= 15 && nadador.idade <= 30)
		strcpy(nadador.categoria, "Adulto");
	else
		strcpy(nadador.categoria, "Senior");

	cout << "Seud dados!" << endl;
	cout << "Nome: " << nadador.nome << endl;
	cout << "Idade: " << nadador.idade << endl;
	cout << "Categoria: " << nadador.categoria << endl;

	return 0;
}