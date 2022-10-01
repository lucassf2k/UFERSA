#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;


bool isPalindromo(char palavra[])
{
	

	for (int i = 0; tolower(palavra[i]) == tolower(palavra[strlen(palavra) - 1]); i++)
		return true;



	return false;
}

int main()
{
	ifstream fin;


	char arquivo[50];

	cout << "Arquivo: ";
	cin.getline(arquivo, 50);


	fin.open(arquivo);

	char palavra[20];
	int quant = 0;

	while (fin >> palavra) {
		if (isPalindromo(palavra)) {
			quant++;
			cout << palavra << endl;
		}
	}

	cout << "Foram encontrados " << quant << " palindromos neste arquivo\n";

	fin.close();

	return 0;
}