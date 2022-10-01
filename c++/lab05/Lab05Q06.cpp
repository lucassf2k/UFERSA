#include <iostream>
#include <cmath>

using namespace std;

float moduloDeUmVetor(float coordX, float coordY);
float anguloPorDoisPontos(float coordX, float coordY);

int main()
{
	cout << "Digite as coordenadas do vetor: " << endl;
	float coordX, coordY;

	cout << "X: ";
	cin >> coordX;

	cout << endl;

	cout << "Y: ";
	cin >> coordY;

	cout << endl;

	cout << "Coordenadas polares do vetor:" << endl;

	cout << "(" << moduloDeUmVetor(coordX, coordY) << ", " << anguloPorDoisPontos(coordX, coordY) << ")";

	return 0;
}

float moduloDeUmVetor(float coordX, float coordY)
{

	float modulo;

	modulo = sqrt(pow(coordX, 2) + pow(coordY, 2));

	return modulo;

}

float anguloPorDoisPontos(float coordX, float coordY)
{
	float angulo;
	float PI = 3.14159265359;

	angulo = (atan2(coordY, coordX) * 180) / PI;

	return angulo;
}
