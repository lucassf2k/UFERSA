#include <iostream>

using namespace std;

int main()
{
	char jogador[80];

	cout << "Digite jogador/time: ";
	cin.getline(jogador, 80);

	for (int i = 0; i < strlen(jogador); i++)
		if (jogador[i] == '/')
		{
			jogador[i] = '\0'; // colocando o \0 nessa posi��o vai sobrar o apenas os caractere que formam o nome do jogador
			cout << strlen(jogador) << endl;
			char* p_jogador = &jogador[i + 1]; // Aqui pega o pr�ximo endere�o do jogador nessa posi��o que o do '/'
			cout << "O time e o " << p_jogador;
		}
		

	return 0;
}