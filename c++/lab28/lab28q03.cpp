#include <iostream>
#include <fstream>

using namespace std;

struct par { int x; int y;};

ostream& operator<<(ostream & os, par p)
{
    os << "[" << p.x << ", " << p.y << "]";
    return os;
}

int main()
{
    ifstream fin;

    fin.open("numeros.txt");

    par p;

    cout << "Pares: ";
    while (fin >> p.x) {
        fin >> p.y;
        cout << p << " ";
    }

    fin.close();
    return 0;
}
