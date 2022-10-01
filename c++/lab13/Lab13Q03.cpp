#include <iostream>
#include <cstring>

using namespace std;

struct Data {
	int dia;
	int ano;
	int mes;
};

struct Horario {
	int hora;
	int min;
};

struct Evento {
	Data data;
	Horario horario;
	char Descricao[18];
};

Evento ler()
{
	Evento e;
	cout << "Data: ";
	cin >> e.data.dia >> e.data.mes >> e.data.ano;
	cout << "\nHora: ";
	cin >> e.horario.hora >> e.horario.min;
	cin.ignore();
	cout << "\nDesc: ";
	cin.getline(e.Descricao, 18);
	return e;
}

void exibir(Evento e)
{
	cout << e.data.dia << "/";
		if (e.data.mes < 10)
			cout << "0" << e.data.mes;
		else
			cout << e.data.mes;
		cout << "/" << e.data.ano << " " << e.horario.hora << ":" << e.horario.min << " " << e.Descricao;
}

int main()
{
	Evento evento[10] = {{  }, { }};

	cout << "Entre com 2 eventos\n#1\n";
	evento[0] = ler();
	cout << "\n#2\n";
	evento[1] = ler();

	exibir(evento[0]);
	cout << "\n";
	exibir(evento[1]);

	return 0;
}