#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	char ext[] = ".cpp";

	char arquivo[21];

	cout << "Digite o nome do arquivo que deseja manipular: ";
	cin.getline(arquivo, 21);

	char nomeArquivo[21];

	strcpy(nomeArquivo, arquivo);
	strcat(nomeArquivo, "_m");
	strcat(nomeArquivo, ext);
	strcat(arquivo, ext);

	fin.open(arquivo);
	fout.open(nomeArquivo);

	fout << "//" << nomeArquivo << endl;
	fout << "#define print cout" << endl;

	char linha[50];

	while (fin.getline(linha, 50)) {
		fout << linha << endl;
	}

	ifstream fin2;

	fin.close();
	fout.close();

	return 0;
}