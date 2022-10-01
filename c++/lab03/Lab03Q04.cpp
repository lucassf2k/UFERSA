#include <iostream>
using namespace std;

int main() {

	float custoDeFabricacao, custoDoDistribuidor, custoDosImpostos, custoAoConsumidor;

	cout << "Digite o valor correspondente ao custo de fabricacao: ";
	cin >> custoDeFabricacao;

	cout << endl;

	custoDoDistribuidor = (custoDeFabricacao * 28) / 100; // Temos aqui a porcentagem relativa ao distribuidor
	custoDosImpostos = (custoDeFabricacao * 45) / 100; // Temo aqui a porcentagem relativa ao impostos sobre o custo de fabricação

	custoAoConsumidor = custoDeFabricacao + custoDoDistribuidor + custoDosImpostos; // Temos aqui o cálculo do total do consumidor irá pagar

	cout << "O custo ao consumidor e de: R$ " << custoAoConsumidor;

	return 0;
}