#include <iostream>

using namespace std;

void Inserir(void)
{
	cout << "Dado inserido com sucesso!\n";
}

void Remover(void)
{
	cout << "Dado removido com sucesso\n";
}

void Buscar(void)
{
	cout << "Dado buscado com sucesso\n";
}

void (*pMenu[3])(void) = { Inserir, Remover, Buscar };

int main()
{
	int opcao;

	 do {
		cout << "------ MENU DO SISTEMA -------\n";
		cout << "1) Inserir\n2) Remocer\n3) Buscar\n4) Sair";

		cout << "\nEscolha: "; cin >> opcao;

		pMenu[opcao - 1]();

	} while (opcao != 4);

	return 0;
}