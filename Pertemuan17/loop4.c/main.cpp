#include <iostream>

using namespace std;

int main()
{
    /*no.4
    Program untuk mencetak jumlah dan rata-rata angka integer dari 1 hingga 20 menggunakan loop for*/

    int jumlah = 0;
    float rata_rata;

    for(int i = 1; i <= 20; i++) {
        cout << i << endl;
        jumlah = jumlah + i;
        rata_rata = jumlah / i;
    }
        cout << "\njumlah    = " << jumlah << endl;
        cout << "rata-rata = " << rata_rata << endl;
    return 0;
}
