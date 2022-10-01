#include <iostream>

using namespace std;

enum semana { DOM, SEG, TER, QUAR, QUIN, SEX, SAB };

int main()
{
	char semanas[7][10] =
	{
		"Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta",
		"Sabado"
	};

	for (semana ind = DOM; ind <= SAB; ind = semana(ind + 1))
		cout << semanas[ind] << endl;

	return 0;
}