// CalcMedia.cpp - calcula a m�dia das avalia�es
#include <iostream>
using namespace std;

int main()
{
	float n1, n2, n3, media;

	cout << "C�lculando m�dia" << endl;
	cout << "----------------" << endl;
	cout << endl;
	cout << "Nota 1: " << endl;
	cin >> n1;
	cout << "Nota 2: " << endl;
	cin >> n2;
	cout << "Nota 3: " << endl;
	cin >> n3;
	cout << endl;
	media = (n1 + n2 + n3) / 3;
	cout << "A m�dia das notas: " << media;
	cout << endl;

	return 0;
}