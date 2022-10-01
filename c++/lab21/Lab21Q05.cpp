#include <iostream>

using namespace std;

int main()
{
	int numero = 0;
	int controle = 0;
	unsigned long long tentativa = 1;

	while (numero != 10001) {
		controle = 0;

		for (unsigned long long i = tentativa; i > 0; i--)
		{
			if (tentativa % i == 0)
				controle++;

		}

		if (controle == 2) {
			numero++;
			cout << numero << endl;
		}

		tentativa++;

	}

	cout << "\nNumero 10001 e " <<  tentativa;

	return 0;
}