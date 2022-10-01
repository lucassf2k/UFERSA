#include <iostream>

using namespace std;

int main()
{
	int idades;
	cout << "Digite as idades do grupo: \n";
	
	int idadesMaiores18 = 0;
	int maisVelha = 0;
	int maisNova = 100;

	do
	{
		cin >> idades;

		if (idades > maisVelha)
			maisVelha = idades;

		if (idades < maisNova && idades != 0)
			maisNova = idades;

		if (idades >= 18)
			idadesMaiores18 += 1;

	} while (idades != 0);

	cout << "Nesse grupo " << idadesMaiores18 << " sao maiores de idade\n";
	cout << "O mais velho tem " << maisVelha << " e o mais novo tem " << maisNova;

	return 0;
}