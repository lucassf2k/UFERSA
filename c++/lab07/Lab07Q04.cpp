#include <iostream>

using namespace std;

unsigned int bitsAltos(unsigned int);

int main()
{
	cout << "Digite um valor inteiro: " << endl;
	unsigned int num;
	cin >> num;

	cout << bitsAltos(num);

	return 0;
}

unsigned int bitsAltos(unsigned int valor)
{
	unsigned int mascara = 65535;
	mascara = ~mascara;

	valor = mascara & valor;

	return valor >> 16;
}