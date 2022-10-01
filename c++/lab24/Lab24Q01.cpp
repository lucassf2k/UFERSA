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
		Os arquivos binários guardam as informações de acordo com o seu tipo, ou seja, um "int" será guardado com os seus 32bits independente se ele está usando
		ou não todo esse espaço.
		Já os arquivos texto guardam sempre os dados de forma que cada caractere tenha 8bits ou 1byte podendo assim modificar o tamanho do arquivo.
		
		Para exemplo, se guadarmos o número 10000000 ele terá o mesmo espaço de 10 no arquivo binário enquanto no arquivo texto eles teram tamanhos diferentes. 
		
	*/

	return 0;
}