#include <iostream>
#include <fstream>

using namespace std;

struct Soldado {
	char nome[20];
	int eliminacoes;
	int mortes;
	float taxa_de_eliminacoes;
	int partidas;
};

void exibir(Soldado s)
{
	cout << "Nome: " << s.nome << endl;
	cout << "Eliminacoes: " << s.eliminacoes << endl;
	cout << "Mortes: " << s.mortes << endl;
	cout << "Partidas: " << s.partidas << endl;
	cout << "Taxa de eliminacoes: " << s.taxa_de_eliminacoes << endl;
}

int main()
{
	ifstream fin;
	ofstream fout;

	Soldado s;

	fin.open("soldados.bin", ios_base::in | ios_base::binary);

	if (!fin.is_open()) {
		fout.open("soldados.bin", ios_base::out | ios_base::binary);

		cout << "Digite os dados que se pedem a seguir\n";
		cout << "Nome: "; cin >> s.nome;
		cout << "Eliminacoes: "; cin >> s.eliminacoes;
		cout << "Mortes: "; cin >> s.mortes;
		cout << "Partifas"; cin >> s.partidas;
		s.taxa_de_eliminacoes = s.eliminacoes / s.mortes;

		fout.write((char*)&s, sizeof(Soldado));

		fout.close();

		fin.open("soldados.bin", ios_base::in | ios_base::binary);
	}

	fin.read((char*)&s, sizeof(Soldado));

	cout << endl;

	char opcao;

	Soldado nS;

	int tmp_eliminacoes = 0;
	int tmp_mortes = 0;

	do {


		cout << "[ N ]ovo soldado\n";
		cout << "[ A ]tualizar soldado\n";
		cout << "[ E ]xebir soldado\n";
		cout << "[ S ]air\n";

		cout << "Sua opcao: [ ]\b"; cin >> opcao;

		switch (opcao) {
			case 'N':
				cout << "Digite os dados que se pedem a seguir\n";
				cout << "Nome: "; cin >> nS.nome;
				cout << "Eliminacoes: "; cin >> nS.eliminacoes;
				cout << "Mortes: "; cin >> nS.mortes;
				cout << "Partifas"; cin >> nS.partidas;
				nS.taxa_de_eliminacoes = nS.eliminacoes / nS.mortes;
				break;
			case 'A':
				cout << "Dados da sua ultima patida\n";
				cout << "Eliminacoes: "; cin >> tmp_eliminacoes;
				cout << "Mortes: "; cin >> tmp_mortes;
				s.eliminacoes += tmp_eliminacoes;
				s.mortes += tmp_mortes;
				s.taxa_de_eliminacoes = s.eliminacoes / s.mortes;
				break;
			case 'E':
				exibir(s);
				break;

		}
	} while (opcao != 'S');

	if (nS.nome) {
		fout.open("soldados.bin", ios_base::out | ios_base::app | ios_base::binary);
		fout.write((char*)&nS, sizeof(Soldado));
		fout.close();

	}

	return 0;
}