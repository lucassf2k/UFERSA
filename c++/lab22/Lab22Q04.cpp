#include <iostream>

using namespace std;

struct Produto {
	int codigo;
	float preco;
};

int main()
{
	Produto produto;

	cout << "Digite os dados que se pede\n";
	cout << "Codigo de origem do produto: (1 a 9): ";
	cin >> produto.codigo;
	cout << "Preco do produto: ";
	cin >> produto.preco;

	switch (produto.codigo) {
		case 1:
		case 2:
			cout << "Sul";
			break;
		case 3:
			cout << "Norte";
			break;
		case 4:
			cout << "Centro Oeste";
			break;
		case 5:
		case 6:
			cout << "Nordeste";
			break;
		case 7:
		case 8:
		case 9:
			cout << "Sudeste";
			break;
		default:
			cout << "Codigo inválido";
	}

	return 0;
}