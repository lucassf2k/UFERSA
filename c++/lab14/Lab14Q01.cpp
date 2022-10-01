#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

struct Tigela {
	bool estado;
	char alimento[10];
};

void Fome(Tigela* t)
{
	t->estado = false;
}

int main()
{
	Tigela tigela;
	tigela.estado = true;
	strcpy(tigela.alimento, "canja");

	Tigela* ptr = &tigela;

	cout << "Tigela antes da janta: " << tigela.alimento << " estado da tigela ";
	if (tigela.estado)
		cout << " cheia";
	else
		cout << " vazia;";

	cout << endl;

	Fome(ptr);

	cout << "Tigela antes da janta: " << tigela.alimento << " estado da tigela ";
	if (tigela.estado)
		cout << " cheia";
	else
		cout << " vazia;";


	return 0;
}