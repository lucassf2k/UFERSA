#include <iostream>

using namespace std;

int* unirDoisVetores(int* a, int tamA,int* b, int tamB)
{
	int* uniao = new int[tamA + tamB];

	for (int i = 0; i < tamA; i++)
		uniao[i] = a[i];

	for (int i = 0; i < tamB; i++)
		uniao[tamA + i] = b[i];

	return uniao;
}

int main()
{
	int vetorA[4];
	int vetorB[4];

	cout << "Vetor A: ";
	for (int i = 0; i < 4; i++)
		cin >> vetorA[i];

	cout << "Vetor B: ";
	for (int i = 0; i < 4; i++)
		cin >> vetorB[i];

	int * resultado = unirDoisVetores(vetorA, 4, vetorB, 4);

	cout << "Uniao: ";
	for (int i = 0; i < 8; i++)
		cout << resultado[i] << " ";

	return 0;
}