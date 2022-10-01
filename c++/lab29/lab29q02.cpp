#include <iostream>

using namespace std;

void print(int valor)
{
    cout << valor;
}

void print(const char* str)
{
    
    cout << str;
}

void print(double valor)
{
    cout << valor;
}

int main()
{
    cout << "Inteiro: ";
    print(45);
    cout << "\nPonto-flutuante: ";
    print(3.9);
    cout << "\nString: ";
    print("Oi Mundo");
    cout << "\n";

    return 0;
}
