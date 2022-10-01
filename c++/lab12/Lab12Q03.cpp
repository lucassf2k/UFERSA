#include <iostream>
#include "Lab12Q03.h"

using namespace std;

void exibir_dados_conta_bancaria(ContaBancaria c)
{
	cout << "identificador: " << c.identificador
		<< " Nome: " << c.nome
		<< " Saldo: " << c.saldo << endl;
}

void exibir_palavra(Palavra p)
{
	cout << "Em portugues: " << p.portugues
		<< ", Em ingles: " << p.ingles
		<< ", Em espanhol: " << p.espanhol << endl;
}