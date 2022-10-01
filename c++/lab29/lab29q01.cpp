#include <iostream>
#include <fstream>
#include <locale>

using namespace std;

void unidade(ifstream& fin, int unidade, int tam = 10)
{
    int inicio;

    if (1 == unidade)
        inicio = 1;
    else if (2 == unidade)
        inicio = 10; 
    else {
        inicio = 20;
    }

    int cont = tam + inicio;

    int eRevi, eFix, eApre;
    int nLab;

    int total = 0, totalRevi = 0, totalFix = 0, totalApre = 0;

    for (inicio; inicio < cont; inicio++) {
        fin >> nLab;
        fin >> eRevi;
        totalRevi += eRevi;

        fin >> eFix;
        totalFix += eFix;

        fin >> eApre;
        totalApre += eApre;
    }

    total = totalApre + totalFix + totalRevi;

    cout << "----------------------\n"
        << unidade << "a unidade\n----------------------\n"
        << "Revisão: " << totalRevi
        << "\nFixação: " << totalFix
        << "\nApredi: " << totalApre
        << "\n------------------\n"
        << "Total: " << total << endl << endl;
}

int main() {

    setlocale(LC_ALL, "portuguese");

    ifstream fin;
    fin.open("stats.txt");

    unidade(fin, 1);

    unidade(fin, 2);

    unidade(fin, 3);

    fin.close();
}
