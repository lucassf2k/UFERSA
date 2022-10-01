#include <iostream>

using namespace std;

struct Prato {
	char nome[30];
	float preco;
};

void cardapio(Prato p[],int tam)
{
	cout << "********** Cardapio ***********\n";
	for (int i = 1; i <= tam; i++) {
		cout << "------- Prato " << i << " -----------\n";
		cout << "nome: " << p[i - 1].nome << " | " << "preco: " << p[i - 1].preco << endl;
	}
}

int main()
{
	Prato pratos[20] = { { "Lazanha", 15.85f }, { "Almoco", 18.50f }, {"Pizza de frango", 35.45f }, { "Sorvete", 5.80f }};
	char pedido;
	int pedidos = 0, numero_pedido = 0;

	cardapio(pratos, 4);

	cout << "Deseja pedir algo? (s/n) ";
	cin.get(pedido);


	float valorTotalPedido = 0.0f;

	while (pedido != 'n') {
		cout << "\n****** * Escolha pelo numero do prato acima * *****\n";
		cout << "Degite o numero do pedido: ";
		cin >> numero_pedido;
		cin.ignore();


		valorTotalPedido += pratos[numero_pedido - 1].preco;

		cout << "Deseja pedir algo? (s/n) ";
		cin.get(pedido);

	}

	cout << "Valor total: R$" << valorTotalPedido << endl;

	return 0;
}