#include <iostream>
#include <locale.h>
#include <cstring>

using namespace std;

void FirstName(const char* nomeCompleto, char *retorno)
{
	int i;

	for (i = 0; nomeCompleto[i] != ' '; i++)
		retorno[i] = nomeCompleto[i];
	
	retorno[i] = '\0';
}

void LastName(char* nomeCompleto, char* str)
{
	int cont = 0;
	char tmp[20];

	for (int i = strlen(nomeCompleto) - 1; nomeCompleto[i]  != ' '; i--)
		tmp[cont++] = nomeCompleto[i];

	tmp[cont] = '\0';

	for (int i = 0; i < cont; i++)
		str[i] = tmp[cont - 1 - i];

	str[cont] = '\0';
}

int main()
{
	char nomeCompleto[100];
	char firstName[30], lastName[30];

	cout << "Entre com nomes ('.' para encerrar): \n";
	cin.getline(nomeCompleto, 100);
	while (strcmp(nomeCompleto, ".")) {
		FirstName(nomeCompleto, firstName);
		LastName(nomeCompleto, lastName);
		cout << firstName << ", " << lastName << endl;
		cin.getline(nomeCompleto, 100);
	}

	return 0;
}