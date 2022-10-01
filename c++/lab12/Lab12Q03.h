#pragma once
struct ContaBancaria
{
	int identificador;
	char nome[50];
	float saldo = { 0 };
};

struct Palavra
{
	char portugues[20];
	char ingles[20];
	char espanhol[20];
};

void exibir_dados_conta_bancaria(ContaBancaria c);
void exibir_palavra(Palavra p);