#include <iostream>
#include <fstream>

using namespace std;

struct Produto {
	double p_normal;
	double p_atacado;
	int unidade;
};

float totalPorProduto(Produto p, int quantidade)
{
	float total;
	if (p.unidade >= quantidade) {
		total = p.p_atacado * quantidade;
	}
	else {
		total = p.p_normal * quantidade;
	}

	return total;
}

float totalPorPedido(Produto p[], int* pe, int tam)
{
	float total = 0;

	for (int i = 0; i < tam; i++) {
		total += totalPorProduto(p[i], pe[i]);
	}

	return total;
}

int main()
{
	ifstream fin;
	fin.open("Produtos.txt");

	int quantidadeDeProdutos;

	fin >> quantidadeDeProdutos;
	
	Produto* produto = new Produto[quantidadeDeProdutos];

	int cont = 0;
	char ch[3];
	fin >> ch;
	while (fin >> produto[cont].p_normal) {
		fin >> ch;
		fin >> produto[cont].p_atacado;
		fin >> ch;
		fin >> produto[cont].unidade;
		fin >> ch;
		cont++;
	}

	fin.close();

	fin.open("Pedido.txt");

	int cont1 = 0;
	int quantidadeDePedidos;
	fin >> quantidadeDePedidos;

	int* pedidos = new int[quantidadeDePedidos];

	while (fin >> pedidos[cont1])
		cont1++;

	fin.close();


	float totalAPagar = totalPorPedido(produto, pedidos, quantidadeDePedidos);

	cout << "Total do pedido: R$" << totalAPagar << endl;

	return 0;
}
