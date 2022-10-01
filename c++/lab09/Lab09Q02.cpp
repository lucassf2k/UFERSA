#include <iostream>

using namespace std;

int main()
{
	cout << "Digite dois numeros: ";
	
	int num1, num2;

	cin >> num1 >> num2;

	cout << "O quociente: " << num1 / num2 << endl;
	cout << "O quociente: " << num1 % num2 << endl;

	return 0;
}