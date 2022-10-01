#include <iostream>

using namespace std;

void menu()
{
	cout << "Supermecado  ABC\n";
	cout << "----------------\n";
	cout << "a) Alface \t R$ 1,25/kg\n";
	cout << "a) Beterraba \t R$ 0,65/kg\n";
	cout << "a) Cenoura \t R$ 0,90/kg\n";	
	cout << "Faca seu pedido usando as letras (a, b, c) e (s) para finalizar\n";
}

int main()
{
	char opcao;

	float quilos_a = 0, quilos_b = 0, quilos_c = 0, valor_a = 0, valor_b = 0, valor_c = 0;

	menu();

	cout << "Digite seu pedido (a, b, c) ou (s) para finalizar: ";
	cin >> opcao;
	
	while (opcao != 's') {

		switch (opcao) {
			case 'a':
				cout << "Qual a quantidade de quilos de Alface? ";
				cin >> quilos_a;
				valor_a = quilos_a * 1.25f;
				break;
			case 'b':
				cout << "Qual a quantidade de quilos de Beterraba? ";
				cin >> quilos_b;
				valor_b = quilos_b * 0.65f;
				break;
			case 'c':
				cout << "Qual a quantidade de quilos de Cenoura? ";
				cin >> quilos_c;
				valor_c = quilos_c * 0.90f;
				break;
		}

		cout << "Digite seu pedido (a, b, c) ou (s) para finalizar: ";
		cin >> opcao;

	}

	float totalDosPedidos = 0, desconto = 0, custoDaEntrega = 0, totalAPagar = 0, totalDeQuilos = 0;

	totalDosPedidos = valor_a + valor_b + valor_c;

	if (totalDosPedidos > 100)
		desconto = totalDosPedidos * 0.05f;

	totalDeQuilos = quilos_a + quilos_b + quilos_c;

	if (totalDeQuilos < 5)
		custoDaEntrega = 3.50;
	else if (totalDeQuilos > 5 && totalDeQuilos < 20)
		custoDaEntrega = 10, 0;
	else
		custoDaEntrega = 8.0 + (totalDeQuilos * 0.10f);

	totalAPagar = totalDosPedidos - desconto + custoDaEntrega;

	cout << fixed;
	cout.precision(2);

	cout << "Total do pedido: \t\t\t R$ " << totalDosPedidos << endl;
	cout << "Descontos: \t\t\t\t R$ " << desconto << endl;
	cout << "Custo da entrega: \t\t\t R$ " << custoDaEntrega << endl;

	cout << "-----------------------------------------------------------" << endl;

	cout << "Total a pagar: \t\t\t\t R$ " << totalAPagar << endl;

	return 0;
}