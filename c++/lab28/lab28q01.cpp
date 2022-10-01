#include <iostream>

using namespace std;

float TempoDaVolta(float t)
{
    float static total;

    return total += t;
}

int main()
{

    float tempoDeUmaVolta;

    do {
        cout << "Volta: ";
        cin >> tempoDeUmaVolta;
        cout << "Tempo total  = " << TempoDaVolta(tempoDeUmaVolta) << " segs.";
        cout << endl;
    } while (tempoDeUmaVolta);

    return 0;
}
