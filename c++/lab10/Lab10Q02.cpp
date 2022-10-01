#include <iostream>

using namespace std;

int main()
{
	const float pesos[3] = { 2, 3, 4 };
	float notas[3] = { 0, 0, 0 };

	cout << "Nota 01: ";
	cin >> notas[0];

	cout << endl;

	cout << "Nota 02: ";
	cin >> notas[1];

	cout << endl;

	cout << "Nota 03: ";
	cin >> notas[2];

	cout << endl;

	float media_antiga = (notas[0] * pesos[0] + notas[1] * pesos[1] + notas[2] * pesos[2]) / 9;
	float media_nova = (notas[0] + notas[1] + notas[2]) / 3;

	cout << "Suas medias" << endl;
	cout << "-----------------------" << endl;

	cout << fixed;
	cout.precision(2);
	cout << "Media antiga = " << media_antiga << endl;
	cout << "-----------------------" << endl;
	cout << "Media nova = " << media_nova;

	return 0;
}