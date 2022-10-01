#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char frase[60];

	cout << "Digite uma frase: ";
	cin.getline(frase, 60);

	for (int i = 0; frase[i] == frase[strlen(frase) - 1]; i++)
		cout << frase;

	return 0;
}