#include <iostream>

using namespace std;

int main()
{

	int s = 0; // variavel que vai armazenar o valor da soma

	for (int i = 1; i <= 100; i = i + 2)
	{
		s += i;
	}
    cout << s << endl;


	int s2 = 0;

	int c = 1;
	while (c <=100)
	{
		s2 += c;
		c += 2;
	}
	cout << s2 << endl;

	int s3 = 0;
	int k = 1;
	do
	{
		s3 += k;
		k += 2;
	} while (k <= 100);
	cout << s3 << endl;


	return 0;
}