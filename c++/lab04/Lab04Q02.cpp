#include <iostream>

using namespace std;

int main(void)
{

	float PI = 3.14159265;

	cout << "Digite um angulo qualquer: ";
	float angulo, resultado;
	cin >> angulo;

	cout << endl;

	cout << "Seno: " << sin((angulo * PI) / 180); // sin utilaze-se de valores em radiantes

	return 0;
}