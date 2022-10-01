#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

struct livros {
	char nome[30];
	char autor[30];
	char cateoria[20];
};

struct jogos {
	char nome[30];
	char categoria[20];
	char indicacao[15];
};

livros ler_livros()
{
	livros l;
	cin.getline(l.nome, 30);
	cin.getline(l.cateoria, 20);
	cin.getline(l.autor, 30);
	return l;
}

jogos ler_jogos()
{
	jogos j;
	cin.getline(j.nome, 30);
	cin.getline(j.categoria, 20);
	cin.getline(j.indicacao, 15);
	return j;
}

void exibir_livro(livros l)
{
	cout << "Dados do livro" << endl;

	cout << "Nome: " << l.nome << endl;
	cout << "Categoria: " << l.cateoria << endl;
	cout << "Autor: " << l.autor << endl;
}

void exibir_jogo(jogos j)
{
	cout << "Dados do jogo\n";
	cout << "Nome: " << j.nome
		<< "\nCategoria do jodo: \n" << j.categoria
		<< "Indicacao: " << j.indicacao << endl;
}

int main()
{
	livros livros_emprestados[10];
	jogos jogos_emprestados[10];

	cout << "Se quiser um livro digite [ 1 ]. Se quiser um jogo digite [ 0 ]: ";
	bool opcao;
	cin >> opcao;
	cin.ignore();

	if (opcao)
	{
		cout << "\nEntre com nome, categoria e autor\n";
		livros livro;
		livro = ler_livros();
		strcpy(livros_emprestados[0].nome, livro.nome);
		strcpy(livros_emprestados[0].cateoria, livro.cateoria);
		strcpy(livros_emprestados[0].autor, livro.autor);
		exibir_livro(livros_emprestados[0]);
	}
	else
	{
		jogos jogo;
		cout << "\nEntre com nome, categoria e indicacao\n";
		jogo = ler_jogos();
		strcpy(jogos_emprestados[0].nome, jogo.nome);
		strcpy(jogos_emprestados[0].categoria, jogo.categoria);
		strcpy(jogos_emprestados[0].indicacao, jogo.indicacao);
		exibir_jogo(jogos_emprestados[0]);
	}

	return 0;
}