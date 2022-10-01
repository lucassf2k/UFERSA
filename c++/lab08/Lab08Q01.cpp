#include <iostream>
#include <cmath>

using namespace std;

void calcEquacao2Grau(float, float, float);

int main()
{

	cout << "Informe os valores de a, b e c (a, b, c): ";

	float a, b, c;
	char simbolo;

	cin >> a >> simbolo >> b >> simbolo >> c;

	cout << endl;

	calcEquacao2Grau(a, b, c);

	return 0;
}

void calcEquacao2Grau(float a, float b, float c)
{
	float delta = (float) sqrt(pow(b, 2) - (4 * a * c));
	float x1, x2;

	if (delta == 0)
	{
		cout << "Delta = 0, temos apenas uma raiz real [ duas raizes iguais ]" << endl;
		x1 = ((b * -1) + delta) / (2 * a);
		x2 = ((b * -1) - delta) / (2 * a);
		cout << "As raizes sap: " << x1 << ", " << x2;
	}
	else if (delta > 0)
	{
		cout << "Delta positivo, temos duas raizes reais e distintas" << endl;
		x1 = ((b * -1) + delta) / (2 * a);
		x2 = ((b * -1) - delta) / (2 * a);
		cout << "As raizes sao: " << x1 << ", " << x2;
	}
	else
		cout << "Delta negativo, nao existe raizes reais.";
}