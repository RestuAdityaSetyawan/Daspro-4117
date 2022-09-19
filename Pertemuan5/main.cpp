#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "\tMenghitung Luas Lingkaran\n" << endl;
    cout << "(Rumus Luas Lingkaran Adalah Pi*r*r)\n" << endl;
    cout << "\t\tpi = 3.14\n" << endl;

    float pi;
    float r;
    float hasil;

    cout << "Masukan pi                :" ;
    cin >> pi;
    cout << "Masukan Jari-Jari         :" ;
    cin >> r;

    hasil = pi*r*r;

    cout << "Luas Lingkaranya Adalah   :" << hasil << endl;
    return 0;
}
