#include <iostream>
#include <cmath>

using namespace std;

float calculoDeIMC(float, float);

int main()
{

	cout << "Indice de massa corporal" << endl;
	cout << "-----------------------------------" << endl;

	cout << "Altura: ";
	float altura;
	cin >> altura;

	cout << endl;

	cout << "Massa: ";
	float massa;
	cin >> massa;

	cout << endl;

	float resultado = calculoDeIMC(altura, massa);

	cout << "IMC: " << resultado;

	return 0;
}

float calculoDeIMC(float altura, float massa)
{
	float imc;

	imc = massa / pow(altura, 2);

	return imc;
}