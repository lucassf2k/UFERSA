#include <iostream>

using namespace std;

struct tupla {
    int a;
    int b;
    int c;
};

void trocar(tupla & t1, tupla & t2)
{
    int tmp_a, tmp_b, tmp_c;
    // Invertendo A
    tmp_a = t2.a;
    t2.a = t1.a;
    t1.a = tmp_a;
    // invertendo B
    tmp_b = t2.b;
    t2.b = t1.b;
    t1.b = tmp_b;
    // Invertendo C
    tmp_c = t2.c;
    t2.c = t1.c;
    t1.c = tmp_c;

    cout << "\nInvertendo....\n";
    cout << endl;

    cout << "Tupla A: " << t1.a << " " << t1.b << " " << t1.c << endl;
    cout << "Tupla B: " << t2.a << " " << t2.b << " " << t2.c << endl;
}

int main()
{
    tupla A;
    tupla B;

    cout << "Tupla A: ";
    cin >> A.a >> A.b >> A.c;

    cout << "Tupla B: ";
    cin >> B.a >> B.b >> B.c;

    trocar(A, B);

    return 0;
}
