#include <iostream>

using namespace std;

int main()
{

	float a = 3.78575f * 8.129338f; // Não vai dar exato, pelo motivo, de ter mais de 6 números significativos na mantissa
	float b = 3e30f + 2e15f; // Nãi vai dar exato, pois, quando somar o número de números significativos vai passar de 6

	{
		// B 
		// 3000000000000000000000000000000
		//				 + 200000000000000
		// 3000000000000000200000000000000
	}

	float c = 20518.56f * 2.0f; // Não vai dar exato, pelo motivo, de ter 7 números significativos na mantissa
	float d = 3.14159f + 1.45f;
	float e = 2.0f * 1e30f;

	cout << "a: " << a << " Nao vai dar exato, pelo motivo, de ter mais de 6 numeros significativos na mantissa" << endl;
	cout << "b: " << b << " Nao vai dar exato, pois, quando somar o numero de números significativos vai passar de 6" << endl;
	cout << "c: " << c << " Nao vai dar exato, pelo motivo, de ter 7 numeros significativos na mantissa" << endl;
	cout << "d: " << d << endl;
	cout << "e: " << e << endl;

	return 0;
}