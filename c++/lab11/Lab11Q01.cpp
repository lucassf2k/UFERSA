#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	const char senha[12] = "bolodemilho";

	cout << "Digite a senha: ";
	char senhaUsuario[20];
	cin >> senhaUsuario;

	int contador = 0; 
	int controle = 0;

	if (strlen(senhaUsuario) < strlen(senha) || strlen(senhaUsuario) > strlen(senha))
		cout << "Senha incorreta";

	for (int i = 0; i < strlen(senhaUsuario); i++) {
		if (senha[i] == senhaUsuario[i])
			contador = contador + 1;
		else
			controle = 1;
	}

	if (strlen(senha) == contador && controle != 1)
		cout << "Senha correta!";
	else
		cout << "Senha incorreta!";

	return 0;
}