#include <iostream>
#include <cstring>

using namespace std;

struct Pessoa {
	char nome[30];
	int idade;
	char sexo;
};

int main()
{
	Pessoa pessoa;
	int sIdades = 0;
	int quanPessoa = 0;
	do
	{
		cout << "Digite sue nome, idade e sexo (M, F): ";
		cin >> pessoa.nome;
		cin >> pessoa.idade;
		cin >> pessoa.sexo;

		sIdades += pessoa.idade;
		quanPessoa += 1;
				
	} while (strncmp(pessoa.nome, "fim", 3) != 0);

	cout << "Soma das idades: " << (sIdades - pessoa.idade) / (quanPessoa - 1);

	return 0;
}