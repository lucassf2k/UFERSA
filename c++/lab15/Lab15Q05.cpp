#include <iostream>

using namespace std;

struct ASCII {
	int _int;
	char _ch;
};

ASCII* getAscii(int i, char c)
{
	ASCII* a = new ASCII;
	a->_ch = c;
	a->_int = i;
	return a;
}

int main()
{
	cout << "Digite um caractere e um numero, respectivament: ";
	ASCII valor;
	cin >> valor._ch;
	cin >> valor._int;

	ASCII* p_ascii = getAscii(valor._int, valor._ch);

	cout << "Caractere " << p_ascii->_ch << ", numero correspondente " << p_ascii->_int << endl;

	delete p_ascii;

	return 0;
}