#include <iostream>

using namespace std;

int main(void)
{

	int vet[999999] = { 10, 20, 30, 40, 50 };

	for (int i = 0; i < 999999; i = i + 10) {
		vet[i] = 60;
		cout << " " << i << endl;
	}

	// acho que a linguagem s� mostrar erro quando a mem�ria que foi usada para rodar o programa � ultrapassada 

	return 0;
}