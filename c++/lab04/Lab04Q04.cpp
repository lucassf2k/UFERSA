#include <iostream>
#include <cmath>

using namespace std;

float VolumeCilindro(float altura, float raio);

int main()
{
	cout << "Calcule o Volume de um Cilindro" << endl;
	cout << "------------------------------------------" << endl;

	float raio, altura;

	cout << "Entre com o raio da base: ";
	cin >> raio;
	cout << endl;

	cout << "Entre com a altura: ";
	cin >> altura;

	cout << endl;

	float volume;

	volume = VolumeCilindro(altura, raio);

	cout << "O volume do cilindro e: " << volume;

	return 0;
}

float VolumeCilindro(float altura, float raio)
{
	float pi = 3.14159;
	float volume;

	volume = pi * pow(raio, 2) * altura;

	return volume;
}