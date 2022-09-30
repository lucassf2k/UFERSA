#include <iostream>
using namespace std;

long long calculo(long long, long long);

int main()
{
	long long resultado = 200530LL * 420800;
	cout << "Direto: " << resultado << endl;
	cout << "Fun��o: " << calculo(200530, 420800) << endl;
	return 0;

	/*
	Na forma direta os n�meros est�o como int. basta passar o mouse por cima para ver, portanto,
	mesmo o resultado est� sendo armazenado na vari�vel do tipo long long, na hora do c�lculo o
	compilador faz antes de armazenar, assim armazenando em um tipo int que n�o suportou, para resolver basta 
	colocar LL em dos valores (200530LL) para assim esse valor j� ser armazenado em uma capacidade long long
	sendo assim, sufici�nte para o c�lculo.

	J� na fun��o n�o teve problemas, pois os par�metros j� est�o sendo armazenados em capacidade para
	long long, assim suportando o c�lculo.
	*/
}

long long calculo(long long a, long long b)
{
	return a * b;
}