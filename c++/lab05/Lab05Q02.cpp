#include <iostream>

using namespace std;

float aumentaSalarioEm15Porcento(float);

int main()
{

	float salario;

	cout << "Digite seu salario atual: ";
	cin >> salario;

	cout << endl;

	float novoSalario;

	novoSalario = aumentaSalarioEm15Porcento(salario);

	cout << "Seu salario atualizado: " << novoSalario;

	return 0;
}

float aumentaSalarioEm15Porcento(float valor)
{
	float novoValor;

	novoValor = valor + ((valor * 15) / 100);

	return novoValor;
}