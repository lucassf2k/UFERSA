#include <iostream>

using namespace std;

int main()
{
	cout << "Digite um texto (# para finalizar): \n";

	int quantidadeDeSubstituicoes{};

	char ch;
	cin.get(ch);

	while (ch != '#') {
		if (ch == '.') {
			quantidadeDeSubstituicoes++;
			ch = '!';
		}
		else if (ch == '!') {
			quantidadeDeSubstituicoes++;
			ch = '!';
		}
		
		cout << ch;
		cin.get(ch);
	}

	cout << "\nSubstituicoes: " << quantidadeDeSubstituicoes;

	return 0;
}