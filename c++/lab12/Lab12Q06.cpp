#include <iostream>
#include <cmath>

using namespace std;

struct Horario 
{
	int hora;
	int min;
};
/*
Horario ler()
{
	Horario r;
	cin >> r.hora;
	cin.ignore();
	cin >> r.min;
	return r;
}
*/
istream& operator>>(istream& is, Horario& r)
{
	is >> r.hora;
	is.ignore();
	is >> r.min;
	return is;
}
/*
Horario sub(Horario a, Horario b)
{
	Horario r;
	r.hora = sqrt(pow((a.hora - b.hora), 2));
	r.min = sqrt(pow((a.min - b.min), 2));
	return r;
}
*/

Horario operator-(Horario a, Horario b)
{
	Horario r;
	r.hora = sqrt(pow((a.hora - b.hora), 2));
	r.min = sqrt(pow((a.min - b.min), 2));
	return r;
}

/*
void exibir(Horario r)
{
	if (r.hora < 10)
		cout << "0" << r.hora << ":";
	else
		cout << r.hora << ":";

	if (r.min < 10)
		cout << "0" << r.min;
	else
		cout << r.min;

}
*/
ostream& operator<<(ostream& os, Horario r)
{
	if (r.hora < 10)
		os << "0" << r.hora << ":";
	else
		os << r.hora << ":";

	if (r.min < 10)
		os << "0" << r.min;
	else
		os << r.min;

	return os;

}

int main()
{
	Horario inicioDaAula, fimDaAula;

	/* Primeira versão
	cout << "Inicio da aula: ";
	inicioDaAula = ler();
	cout << endl;
	cout << "Fim da aula: ";
	fimDaAula = ler();

	cout << endl;

	Horario h_final = sub(inicioDaAula, fimDaAula);

	int minutosEntreInicioEFim = (h_final.hora * 60) + h_final.min;

	cout << "Entre ";
	exibir(inicioDaAula);
	cout << " e ";
	exibir(fimDaAula); 
	cout << " existem " << minutosEntreInicioEFim
		<< " minutos, insto e, " << h_final.hora << "h e " << h_final.min << " minutos";
	*/

	cout << "Inicio da aula: ";
	cin >> inicioDaAula;
	cout << "\nFim da aula: ";
	cin >> fimDaAula;

	cout << endl;

	Horario h_final = inicioDaAula - fimDaAula;
	int minutosEntreInicioEFim = (h_final.hora * 60) + h_final.min;

	cout << "Entre " << inicioDaAula << " e " << fimDaAula << " existem " << minutosEntreInicioEFim
		<< " minutos, isto e, " << h_final.hora << "h e " << h_final.min << " minutos";
	return 0;
}