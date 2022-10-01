#include <iostream>

using namespace std;

void exibir(int v[])
{
	int i = 0;

	while (v[i]) {
		cout << v[i] << " ";
		i++;
	}
}

int main()
{
	int mat[2][4] = 
	{
		{1, 2, 3, 4},
		{5, 6, 7, 8}
	};

	exibir(mat[0]);

	return 0;
}