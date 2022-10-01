#include <iostream>

using namespace std;

int main()
{
	int somaDosQuadrados = 0;
	int quadradoDaSoma = 0;

	for (int i = 1; i <= 100; i++)
	{
		somaDosQuadrados += (i * i);
		quadradoDaSoma += i;
	}

	quadradoDaSoma = quadradoDaSoma * quadradoDaSoma;

	cout << "A diferenca e " << quadradoDaSoma - somaDosQuadrados;

	return 0;
}