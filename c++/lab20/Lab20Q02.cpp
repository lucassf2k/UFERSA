#include <iostream>

using namespace std;

int main()
{
	int carros[10];

	cout << "As ultimas 10 velocidades registradas: \n";
	
	
	for (int i = 0; i < 10; i++)
		cin >> carros[i];

	int controle = 0; float multa = 0; float multaTotal = 0; int quantidadeCarrosMultados{};

	cout << endl;

	while (controle < 10) {
		if (carros[controle] > 80) {
			multa = (float) (carros[controle] - 80) * 8.0f;
			multaTotal += multa;
			cout << carros[controle] << " Km/h excede o limite = multa de R$" << multa << endl;
			quantidadeCarrosMultados++;
		}
		controle++;
	}

	cout << "\n" << quantidadeCarrosMultados << " carros foram multados em um valor total de " << multaTotal << ".";

	return 0;
}