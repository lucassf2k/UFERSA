#include <iostream>

using namespace std;

int main()
{
	int distanciaKm = 0;
	float preco;
	
	cout << "Qual a distancia do percurso em KM? ";
	cin >> distanciaKm;

	if (distanciaKm <= 200)
		preco = distanciaKm * 0.5f;
	else if (distanciaKm <= 400)
		preco = distanciaKm * 0.4f;
	else
		preco = distanciaKm * 0.3f;

	cout << fixed;
	cout.precision(2);
	cout << "Sua distancia de " << distanciaKm << " resulta em R$" << preco;

	return 0;
}