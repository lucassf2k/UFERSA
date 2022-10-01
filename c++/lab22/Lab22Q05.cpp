#include <iostream>

using namespace std;

int main()
{
	char opcao = 's';
	int operador = 0;

	float valor1 = 0, valor2 = 0;


	while (opcao != 'n') {

		cout << "Escolha a operacao (adicao: 1, sub: 2, mult: 3, div: 4): ";
		cin >> operador;
		cout << "****** Agora escolja os valores *******\n";
		cout << "Valor 1: "; cin >> valor1;
		cout << "Valor 2: "; cin >> valor2;

		switch (operador) {
			case 1:
				cout << valor1 + valor2;
				break;
			case 2:
				cout << float(valor1) - float(valor2);
				break;
			case 3:
				cout << float(valor1) * float(valor2);
				break;
			case 4:
				cout << float(valor1) / float(valor2);
				break;
			default:
				cout << "Por favor, digite novamente\n";
		}

		cout << "\nDeseja fazer outra operacao: (s/n) ";
		cin >> opcao;
	} 

	return 0;
}