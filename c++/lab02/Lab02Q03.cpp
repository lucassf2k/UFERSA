#include <iostream>
using namespace std;

int main()
{
	cout << left; cout.width(12); cout << "Produto";
	cout << left; cout.width(13); cout << "Preço/kg";
	cout << left; cout.width(13); cout << "Pedido (kg)";
	cout << left;  cout.width(15); cout << "Total parcial" << endl;

	cout << left; cout.width(12); cout << "----------";
	cout << left; cout.width(13); cout << "---------";
	cout << left; cout.width(13); cout << "-----------";
	cout << left;  cout.width(15); cout << "---------------" << endl;

	cout << left; cout.width(12); cout << "Alface";
	cout << left; cout.width(13); cout << "R$ 1,25/kg";
	cout << left; cout.width(13); cout << "3,2kg";
	cout << left;  cout.width(15); cout << "R$ 4,00" << endl;

	cout << left; cout.width(12); cout << "Beterraba";
	cout << left; cout.width(13); cout << "R$ 0,65/kg";
	cout << left; cout.width(13); cout << "6,0kg";
	cout << left;  cout.width(15); cout << "R$ 9,00" << endl;

	cout << left; cout.width(12); cout << "Cenoura";
	cout << left; cout.width(13); cout << "R$ 0,90/kg";
	cout << left; cout.width(13); cout << "10kg";
	cout << left;  cout.width(15); cout << "R$ 9,00" << endl;

	return 0;
}