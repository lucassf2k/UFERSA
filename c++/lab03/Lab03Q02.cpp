#include <iostream>

int main()
{
	int numero;

	std::cout << "Por favor, digite um numero n (0 a 9) para ver a sua tabuada: ";
	std::cin >> numero;
	std::cout << std::endl;
	std::cout << "A tabuada do numero " << numero << std::endl;

	for (int i = 0; i < 10; i++)
	{
		std::cout << numero << " x " << i << ": " << (numero * i) << std::endl;
	}

	return 0;
}