#include <iostream>
using namespace std;

int main()
{
	int anos, quantCigarroPorDia;
	float precoCarteira, gastoTotal;

	cout << "Quando voce ja gastou com cigarros? Vamos ver?" << endl;

	cout << "A quantos anos voce fuma? ";
	cin >> anos;
	cout << endl;
	cout << "Quantos cigarros voce fuma por dia? ";
	cin >> quantCigarroPorDia;
	cout << endl;
	cout << "Qual o preco medio de uma carteira com 20 cigarros? ";
	cin >> precoCarteira;
	cout << endl;

	gastoTotal = ((quantCigarroPorDia / static_cast<float>(20)) * precoCarteira) * (anos * 365);

	cout << "Voce ja gastou ate agora " << "R$ " << gastoTotal << " com cigarros";

	return 0;
}