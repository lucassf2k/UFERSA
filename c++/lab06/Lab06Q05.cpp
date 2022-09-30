#include <iostream>
#include <climits>

using namespace std;

bool isShort(int);
bool isInt(long long);

int main()
{
	long long numero;

	cout << "Digite um inteiro: ";
	cin >> numero;

	cout << endl;

	if (isShort(numero))
	{
		cout << numero << " cabe em 16 bits" << endl;
	}
	else
	{
		cout << numero << " Nao cabe em 16 bits" << endl;
	}

	if (isInt(numero))
	{
		cout << numero << " Cabe em 32 bits" << endl;
	}
	else
	{
		cout << numero << " Nao cabe em 32 bits" << endl;
	}


	return 0;
}

bool isShort(int valor) 
{

	if (valor < SHRT_MIN || valor > SHRT_MAX)
		return false;
	else
		return true;

}

bool isInt(long long valor)
{
	if (valor < INT_MIN || valor > INT_MAX)
		return false;
	else
		return true;
}