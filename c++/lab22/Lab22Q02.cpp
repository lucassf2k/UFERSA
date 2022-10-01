#include <iostream>

using namespace std;

int main()
{
	char ch;
	int quant_a = 0;
	int quant_e = 0;
	int quant_i = 0;
	int quant_o = 0;
	int quant_u = 0;

	cout << "Digite uma frase (@ para finalizar)\n";
	cin.get(ch);

	while (ch != '@') {
		switch (ch) {
			case 'a':
			case 'A':
				quant_a++;
				break;
			case 'e':
			case 'E':
				quant_e++;
				break;
			case 'i':
			case 'I':
				quant_i++;
				break;
			case 'o':
			case 'O':
				quant_o++;
				break;
			case 'u':
			case 'U':
				quant_u++;
				break;
		}

		cin.get(ch);
	}

	cout << "a: " << quant_a << endl;
	cout << "e: " << quant_e << endl;
	cout << "i: " << quant_i << endl;
	cout << "o: " << quant_o << endl;
	cout << "u: " << quant_u << endl;

	return 0;
}