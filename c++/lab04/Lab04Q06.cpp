#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Inicializar(void);
void ligar(void);
void verificar(void);
void ativar(void);

int main()
{
	int resultado;

	resultado = Inicializar();

	if (resultado > 16384)
	{
		cout << endl;
		cout << "Sistema em funcionamento.";
	}
	else
	{
		cout << "Falha na inicializacao.";
	}

	return 0;
}

int Inicializar(void)
{
	cout << "Inicializando sistema:" << endl; 
	ligar();
	verificar();
	ativar();
	cout << "Inicializacao concluida" << endl;

	srand(time(NULL));

	int randomNum = rand();

	return randomNum;
}

void ligar(void)
{
	cout << "- Ligando dispositivos" << endl;
}

void verificar(void)
{
	cout << "- Verificando integridade" << endl;
}

void ativar(void)
{
	cout << "- Ativando processos" << endl;
}