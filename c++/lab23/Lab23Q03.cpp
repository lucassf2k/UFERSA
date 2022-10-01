#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>

using namespace std;

struct Aluno {
	char nome[50];
	char sobrenome[50];
	char codigo[2];
};

int main()
{
	ifstream fin;

	Aluno alunos[13];

	fin.open("alunos.txt");


	int cont = 0;

	while (fin >> alunos[cont].nome >> alunos[cont].sobrenome >> alunos[cont].codigo) {
		cont++;
	}

	cout << "Matutino 6a serie" << endl;
	cout << "-----------------------" << endl;
	for (int i = 0; i < 13; i++)
		if (alunos[i].codigo[0] == 'M' && alunos[i].codigo[1] == '6')
		{
			cout << alunos[i].nome << " " << alunos[i].sobrenome << " " << alunos[i].codigo << endl;
		}

	cout << "Matutino 7a serie" << endl;
	cout << "-----------------------" << endl;

	for (int i = 0; i < 13; i++)
		if (alunos[i].codigo[0] == 'M' && alunos[i].codigo[1] == '7')
		{
			cout << alunos[i].nome << " " << alunos[i].sobrenome << " " << alunos[i].codigo << endl;
		}

	cout << "Matutino 8a serie" << endl;
	cout << "-----------------------" << endl;
	for (int i = 0; i < 13; i++)
		if (alunos[i].codigo[0] == 'M' && alunos[i].codigo[1] == '8')
		{
			cout << alunos[i].nome << " " << alunos[i].sobrenome << " " << alunos[i].codigo << endl;
		}

	cout << "Verpertino 6a serie" << endl;
	cout << "-----------------------" << endl;
	for (int i = 0; i < 13; i++)
		if (alunos[i].codigo[0] == 'T' && alunos[i].codigo[1] == '6')
		{
			cout << alunos[i].nome << " " << alunos[i].sobrenome << " " << alunos[i].codigo << endl;
		}

	cout << "Vespertino 7a serie" << endl;
	cout << "-----------------------" << endl;
	for (int i = 0; i < 13; i++)
		if (alunos[i].codigo[0] == 'T' && alunos[i].codigo[1] == '7')
		{
			cout << alunos[i].nome << " " << alunos[i].sobrenome << " " << alunos[i].codigo << endl;
		}

	cout << "Vespertino 8a serie" << endl;
	cout << "-----------------------" << endl;
	for (int i = 0; i < 13; i++)
		if (alunos[i].codigo[0] == 'T' && alunos[i].codigo[1] == '8')
		{
			cout << alunos[i].nome << " " << alunos[i].sobrenome << " " << alunos[i].codigo << endl;
		}

	fin.close();


	return 0;
}