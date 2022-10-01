#include <iostream>

using namespace std;

int main()
{
	cout << "Voce quer que eu conte de 1 ate que numero: ";
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++)
		cout << i << " ";

	cout << endl;

	for (int i = num; i >= 1; i--)
		cout << i << " ";

	cout << endl;

	for (int i = 1; i <= num; i += 2)
		cout << i << " ";

	cout << endl;

	for (int i = num-1; i >= 1; i -= 2)
		cout << i << " ";

	cout << endl;

	for (int i = 2; i <= 10; i += 2)
		cout << i << " ";

	cout << endl;

	for (int i = num; i > 1; i -= 2)
		cout << i << " ";

	return 0;
}