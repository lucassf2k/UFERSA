#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	cout << "Digite o valor do ponto P (x y): " << endl;
	double pX, pY;
	cin >> pX >> pY;

	cout << endl;

	cout << "Digite o valor do ponto Q (x y): " << endl;
	double qX, qY;
	cin >> qX >> qY;

	cout << endl;

	double distancia;
	double resultadoQxMenosPx, resultadoQyMenosPy, somaTotal;

	resultadoQxMenosPx = qX - pX;
	resultadoQyMenosPy = qY - pY;

	somaTotal = (pow(resultadoQxMenosPx, 2) + pow(resultadoQyMenosPy, 2));

	distancia = sqrt(somaTotal);

	cout << "A distancia entre P e Q: " << distancia;

	return 0;
}