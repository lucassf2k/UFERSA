#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;


int main()
{
	char palavra1[30];
	char palavra2[30];
	char palavra3[30];
	char palavra4[30];

	cout << "Digite 4 palavras: \n";
	cin.getline(palavra1, 30);
	cin.getline(palavra2, 30);
	cin.getline(palavra3, 30);
	cin.getline(palavra4, 30);

	int tam_vetor_total;

	tam_vetor_total = (int) strlen(palavra1);
	tam_vetor_total += (int)strlen(palavra2);
	tam_vetor_total += (int)strlen(palavra3);
	tam_vetor_total += (int)strlen(palavra4);

	char* todasAsPalavras = new char[tam_vetor_total + 3];

	strcpy(todasAsPalavras, palavra1);
	strcat(todasAsPalavras, palavra2);
	strcat(todasAsPalavras, palavra3);
	strcat(todasAsPalavras, palavra4);


	cout << todasAsPalavras;

	return 0;
}