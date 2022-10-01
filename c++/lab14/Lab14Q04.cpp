#include <iostream>

using namespace std;

enum Tipo {JPG, PNG, BMP};

struct Imagem {
	char nome[20];
	int altura;
	int largura;
	Tipo tipo;
};

void Detalhes(Imagem* i)
{
	cout << "A imagem \"" << i->nome << "\" com tamanho " << i->altura << "x" << i->largura
		<< " e tem formato ";
	if (i->tipo == 0)
		cout << "JPG";
	else if (i->tipo == 1)
		cout << "PNG";
	else if (i->tipo == 2)
		cout << "NMP";

}

int main()
{
	Imagem spider_img = { "sipder.png", 1280, 1800, PNG };

	Detalhes(&spider_img);

	return 0;
}