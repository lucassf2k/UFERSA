#include <iostream>

using namespace std;

int main()
{
	float peso;
	peso = 30;
	cout << peso;
	delete peso;

	/*
		Para o "delete peso;" fazer sentido no c�digo a vari�vel peso deveria ser um ponteiro que aloca mem�ria de forma
		din�mica. "float * peso = new float".
		
	*/

	return 0;
}