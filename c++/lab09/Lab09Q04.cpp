#include <iostream>

using namespace std;

int main()
{

	const int METROS_PARA_QUILOMETROS = 1000;

	int metrosPercorridos;

	cout << "Entre com a distancia em metros: ";
	cin >> metrosPercorridos;

	cout << metrosPercorridos << " equivalem a " << metrosPercorridos / METROS_PARA_QUILOMETROS << " quilometros";
	cout << " e " << metrosPercorridos % METROS_PARA_QUILOMETROS << " metros";

	return 0;
}