#include <iostream>

using namespace std;

int ler()
{
	int p;
	cin >> p;
	return p;
}

int main()
{

	cout << "Quantos valores deseja guardar? ";
	int vetor;
	cin >> vetor;

	int* p_vetor = new int [vetor];

	cout << "Quais os valores? ";
	for (int i = 0; i < vetor; i++)
	{
		cin >> p_vetor[i];
	}

	cout << endl;
	cout << "Os valores ";
	for (int c = 0; c < vetor; c++)
	{
		cout << p_vetor[c] << ", ";
	}

	cout << " foram armazenados.";

	delete p_vetor;

	return 0;
}