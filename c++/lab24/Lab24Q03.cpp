#include <iostream>
#include <fstream>

using namespace std;

union Senha {
	int numerica;
	char alfanumerica[50];
};

int main()
{
	ifstream fin;

	Senha senha;

	fin.open("senhas.bin", ios_base::in | ios_base::binary);

	char escolha;

	cout << "Deseja exibir ou gravar uma senha? [ E ]xibir e [ G ]ravar ";
	cin >> escolha;

	int tipoDaSenha = 0;

	if (escolha == 'E' && !fin.is_open())
		cout << "Desculpe, não há nenhuma senha há ser mostrada\n";
	else if (escolha == 'E' && fin.is_open()) {
		while (fin.read((char*)&tipoDaSenha, sizeof(int))) {
			fin.read((char*)&senha, sizeof(Senha));

			if (tipoDaSenha == 1) {
				cout << "Sua senha = " << senha.alfanumerica << endl;
			}
			else if (tipoDaSenha == 2)
				cout << "Sua senha = " << senha.numerica << endl;
		}
	}
	
	int escolha_senha = 0;

	if (escolha == 'G') {
		ofstream fout;
		fout.open("senhas.bin", ios_base::out | ios_base::app | ios_base::binary);

		cout << "Eseolha seu tipo de senha? { 1 ]Alfanumerico e [ 2 ]Numerico "; cin >> escolha_senha;

		if (escolha_senha == 1) {
			cout << "Digite sua senha alfanumerico: "; cin >> senha.alfanumerica;
			fout.write((char*)&escolha_senha, sizeof(int));
			fout.write((char*)&senha, sizeof(Senha));
		}
		else if (escolha_senha == 2) {
			cout << "Digite sua senha alfanumerico: "; cin >> senha.numerica;
			fout.write((char*)&escolha_senha, sizeof(int));
			fout.write((char*)&senha, sizeof(Senha));
		}

		fout.close();
	}



	return 0;
}