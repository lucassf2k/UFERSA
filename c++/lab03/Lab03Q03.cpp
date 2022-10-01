#include <iostream>
using namespace std;

int main() 
{
	float peso;
	float tempoDeCorridaHoras, tempoDeCiclismoHoras, tempoDeNatacaoHoras;
	char pontoHora, pontoHora2, pontoHora3, pontoMinuto, pontoMinuto2, pontoMinuto3;
	float tempoDeCorridaMinutos, tempoDeCiclismoMinutos, tempoDeNatacaoMinutos;
	float caloriasCorrida, caloriasCiclismo, caloriasNatacao, caloriasTotais;

	cout << "Vamos calcular quantas calorias voce perdeu hoje? Fale os seus dados\n";

	cout << "Digite seu peso atual: ";
	cin >> peso;
	cout << endl;

	cout << "Digite o seu tempo de corrida (xh:ym): ";
	cin >> tempoDeCorridaHoras;
	cin >> pontoHora;
	cin >> tempoDeCorridaMinutos;
	cin >> pontoMinuto;
	cout << endl;

	cout << "Digite o seu tempo de ciclismo (xh:ym): ";
	cin >> tempoDeCiclismoHoras;
	cin >> pontoHora2;
	cin >> tempoDeCiclismoMinutos;
	cin >> pontoMinuto2;
	cout << endl;

	cout << "Digite o seu tempo de ciclismo (xh:ym): ";
	cin >> tempoDeNatacaoHoras;
	cin >> pontoHora3;
	cin >> tempoDeNatacaoMinutos;
	cin >> pontoMinuto3;
	cout << endl;

	// Cálculo de calorias de corrida
	tempoDeCorridaHoras = tempoDeCorridaHoras + (tempoDeCorridaMinutos / 60);
	caloriasCorrida = (7 * peso * tempoDeCorridaHoras);

	// Cãlculo de calorias de ciclismo
	tempoDeCiclismoHoras = tempoDeCiclismoHoras + (tempoDeCiclismoMinutos / 60);
	caloriasCiclismo = (7 * peso * tempoDeCiclismoHoras);

	// Cálculo de calorias de natação
	tempoDeNatacaoHoras = tempoDeNatacaoHoras + (tempoDeNatacaoMinutos / 60);
	caloriasNatacao = (8 * peso * tempoDeNatacaoHoras);

	caloriasTotais = (caloriasCorrida + caloriasCiclismo + caloriasNatacao);

	cout << "Voce gastou ao todo " << caloriasTotais << " de calorias";


	return 0;
}