#include <iostream>

using namespace std;

union jogador
{
	char nome[25]; // nome do jogador
	int numero; // numero da camisa do jogador
};
struct gol
{
	jogador jog; // identificação do jogador
	int hora, min; // hora e minuto em que o gol foi marcado
};

gol ler()
{
	gol g;
	cin >> g.jog.nome;
	cin >> g.hora;
	cin.ignore();
	cin >> g.min;
	return g;
}

int main()
{
	gol jogador[3];

	cout << "Digite os dados dos ultimos 3 gols: \n";
	cout << "Ool 01: ";
	jogador[0] = ler();
	cout << endl;

	cout << "Gol 02: ";
	jogador[1] = ler();
	cout << endl;

	cout << "Gol 03: ";
	jogador[2] = ler();
	cout << endl;


	return 0;
}