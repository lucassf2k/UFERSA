#include <iostream>
using namespace std;

int main()
{
	int horaAtual, minutoAtual, horaCorreta;
	char removeDoisPontos;

	cout << "Que horas são? ";
	cin >> horaAtual >> removeDoisPontos >> minutoAtual;

	cout << endl;
	cout << "ATENCAO! Seu relogio esta atrassado" << endl;

	horaCorreta = (horaAtual + 1); // Aqui estamos somando uma hora na hora recebida

	cout << "A hora correta: " << horaCorreta << ":" << minutoAtual;

	return 0;
}