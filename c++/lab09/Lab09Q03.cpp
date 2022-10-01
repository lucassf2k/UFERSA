#include <iostream>

using namespace std;

int main()
{
	float num;

	cout << "Digite um numero real: ";
	cin >> num;

	cout << endl;

	cout << "Parte inteira: " << int(num) << endl;
	cout << "Parte fracionada: " << num - int(num);


	return 0;
}