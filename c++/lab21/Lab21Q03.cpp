#include <iostream>

using namespace std;

int main()
{
	int i = 0;
	int soma = 0;

	while (i < 1000) {
		if (i % 3 == 0 || i % 5 == 0)
			soma += i;

		i++;
	}

	cout << "A soma dos multiplos de 3 ou 5 e " << soma;

	return 0;
}