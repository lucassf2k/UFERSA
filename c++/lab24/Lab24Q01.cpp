#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream fout;
	ofstream fout2;

	fout.open("naturais.txt");
	fout2.open("naturais.bin", ios_base::out | ios_base::binary);

	for (int i = 0; i < 100; i++)
	{
		fout << i << " ";
		fout2.write((char*)&i, sizeof(int));
	}


	/*
		Os arquivos bin�rios guardam as informa��es de acordo com o seu tipo, ou seja, um "int" ser� guardado com os seus 32bits independente se ele est� usando
		ou n�o todo esse espa�o.
		J� os arquivos texto guardam sempre os dados de forma que cada caractere tenha 8bits ou 1byte podendo assim modificar o tamanho do arquivo.
		
		Para exemplo, se guadarmos o n�mero 10000000 ele ter� o mesmo espa�o de 10 no arquivo bin�rio enquanto no arquivo texto eles teram tamanhos diferentes. 
		
	*/

	return 0;
}