#include <iostream>

using namespace std;

int main()
{
	 unsigned int num;

	cout << "Digite um numero: ";
	cin >> num;

	int controle = 0;

	for (int i = num; i > 0; i--) {
		if (num % i == 0)
			controle++;
	}

	if (controle == 2)
		cout << "E primo";
	else
		cout << "Nao e primo";

	return 0;
}