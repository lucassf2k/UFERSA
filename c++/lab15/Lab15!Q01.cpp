#include <iostream>

using namespace std;

int main()
{
	float peso;
	peso = 30;
	cout << peso;
	delete peso;

	/*
		Para o "delete peso;" fazer sentido no código a variável peso deveria ser um ponteiro que aloca memória de forma
		dinâmica. "float * peso = new float".
		
	*/

	return 0;
}