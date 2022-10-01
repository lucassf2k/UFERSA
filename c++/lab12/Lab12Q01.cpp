#include <iostream>
#include "Lab12Q03.h"

using namespace std;
/*
struct ContaBancaria 
{
	int identificador;
	char nome[50];
	float saldo = { 0 };
};
*/
ContaBancaria ler()
{
	ContaBancaria r;
	cin >> r.identificador;
	cin.ignore();
	cin.getline(r.nome, 50);
	return r;
}

void exibir(ContaBancaria c)
{
	cout << "Seu identicador: " << c.identificador << endl;
	cout << "Seu Nome: " << c.nome << endl;
	cout << "Seu saldo: " << c.saldo;
}

int main()
{
	ContaBancaria cliente;

	cout << "Para criar uma conta digite seu identificador e seu nome.\n";
	cliente = ler();
	exibir(cliente);

	cout << endl;

	cout << "Quanto deseja depositar? ";
	cin >> cliente.saldo;

	cout << endl;

	//exibir(cliente);

	exibir_dados_conta_bancaria(cliente);

	return 0;
}