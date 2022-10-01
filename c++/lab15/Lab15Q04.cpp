#include <iostream>

using namespace std;

struct Local {
	char nome[30];
	char pais[30];
	char continente[30];
};

int main()
{
	cout << "Quantos locais deseja visitar nas ferias? ";
	int tam_vetor;
	cin >> tam_vetor;
	cin.ignore();

	cout << "\nEntre como dados\n";

	Local * vet_locais = new Local[tam_vetor];

	for (int i = 0; i < tam_vetor; i++)
	{
		cout << "Qual o nome do local " << i+1 << "? ";
		cin.getline(vet_locais[i].nome, 30);
		cout << "\nQual o pais " << i+1 << "? ";
		cin.getline(vet_locais[i].pais, 30);
		cout << "\nQual o continente " << i+1 << "? ";
		cin.getline(vet_locais[i].continente, 30);
		cout << endl;
	}

	cout << "seus locais de viagem\n";

	for (int c = 0; c < tam_vetor; c++)
	{
		cout << "Nome: " << vet_locais[c].nome << endl;
		cout << "Pais: " << vet_locais[c].pais << endl;
		cout << "Continente: " << vet_locais[c].continente << endl;
	}

	delete vet_locais;

	return 0;
}