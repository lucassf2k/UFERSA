#include <iostream>

using namespace std;

int main()
{
	int A[11] = {46, 78, 40, 96, 74, 58, 32, 56, 91, 6};

	int* ptr1 = &A[0];
	int* ptr2 = &A[1];

	for (int i = 0; i < 5; i++)
	{
		cout << "[" << *ptr1 << ", " << *ptr2 << "] ";

		ptr1 = ptr1 + 2;
		ptr2 = ptr2 + 2;
	}

	return  0;
}