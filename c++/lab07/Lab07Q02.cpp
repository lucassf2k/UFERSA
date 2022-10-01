#include <iostream>
#include "Utils.h"

using namespace std;

int main()
{
	cout << "Digite uma letra: ";
	char letra;
	cin >> letra;

	cout << endl;

	cout << "Para codificar [ 1 ] Para decodificar [ 0 ]: ";
	int opcao;
	cin >> opcao;

	if (opcao == 1)
	{
		char letraCodificada = codificar(letra);
		cout << endl << "Codificada: " << letraCodificada;
	}
	else
	{
		char letraDecodificada = decodificar(letra);
		cout << endl << "Decodificada: " << letraDecodificada;
	}

	return 0;
}