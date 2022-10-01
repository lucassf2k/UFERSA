#include <iostream>
#include <locale.h>
#include <cctype>
#include <cstring>

using namespace std;

bool formatNome(char* nome_completo)
{
	int foiModificado = 0;

	if (islower(nome_completo[0])) {
		nome_completo[0] = toupper(nome_completo[0]);
		foiModificado++;
	}

	nome_completo++;
	while (*nome_completo) {		
		if (*nome_completo == ' ') {
			nome_completo++;
			if (*nome_completo == 'd') {
				*nome_completo = 'd';
			} else if (!isupper(*nome_completo)) {
				*(nome_completo) = toupper(*nome_completo);
				foiModificado++;
			}
		}
		else if (isupper(*nome_completo)) {
			*(nome_completo) = tolower(*nome_completo);
			foiModificado++;
		}

		nome_completo++;
	}

	return foiModificado;
}

int main()
{
	setlocale(LC_ALL, "portuguese");

	char nomeCompleto[200];

	cout << "Entre com os nomes dos aprovados (fim para encerrar): \n";

	int controle;

	cin.getline(nomeCompleto, 200);
	while (strcmp(nomeCompleto, "fim")) {
		controle = formatNome(nomeCompleto);

		if (controle == 0) {
			cout << nomeCompleto << " <--" << "OK\n";
		}
		else {
			cout << nomeCompleto << " <-- " << "Corrigido\n";
		}

		cin.getline(nomeCompleto, 200);
	}

	return 0;
}