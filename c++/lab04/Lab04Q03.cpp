#include <iostream>

using namespace std;

float media(int num, int num2);

int main()
{

	int numero, numero2;

	cout << "Digite um numero: ";
	cin >> numero;

	cout << endl;

	cout << "Digite outro numero: ";
	cin >> numero2;

	float resultado;

	resultado = media(numero, numero2);	

	cout << endl;

	cout << "A media dos numeros e: " << resultado;

	return 0;
}

float media(int num, int num2)
{
	float media;

	media = (static_cast<float>(num) + num2) / 2;

	return media;
}