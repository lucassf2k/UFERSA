#include <iostream>
#include <locale.h>

using namespace std;

void (*OnClick)(void);

// -------------------------------
void CreateButton(int x, int y, void (*pf)(void))
{
	cout << "Bot�o criado na posi��o " << x << ", " << y << endl;
	OnClick = pf;
}
// -------------------------------

void Mensagem()
{
	cout << "Bot�o Pressionado!" << endl;
}

int main()
{
	setlocale(LC_ALL, "portuguese");

	CreateButton(10, 10, Mensagem);
	// simulando pressionamento
	char resposta;
	cout << "Pressionar Bot�o? ";
	cin >> resposta;
	if (resposta == 'S' || resposta == 's')
		OnClick();
	return 0;
}