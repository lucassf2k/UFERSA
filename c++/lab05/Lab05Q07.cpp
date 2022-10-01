#include <iostream>
#include <cmath>

using namespace std;

float quadrado(float);
float cubo(float);

int main()
{
	cout << "Digite um valor: ";
	float num;
	cin >> num;

	cout << endl;

	cout << "Quadrado: " << quadrado(num) << endl;
	cout << "Cubo: " << cubo(num) << endl;
	cout << "Cubo do quadrado: " << cubo(quadrado(num));

	return 0;
}

float quadrado(float valor)
{
	return pow(valor, 2);

}

float cubo(float valor)
{
	return pow(valor, 3);
}