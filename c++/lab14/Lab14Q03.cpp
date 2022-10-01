#include <iostream>

using namespace std;

int main()
{
	int valor = 10, * temp, soma = 0;
	
	temp = &valor; // temp ta recebendo o endereco da memoria onde contem valor
	
	*temp = 20; // por causa * temp esta apontando o valor 20 para a variavel valor, assim valor = 20
	
	temp = &soma; // agora temp esta recebendo o valor do endereco de soma
	
	*temp = valor; // recebendo 20 e como esta apontando para a variavel soma, soma vai receber 20
	
	cout << "valor: " << valor << "\nsoma: " << soma << endl;

	return 0;
}