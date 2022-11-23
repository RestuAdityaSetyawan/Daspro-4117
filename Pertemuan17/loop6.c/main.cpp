#include <iostream>

using namespace std;

int main()
{
    /*no.6
    Buatlah program seperti no.5, tentukan nilai maximal dan minimal dari data yang dimasukan oleh user, sebagai simulasi
    , data yang akan anda masukan adalah sebagai berikut : 12,31,4,22,34,50,129,33,45,32,50,-99 Data terakhir (-99)
    tidak di hitung*/

    int x,max=0,min=9999;

    for( int i = 0; ; i++) {
        cout << "Masukan Nilai Anda : ";
        cin >> x;

        if( x > max) {
            max = x;
        }
        if( x < min && x != -99) {
            min = x;
        }
        if( x == -99) {
            break;
        }
    }
    cout << "\nNilai Max = " << max << endl;
    cout << "Nilai min = " << min << endl;
    return 0;
}
