#include <iostream>

using namespace std;

int main()
{
	int nums[10];

	cout << "Digite 10 valores: ";
	for (int i = 0; i < 10; i++)
		cin >> nums[i];

	int vetor_A[5];
	int vetor_B[5];
	int vetor_S[5];

	cout << "Vetor A: ";
	for (int i = 0; i < 5; i++)
	{
		vetor_A[i] = nums[i];
		cout << vetor_A[i] << " ";
	}

	cout << endl;

	cout << "Vetor B: ";
	for (int j = 0; j < 5; j++)
	{
		vetor_B[j] = nums[j + 5];
		 cout << vetor_B[j] << " ";
	}

	cout << endl;
	
	cout << "Vetor S: ";
	for (int k = 0; k < 5; k++)
	{
		vetor_S[k] = vetor_A[k] + vetor_B[k];
		cout << vetor_S[k] << " ";
	}

	return 0;
}