// CalcMedia.cpp - calcula a m�dia das avalia�es
#include <iostream>
using namespace std;

int main()
{
	float n1, n2, n3, media, n4, mediaFinal;

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
	
	// Aqui estou criando um bloco condicional
	if (media < 7)
	{
		cout << "Sua m�dia foi inferior a 7, portanto voc� precisa fazer a quarta prova" << endl;
		cout << "Sua nota 4: " << endl;
		cin >> n4;
		mediaFinal = ((media * 6) + (n4 * 4)) / 10; // M�dia final baseada na UFERSA
		cout << endl;
		cout << "Sua m�dia final das 4 notas: " << mediaFinal << endl;
	}

	return 0;
}