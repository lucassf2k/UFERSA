#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	
	cout << "Quais suas datas comemorativas preferidas? ";

	char data01[20];
	char data02[20];
	char data03[20];

	cin.getline(data01, 20);
	cin.getline(data02, 20);
	cin.getline(data03, 20);

	cout << "\n";

	cout << data01 << ", " << data02 << " e " << data03 << " sao belas festas\n";

	char natal[6] = "Natal";

	int contador01 = 0;
	int contador02 = 0;
	int contador03 = 0;

	if (strlen(natal) == strlen(data01)) {
		for (int i = 0; i < strlen(natal); i++) {
			if (natal[i] == data01[i])
				contador01 = contador01 + 1;
		}
	}
	else if (strlen(natal) == strlen(data02)) {

		for (int c = 0; c < strlen(natal); c++) {
			if (natal[c] == data02[c])
				contador02 = contador02 + 1;
		}
	}
	else if (strlen(natal) == strlen(data03)) {

		for (int l = 0; l < strlen(natal); l++) {
			if (natal[l] == data03[l])
				contador03 = contador03 + 1;
		}
	}


	if (strlen(natal) == contador01)
		cout << "O natal tambem e uma das minhas datas preferidas";
	else if (strlen(natal) == contador02)
		cout << "O natal tambem e uma das minhas datas preferidas";
	else if (strlen(natal) == contador03)
		cout << "O natal tambem e uma das minhas datas preferidas";


	return 0;
}