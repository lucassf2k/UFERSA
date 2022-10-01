#include <iostream>

using namespace std;

int somaAateB(int a, int b)
{
	int s = 0;

	for (int i = a; i <= b; i++)
		s = s + i;

	return s;
}

int main()
{
	cout << "Digite o numero de inicio: ";
	int numI;
	cin >> numI;

	cout << "Deigite o numero de parada: ";
	int numF;
	cin >> numF;

	int soma = somaAateB(numI, numF);

	cout << "A soma entre os numeros de " << numI << " ate " << numF << " e " << soma;
	return 0;
}