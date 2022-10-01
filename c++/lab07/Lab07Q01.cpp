#include <iostream>
#include "Utils.h"

using namespace std;

int main()
{
	cout << "Digite um caractere: ";
	char ch;
	cin >> ch;

	char chCodificado = codificar(ch);
	char chDecodificado = decodificar(chCodificado);

	cout << "seu caractere codificado: " << chCodificado;
	cout << endl;
	cout << "Seu caractere decodificado: " << chDecodificado << endl;

	return  0;
}