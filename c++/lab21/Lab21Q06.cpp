#include <iostream>

using namespace std;

int main()
{
	unsigned long long numero = 1;

	int contadorInterno = 0;
	int controle = 0;

	while (contadorInterno != 20) {
		contadorInterno = 0;

		for (int i = 1; i <= 20; i++)
			if (numero % i == 0)
			{
				contadorInterno++;
			}

		numero++;
		cout << numero << endl;
	}

	cout << numero - 1;

	return 0;
}