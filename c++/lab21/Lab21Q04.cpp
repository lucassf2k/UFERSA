#include <iostream>

using namespace std;

int main()
{
	unsigned long long atual = 1LL;
	unsigned long long proximo = 1LL;
	unsigned long long anterior = 0LL;
	unsigned long long soma = 0LL;

	for (unsigned long long i = 1LL; i < 100; i++) {
		proximo = atual + anterior;
		anterior = atual;
		atual = proximo;

		if (proximo % 2 == 0 && proximo < 4000000LL)
			soma += proximo;
	}

	cout << "Soma e " << soma;

	return 0;
}