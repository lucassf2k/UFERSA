#include <iostream>

using namespace std;

int main()
{
	int* p_int = new int{ 100 };

	cout << "Conteudo armazenado: " << *p_int << endl;

	cout << "Digite um novo valor para esse bloco de memoria: ";
	cin >> *p_int;


	delete p_int;
	return 0;
}