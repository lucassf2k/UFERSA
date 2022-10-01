#include <iostream>

using namespace std;

struct Horario {
	int hora;
	int min;
};

void MostrarHorario(Horario* h)
{
	if (h->hora < 10)
		cout << "0" << h->hora;
	else
		cout << h->hora;

	cout << ":";

	if (h->min < 10)
		cout << "0" << h->min;
	else
		cout << h->min;
}

istream& operator>>(istream& is, Horario& h)
{
	is >> h.hora;
	is.ignore();
	is >> h.min;
	return is;
}

int main()
{
	Horario horario;
	Horario* ptr = &horario;

	cout << "Que horas sao? ";
	cin >> horario;

	ptr->hora = ptr->hora + 1;

	cout << "Seu relogio esta atrasado, o horario corretor e "; 
	MostrarHorario(ptr);

	return 0;
}