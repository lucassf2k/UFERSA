#include <iostream>
using namespace std;

int main() {

	cout << "Vamos calcular a area e o volume de prisma retangular? \n";

	float ladoA, ladoB;

	cout << "Digite o valor correspondente ao lado a: ";
	cin >> ladoA;
	cout << "Digite o valor correspondente ao lado b: ";
	cin >> ladoB;
	cout << endl;

	float areaDaBase;

	areaDaBase = ladoA * ladoB; // Temos aqui o c�lculo da �rea axb

	cout << "Area da base: " << areaDaBase << endl;

	float altura, volume; // Temos aqui o c�lculo do volume Abxh

	cout << "Agora digite a altura para calcularmos o volume do prisma: ";
	cin >> altura;
	cout << endl;

	volume = areaDaBase * altura;

	cout << "O volume do prisma e: " << volume;

	return 0;
}