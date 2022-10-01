#include <iostream>

using namespace std;

struct Data 
{
	char dia[15];
	char mes[15];
	int ano;
};

struct Horario
{
	int hora;
	int minutos;
	int segundos;
};

struct Evento
{
	Data data;
	Horario horario;
	char local[30];
};

Evento ler_evento()
{
	Evento e;
	cout << "Digite o local do evento: ";
	cin.getline(e.local, 30);
	cout << "\nDigite o dia, o mes, o ano, respectivamente: ";
	cin >> e.data.dia;
	cin >> e.data.mes;
	cin >> e.data.ano;
	cout << "\nDigite a hora, minuto e segundos do evento: ";
	cin >> e.horario.hora;
	cin >> e.horario.minutos;
	cin >> e.horario.segundos;
	return e;
}

int main()
{
	cout << "Digite informacoes sobre o evento abaixo.\n";

	Evento evento;

	evento = ler_evento();

	cout << "O evento acontece no " << evento.local << " no dia " << evento.data.dia << " de "
		<< evento.data.mes << " de " << evento.data.ano << " na hora " << evento.horario.hora
		<< "h" << evento.horario.minutos << "min" << evento.horario.segundos << "s";

	return 0;
}