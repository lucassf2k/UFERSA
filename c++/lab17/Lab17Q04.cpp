#include <iostream>

using namespace std;

struct Login
{
	char nome[30];
	char senha[30];
};

int main()
{
	Login admin = { "bolo", "farofa" };

	Login user;

	cout << "Entre com o seu nome (login): ";
	cin.getline(user.nome, 30);
	cout << "Entre com a sua senha (login): ";
	cin.getline(user.senha, 30);

	int cNome = 0;
	int cSenha = 0;

	for (int i = 0; i < user.nome[i]; i++)
	{
		if (admin.nome[i] == user.nome[i])
			cNome += 1;
	}

	for (int i = 0; i < user.senha[i]; i++)
	{
		if (admin.senha[i] == user.senha[i])
			cSenha += 1;
	}

	if (cNome == strlen(admin.nome) && cSenha == strlen(admin.senha))
		cout << "Login e senha corretos!";

	return 0;
}