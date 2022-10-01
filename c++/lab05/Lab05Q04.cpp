#include <iostream>
#include <cmath>

using namespace std;

float moduloDeUmVetor(float, float);

int main()
{

	cout << "Digite as coordenadas do vetor: " << endl;
	float coordX, coordY;
	cout << "X: ";
	cin >> coordX;
	
	cout << endl;

	cout << "Y: ";
	cin >> coordY;

	cout << "\n";

	cout << "O tamanho do vetor e: " << moduloDeUmVetor(coordX, coordY);

	return 0;
}

float moduloDeUmVetor(float coordX, float coordY)
{

	float modulo;

	modulo = sqrt(pow(coordX, 2) + pow(coordY, 2));

	return modulo;

}