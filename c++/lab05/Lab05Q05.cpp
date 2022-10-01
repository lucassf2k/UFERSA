#include <iostream>
#include <cmath>

using namespace std;

float anguloPorDoisPontos(float, float);

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

	cout << "O angulo do vetor em graus e: " << anguloPorDoisPontos(coordX, coordY);

	return 0;
}

float anguloPorDoisPontos(float coordX, float coordY)
{
	float angulo;
	float PI = 3.14159265359;

	angulo = (atan2(coordY, coordX) * 180) / PI;

	return angulo;
}