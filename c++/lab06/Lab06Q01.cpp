#include <iostream>

using namespace std;

int main()
{

	int horaPartida, minutoPartida;
	char simbolo;

	cout << "Digite o horario de partida (h:m):  ";
	cin >> horaPartida >> simbolo >> minutoPartida;

	cout << endl;

	int horaChegada, minutoChegada;

	cout << "Digite o horario de chegada (h:m): ";
	cin >> horaChegada >> simbolo >> minutoChegada;

	int horaFinal, minutoFinal;

	horaFinal = horaChegada - horaPartida;
	minutoFinal = minutoChegada - minutoPartida;

	cout << "O tempo total de viagem foi de: " << horaFinal << " horas e " << minutoFinal << " minutos.";

	return 0;
}