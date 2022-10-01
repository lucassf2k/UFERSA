#include <iostream>

using namespace std;

bool testarBit(unsigned char, int);
void exibirBits(unsigned char);

int main()
{
	unsigned int num;

	cout << "Digite um valor entre 0 e 255: ";
	cin >> num;

	exibirBits(num);
	return 0;
}

bool testarBit(unsigned char numero, int bit)
{
	unsigned char mascara = 1 << bit;

	if (numero & mascara)
		return 1;
	else
		return 0;

}

void exibirBits(unsigned char valor)
{
	cout << testarBit(valor, 7);
	cout << testarBit(valor, 6);
	cout << testarBit(valor, 5);
	cout << testarBit(valor, 4);
	cout << testarBit(valor, 3);
	cout << testarBit(valor, 2);
	cout << testarBit(valor, 1);
	cout << testarBit(valor, 0);
}
