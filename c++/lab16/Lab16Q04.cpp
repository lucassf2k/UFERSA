#include <iostream>

using namespace std;

int main()
{
	int B[10] = {32, 16, 47, 10, 82, 29, 30, 28, 15, 64};


	int fake_i = 0;
	int fake_i2 = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << "[" << B[fake_i] << ", " << B[fake_i2 + 1] << "] ";
		fake_i = fake_i + 2;
		fake_i2 = fake_i2 + 2;
	}

	return 0;
}