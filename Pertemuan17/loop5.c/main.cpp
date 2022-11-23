#include <iostream>

using namespace std;

int main()
{
    /*no.5
    Program untuk membaca suatu inputan nilai integer dan selama data yang di inputkan bukan -99,
    maka program akan meminta user untuk melakukan inputan*/

    int x;
    cout << "Program Ini Akan Berhenti Jika Anda Menyimpan Angka -99" << endl;
    for(int i = 0;; i++) {
        cout << "\nMasukan Nilai Anda : ";
        cin >> x;
        if( x == -99) {
            break;
        }
    }
    cout << "\nKeluar Karena Break" << endl;

    return 0;
}
