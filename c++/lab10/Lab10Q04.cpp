#include <iostream>

using namespace std;

int main(void)
{

	int vet[999999] = { 10, 20, 30, 40, 50 };

	for (int i = 0; i < 999999; i = i + 10) {
		vet[i] = 60;
		cout << " " << i << endl;
	}

	// acho que a linguagem só mostrar erro quando a memória que foi usada para rodar o programa é ultrapassada 

	return 0;
}