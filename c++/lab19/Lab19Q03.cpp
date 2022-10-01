#include <iostream>

using namespace std;

int main()
{
	int mat[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};

	cout << mat[0][0] << endl << mat[0] << endl << &mat[0][0];

	// no mat[0] ele exibe o endereco correspondente

	return 0;
}