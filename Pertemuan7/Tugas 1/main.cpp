#include <iostream>

using namespace std;

int main()
{
    int a;

    //soal nomer 1
    cout << "Masukan Bilangan Genap Antara 25-50" << endl;
    cin >> a;
    if (a > 25 && a <50 && a % 2 == 0) {
        cout << "(Bilangan Sesuai)" << endl;
    }
    else {
        cout << "(Bilangan Tidak Sesuai)" << endl;
    }

    //soal nomor 2
    cout << "\nMasukan Bilangan Ganjil Lebih Dari 13 Atau Kurang Dari 5" << endl;
    cin >> a;
    if (a > 13 || a < 5 && a % 2 == 1) {
        cout << "(Bilangan Sesuai)" << endl;
    }
    else{
        cout << "(Bilangan Tidak Sesuai)" << endl;
    }

    //soal nomer 3
    cout << "\nBilangan Bulat Antara 25-50 Atau Bilangan Ganjil Antara 3-15" << endl;
    cin >> a;
    if ((3 < a && a < 15 && a % 2 == 1) || 25 < a && a < 50) {
        cout << "(Bilangan Sesuai)" << endl;
    }
     else{
        cout << "(Bilangan Tidak Sesuai)" << endl;
    }

    return 0;
}
