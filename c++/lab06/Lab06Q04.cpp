#include <iostream>
using namespace std;

long long calculo(long long, long long);

int main()
{
	long long resultado = 200530LL * 420800;
	cout << "Direto: " << resultado << endl;
	cout << "Função: " << calculo(200530, 420800) << endl;
	return 0;

	/*
	Na forma direta os números estão como int. basta passar o mouse por cima para ver, portanto,
	mesmo o resultado está sendo armazenado na variável do tipo long long, na hora do cálculo o
	compilador faz antes de armazenar, assim armazenando em um tipo int que não suportou, para resolver basta 
	colocar LL em dos valores (200530LL) para assim esse valor já ser armazenado em uma capacidade long long
	sendo assim, suficiênte para o cálculo.

	Já na função não teve problemas, pois os parâmetros já estão sendo armazenados em capacidade para
	long long, assim suportando o cálculo.
	*/
}

long long calculo(long long a, long long b)
{
	return a * b;
}