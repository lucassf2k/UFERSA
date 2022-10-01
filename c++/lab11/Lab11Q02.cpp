#include <iostream>

using namespace std;

int main()
{
	int num, num2; 
	char chNum[20];

	cout << "Digite um numero: ";
	cin >> chNum;
	cin >> num;

	cout << endl;

	//chNum = num2;

	cout << "A multiplicacao entre eles e = " << num * strtol(chNum, nullptr, 10);

	return 0;
}